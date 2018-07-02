
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_1.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_2.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_3.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_4.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {

Gaspp::Gaspp()
    :
    asic(this, {"asic_name"})
{

    yang_name = "gaspp"; yang_parent_name = "Cisco-IOS-XR-sysadmin-controllers"; is_top_level_class = true; has_list_ancestor = false; 
}

Gaspp::~Gaspp()
{
}

bool Gaspp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_data())
            return true;
    }
    return false;
}

bool Gaspp::has_operation() const
{
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Gaspp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:gaspp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic")
    {
        auto c = std::make_shared<Gaspp::Asic>();
        c->parent = this;
        asic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Gaspp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Gaspp::clone_ptr() const
{
    return std::make_shared<Gaspp>();
}

std::string Gaspp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Gaspp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Gaspp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Gaspp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Gaspp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic")
        return true;
    return false;
}

Gaspp::Asic::Asic()
    :
    asic_name{YType::str, "asic-name"}
        ,
    instance(this, {"instance_id"})
{

    yang_name = "asic"; yang_parent_name = "gaspp"; is_top_level_class = false; has_list_ancestor = false; 
}

Gaspp::Asic::~Asic()
{
}

bool Gaspp::Asic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return asic_name.is_set;
}

bool Gaspp::Asic::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_name.yfilter);
}

std::string Gaspp::Asic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:gaspp/" << get_segment_path();
    return path_buffer.str();
}

std::string Gaspp::Asic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic";
    ADD_KEY_TOKEN(asic_name, "asic-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_name.is_set || is_set(asic_name.yfilter)) leaf_name_data.push_back(asic_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance>();
        c->parent = this;
        instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::Asic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-name")
    {
        asic_name = value;
        asic_name.value_namespace = name_space;
        asic_name.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-name")
    {
        asic_name.yfilter = yfilter;
    }
}

bool Gaspp::Asic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "asic-name")
        return true;
    return false;
}

Gaspp::Asic::Instance::Instance()
    :
    instance_id{YType::uint32, "instance-id"},
    instance_name{YType::str, "instance-name"}
        ,
    address(this, {"addr", "size", "entries"})
    , block_name(this, {"block_nm", "block_num"})
    , block_number(this, {"block_num"})
{

    yang_name = "instance"; yang_parent_name = "asic"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::~Instance()
{
}

bool Gaspp::Asic::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<block_name.len(); index++)
    {
        if(block_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<block_number.len(); index++)
    {
        if(block_number[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| instance_name.is_set;
}

bool Gaspp::Asic::Instance::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<block_name.len(); index++)
    {
        if(block_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<block_number.len(); index++)
    {
        if(block_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string Gaspp::Asic::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::Address>();
        c->parent = this;
        address.append(c);
        return c;
    }

    if(child_yang_name == "block-name")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockName>();
        c->parent = this;
        block_name.append(c);
        return c;
    }

    if(child_yang_name == "block-number")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockNumber>();
        c->parent = this;
        block_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : block_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : block_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::Asic::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "block-name" || name == "block-number" || name == "instance-id" || name == "instance-name")
        return true;
    return false;
}

Gaspp::Asic::Instance::Address::Address()
    :
    addr{YType::str, "addr"},
    size{YType::uint32, "size"},
    entries{YType::uint32, "entries"},
    width{YType::uint32, "width"}
        ,
    location(this, {"location_name"})
{

    yang_name = "address"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::Address::~Address()
{
}

bool Gaspp::Asic::Instance::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return addr.is_set
	|| size.is_set
	|| entries.is_set
	|| width.is_set;
}

bool Gaspp::Asic::Instance::Address::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string Gaspp::Asic::Instance::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(size, "size");
    ADD_KEY_TOKEN(entries, "entries");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::Address::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::Address::get_children() const
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

void Gaspp::Asic::Instance::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "addr" || name == "size" || name == "entries" || name == "width")
        return true;
    return false;
}

Gaspp::Asic::Instance::Address::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    direct_data(this, {})
{

    yang_name = "location"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::Address::Location::~Location()
{
}

bool Gaspp::Asic::Instance::Address::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<direct_data.len(); index++)
    {
        if(direct_data[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Gaspp::Asic::Instance::Address::Location::has_operation() const
{
    for (std::size_t index=0; index<direct_data.len(); index++)
    {
        if(direct_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Gaspp::Asic::Instance::Address::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::Address::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::Address::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "direct_data")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::Address::Location::DirectData>();
        c->parent = this;
        direct_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::Address::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : direct_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::Asic::Instance::Address::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::Address::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::Address::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direct_data" || name == "location_name")
        return true;
    return false;
}

Gaspp::Asic::Instance::Address::Location::DirectData::DirectData()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    value_{YType::str, "value"},
    size{YType::uint32, "size"}
{

    yang_name = "direct_data"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::Address::Location::DirectData::~DirectData()
{
}

bool Gaspp::Asic::Instance::Address::Location::DirectData::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| name.is_set
	|| value_.is_set
	|| size.is_set;
}

bool Gaspp::Asic::Instance::Address::Location::DirectData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Gaspp::Asic::Instance::Address::Location::DirectData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direct_data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::Address::Location::DirectData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::Address::Location::DirectData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::Address::Location::DirectData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Gaspp::Asic::Instance::Address::Location::DirectData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::Address::Location::DirectData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::Address::Location::DirectData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "value" || name == "size")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockName::BlockName()
    :
    block_nm{YType::str, "block-nm"},
    block_num{YType::uint32, "block-num"}
        ,
    register_name(this, {"name"})
{

    yang_name = "block-name"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockName::~BlockName()
{
}

bool Gaspp::Asic::Instance::BlockName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_name.len(); index++)
    {
        if(register_name[index]->has_data())
            return true;
    }
    return block_nm.is_set
	|| block_num.is_set;
}

bool Gaspp::Asic::Instance::BlockName::has_operation() const
{
    for (std::size_t index=0; index<register_name.len(); index++)
    {
        if(register_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(block_nm.yfilter)
	|| ydk::is_set(block_num.yfilter);
}

std::string Gaspp::Asic::Instance::BlockName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name";
    ADD_KEY_TOKEN(block_nm, "block-nm");
    ADD_KEY_TOKEN(block_num, "block-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_nm.is_set || is_set(block_nm.yfilter)) leaf_name_data.push_back(block_nm.get_name_leafdata());
    if (block_num.is_set || is_set(block_num.yfilter)) leaf_name_data.push_back(block_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register-name")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockName::RegisterName>();
        c->parent = this;
        register_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : register_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::Asic::Instance::BlockName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-nm")
    {
        block_nm = value;
        block_nm.value_namespace = name_space;
        block_nm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-num")
    {
        block_num = value;
        block_num.value_namespace = name_space;
        block_num.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-nm")
    {
        block_nm.yfilter = yfilter;
    }
    if(value_path == "block-num")
    {
        block_num.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register-name" || name == "block-nm" || name == "block-num")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockName::RegisterName::RegisterName()
    :
    name{YType::str, "name"},
    register_{YType::uint32, "register"}
        ,
    data(this, {})
{

    yang_name = "register-name"; yang_parent_name = "block-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockName::RegisterName::~RegisterName()
{
}

bool Gaspp::Asic::Instance::BlockName::RegisterName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data.len(); index++)
    {
        if(data[index]->has_data())
            return true;
    }
    return name.is_set
	|| register_.is_set;
}

bool Gaspp::Asic::Instance::BlockName::RegisterName::has_operation() const
{
    for (std::size_t index=0; index<data.len(); index++)
    {
        if(data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(register_.yfilter);
}

std::string Gaspp::Asic::Instance::BlockName::RegisterName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockName::RegisterName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (register_.is_set || is_set(register_.yfilter)) leaf_name_data.push_back(register_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockName::RegisterName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockName::RegisterName::Data>();
        c->parent = this;
        data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockName::RegisterName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::Asic::Instance::BlockName::RegisterName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register")
    {
        register_ = value;
        register_.value_namespace = name_space;
        register_.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockName::RegisterName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "register")
    {
        register_.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockName::RegisterName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "name" || name == "register")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockName::RegisterName::Data::Data()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    value_{YType::str, "value"},
    size{YType::uint32, "size"}
{

    yang_name = "data"; yang_parent_name = "register-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockName::RegisterName::Data::~Data()
{
}

bool Gaspp::Asic::Instance::BlockName::RegisterName::Data::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| name.is_set
	|| value_.is_set
	|| size.is_set;
}

bool Gaspp::Asic::Instance::BlockName::RegisterName::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Gaspp::Asic::Instance::BlockName::RegisterName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockName::RegisterName::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockName::RegisterName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockName::RegisterName::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Gaspp::Asic::Instance::BlockName::RegisterName::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockName::RegisterName::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockName::RegisterName::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "value" || name == "size")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockNumber::BlockNumber()
    :
    block_num{YType::uint32, "block-num"},
    block_nm{YType::str, "block-nm"}
        ,
    register_number(this, {"register_"})
{

    yang_name = "block-number"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockNumber::~BlockNumber()
{
}

bool Gaspp::Asic::Instance::BlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_number.len(); index++)
    {
        if(register_number[index]->has_data())
            return true;
    }
    return block_num.is_set
	|| block_nm.is_set;
}

bool Gaspp::Asic::Instance::BlockNumber::has_operation() const
{
    for (std::size_t index=0; index<register_number.len(); index++)
    {
        if(register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(block_num.yfilter)
	|| ydk::is_set(block_nm.yfilter);
}

std::string Gaspp::Asic::Instance::BlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-number";
    ADD_KEY_TOKEN(block_num, "block-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_num.is_set || is_set(block_num.yfilter)) leaf_name_data.push_back(block_num.get_name_leafdata());
    if (block_nm.is_set || is_set(block_nm.yfilter)) leaf_name_data.push_back(block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register-number")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockNumber::RegisterNumber>();
        c->parent = this;
        register_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : register_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::Asic::Instance::BlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-num")
    {
        block_num = value;
        block_num.value_namespace = name_space;
        block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-nm")
    {
        block_nm = value;
        block_nm.value_namespace = name_space;
        block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-num")
    {
        block_num.yfilter = yfilter;
    }
    if(value_path == "block-nm")
    {
        block_nm.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register-number" || name == "block-num" || name == "block-nm")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterNumber()
    :
    register_{YType::uint32, "register"},
    register_name{YType::str, "register-name"}
        ,
    register_offsets(this, {"reg_start", "num_entries"})
    , location(this, {"location_name"})
{

    yang_name = "register-number"; yang_parent_name = "block-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::~RegisterNumber()
{
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_offsets.len(); index++)
    {
        if(register_offsets[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return register_.is_set
	|| register_name.is_set;
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<register_offsets.len(); index++)
    {
        if(register_offsets[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_.yfilter)
	|| ydk::is_set(register_name.yfilter);
}

std::string Gaspp::Asic::Instance::BlockNumber::RegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-number";
    ADD_KEY_TOKEN(register_, "register");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockNumber::RegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_.is_set || is_set(register_.yfilter)) leaf_name_data.push_back(register_.get_name_leafdata());
    if (register_name.is_set || is_set(register_name.yfilter)) leaf_name_data.push_back(register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register-offsets")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets>();
        c->parent = this;
        register_offsets.append(c);
        return c;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : register_offsets.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

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

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register")
    {
        register_ = value;
        register_.value_namespace = name_space;
        register_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-name")
    {
        register_name = value;
        register_name.value_namespace = name_space;
        register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register")
    {
        register_.yfilter = yfilter;
    }
    if(value_path == "register-name")
    {
        register_name.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register-offsets" || name == "location" || name == "register" || name == "register-name")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::RegisterOffsets()
    :
    reg_start{YType::uint32, "reg-start"},
    num_entries{YType::uint32, "num-entries"}
        ,
    location(this, {"location_name"})
{

    yang_name = "register-offsets"; yang_parent_name = "register-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::~RegisterOffsets()
{
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return reg_start.is_set
	|| num_entries.is_set;
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reg_start.yfilter)
	|| ydk::is_set(num_entries.yfilter);
}

std::string Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-offsets";
    ADD_KEY_TOKEN(reg_start, "reg-start");
    ADD_KEY_TOKEN(num_entries, "num-entries");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reg_start.is_set || is_set(reg_start.yfilter)) leaf_name_data.push_back(reg_start.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::get_children() const
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

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg-start")
    {
        reg_start = value;
        reg_start.value_namespace = name_space;
        reg_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg-start")
    {
        reg_start.yfilter = yfilter;
    }
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "reg-start" || name == "num-entries")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    data(this, {})
{

    yang_name = "location"; yang_parent_name = "register-offsets"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::~Location()
{
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data.len(); index++)
    {
        if(data[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::has_operation() const
{
    for (std::size_t index=0; index<data.len(); index++)
    {
        if(data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data>();
        c->parent = this;
        data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "location_name")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::Data()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    value_{YType::str, "value"},
    size{YType::uint32, "size"}
{

    yang_name = "data"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::~Data()
{
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| name.is_set
	|| value_.is_set
	|| size.is_set;
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "value" || name == "size")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    data(this, {})
{

    yang_name = "location"; yang_parent_name = "register-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::~Location()
{
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data.len(); index++)
    {
        if(data[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::has_operation() const
{
    for (std::size_t index=0; index<data.len(); index++)
    {
        if(data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        auto c = std::make_shared<Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data>();
        c->parent = this;
        data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "location_name")
        return true;
    return false;
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::Data()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    value_{YType::str, "value"},
    size{YType::uint32, "size"}
{

    yang_name = "data"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::~Data()
{
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| name.is_set
	|| value_.is_set
	|| size.is_set;
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Gaspp::Asic::Instance::BlockNumber::RegisterNumber::Location::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "value" || name == "size")
        return true;
    return false;
}

Set::Set()
    :
    controller(std::make_shared<Set::Controller>())
{
    controller->parent = this;

    yang_name = "set"; yang_parent_name = "Cisco-IOS-XR-sysadmin-controllers"; is_top_level_class = true; has_list_ancestor = false; 
}

Set::~Set()
{
}

bool Set::has_data() const
{
    if (is_presence_container) return true;
    return (controller !=  nullptr && controller->has_data());
}

bool Set::has_operation() const
{
    return is_set(yfilter)
	|| (controller !=  nullptr && controller->has_operation());
}

std::string Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Set::Controller>();
        }
        return controller;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controller != nullptr)
    {
        children["controller"] = controller;
    }

    return children;
}

void Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Set::clone_ptr() const
{
    return std::make_shared<Set>();
}

std::string Set::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Set::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Set::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Set::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Set::Controller::Controller()
    :
    asic(this, {"asic_name"})
{

    yang_name = "controller"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = false; 
}

Set::Controller::~Controller()
{
}

bool Set::Controller::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::has_operation() const
{
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:set/" << get_segment_path();
    return path_buffer.str();
}

std::string Set::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic")
    {
        auto c = std::make_shared<Set::Controller::Asic>();
        c->parent = this;
        asic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic")
        return true;
    return false;
}

Set::Controller::Asic::Asic()
    :
    asic_name{YType::str, "asic-name"}
        ,
    instance(this, {"instance_ids"})
{

    yang_name = "asic"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Set::Controller::Asic::~Asic()
{
}

bool Set::Controller::Asic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return asic_name.is_set;
}

bool Set::Controller::Asic::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_name.yfilter);
}

std::string Set::Controller::Asic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:set/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Set::Controller::Asic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic";
    ADD_KEY_TOKEN(asic_name, "asic-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_name.is_set || is_set(asic_name.yfilter)) leaf_name_data.push_back(asic_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance>();
        c->parent = this;
        instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-name")
    {
        asic_name = value;
        asic_name.value_namespace = name_space;
        asic_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-name")
    {
        asic_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "asic-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::Instance()
    :
    instance_ids{YType::uint32, "instance-ids"}
        ,
    fault_injection(std::make_shared<Set::Controller::Asic::Instance::FaultInjection>())
{
    fault_injection->parent = this;

    yang_name = "instance"; yang_parent_name = "asic"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::~Instance()
{
}

bool Set::Controller::Asic::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_ids.is_set
	|| (fault_injection !=  nullptr && fault_injection->has_data());
}

bool Set::Controller::Asic::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_ids.yfilter)
	|| (fault_injection !=  nullptr && fault_injection->has_operation());
}

std::string Set::Controller::Asic::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_ids, "instance-ids");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_ids.is_set || is_set(instance_ids.yfilter)) leaf_name_data.push_back(instance_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-injection")
    {
        if(fault_injection == nullptr)
        {
            fault_injection = std::make_shared<Set::Controller::Asic::Instance::FaultInjection>();
        }
        return fault_injection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fault_injection != nullptr)
    {
        children["fault-injection"] = fault_injection;
    }

    return children;
}

void Set::Controller::Asic::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-ids")
    {
        instance_ids = value;
        instance_ids.value_namespace = name_space;
        instance_ids.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-ids")
    {
        instance_ids.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-injection" || name == "instance-ids")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::FaultInjection()
    :
    module(this, {"module_name"})
{

    yang_name = "fault-injection"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::~FaultInjection()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<module.len(); index++)
    {
        if(module[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::has_operation() const
{
    for (std::size_t index=0; index<module.len(); index++)
    {
        if(module[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-injection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module>();
        c->parent = this;
        module.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : module.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::Module()
    :
    module_name{YType::str, "module-name"}
        ,
    fault_type(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType>())
{
    fault_type->parent = this;

    yang_name = "module"; yang_parent_name = "fault-injection"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::~Module()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::has_data() const
{
    if (is_presence_container) return true;
    return module_name.is_set
	|| (fault_type !=  nullptr && fault_type->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_name.yfilter)
	|| (fault_type !=  nullptr && fault_type->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";
    ADD_KEY_TOKEN(module_name, "module-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_name.is_set || is_set(module_name.yfilter)) leaf_name_data.push_back(module_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type")
    {
        if(fault_type == nullptr)
        {
            fault_type = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType>();
        }
        return fault_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fault_type != nullptr)
    {
        children["fault-type"] = fault_type;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-name")
    {
        module_name = value;
        module_name.value_namespace = name_space;
        module_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-name")
    {
        module_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type" || name == "module-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::FaultType()
    :
    ecc(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc>())
    , parity(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity>())
    , other(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other>())
{
    ecc->parent = this;
    parity->parent = this;
    other->parent = this;

    yang_name = "fault-type"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::~FaultType()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::has_data() const
{
    if (is_presence_container) return true;
    return (ecc !=  nullptr && ecc->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (other !=  nullptr && other->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::has_operation() const
{
    return is_set(yfilter)
	|| (ecc !=  nullptr && ecc->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (other !=  nullptr && other->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ecc")
    {
        if(ecc == nullptr)
        {
            ecc = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc>();
        }
        return ecc;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "other")
    {
        if(other == nullptr)
        {
            other = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other>();
        }
        return other;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ecc != nullptr)
    {
        children["ecc"] = ecc;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(other != nullptr)
    {
        children["other"] = other;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ecc" || name == "parity" || name == "other")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::Ecc()
    :
    all(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "ecc"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::~Ecc()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst>();
        c->parent = this;
        block_name_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    count = 0;
    for (auto c : block_name_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "ecc"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::~All()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_operation() const
{
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold>();
        c->parent = this;
        threshold.append(c);
        return c;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::~Threshold()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "ecc"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::~BlockNameLst()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(one != nullptr)
    {
        children["one"] = one;
    }

    if(continuous != nullptr)
    {
        children["continuous"] = continuous;
    }

    if(stop != nullptr)
    {
        children["stop"] = stop;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::~One()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber>();
        c->parent = this;
        error_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : error_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        c->parent = this;
        duration.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : duration.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber>();
        c->parent = this;
        error_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : error_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        c->parent = this;
        duration.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : duration.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::~Stop()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::Parity()
    :
    all(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "parity"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::~Parity()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst>();
        c->parent = this;
        block_name_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    count = 0;
    for (auto c : block_name_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::~All()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_operation() const
{
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold>();
        c->parent = this;
        threshold.append(c);
        return c;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::~Threshold()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::~BlockNameLst()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(one != nullptr)
    {
        children["one"] = one;
    }

    if(continuous != nullptr)
    {
        children["continuous"] = continuous;
    }

    if(stop != nullptr)
    {
        children["stop"] = stop;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::~One()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber>();
        c->parent = this;
        error_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : error_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        c->parent = this;
        duration.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : duration.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber>();
        c->parent = this;
        error_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : error_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        c->parent = this;
        duration.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : duration.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::~Stop()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::Other()
    :
    all(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "other"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::~Other()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst>();
        c->parent = this;
        block_name_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    count = 0;
    for (auto c : block_name_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "other"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::~All()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_operation() const
{
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold>();
        c->parent = this;
        threshold.append(c);
        return c;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::~Threshold()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "other"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::~BlockNameLst()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(one != nullptr)
    {
        children["one"] = one;
    }

    if(continuous != nullptr)
    {
        children["continuous"] = continuous;
    }

    if(stop != nullptr)
    {
        children["stop"] = stop;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::~One()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber>();
        c->parent = this;
        error_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : error_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        c->parent = this;
        duration.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : duration.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber>();
        c->parent = this;
        error_number.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : error_number.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        c->parent = this;
        duration.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : duration.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::~Stop()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Controller::Controller()
    :
    fabric(std::make_shared<Controller::Fabric>())
    , sfe_oper(std::make_shared<Controller::SfeOper>())
    , asic(this, {"asic_name"})
    , oper(std::make_shared<Controller::Oper>())
    , zen(std::make_shared<Controller::Zen>())
    , ccc_driver(std::make_shared<Controller::CccDriver>())
    , switch_(std::make_shared<Controller::Switch>())
    , fabric_action(std::make_shared<Controller::FabricAction>())
{
    fabric->parent = this;
    sfe_oper->parent = this;
    oper->parent = this;
    zen->parent = this;
    ccc_driver->parent = this;
    switch_->parent = this;
    fabric_action->parent = this;

    yang_name = "controller"; yang_parent_name = "Cisco-IOS-XR-sysadmin-controllers"; is_top_level_class = true; has_list_ancestor = false; 
}

Controller::~Controller()
{
}

bool Controller::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_data())
            return true;
    }
    return (fabric !=  nullptr && fabric->has_data())
	|| (sfe_oper !=  nullptr && sfe_oper->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (zen !=  nullptr && zen->has_data())
	|| (ccc_driver !=  nullptr && ccc_driver->has_data())
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (fabric_action !=  nullptr && fabric_action->has_data());
}

bool Controller::has_operation() const
{
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation())
	|| (sfe_oper !=  nullptr && sfe_oper->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (zen !=  nullptr && zen->has_operation())
	|| (ccc_driver !=  nullptr && ccc_driver->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (fabric_action !=  nullptr && fabric_action->has_operation());
}

std::string Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Controller::Fabric>();
        }
        return fabric;
    }

    if(child_yang_name == "sfe_oper")
    {
        if(sfe_oper == nullptr)
        {
            sfe_oper = std::make_shared<Controller::SfeOper>();
        }
        return sfe_oper;
    }

    if(child_yang_name == "asic")
    {
        auto c = std::make_shared<Controller::Asic>();
        c->parent = this;
        asic.append(c);
        return c;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Controller::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "zen")
    {
        if(zen == nullptr)
        {
            zen = std::make_shared<Controller::Zen>();
        }
        return zen;
    }

    if(child_yang_name == "ccc_driver")
    {
        if(ccc_driver == nullptr)
        {
            ccc_driver = std::make_shared<Controller::CccDriver>();
        }
        return ccc_driver;
    }

    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Controller::Switch>();
        }
        return switch_;
    }

    if(child_yang_name == "fabric_action")
    {
        if(fabric_action == nullptr)
        {
            fabric_action = std::make_shared<Controller::FabricAction>();
        }
        return fabric_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fabric != nullptr)
    {
        children["fabric"] = fabric;
    }

    if(sfe_oper != nullptr)
    {
        children["sfe_oper"] = sfe_oper;
    }

    count = 0;
    for (auto c : asic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    if(zen != nullptr)
    {
        children["zen"] = zen;
    }

    if(ccc_driver != nullptr)
    {
        children["ccc_driver"] = ccc_driver;
    }

    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    if(fabric_action != nullptr)
    {
        children["fabric_action"] = fabric_action;
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
    if(name == "fabric" || name == "sfe_oper" || name == "asic" || name == "oper" || name == "zen" || name == "ccc_driver" || name == "switch" || name == "fabric_action")
        return true;
    return false;
}

Controller::Fabric::Fabric()
    :
    fabric(std::make_shared<Controller::Fabric::Fabric_>())
    , oper(std::make_shared<Controller::Fabric::Oper>())
{
    fabric->parent = this;
    oper->parent = this;

    yang_name = "fabric"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::~Fabric()
{
}

bool Controller::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (fabric !=  nullptr && fabric->has_data())
	|| (oper !=  nullptr && oper->has_data());
}

bool Controller::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation())
	|| (oper !=  nullptr && oper->has_operation());
}

std::string Controller::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Controller::Fabric::Fabric_>();
        }
        return fabric;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Controller::Fabric::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fabric != nullptr)
    {
        children["fabric"] = fabric;
    }

    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    return children;
}

void Controller::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric" || name == "oper")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fabric_()
    :
    fsdbagg(std::make_shared<Controller::Fabric::Fabric_::Fsdbagg>())
    , fgid(std::make_shared<Controller::Fabric::Fabric_::Fgid>())
{
    fsdbagg->parent = this;
    fgid->parent = this;

    yang_name = "fabric"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::~Fabric_()
{
}

bool Controller::Fabric::Fabric_::has_data() const
{
    if (is_presence_container) return true;
    return (fsdbagg !=  nullptr && fsdbagg->has_data())
	|| (fgid !=  nullptr && fgid->has_data());
}

bool Controller::Fabric::Fabric_::has_operation() const
{
    return is_set(yfilter)
	|| (fsdbagg !=  nullptr && fsdbagg->has_operation())
	|| (fgid !=  nullptr && fgid->has_operation());
}

std::string Controller::Fabric::Fabric_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsdbagg")
    {
        if(fsdbagg == nullptr)
        {
            fsdbagg = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg>();
        }
        return fsdbagg;
    }

    if(child_yang_name == "fgid")
    {
        if(fgid == nullptr)
        {
            fgid = std::make_shared<Controller::Fabric::Fabric_::Fgid>();
        }
        return fgid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fsdbagg != nullptr)
    {
        children["fsdbagg"] = fsdbagg;
    }

    if(fgid != nullptr)
    {
        children["fgid"] = fgid;
    }

    return children;
}

void Controller::Fabric::Fabric_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsdbagg" || name == "fgid")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Fsdbagg()
    :
    plane(this, {"plane_id"})
    , link(std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Link>())
{
    link->parent = this;

    yang_name = "fsdbagg"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fsdbagg::~Fsdbagg()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return (link !=  nullptr && link->has_data());
}

bool Controller::Fabric::Fabric_::Fsdbagg::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (link !=  nullptr && link->has_operation());
}

std::string Controller::Fabric::Fabric_::Fsdbagg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fsdbagg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fsdbagg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto c = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Plane>();
        c->parent = this;
        plane.append(c);
        return c;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fsdbagg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : plane.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Controller::Fabric::Fabric_::Fsdbagg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fsdbagg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane" || name == "link")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Plane::Plane()
    :
    plane_id{YType::str, "plane_id"},
    shutdown{YType::empty, "shutdown"},
    b2b{YType::empty, "b2b"}
        ,
    instance(this, {"instance_id"})
    , instance_folded(this, {"instance_id"})
{

    yang_name = "plane"; yang_parent_name = "fsdbagg"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fsdbagg::Plane::~Plane()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_folded.len(); index++)
    {
        if(instance_folded[index]->has_data())
            return true;
    }
    return plane_id.is_set
	|| shutdown.is_set
	|| b2b.is_set;
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_folded.len(); index++)
    {
        if(instance_folded[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(b2b.yfilter);
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/fsdbagg/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(plane_id, "plane_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (b2b.is_set || is_set(b2b.yfilter)) leaf_name_data.push_back(b2b.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fsdbagg::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance>();
        c->parent = this;
        instance.append(c);
        return c;
    }

    if(child_yang_name == "instance_folded")
    {
        auto c = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded>();
        c->parent = this;
        instance_folded.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fsdbagg::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : instance_folded.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Fabric_::Fsdbagg::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b2b")
    {
        b2b = value;
        b2b.value_namespace = name_space;
        b2b.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Fabric_::Fsdbagg::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "b2b")
    {
        b2b.yfilter = yfilter;
    }
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "instance_folded" || name == "plane_id" || name == "shutdown" || name == "b2b")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::Instance()
    :
    instance_id{YType::int32, "instance-id"},
    location{YType::str, "location"}
{

    yang_name = "instance"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::~Instance()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_id.is_set
	|| location.is_set;
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "location")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::InstanceFolded()
    :
    instance_id{YType::int32, "instance-id"},
    location{YType::str, "location"}
{

    yang_name = "instance_folded"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::~InstanceFolded()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::has_data() const
{
    if (is_presence_container) return true;
    return instance_id.is_set
	|| location.is_set;
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance_folded";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::InstanceFolded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "location")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Link::Link()
    :
    port(std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Link::Port>())
{
    port->parent = this;

    yang_name = "link"; yang_parent_name = "fsdbagg"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fsdbagg::Link::~Link()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/fsdbagg/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fsdbagg::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Link::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fsdbagg::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Controller::Fabric::Fabric_::Fsdbagg::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fsdbagg::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Port()
    :
    location(this, {"loc_str"})
{

    yang_name = "port"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fsdbagg::Link::Port::~Port()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::Port::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Link::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/fsdbagg/link/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Link::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::Link::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fsdbagg::Link::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fsdbagg::Link::Port::get_children() const
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

void Controller::Fabric::Fabric_::Fsdbagg::Link::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fsdbagg::Link::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    shutdown{YType::empty, "shutdown"},
    maintenance{YType::empty, "maintenance"}
{

    yang_name = "location"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::~Location()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::has_data() const
{
    if (is_presence_container) return true;
    return loc_str.is_set
	|| shutdown.is_set
	|| maintenance.is_set;
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(maintenance.yfilter);
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/fsdbagg/link/port/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (maintenance.is_set || is_set(maintenance.yfilter)) leaf_name_data.push_back(maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maintenance")
    {
        maintenance = value;
        maintenance.value_namespace = name_space;
        maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "maintenance")
    {
        maintenance.yfilter = yfilter;
    }
}

bool Controller::Fabric::Fabric_::Fsdbagg::Link::Port::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc_str" || name == "shutdown" || name == "maintenance")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fgid::Fgid()
    :
    resource(std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource>())
{
    resource->parent = this;

    yang_name = "fgid"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fgid::~Fgid()
{
}

bool Controller::Fabric::Fabric_::Fgid::has_data() const
{
    if (is_presence_container) return true;
    return (resource !=  nullptr && resource->has_data());
}

bool Controller::Fabric::Fabric_::Fgid::has_operation() const
{
    return is_set(yfilter)
	|| (resource !=  nullptr && resource->has_operation());
}

std::string Controller::Fabric::Fabric_::Fgid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fgid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fgid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fgid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resource")
    {
        if(resource == nullptr)
        {
            resource = std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource>();
        }
        return resource;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fgid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(resource != nullptr)
    {
        children["resource"] = resource;
    }

    return children;
}

void Controller::Fabric::Fabric_::Fgid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fgid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fgid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fgid::Resource::Resource()
    :
    sdr(std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource::Sdr>())
{
    sdr->parent = this;

    yang_name = "resource"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fgid::Resource::~Resource()
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::has_data() const
{
    if (is_presence_container) return true;
    return (sdr !=  nullptr && sdr->has_data());
}

bool Controller::Fabric::Fabric_::Fgid::Resource::has_operation() const
{
    return is_set(yfilter)
	|| (sdr !=  nullptr && sdr->has_operation());
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fgid::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fgid::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr")
    {
        if(sdr == nullptr)
        {
            sdr = std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource::Sdr>();
        }
        return sdr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fgid::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sdr != nullptr)
    {
        children["sdr"] = sdr;
    }

    return children;
}

void Controller::Fabric::Fabric_::Fgid::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fgid::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Sdr()
    :
    allocation(std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation>())
{
    allocation->parent = this;

    yang_name = "sdr"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fgid::Resource::Sdr::~Sdr()
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::has_data() const
{
    if (is_presence_container) return true;
    return (allocation !=  nullptr && allocation->has_data());
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::has_operation() const
{
    return is_set(yfilter)
	|| (allocation !=  nullptr && allocation->has_operation());
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/fgid/resource/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation")
    {
        if(allocation == nullptr)
        {
            allocation = std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation>();
        }
        return allocation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allocation != nullptr)
    {
        children["allocation"] = allocation;
    }

    return children;
}

void Controller::Fabric::Fabric_::Fgid::Resource::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fgid::Resource::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::Allocation()
    :
    percent{YType::int32, "percent"}
{

    yang_name = "allocation"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::~Allocation()
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set;
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/fabric/fgid/resource/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Controller::Fabric::Oper::Oper()
    :
    cxp(std::make_shared<Controller::Fabric::Oper::Cxp>())
    , fgid(std::make_shared<Controller::Fabric::Oper::Fgid>())
    , fsdbagg_active(std::make_shared<Controller::Fabric::Oper::FsdbaggActive>())
    , fsdbagg_link(std::make_shared<Controller::Fabric::Oper::FsdbaggLink>())
    , fsdbagg_sfe_asic_type(std::make_shared<Controller::Fabric::Oper::FsdbaggSfeAsicType>())
    , fsdbagg_standby(std::make_shared<Controller::Fabric::Oper::FsdbaggStandby>())
    , fab_health(std::make_shared<Controller::Fabric::Oper::FabHealth>())
    , fsdb_aggregator(std::make_shared<Controller::Fabric::Oper::FsdbAggregator>())
    , link(std::make_shared<Controller::Fabric::Oper::Link>())
    , sfe(std::make_shared<Controller::Fabric::Oper::Sfe>())
    , fsdb_pla(std::make_shared<Controller::Fabric::Oper::FsdbPla>())
    , fsdb_srvr(std::make_shared<Controller::Fabric::Oper::FsdbSrvr>())
{
    cxp->parent = this;
    fgid->parent = this;
    fsdbagg_active->parent = this;
    fsdbagg_link->parent = this;
    fsdbagg_sfe_asic_type->parent = this;
    fsdbagg_standby->parent = this;
    fab_health->parent = this;
    fsdb_aggregator->parent = this;
    link->parent = this;
    sfe->parent = this;
    fsdb_pla->parent = this;
    fsdb_srvr->parent = this;

    yang_name = "oper"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::~Oper()
{
}

bool Controller::Fabric::Oper::has_data() const
{
    if (is_presence_container) return true;
    return (cxp !=  nullptr && cxp->has_data())
	|| (fgid !=  nullptr && fgid->has_data())
	|| (fsdbagg_active !=  nullptr && fsdbagg_active->has_data())
	|| (fsdbagg_link !=  nullptr && fsdbagg_link->has_data())
	|| (fsdbagg_sfe_asic_type !=  nullptr && fsdbagg_sfe_asic_type->has_data())
	|| (fsdbagg_standby !=  nullptr && fsdbagg_standby->has_data())
	|| (fab_health !=  nullptr && fab_health->has_data())
	|| (fsdb_aggregator !=  nullptr && fsdb_aggregator->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (sfe !=  nullptr && sfe->has_data())
	|| (fsdb_pla !=  nullptr && fsdb_pla->has_data())
	|| (fsdb_srvr !=  nullptr && fsdb_srvr->has_data());
}

bool Controller::Fabric::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (cxp !=  nullptr && cxp->has_operation())
	|| (fgid !=  nullptr && fgid->has_operation())
	|| (fsdbagg_active !=  nullptr && fsdbagg_active->has_operation())
	|| (fsdbagg_link !=  nullptr && fsdbagg_link->has_operation())
	|| (fsdbagg_sfe_asic_type !=  nullptr && fsdbagg_sfe_asic_type->has_operation())
	|| (fsdbagg_standby !=  nullptr && fsdbagg_standby->has_operation())
	|| (fab_health !=  nullptr && fab_health->has_operation())
	|| (fsdb_aggregator !=  nullptr && fsdb_aggregator->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (sfe !=  nullptr && sfe->has_operation())
	|| (fsdb_pla !=  nullptr && fsdb_pla->has_operation())
	|| (fsdb_srvr !=  nullptr && fsdb_srvr->has_operation());
}

std::string Controller::Fabric::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cxp")
    {
        if(cxp == nullptr)
        {
            cxp = std::make_shared<Controller::Fabric::Oper::Cxp>();
        }
        return cxp;
    }

    if(child_yang_name == "fgid")
    {
        if(fgid == nullptr)
        {
            fgid = std::make_shared<Controller::Fabric::Oper::Fgid>();
        }
        return fgid;
    }

    if(child_yang_name == "fsdbagg_active")
    {
        if(fsdbagg_active == nullptr)
        {
            fsdbagg_active = std::make_shared<Controller::Fabric::Oper::FsdbaggActive>();
        }
        return fsdbagg_active;
    }

    if(child_yang_name == "fsdbagg_link")
    {
        if(fsdbagg_link == nullptr)
        {
            fsdbagg_link = std::make_shared<Controller::Fabric::Oper::FsdbaggLink>();
        }
        return fsdbagg_link;
    }

    if(child_yang_name == "fsdbagg_sfe_asic_type")
    {
        if(fsdbagg_sfe_asic_type == nullptr)
        {
            fsdbagg_sfe_asic_type = std::make_shared<Controller::Fabric::Oper::FsdbaggSfeAsicType>();
        }
        return fsdbagg_sfe_asic_type;
    }

    if(child_yang_name == "fsdbagg_standby")
    {
        if(fsdbagg_standby == nullptr)
        {
            fsdbagg_standby = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby>();
        }
        return fsdbagg_standby;
    }

    if(child_yang_name == "fab_health")
    {
        if(fab_health == nullptr)
        {
            fab_health = std::make_shared<Controller::Fabric::Oper::FabHealth>();
        }
        return fab_health;
    }

    if(child_yang_name == "fsdb-aggregator")
    {
        if(fsdb_aggregator == nullptr)
        {
            fsdb_aggregator = std::make_shared<Controller::Fabric::Oper::FsdbAggregator>();
        }
        return fsdb_aggregator;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Controller::Fabric::Oper::Link>();
        }
        return link;
    }

    if(child_yang_name == "sfe")
    {
        if(sfe == nullptr)
        {
            sfe = std::make_shared<Controller::Fabric::Oper::Sfe>();
        }
        return sfe;
    }

    if(child_yang_name == "fsdb_pla")
    {
        if(fsdb_pla == nullptr)
        {
            fsdb_pla = std::make_shared<Controller::Fabric::Oper::FsdbPla>();
        }
        return fsdb_pla;
    }

    if(child_yang_name == "fsdb_srvr")
    {
        if(fsdb_srvr == nullptr)
        {
            fsdb_srvr = std::make_shared<Controller::Fabric::Oper::FsdbSrvr>();
        }
        return fsdb_srvr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cxp != nullptr)
    {
        children["cxp"] = cxp;
    }

    if(fgid != nullptr)
    {
        children["fgid"] = fgid;
    }

    if(fsdbagg_active != nullptr)
    {
        children["fsdbagg_active"] = fsdbagg_active;
    }

    if(fsdbagg_link != nullptr)
    {
        children["fsdbagg_link"] = fsdbagg_link;
    }

    if(fsdbagg_sfe_asic_type != nullptr)
    {
        children["fsdbagg_sfe_asic_type"] = fsdbagg_sfe_asic_type;
    }

    if(fsdbagg_standby != nullptr)
    {
        children["fsdbagg_standby"] = fsdbagg_standby;
    }

    if(fab_health != nullptr)
    {
        children["fab_health"] = fab_health;
    }

    if(fsdb_aggregator != nullptr)
    {
        children["fsdb-aggregator"] = fsdb_aggregator;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(sfe != nullptr)
    {
        children["sfe"] = sfe;
    }

    if(fsdb_pla != nullptr)
    {
        children["fsdb_pla"] = fsdb_pla;
    }

    if(fsdb_srvr != nullptr)
    {
        children["fsdb_srvr"] = fsdb_srvr;
    }

    return children;
}

void Controller::Fabric::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cxp" || name == "fgid" || name == "fsdbagg_active" || name == "fsdbagg_link" || name == "fsdbagg_sfe_asic_type" || name == "fsdbagg_standby" || name == "fab_health" || name == "fsdb-aggregator" || name == "link" || name == "sfe" || name == "fsdb_pla" || name == "fsdb_srvr")
        return true;
    return false;
}

Controller::Fabric::Oper::Cxp::Cxp()
    :
    dom(std::make_shared<Controller::Fabric::Oper::Cxp::Dom>())
    , summary(std::make_shared<Controller::Fabric::Oper::Cxp::Summary>())
{
    dom->parent = this;
    summary->parent = this;

    yang_name = "cxp"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Cxp::~Cxp()
{
}

bool Controller::Fabric::Oper::Cxp::has_data() const
{
    if (is_presence_container) return true;
    return (dom !=  nullptr && dom->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Controller::Fabric::Oper::Cxp::has_operation() const
{
    return is_set(yfilter)
	|| (dom !=  nullptr && dom->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Controller::Fabric::Oper::Cxp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Cxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cxp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Cxp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Cxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom")
    {
        if(dom == nullptr)
        {
            dom = std::make_shared<Controller::Fabric::Oper::Cxp::Dom>();
        }
        return dom;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Fabric::Oper::Cxp::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Cxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom != nullptr)
    {
        children["dom"] = dom;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Controller::Fabric::Oper::Cxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Cxp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Cxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom" || name == "summary")
        return true;
    return false;
}

Controller::Fabric::Oper::Cxp::Dom::Dom()
    :
    location(this, {"loc_str"})
{

    yang_name = "dom"; yang_parent_name = "cxp"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Cxp::Dom::~Dom()
{
}

bool Controller::Fabric::Oper::Cxp::Dom::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Cxp::Dom::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Cxp::Dom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/cxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Cxp::Dom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Cxp::Dom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Cxp::Dom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Cxp::Dom::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Cxp::Dom::get_children() const
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

void Controller::Fabric::Oper::Cxp::Dom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Cxp::Dom::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Cxp::Dom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Fabric::Oper::Cxp::Dom::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    description{YType::str, "description"}
        ,
    port(this, {"cxp_port"})
{

    yang_name = "location"; yang_parent_name = "dom"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Cxp::Dom::Location::~Location()
{
}

bool Controller::Fabric::Oper::Cxp::Dom::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::Cxp::Dom::Location::has_operation() const
{
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::Cxp::Dom::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/cxp/dom/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Cxp::Dom::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Cxp::Dom::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Cxp::Dom::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Cxp::Dom::Location::Port>();
        c->parent = this;
        port.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Cxp::Dom::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Cxp::Dom::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Cxp::Dom::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Cxp::Dom::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "loc_str" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Cxp::Dom::Location::Port::Port()
    :
    cxp_port{YType::uint32, "cxp_port"},
    show_port{YType::boolean, "show_port"},
    cxp2_display{YType::boolean, "cxp2_display"},
    rack_num{YType::uint32, "rack_num"},
    slot_num{YType::uint32, "slot_num"},
    cur_loc_str{YType::str, "cur_loc_str"},
    vendorname{YType::str, "vendorname"},
    partnumber{YType::str, "partnumber"},
    serialnumber{YType::str, "serialnumber"},
    vid{YType::str, "vid"},
    pid{YType::str, "pid"},
    vendor_rev_num{YType::uint32, "vendor_rev_num"},
    vendor_pn{YType::str, "vendor_pn"},
    vendor_sn{YType::str, "vendor_sn"},
    dev_description{YType::str, "dev_description"},
    clei_code_num{YType::str, "clei_code_num"},
    ven_date_code{YType::str, "ven_date_code"},
    ven_lot_code{YType::str, "ven_lot_code"},
    vendor_oui_ieee_company_id{YType::uint32, "vendor_oui_ieee_company_id"},
    eeprom_rev_num{YType::uint32, "eeprom_rev_num"},
    firmware_rev_num{YType::uint32, "firmware_rev_num"},
    tx_temp_rd{YType::str, "TX_temp_rd"},
    tx_temp_sts{YType::str, "TX_temp_sts"},
    tx_volt_sts{YType::str, "TX_volt_sts"},
    tx_volt_rd{YType::str, "TX_volt_rd"},
    tx_chn_sts0{YType::str, "tx_chn_sts0"},
    tx_chn_sts1{YType::str, "tx_chn_sts1"},
    tx_chn_sts2{YType::str, "tx_chn_sts2"},
    tx_chn_sts3{YType::str, "tx_chn_sts3"},
    tx_chn_sts4{YType::str, "tx_chn_sts4"},
    tx_chn_sts5{YType::str, "tx_chn_sts5"},
    tx_chn_sts6{YType::str, "tx_chn_sts6"},
    tx_chn_sts7{YType::str, "tx_chn_sts7"},
    tx_chn_sts8{YType::str, "tx_chn_sts8"},
    tx_chn_sts9{YType::str, "tx_chn_sts9"},
    tx_chn_sts10{YType::str, "tx_chn_sts10"},
    tx_chn_sts11{YType::str, "tx_chn_sts11"},
    tx_fault0{YType::str, "tx_fault0"},
    tx_fault1{YType::str, "tx_fault1"},
    tx_fault2{YType::str, "tx_fault2"},
    tx_fault3{YType::str, "tx_fault3"},
    tx_fault4{YType::str, "tx_fault4"},
    tx_fault5{YType::str, "tx_fault5"},
    tx_fault6{YType::str, "tx_fault6"},
    tx_fault7{YType::str, "tx_fault7"},
    tx_fault8{YType::str, "tx_fault8"},
    tx_fault9{YType::str, "tx_fault9"},
    tx_fault10{YType::str, "tx_fault10"},
    tx_fault11{YType::str, "tx_fault11"},
    tx_bias_cur0{YType::str, "tx_bias_cur0"},
    tx_bias_cur1{YType::str, "tx_bias_cur1"},
    tx_bias_cur2{YType::str, "tx_bias_cur2"},
    tx_bias_cur3{YType::str, "tx_bias_cur3"},
    tx_bias_cur4{YType::str, "tx_bias_cur4"},
    tx_bias_cur5{YType::str, "tx_bias_cur5"},
    tx_bias_cur6{YType::str, "tx_bias_cur6"},
    tx_bias_cur7{YType::str, "tx_bias_cur7"},
    tx_bias_cur8{YType::str, "tx_bias_cur8"},
    tx_bias_cur9{YType::str, "tx_bias_cur9"},
    tx_bias_cur10{YType::str, "tx_bias_cur10"},
    tx_bias_cur11{YType::str, "tx_bias_cur11"},
    tx_los0{YType::str, "tx_los0"},
    tx_los1{YType::str, "tx_los1"},
    tx_los2{YType::str, "tx_los2"},
    tx_los3{YType::str, "tx_los3"},
    tx_los4{YType::str, "tx_los4"},
    tx_los5{YType::str, "tx_los5"},
    tx_los6{YType::str, "tx_los6"},
    tx_los7{YType::str, "tx_los7"},
    tx_los8{YType::str, "tx_los8"},
    tx_los9{YType::str, "tx_los9"},
    tx_los10{YType::str, "tx_los10"},
    tx_los11{YType::str, "tx_los11"},
    tx_opt_pw_alm0{YType::str, "tx_opt_pw_alm0"},
    tx_opt_pw_alm1{YType::str, "tx_opt_pw_alm1"},
    tx_opt_pw_alm2{YType::str, "tx_opt_pw_alm2"},
    tx_opt_pw_alm3{YType::str, "tx_opt_pw_alm3"},
    tx_opt_pw_alm4{YType::str, "tx_opt_pw_alm4"},
    tx_opt_pw_alm5{YType::str, "tx_opt_pw_alm5"},
    tx_opt_pw_alm6{YType::str, "tx_opt_pw_alm6"},
    tx_opt_pw_alm7{YType::str, "tx_opt_pw_alm7"},
    tx_opt_pw_alm8{YType::str, "tx_opt_pw_alm8"},
    tx_opt_pw_alm9{YType::str, "tx_opt_pw_alm9"},
    tx_opt_pw_alm10{YType::str, "tx_opt_pw_alm10"},
    tx_opt_pw_alm11{YType::str, "tx_opt_pw_alm11"},
    tx_opt_bs_alm0{YType::str, "tx_opt_bs_alm0"},
    tx_opt_bs_alm1{YType::str, "tx_opt_bs_alm1"},
    tx_opt_bs_alm2{YType::str, "tx_opt_bs_alm2"},
    tx_opt_bs_alm3{YType::str, "tx_opt_bs_alm3"},
    tx_opt_bs_alm4{YType::str, "tx_opt_bs_alm4"},
    tx_opt_bs_alm5{YType::str, "tx_opt_bs_alm5"},
    tx_opt_bs_alm6{YType::str, "tx_opt_bs_alm6"},
    tx_opt_bs_alm7{YType::str, "tx_opt_bs_alm7"},
    tx_opt_bs_alm8{YType::str, "tx_opt_bs_alm8"},
    tx_opt_bs_alm9{YType::str, "tx_opt_bs_alm9"},
    tx_opt_bs_alm10{YType::str, "tx_opt_bs_alm10"},
    tx_opt_bs_alm11{YType::str, "tx_opt_bs_alm11"},
    tx_light_op_dbm0{YType::str, "tx_light_op_dBm0"},
    tx_light_op_dbm1{YType::str, "tx_light_op_dBm1"},
    tx_light_op_dbm2{YType::str, "tx_light_op_dBm2"},
    tx_light_op_dbm3{YType::str, "tx_light_op_dBm3"},
    tx_light_op_dbm4{YType::str, "tx_light_op_dBm4"},
    tx_light_op_dbm5{YType::str, "tx_light_op_dBm5"},
    tx_light_op_dbm6{YType::str, "tx_light_op_dBm6"},
    tx_light_op_dbm7{YType::str, "tx_light_op_dBm7"},
    tx_light_op_dbm8{YType::str, "tx_light_op_dBm8"},
    tx_light_op_dbm9{YType::str, "tx_light_op_dBm9"},
    tx_light_op_dbm10{YType::str, "tx_light_op_dBm10"},
    tx_light_op_dbm11{YType::str, "tx_light_op_dBm11"},
    rx_temp_rd{YType::str, "RX_temp_rd"},
    rx_temp_sts{YType::str, "RX_temp_sts"},
    rx_volt_sts{YType::str, "RX_volt_sts"},
    rx_volt_rd{YType::str, "RX_volt_rd"},
    rx_chn_sts0{YType::str, "rx_chn_sts0"},
    rx_chn_sts1{YType::str, "rx_chn_sts1"},
    rx_chn_sts2{YType::str, "rx_chn_sts2"},
    rx_chn_sts3{YType::str, "rx_chn_sts3"},
    rx_chn_sts4{YType::str, "rx_chn_sts4"},
    rx_chn_sts5{YType::str, "rx_chn_sts5"},
    rx_chn_sts6{YType::str, "rx_chn_sts6"},
    rx_chn_sts7{YType::str, "rx_chn_sts7"},
    rx_chn_sts8{YType::str, "rx_chn_sts8"},
    rx_chn_sts9{YType::str, "rx_chn_sts9"},
    rx_chn_sts10{YType::str, "rx_chn_sts10"},
    rx_chn_sts11{YType::str, "rx_chn_sts11"},
    rx_los0{YType::str, "rx_los0"},
    rx_los1{YType::str, "rx_los1"},
    rx_los2{YType::str, "rx_los2"},
    rx_los3{YType::str, "rx_los3"},
    rx_los4{YType::str, "rx_los4"},
    rx_los5{YType::str, "rx_los5"},
    rx_los6{YType::str, "rx_los6"},
    rx_los7{YType::str, "rx_los7"},
    rx_los8{YType::str, "rx_los8"},
    rx_los9{YType::str, "rx_los9"},
    rx_los10{YType::str, "rx_los10"},
    rx_los11{YType::str, "rx_los11"},
    rx_opt_pw_alm0{YType::str, "rx_opt_pw_alm0"},
    rx_opt_pw_alm1{YType::str, "rx_opt_pw_alm1"},
    rx_opt_pw_alm2{YType::str, "rx_opt_pw_alm2"},
    rx_opt_pw_alm3{YType::str, "rx_opt_pw_alm3"},
    rx_opt_pw_alm4{YType::str, "rx_opt_pw_alm4"},
    rx_opt_pw_alm5{YType::str, "rx_opt_pw_alm5"},
    rx_opt_pw_alm6{YType::str, "rx_opt_pw_alm6"},
    rx_opt_pw_alm7{YType::str, "rx_opt_pw_alm7"},
    rx_opt_pw_alm8{YType::str, "rx_opt_pw_alm8"},
    rx_opt_pw_alm9{YType::str, "rx_opt_pw_alm9"},
    rx_opt_pw_alm10{YType::str, "rx_opt_pw_alm10"},
    rx_opt_pw_alm11{YType::str, "rx_opt_pw_alm11"},
    rx_light_in_dbm0{YType::str, "rx_light_in_dBm0"},
    rx_light_in_dbm1{YType::str, "rx_light_in_dBm1"},
    rx_light_in_dbm2{YType::str, "rx_light_in_dBm2"},
    rx_light_in_dbm3{YType::str, "rx_light_in_dBm3"},
    rx_light_in_dbm4{YType::str, "rx_light_in_dBm4"},
    rx_light_in_dbm5{YType::str, "rx_light_in_dBm5"},
    rx_light_in_dbm6{YType::str, "rx_light_in_dBm6"},
    rx_light_in_dbm7{YType::str, "rx_light_in_dBm7"},
    rx_light_in_dbm8{YType::str, "rx_light_in_dBm8"},
    rx_light_in_dbm9{YType::str, "rx_light_in_dBm9"},
    rx_light_in_dbm10{YType::str, "rx_light_in_dBm10"},
    rx_light_in_dbm11{YType::str, "rx_light_in_dBm11"}
{

    yang_name = "port"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Cxp::Dom::Location::Port::~Port()
{
}

bool Controller::Fabric::Oper::Cxp::Dom::Location::Port::has_data() const
{
    if (is_presence_container) return true;
    return cxp_port.is_set
	|| show_port.is_set
	|| cxp2_display.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| cur_loc_str.is_set
	|| vendorname.is_set
	|| partnumber.is_set
	|| serialnumber.is_set
	|| vid.is_set
	|| pid.is_set
	|| vendor_rev_num.is_set
	|| vendor_pn.is_set
	|| vendor_sn.is_set
	|| dev_description.is_set
	|| clei_code_num.is_set
	|| ven_date_code.is_set
	|| ven_lot_code.is_set
	|| vendor_oui_ieee_company_id.is_set
	|| eeprom_rev_num.is_set
	|| firmware_rev_num.is_set
	|| tx_temp_rd.is_set
	|| tx_temp_sts.is_set
	|| tx_volt_sts.is_set
	|| tx_volt_rd.is_set
	|| tx_chn_sts0.is_set
	|| tx_chn_sts1.is_set
	|| tx_chn_sts2.is_set
	|| tx_chn_sts3.is_set
	|| tx_chn_sts4.is_set
	|| tx_chn_sts5.is_set
	|| tx_chn_sts6.is_set
	|| tx_chn_sts7.is_set
	|| tx_chn_sts8.is_set
	|| tx_chn_sts9.is_set
	|| tx_chn_sts10.is_set
	|| tx_chn_sts11.is_set
	|| tx_fault0.is_set
	|| tx_fault1.is_set
	|| tx_fault2.is_set
	|| tx_fault3.is_set
	|| tx_fault4.is_set
	|| tx_fault5.is_set
	|| tx_fault6.is_set
	|| tx_fault7.is_set
	|| tx_fault8.is_set
	|| tx_fault9.is_set
	|| tx_fault10.is_set
	|| tx_fault11.is_set
	|| tx_bias_cur0.is_set
	|| tx_bias_cur1.is_set
	|| tx_bias_cur2.is_set
	|| tx_bias_cur3.is_set
	|| tx_bias_cur4.is_set
	|| tx_bias_cur5.is_set
	|| tx_bias_cur6.is_set
	|| tx_bias_cur7.is_set
	|| tx_bias_cur8.is_set
	|| tx_bias_cur9.is_set
	|| tx_bias_cur10.is_set
	|| tx_bias_cur11.is_set
	|| tx_los0.is_set
	|| tx_los1.is_set
	|| tx_los2.is_set
	|| tx_los3.is_set
	|| tx_los4.is_set
	|| tx_los5.is_set
	|| tx_los6.is_set
	|| tx_los7.is_set
	|| tx_los8.is_set
	|| tx_los9.is_set
	|| tx_los10.is_set
	|| tx_los11.is_set
	|| tx_opt_pw_alm0.is_set
	|| tx_opt_pw_alm1.is_set
	|| tx_opt_pw_alm2.is_set
	|| tx_opt_pw_alm3.is_set
	|| tx_opt_pw_alm4.is_set
	|| tx_opt_pw_alm5.is_set
	|| tx_opt_pw_alm6.is_set
	|| tx_opt_pw_alm7.is_set
	|| tx_opt_pw_alm8.is_set
	|| tx_opt_pw_alm9.is_set
	|| tx_opt_pw_alm10.is_set
	|| tx_opt_pw_alm11.is_set
	|| tx_opt_bs_alm0.is_set
	|| tx_opt_bs_alm1.is_set
	|| tx_opt_bs_alm2.is_set
	|| tx_opt_bs_alm3.is_set
	|| tx_opt_bs_alm4.is_set
	|| tx_opt_bs_alm5.is_set
	|| tx_opt_bs_alm6.is_set
	|| tx_opt_bs_alm7.is_set
	|| tx_opt_bs_alm8.is_set
	|| tx_opt_bs_alm9.is_set
	|| tx_opt_bs_alm10.is_set
	|| tx_opt_bs_alm11.is_set
	|| tx_light_op_dbm0.is_set
	|| tx_light_op_dbm1.is_set
	|| tx_light_op_dbm2.is_set
	|| tx_light_op_dbm3.is_set
	|| tx_light_op_dbm4.is_set
	|| tx_light_op_dbm5.is_set
	|| tx_light_op_dbm6.is_set
	|| tx_light_op_dbm7.is_set
	|| tx_light_op_dbm8.is_set
	|| tx_light_op_dbm9.is_set
	|| tx_light_op_dbm10.is_set
	|| tx_light_op_dbm11.is_set
	|| rx_temp_rd.is_set
	|| rx_temp_sts.is_set
	|| rx_volt_sts.is_set
	|| rx_volt_rd.is_set
	|| rx_chn_sts0.is_set
	|| rx_chn_sts1.is_set
	|| rx_chn_sts2.is_set
	|| rx_chn_sts3.is_set
	|| rx_chn_sts4.is_set
	|| rx_chn_sts5.is_set
	|| rx_chn_sts6.is_set
	|| rx_chn_sts7.is_set
	|| rx_chn_sts8.is_set
	|| rx_chn_sts9.is_set
	|| rx_chn_sts10.is_set
	|| rx_chn_sts11.is_set
	|| rx_los0.is_set
	|| rx_los1.is_set
	|| rx_los2.is_set
	|| rx_los3.is_set
	|| rx_los4.is_set
	|| rx_los5.is_set
	|| rx_los6.is_set
	|| rx_los7.is_set
	|| rx_los8.is_set
	|| rx_los9.is_set
	|| rx_los10.is_set
	|| rx_los11.is_set
	|| rx_opt_pw_alm0.is_set
	|| rx_opt_pw_alm1.is_set
	|| rx_opt_pw_alm2.is_set
	|| rx_opt_pw_alm3.is_set
	|| rx_opt_pw_alm4.is_set
	|| rx_opt_pw_alm5.is_set
	|| rx_opt_pw_alm6.is_set
	|| rx_opt_pw_alm7.is_set
	|| rx_opt_pw_alm8.is_set
	|| rx_opt_pw_alm9.is_set
	|| rx_opt_pw_alm10.is_set
	|| rx_opt_pw_alm11.is_set
	|| rx_light_in_dbm0.is_set
	|| rx_light_in_dbm1.is_set
	|| rx_light_in_dbm2.is_set
	|| rx_light_in_dbm3.is_set
	|| rx_light_in_dbm4.is_set
	|| rx_light_in_dbm5.is_set
	|| rx_light_in_dbm6.is_set
	|| rx_light_in_dbm7.is_set
	|| rx_light_in_dbm8.is_set
	|| rx_light_in_dbm9.is_set
	|| rx_light_in_dbm10.is_set
	|| rx_light_in_dbm11.is_set;
}

bool Controller::Fabric::Oper::Cxp::Dom::Location::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cxp_port.yfilter)
	|| ydk::is_set(show_port.yfilter)
	|| ydk::is_set(cxp2_display.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(cur_loc_str.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(serialnumber.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vendor_rev_num.yfilter)
	|| ydk::is_set(vendor_pn.yfilter)
	|| ydk::is_set(vendor_sn.yfilter)
	|| ydk::is_set(dev_description.yfilter)
	|| ydk::is_set(clei_code_num.yfilter)
	|| ydk::is_set(ven_date_code.yfilter)
	|| ydk::is_set(ven_lot_code.yfilter)
	|| ydk::is_set(vendor_oui_ieee_company_id.yfilter)
	|| ydk::is_set(eeprom_rev_num.yfilter)
	|| ydk::is_set(firmware_rev_num.yfilter)
	|| ydk::is_set(tx_temp_rd.yfilter)
	|| ydk::is_set(tx_temp_sts.yfilter)
	|| ydk::is_set(tx_volt_sts.yfilter)
	|| ydk::is_set(tx_volt_rd.yfilter)
	|| ydk::is_set(tx_chn_sts0.yfilter)
	|| ydk::is_set(tx_chn_sts1.yfilter)
	|| ydk::is_set(tx_chn_sts2.yfilter)
	|| ydk::is_set(tx_chn_sts3.yfilter)
	|| ydk::is_set(tx_chn_sts4.yfilter)
	|| ydk::is_set(tx_chn_sts5.yfilter)
	|| ydk::is_set(tx_chn_sts6.yfilter)
	|| ydk::is_set(tx_chn_sts7.yfilter)
	|| ydk::is_set(tx_chn_sts8.yfilter)
	|| ydk::is_set(tx_chn_sts9.yfilter)
	|| ydk::is_set(tx_chn_sts10.yfilter)
	|| ydk::is_set(tx_chn_sts11.yfilter)
	|| ydk::is_set(tx_fault0.yfilter)
	|| ydk::is_set(tx_fault1.yfilter)
	|| ydk::is_set(tx_fault2.yfilter)
	|| ydk::is_set(tx_fault3.yfilter)
	|| ydk::is_set(tx_fault4.yfilter)
	|| ydk::is_set(tx_fault5.yfilter)
	|| ydk::is_set(tx_fault6.yfilter)
	|| ydk::is_set(tx_fault7.yfilter)
	|| ydk::is_set(tx_fault8.yfilter)
	|| ydk::is_set(tx_fault9.yfilter)
	|| ydk::is_set(tx_fault10.yfilter)
	|| ydk::is_set(tx_fault11.yfilter)
	|| ydk::is_set(tx_bias_cur0.yfilter)
	|| ydk::is_set(tx_bias_cur1.yfilter)
	|| ydk::is_set(tx_bias_cur2.yfilter)
	|| ydk::is_set(tx_bias_cur3.yfilter)
	|| ydk::is_set(tx_bias_cur4.yfilter)
	|| ydk::is_set(tx_bias_cur5.yfilter)
	|| ydk::is_set(tx_bias_cur6.yfilter)
	|| ydk::is_set(tx_bias_cur7.yfilter)
	|| ydk::is_set(tx_bias_cur8.yfilter)
	|| ydk::is_set(tx_bias_cur9.yfilter)
	|| ydk::is_set(tx_bias_cur10.yfilter)
	|| ydk::is_set(tx_bias_cur11.yfilter)
	|| ydk::is_set(tx_los0.yfilter)
	|| ydk::is_set(tx_los1.yfilter)
	|| ydk::is_set(tx_los2.yfilter)
	|| ydk::is_set(tx_los3.yfilter)
	|| ydk::is_set(tx_los4.yfilter)
	|| ydk::is_set(tx_los5.yfilter)
	|| ydk::is_set(tx_los6.yfilter)
	|| ydk::is_set(tx_los7.yfilter)
	|| ydk::is_set(tx_los8.yfilter)
	|| ydk::is_set(tx_los9.yfilter)
	|| ydk::is_set(tx_los10.yfilter)
	|| ydk::is_set(tx_los11.yfilter)
	|| ydk::is_set(tx_opt_pw_alm0.yfilter)
	|| ydk::is_set(tx_opt_pw_alm1.yfilter)
	|| ydk::is_set(tx_opt_pw_alm2.yfilter)
	|| ydk::is_set(tx_opt_pw_alm3.yfilter)
	|| ydk::is_set(tx_opt_pw_alm4.yfilter)
	|| ydk::is_set(tx_opt_pw_alm5.yfilter)
	|| ydk::is_set(tx_opt_pw_alm6.yfilter)
	|| ydk::is_set(tx_opt_pw_alm7.yfilter)
	|| ydk::is_set(tx_opt_pw_alm8.yfilter)
	|| ydk::is_set(tx_opt_pw_alm9.yfilter)
	|| ydk::is_set(tx_opt_pw_alm10.yfilter)
	|| ydk::is_set(tx_opt_pw_alm11.yfilter)
	|| ydk::is_set(tx_opt_bs_alm0.yfilter)
	|| ydk::is_set(tx_opt_bs_alm1.yfilter)
	|| ydk::is_set(tx_opt_bs_alm2.yfilter)
	|| ydk::is_set(tx_opt_bs_alm3.yfilter)
	|| ydk::is_set(tx_opt_bs_alm4.yfilter)
	|| ydk::is_set(tx_opt_bs_alm5.yfilter)
	|| ydk::is_set(tx_opt_bs_alm6.yfilter)
	|| ydk::is_set(tx_opt_bs_alm7.yfilter)
	|| ydk::is_set(tx_opt_bs_alm8.yfilter)
	|| ydk::is_set(tx_opt_bs_alm9.yfilter)
	|| ydk::is_set(tx_opt_bs_alm10.yfilter)
	|| ydk::is_set(tx_opt_bs_alm11.yfilter)
	|| ydk::is_set(tx_light_op_dbm0.yfilter)
	|| ydk::is_set(tx_light_op_dbm1.yfilter)
	|| ydk::is_set(tx_light_op_dbm2.yfilter)
	|| ydk::is_set(tx_light_op_dbm3.yfilter)
	|| ydk::is_set(tx_light_op_dbm4.yfilter)
	|| ydk::is_set(tx_light_op_dbm5.yfilter)
	|| ydk::is_set(tx_light_op_dbm6.yfilter)
	|| ydk::is_set(tx_light_op_dbm7.yfilter)
	|| ydk::is_set(tx_light_op_dbm8.yfilter)
	|| ydk::is_set(tx_light_op_dbm9.yfilter)
	|| ydk::is_set(tx_light_op_dbm10.yfilter)
	|| ydk::is_set(tx_light_op_dbm11.yfilter)
	|| ydk::is_set(rx_temp_rd.yfilter)
	|| ydk::is_set(rx_temp_sts.yfilter)
	|| ydk::is_set(rx_volt_sts.yfilter)
	|| ydk::is_set(rx_volt_rd.yfilter)
	|| ydk::is_set(rx_chn_sts0.yfilter)
	|| ydk::is_set(rx_chn_sts1.yfilter)
	|| ydk::is_set(rx_chn_sts2.yfilter)
	|| ydk::is_set(rx_chn_sts3.yfilter)
	|| ydk::is_set(rx_chn_sts4.yfilter)
	|| ydk::is_set(rx_chn_sts5.yfilter)
	|| ydk::is_set(rx_chn_sts6.yfilter)
	|| ydk::is_set(rx_chn_sts7.yfilter)
	|| ydk::is_set(rx_chn_sts8.yfilter)
	|| ydk::is_set(rx_chn_sts9.yfilter)
	|| ydk::is_set(rx_chn_sts10.yfilter)
	|| ydk::is_set(rx_chn_sts11.yfilter)
	|| ydk::is_set(rx_los0.yfilter)
	|| ydk::is_set(rx_los1.yfilter)
	|| ydk::is_set(rx_los2.yfilter)
	|| ydk::is_set(rx_los3.yfilter)
	|| ydk::is_set(rx_los4.yfilter)
	|| ydk::is_set(rx_los5.yfilter)
	|| ydk::is_set(rx_los6.yfilter)
	|| ydk::is_set(rx_los7.yfilter)
	|| ydk::is_set(rx_los8.yfilter)
	|| ydk::is_set(rx_los9.yfilter)
	|| ydk::is_set(rx_los10.yfilter)
	|| ydk::is_set(rx_los11.yfilter)
	|| ydk::is_set(rx_opt_pw_alm0.yfilter)
	|| ydk::is_set(rx_opt_pw_alm1.yfilter)
	|| ydk::is_set(rx_opt_pw_alm2.yfilter)
	|| ydk::is_set(rx_opt_pw_alm3.yfilter)
	|| ydk::is_set(rx_opt_pw_alm4.yfilter)
	|| ydk::is_set(rx_opt_pw_alm5.yfilter)
	|| ydk::is_set(rx_opt_pw_alm6.yfilter)
	|| ydk::is_set(rx_opt_pw_alm7.yfilter)
	|| ydk::is_set(rx_opt_pw_alm8.yfilter)
	|| ydk::is_set(rx_opt_pw_alm9.yfilter)
	|| ydk::is_set(rx_opt_pw_alm10.yfilter)
	|| ydk::is_set(rx_opt_pw_alm11.yfilter)
	|| ydk::is_set(rx_light_in_dbm0.yfilter)
	|| ydk::is_set(rx_light_in_dbm1.yfilter)
	|| ydk::is_set(rx_light_in_dbm2.yfilter)
	|| ydk::is_set(rx_light_in_dbm3.yfilter)
	|| ydk::is_set(rx_light_in_dbm4.yfilter)
	|| ydk::is_set(rx_light_in_dbm5.yfilter)
	|| ydk::is_set(rx_light_in_dbm6.yfilter)
	|| ydk::is_set(rx_light_in_dbm7.yfilter)
	|| ydk::is_set(rx_light_in_dbm8.yfilter)
	|| ydk::is_set(rx_light_in_dbm9.yfilter)
	|| ydk::is_set(rx_light_in_dbm10.yfilter)
	|| ydk::is_set(rx_light_in_dbm11.yfilter);
}

std::string Controller::Fabric::Oper::Cxp::Dom::Location::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(cxp_port, "cxp_port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Cxp::Dom::Location::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cxp_port.is_set || is_set(cxp_port.yfilter)) leaf_name_data.push_back(cxp_port.get_name_leafdata());
    if (show_port.is_set || is_set(show_port.yfilter)) leaf_name_data.push_back(show_port.get_name_leafdata());
    if (cxp2_display.is_set || is_set(cxp2_display.yfilter)) leaf_name_data.push_back(cxp2_display.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (cur_loc_str.is_set || is_set(cur_loc_str.yfilter)) leaf_name_data.push_back(cur_loc_str.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (serialnumber.is_set || is_set(serialnumber.yfilter)) leaf_name_data.push_back(serialnumber.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vendor_rev_num.is_set || is_set(vendor_rev_num.yfilter)) leaf_name_data.push_back(vendor_rev_num.get_name_leafdata());
    if (vendor_pn.is_set || is_set(vendor_pn.yfilter)) leaf_name_data.push_back(vendor_pn.get_name_leafdata());
    if (vendor_sn.is_set || is_set(vendor_sn.yfilter)) leaf_name_data.push_back(vendor_sn.get_name_leafdata());
    if (dev_description.is_set || is_set(dev_description.yfilter)) leaf_name_data.push_back(dev_description.get_name_leafdata());
    if (clei_code_num.is_set || is_set(clei_code_num.yfilter)) leaf_name_data.push_back(clei_code_num.get_name_leafdata());
    if (ven_date_code.is_set || is_set(ven_date_code.yfilter)) leaf_name_data.push_back(ven_date_code.get_name_leafdata());
    if (ven_lot_code.is_set || is_set(ven_lot_code.yfilter)) leaf_name_data.push_back(ven_lot_code.get_name_leafdata());
    if (vendor_oui_ieee_company_id.is_set || is_set(vendor_oui_ieee_company_id.yfilter)) leaf_name_data.push_back(vendor_oui_ieee_company_id.get_name_leafdata());
    if (eeprom_rev_num.is_set || is_set(eeprom_rev_num.yfilter)) leaf_name_data.push_back(eeprom_rev_num.get_name_leafdata());
    if (firmware_rev_num.is_set || is_set(firmware_rev_num.yfilter)) leaf_name_data.push_back(firmware_rev_num.get_name_leafdata());
    if (tx_temp_rd.is_set || is_set(tx_temp_rd.yfilter)) leaf_name_data.push_back(tx_temp_rd.get_name_leafdata());
    if (tx_temp_sts.is_set || is_set(tx_temp_sts.yfilter)) leaf_name_data.push_back(tx_temp_sts.get_name_leafdata());
    if (tx_volt_sts.is_set || is_set(tx_volt_sts.yfilter)) leaf_name_data.push_back(tx_volt_sts.get_name_leafdata());
    if (tx_volt_rd.is_set || is_set(tx_volt_rd.yfilter)) leaf_name_data.push_back(tx_volt_rd.get_name_leafdata());
    if (tx_chn_sts0.is_set || is_set(tx_chn_sts0.yfilter)) leaf_name_data.push_back(tx_chn_sts0.get_name_leafdata());
    if (tx_chn_sts1.is_set || is_set(tx_chn_sts1.yfilter)) leaf_name_data.push_back(tx_chn_sts1.get_name_leafdata());
    if (tx_chn_sts2.is_set || is_set(tx_chn_sts2.yfilter)) leaf_name_data.push_back(tx_chn_sts2.get_name_leafdata());
    if (tx_chn_sts3.is_set || is_set(tx_chn_sts3.yfilter)) leaf_name_data.push_back(tx_chn_sts3.get_name_leafdata());
    if (tx_chn_sts4.is_set || is_set(tx_chn_sts4.yfilter)) leaf_name_data.push_back(tx_chn_sts4.get_name_leafdata());
    if (tx_chn_sts5.is_set || is_set(tx_chn_sts5.yfilter)) leaf_name_data.push_back(tx_chn_sts5.get_name_leafdata());
    if (tx_chn_sts6.is_set || is_set(tx_chn_sts6.yfilter)) leaf_name_data.push_back(tx_chn_sts6.get_name_leafdata());
    if (tx_chn_sts7.is_set || is_set(tx_chn_sts7.yfilter)) leaf_name_data.push_back(tx_chn_sts7.get_name_leafdata());
    if (tx_chn_sts8.is_set || is_set(tx_chn_sts8.yfilter)) leaf_name_data.push_back(tx_chn_sts8.get_name_leafdata());
    if (tx_chn_sts9.is_set || is_set(tx_chn_sts9.yfilter)) leaf_name_data.push_back(tx_chn_sts9.get_name_leafdata());
    if (tx_chn_sts10.is_set || is_set(tx_chn_sts10.yfilter)) leaf_name_data.push_back(tx_chn_sts10.get_name_leafdata());
    if (tx_chn_sts11.is_set || is_set(tx_chn_sts11.yfilter)) leaf_name_data.push_back(tx_chn_sts11.get_name_leafdata());
    if (tx_fault0.is_set || is_set(tx_fault0.yfilter)) leaf_name_data.push_back(tx_fault0.get_name_leafdata());
    if (tx_fault1.is_set || is_set(tx_fault1.yfilter)) leaf_name_data.push_back(tx_fault1.get_name_leafdata());
    if (tx_fault2.is_set || is_set(tx_fault2.yfilter)) leaf_name_data.push_back(tx_fault2.get_name_leafdata());
    if (tx_fault3.is_set || is_set(tx_fault3.yfilter)) leaf_name_data.push_back(tx_fault3.get_name_leafdata());
    if (tx_fault4.is_set || is_set(tx_fault4.yfilter)) leaf_name_data.push_back(tx_fault4.get_name_leafdata());
    if (tx_fault5.is_set || is_set(tx_fault5.yfilter)) leaf_name_data.push_back(tx_fault5.get_name_leafdata());
    if (tx_fault6.is_set || is_set(tx_fault6.yfilter)) leaf_name_data.push_back(tx_fault6.get_name_leafdata());
    if (tx_fault7.is_set || is_set(tx_fault7.yfilter)) leaf_name_data.push_back(tx_fault7.get_name_leafdata());
    if (tx_fault8.is_set || is_set(tx_fault8.yfilter)) leaf_name_data.push_back(tx_fault8.get_name_leafdata());
    if (tx_fault9.is_set || is_set(tx_fault9.yfilter)) leaf_name_data.push_back(tx_fault9.get_name_leafdata());
    if (tx_fault10.is_set || is_set(tx_fault10.yfilter)) leaf_name_data.push_back(tx_fault10.get_name_leafdata());
    if (tx_fault11.is_set || is_set(tx_fault11.yfilter)) leaf_name_data.push_back(tx_fault11.get_name_leafdata());
    if (tx_bias_cur0.is_set || is_set(tx_bias_cur0.yfilter)) leaf_name_data.push_back(tx_bias_cur0.get_name_leafdata());
    if (tx_bias_cur1.is_set || is_set(tx_bias_cur1.yfilter)) leaf_name_data.push_back(tx_bias_cur1.get_name_leafdata());
    if (tx_bias_cur2.is_set || is_set(tx_bias_cur2.yfilter)) leaf_name_data.push_back(tx_bias_cur2.get_name_leafdata());
    if (tx_bias_cur3.is_set || is_set(tx_bias_cur3.yfilter)) leaf_name_data.push_back(tx_bias_cur3.get_name_leafdata());
    if (tx_bias_cur4.is_set || is_set(tx_bias_cur4.yfilter)) leaf_name_data.push_back(tx_bias_cur4.get_name_leafdata());
    if (tx_bias_cur5.is_set || is_set(tx_bias_cur5.yfilter)) leaf_name_data.push_back(tx_bias_cur5.get_name_leafdata());
    if (tx_bias_cur6.is_set || is_set(tx_bias_cur6.yfilter)) leaf_name_data.push_back(tx_bias_cur6.get_name_leafdata());
    if (tx_bias_cur7.is_set || is_set(tx_bias_cur7.yfilter)) leaf_name_data.push_back(tx_bias_cur7.get_name_leafdata());
    if (tx_bias_cur8.is_set || is_set(tx_bias_cur8.yfilter)) leaf_name_data.push_back(tx_bias_cur8.get_name_leafdata());
    if (tx_bias_cur9.is_set || is_set(tx_bias_cur9.yfilter)) leaf_name_data.push_back(tx_bias_cur9.get_name_leafdata());
    if (tx_bias_cur10.is_set || is_set(tx_bias_cur10.yfilter)) leaf_name_data.push_back(tx_bias_cur10.get_name_leafdata());
    if (tx_bias_cur11.is_set || is_set(tx_bias_cur11.yfilter)) leaf_name_data.push_back(tx_bias_cur11.get_name_leafdata());
    if (tx_los0.is_set || is_set(tx_los0.yfilter)) leaf_name_data.push_back(tx_los0.get_name_leafdata());
    if (tx_los1.is_set || is_set(tx_los1.yfilter)) leaf_name_data.push_back(tx_los1.get_name_leafdata());
    if (tx_los2.is_set || is_set(tx_los2.yfilter)) leaf_name_data.push_back(tx_los2.get_name_leafdata());
    if (tx_los3.is_set || is_set(tx_los3.yfilter)) leaf_name_data.push_back(tx_los3.get_name_leafdata());
    if (tx_los4.is_set || is_set(tx_los4.yfilter)) leaf_name_data.push_back(tx_los4.get_name_leafdata());
    if (tx_los5.is_set || is_set(tx_los5.yfilter)) leaf_name_data.push_back(tx_los5.get_name_leafdata());
    if (tx_los6.is_set || is_set(tx_los6.yfilter)) leaf_name_data.push_back(tx_los6.get_name_leafdata());
    if (tx_los7.is_set || is_set(tx_los7.yfilter)) leaf_name_data.push_back(tx_los7.get_name_leafdata());
    if (tx_los8.is_set || is_set(tx_los8.yfilter)) leaf_name_data.push_back(tx_los8.get_name_leafdata());
    if (tx_los9.is_set || is_set(tx_los9.yfilter)) leaf_name_data.push_back(tx_los9.get_name_leafdata());
    if (tx_los10.is_set || is_set(tx_los10.yfilter)) leaf_name_data.push_back(tx_los10.get_name_leafdata());
    if (tx_los11.is_set || is_set(tx_los11.yfilter)) leaf_name_data.push_back(tx_los11.get_name_leafdata());
    if (tx_opt_pw_alm0.is_set || is_set(tx_opt_pw_alm0.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm0.get_name_leafdata());
    if (tx_opt_pw_alm1.is_set || is_set(tx_opt_pw_alm1.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm1.get_name_leafdata());
    if (tx_opt_pw_alm2.is_set || is_set(tx_opt_pw_alm2.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm2.get_name_leafdata());
    if (tx_opt_pw_alm3.is_set || is_set(tx_opt_pw_alm3.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm3.get_name_leafdata());
    if (tx_opt_pw_alm4.is_set || is_set(tx_opt_pw_alm4.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm4.get_name_leafdata());
    if (tx_opt_pw_alm5.is_set || is_set(tx_opt_pw_alm5.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm5.get_name_leafdata());
    if (tx_opt_pw_alm6.is_set || is_set(tx_opt_pw_alm6.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm6.get_name_leafdata());
    if (tx_opt_pw_alm7.is_set || is_set(tx_opt_pw_alm7.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm7.get_name_leafdata());
    if (tx_opt_pw_alm8.is_set || is_set(tx_opt_pw_alm8.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm8.get_name_leafdata());
    if (tx_opt_pw_alm9.is_set || is_set(tx_opt_pw_alm9.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm9.get_name_leafdata());
    if (tx_opt_pw_alm10.is_set || is_set(tx_opt_pw_alm10.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm10.get_name_leafdata());
    if (tx_opt_pw_alm11.is_set || is_set(tx_opt_pw_alm11.yfilter)) leaf_name_data.push_back(tx_opt_pw_alm11.get_name_leafdata());
    if (tx_opt_bs_alm0.is_set || is_set(tx_opt_bs_alm0.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm0.get_name_leafdata());
    if (tx_opt_bs_alm1.is_set || is_set(tx_opt_bs_alm1.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm1.get_name_leafdata());
    if (tx_opt_bs_alm2.is_set || is_set(tx_opt_bs_alm2.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm2.get_name_leafdata());
    if (tx_opt_bs_alm3.is_set || is_set(tx_opt_bs_alm3.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm3.get_name_leafdata());
    if (tx_opt_bs_alm4.is_set || is_set(tx_opt_bs_alm4.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm4.get_name_leafdata());
    if (tx_opt_bs_alm5.is_set || is_set(tx_opt_bs_alm5.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm5.get_name_leafdata());
    if (tx_opt_bs_alm6.is_set || is_set(tx_opt_bs_alm6.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm6.get_name_leafdata());
    if (tx_opt_bs_alm7.is_set || is_set(tx_opt_bs_alm7.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm7.get_name_leafdata());
    if (tx_opt_bs_alm8.is_set || is_set(tx_opt_bs_alm8.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm8.get_name_leafdata());
    if (tx_opt_bs_alm9.is_set || is_set(tx_opt_bs_alm9.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm9.get_name_leafdata());
    if (tx_opt_bs_alm10.is_set || is_set(tx_opt_bs_alm10.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm10.get_name_leafdata());
    if (tx_opt_bs_alm11.is_set || is_set(tx_opt_bs_alm11.yfilter)) leaf_name_data.push_back(tx_opt_bs_alm11.get_name_leafdata());
    if (tx_light_op_dbm0.is_set || is_set(tx_light_op_dbm0.yfilter)) leaf_name_data.push_back(tx_light_op_dbm0.get_name_leafdata());
    if (tx_light_op_dbm1.is_set || is_set(tx_light_op_dbm1.yfilter)) leaf_name_data.push_back(tx_light_op_dbm1.get_name_leafdata());
    if (tx_light_op_dbm2.is_set || is_set(tx_light_op_dbm2.yfilter)) leaf_name_data.push_back(tx_light_op_dbm2.get_name_leafdata());
    if (tx_light_op_dbm3.is_set || is_set(tx_light_op_dbm3.yfilter)) leaf_name_data.push_back(tx_light_op_dbm3.get_name_leafdata());
    if (tx_light_op_dbm4.is_set || is_set(tx_light_op_dbm4.yfilter)) leaf_name_data.push_back(tx_light_op_dbm4.get_name_leafdata());
    if (tx_light_op_dbm5.is_set || is_set(tx_light_op_dbm5.yfilter)) leaf_name_data.push_back(tx_light_op_dbm5.get_name_leafdata());
    if (tx_light_op_dbm6.is_set || is_set(tx_light_op_dbm6.yfilter)) leaf_name_data.push_back(tx_light_op_dbm6.get_name_leafdata());
    if (tx_light_op_dbm7.is_set || is_set(tx_light_op_dbm7.yfilter)) leaf_name_data.push_back(tx_light_op_dbm7.get_name_leafdata());
    if (tx_light_op_dbm8.is_set || is_set(tx_light_op_dbm8.yfilter)) leaf_name_data.push_back(tx_light_op_dbm8.get_name_leafdata());
    if (tx_light_op_dbm9.is_set || is_set(tx_light_op_dbm9.yfilter)) leaf_name_data.push_back(tx_light_op_dbm9.get_name_leafdata());
    if (tx_light_op_dbm10.is_set || is_set(tx_light_op_dbm10.yfilter)) leaf_name_data.push_back(tx_light_op_dbm10.get_name_leafdata());
    if (tx_light_op_dbm11.is_set || is_set(tx_light_op_dbm11.yfilter)) leaf_name_data.push_back(tx_light_op_dbm11.get_name_leafdata());
    if (rx_temp_rd.is_set || is_set(rx_temp_rd.yfilter)) leaf_name_data.push_back(rx_temp_rd.get_name_leafdata());
    if (rx_temp_sts.is_set || is_set(rx_temp_sts.yfilter)) leaf_name_data.push_back(rx_temp_sts.get_name_leafdata());
    if (rx_volt_sts.is_set || is_set(rx_volt_sts.yfilter)) leaf_name_data.push_back(rx_volt_sts.get_name_leafdata());
    if (rx_volt_rd.is_set || is_set(rx_volt_rd.yfilter)) leaf_name_data.push_back(rx_volt_rd.get_name_leafdata());
    if (rx_chn_sts0.is_set || is_set(rx_chn_sts0.yfilter)) leaf_name_data.push_back(rx_chn_sts0.get_name_leafdata());
    if (rx_chn_sts1.is_set || is_set(rx_chn_sts1.yfilter)) leaf_name_data.push_back(rx_chn_sts1.get_name_leafdata());
    if (rx_chn_sts2.is_set || is_set(rx_chn_sts2.yfilter)) leaf_name_data.push_back(rx_chn_sts2.get_name_leafdata());
    if (rx_chn_sts3.is_set || is_set(rx_chn_sts3.yfilter)) leaf_name_data.push_back(rx_chn_sts3.get_name_leafdata());
    if (rx_chn_sts4.is_set || is_set(rx_chn_sts4.yfilter)) leaf_name_data.push_back(rx_chn_sts4.get_name_leafdata());
    if (rx_chn_sts5.is_set || is_set(rx_chn_sts5.yfilter)) leaf_name_data.push_back(rx_chn_sts5.get_name_leafdata());
    if (rx_chn_sts6.is_set || is_set(rx_chn_sts6.yfilter)) leaf_name_data.push_back(rx_chn_sts6.get_name_leafdata());
    if (rx_chn_sts7.is_set || is_set(rx_chn_sts7.yfilter)) leaf_name_data.push_back(rx_chn_sts7.get_name_leafdata());
    if (rx_chn_sts8.is_set || is_set(rx_chn_sts8.yfilter)) leaf_name_data.push_back(rx_chn_sts8.get_name_leafdata());
    if (rx_chn_sts9.is_set || is_set(rx_chn_sts9.yfilter)) leaf_name_data.push_back(rx_chn_sts9.get_name_leafdata());
    if (rx_chn_sts10.is_set || is_set(rx_chn_sts10.yfilter)) leaf_name_data.push_back(rx_chn_sts10.get_name_leafdata());
    if (rx_chn_sts11.is_set || is_set(rx_chn_sts11.yfilter)) leaf_name_data.push_back(rx_chn_sts11.get_name_leafdata());
    if (rx_los0.is_set || is_set(rx_los0.yfilter)) leaf_name_data.push_back(rx_los0.get_name_leafdata());
    if (rx_los1.is_set || is_set(rx_los1.yfilter)) leaf_name_data.push_back(rx_los1.get_name_leafdata());
    if (rx_los2.is_set || is_set(rx_los2.yfilter)) leaf_name_data.push_back(rx_los2.get_name_leafdata());
    if (rx_los3.is_set || is_set(rx_los3.yfilter)) leaf_name_data.push_back(rx_los3.get_name_leafdata());
    if (rx_los4.is_set || is_set(rx_los4.yfilter)) leaf_name_data.push_back(rx_los4.get_name_leafdata());
    if (rx_los5.is_set || is_set(rx_los5.yfilter)) leaf_name_data.push_back(rx_los5.get_name_leafdata());
    if (rx_los6.is_set || is_set(rx_los6.yfilter)) leaf_name_data.push_back(rx_los6.get_name_leafdata());
    if (rx_los7.is_set || is_set(rx_los7.yfilter)) leaf_name_data.push_back(rx_los7.get_name_leafdata());
    if (rx_los8.is_set || is_set(rx_los8.yfilter)) leaf_name_data.push_back(rx_los8.get_name_leafdata());
    if (rx_los9.is_set || is_set(rx_los9.yfilter)) leaf_name_data.push_back(rx_los9.get_name_leafdata());
    if (rx_los10.is_set || is_set(rx_los10.yfilter)) leaf_name_data.push_back(rx_los10.get_name_leafdata());
    if (rx_los11.is_set || is_set(rx_los11.yfilter)) leaf_name_data.push_back(rx_los11.get_name_leafdata());
    if (rx_opt_pw_alm0.is_set || is_set(rx_opt_pw_alm0.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm0.get_name_leafdata());
    if (rx_opt_pw_alm1.is_set || is_set(rx_opt_pw_alm1.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm1.get_name_leafdata());
    if (rx_opt_pw_alm2.is_set || is_set(rx_opt_pw_alm2.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm2.get_name_leafdata());
    if (rx_opt_pw_alm3.is_set || is_set(rx_opt_pw_alm3.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm3.get_name_leafdata());
    if (rx_opt_pw_alm4.is_set || is_set(rx_opt_pw_alm4.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm4.get_name_leafdata());
    if (rx_opt_pw_alm5.is_set || is_set(rx_opt_pw_alm5.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm5.get_name_leafdata());
    if (rx_opt_pw_alm6.is_set || is_set(rx_opt_pw_alm6.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm6.get_name_leafdata());
    if (rx_opt_pw_alm7.is_set || is_set(rx_opt_pw_alm7.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm7.get_name_leafdata());
    if (rx_opt_pw_alm8.is_set || is_set(rx_opt_pw_alm8.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm8.get_name_leafdata());
    if (rx_opt_pw_alm9.is_set || is_set(rx_opt_pw_alm9.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm9.get_name_leafdata());
    if (rx_opt_pw_alm10.is_set || is_set(rx_opt_pw_alm10.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm10.get_name_leafdata());
    if (rx_opt_pw_alm11.is_set || is_set(rx_opt_pw_alm11.yfilter)) leaf_name_data.push_back(rx_opt_pw_alm11.get_name_leafdata());
    if (rx_light_in_dbm0.is_set || is_set(rx_light_in_dbm0.yfilter)) leaf_name_data.push_back(rx_light_in_dbm0.get_name_leafdata());
    if (rx_light_in_dbm1.is_set || is_set(rx_light_in_dbm1.yfilter)) leaf_name_data.push_back(rx_light_in_dbm1.get_name_leafdata());
    if (rx_light_in_dbm2.is_set || is_set(rx_light_in_dbm2.yfilter)) leaf_name_data.push_back(rx_light_in_dbm2.get_name_leafdata());
    if (rx_light_in_dbm3.is_set || is_set(rx_light_in_dbm3.yfilter)) leaf_name_data.push_back(rx_light_in_dbm3.get_name_leafdata());
    if (rx_light_in_dbm4.is_set || is_set(rx_light_in_dbm4.yfilter)) leaf_name_data.push_back(rx_light_in_dbm4.get_name_leafdata());
    if (rx_light_in_dbm5.is_set || is_set(rx_light_in_dbm5.yfilter)) leaf_name_data.push_back(rx_light_in_dbm5.get_name_leafdata());
    if (rx_light_in_dbm6.is_set || is_set(rx_light_in_dbm6.yfilter)) leaf_name_data.push_back(rx_light_in_dbm6.get_name_leafdata());
    if (rx_light_in_dbm7.is_set || is_set(rx_light_in_dbm7.yfilter)) leaf_name_data.push_back(rx_light_in_dbm7.get_name_leafdata());
    if (rx_light_in_dbm8.is_set || is_set(rx_light_in_dbm8.yfilter)) leaf_name_data.push_back(rx_light_in_dbm8.get_name_leafdata());
    if (rx_light_in_dbm9.is_set || is_set(rx_light_in_dbm9.yfilter)) leaf_name_data.push_back(rx_light_in_dbm9.get_name_leafdata());
    if (rx_light_in_dbm10.is_set || is_set(rx_light_in_dbm10.yfilter)) leaf_name_data.push_back(rx_light_in_dbm10.get_name_leafdata());
    if (rx_light_in_dbm11.is_set || is_set(rx_light_in_dbm11.yfilter)) leaf_name_data.push_back(rx_light_in_dbm11.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Cxp::Dom::Location::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Cxp::Dom::Location::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Cxp::Dom::Location::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cxp_port")
    {
        cxp_port = value;
        cxp_port.value_namespace = name_space;
        cxp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_port")
    {
        show_port = value;
        show_port.value_namespace = name_space;
        show_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp2_display")
    {
        cxp2_display = value;
        cxp2_display.value_namespace = name_space;
        cxp2_display.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot_num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur_loc_str")
    {
        cur_loc_str = value;
        cur_loc_str.value_namespace = name_space;
        cur_loc_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorname")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partnumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialnumber")
    {
        serialnumber = value;
        serialnumber.value_namespace = name_space;
        serialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor_rev_num")
    {
        vendor_rev_num = value;
        vendor_rev_num.value_namespace = name_space;
        vendor_rev_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor_pn")
    {
        vendor_pn = value;
        vendor_pn.value_namespace = name_space;
        vendor_pn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor_sn")
    {
        vendor_sn = value;
        vendor_sn.value_namespace = name_space;
        vendor_sn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dev_description")
    {
        dev_description = value;
        dev_description.value_namespace = name_space;
        dev_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei_code_num")
    {
        clei_code_num = value;
        clei_code_num.value_namespace = name_space;
        clei_code_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ven_date_code")
    {
        ven_date_code = value;
        ven_date_code.value_namespace = name_space;
        ven_date_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ven_lot_code")
    {
        ven_lot_code = value;
        ven_lot_code.value_namespace = name_space;
        ven_lot_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor_oui_ieee_company_id")
    {
        vendor_oui_ieee_company_id = value;
        vendor_oui_ieee_company_id.value_namespace = name_space;
        vendor_oui_ieee_company_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeprom_rev_num")
    {
        eeprom_rev_num = value;
        eeprom_rev_num.value_namespace = name_space;
        eeprom_rev_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware_rev_num")
    {
        firmware_rev_num = value;
        firmware_rev_num.value_namespace = name_space;
        firmware_rev_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_temp_rd")
    {
        tx_temp_rd = value;
        tx_temp_rd.value_namespace = name_space;
        tx_temp_rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_temp_sts")
    {
        tx_temp_sts = value;
        tx_temp_sts.value_namespace = name_space;
        tx_temp_sts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_volt_sts")
    {
        tx_volt_sts = value;
        tx_volt_sts.value_namespace = name_space;
        tx_volt_sts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_volt_rd")
    {
        tx_volt_rd = value;
        tx_volt_rd.value_namespace = name_space;
        tx_volt_rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts0")
    {
        tx_chn_sts0 = value;
        tx_chn_sts0.value_namespace = name_space;
        tx_chn_sts0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts1")
    {
        tx_chn_sts1 = value;
        tx_chn_sts1.value_namespace = name_space;
        tx_chn_sts1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts2")
    {
        tx_chn_sts2 = value;
        tx_chn_sts2.value_namespace = name_space;
        tx_chn_sts2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts3")
    {
        tx_chn_sts3 = value;
        tx_chn_sts3.value_namespace = name_space;
        tx_chn_sts3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts4")
    {
        tx_chn_sts4 = value;
        tx_chn_sts4.value_namespace = name_space;
        tx_chn_sts4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts5")
    {
        tx_chn_sts5 = value;
        tx_chn_sts5.value_namespace = name_space;
        tx_chn_sts5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts6")
    {
        tx_chn_sts6 = value;
        tx_chn_sts6.value_namespace = name_space;
        tx_chn_sts6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts7")
    {
        tx_chn_sts7 = value;
        tx_chn_sts7.value_namespace = name_space;
        tx_chn_sts7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts8")
    {
        tx_chn_sts8 = value;
        tx_chn_sts8.value_namespace = name_space;
        tx_chn_sts8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts9")
    {
        tx_chn_sts9 = value;
        tx_chn_sts9.value_namespace = name_space;
        tx_chn_sts9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts10")
    {
        tx_chn_sts10 = value;
        tx_chn_sts10.value_namespace = name_space;
        tx_chn_sts10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_chn_sts11")
    {
        tx_chn_sts11 = value;
        tx_chn_sts11.value_namespace = name_space;
        tx_chn_sts11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault0")
    {
        tx_fault0 = value;
        tx_fault0.value_namespace = name_space;
        tx_fault0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault1")
    {
        tx_fault1 = value;
        tx_fault1.value_namespace = name_space;
        tx_fault1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault2")
    {
        tx_fault2 = value;
        tx_fault2.value_namespace = name_space;
        tx_fault2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault3")
    {
        tx_fault3 = value;
        tx_fault3.value_namespace = name_space;
        tx_fault3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault4")
    {
        tx_fault4 = value;
        tx_fault4.value_namespace = name_space;
        tx_fault4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault5")
    {
        tx_fault5 = value;
        tx_fault5.value_namespace = name_space;
        tx_fault5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault6")
    {
        tx_fault6 = value;
        tx_fault6.value_namespace = name_space;
        tx_fault6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault7")
    {
        tx_fault7 = value;
        tx_fault7.value_namespace = name_space;
        tx_fault7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault8")
    {
        tx_fault8 = value;
        tx_fault8.value_namespace = name_space;
        tx_fault8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault9")
    {
        tx_fault9 = value;
        tx_fault9.value_namespace = name_space;
        tx_fault9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault10")
    {
        tx_fault10 = value;
        tx_fault10.value_namespace = name_space;
        tx_fault10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_fault11")
    {
        tx_fault11 = value;
        tx_fault11.value_namespace = name_space;
        tx_fault11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur0")
    {
        tx_bias_cur0 = value;
        tx_bias_cur0.value_namespace = name_space;
        tx_bias_cur0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur1")
    {
        tx_bias_cur1 = value;
        tx_bias_cur1.value_namespace = name_space;
        tx_bias_cur1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur2")
    {
        tx_bias_cur2 = value;
        tx_bias_cur2.value_namespace = name_space;
        tx_bias_cur2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur3")
    {
        tx_bias_cur3 = value;
        tx_bias_cur3.value_namespace = name_space;
        tx_bias_cur3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur4")
    {
        tx_bias_cur4 = value;
        tx_bias_cur4.value_namespace = name_space;
        tx_bias_cur4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur5")
    {
        tx_bias_cur5 = value;
        tx_bias_cur5.value_namespace = name_space;
        tx_bias_cur5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur6")
    {
        tx_bias_cur6 = value;
        tx_bias_cur6.value_namespace = name_space;
        tx_bias_cur6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur7")
    {
        tx_bias_cur7 = value;
        tx_bias_cur7.value_namespace = name_space;
        tx_bias_cur7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur8")
    {
        tx_bias_cur8 = value;
        tx_bias_cur8.value_namespace = name_space;
        tx_bias_cur8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur9")
    {
        tx_bias_cur9 = value;
        tx_bias_cur9.value_namespace = name_space;
        tx_bias_cur9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur10")
    {
        tx_bias_cur10 = value;
        tx_bias_cur10.value_namespace = name_space;
        tx_bias_cur10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_bias_cur11")
    {
        tx_bias_cur11 = value;
        tx_bias_cur11.value_namespace = name_space;
        tx_bias_cur11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los0")
    {
        tx_los0 = value;
        tx_los0.value_namespace = name_space;
        tx_los0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los1")
    {
        tx_los1 = value;
        tx_los1.value_namespace = name_space;
        tx_los1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los2")
    {
        tx_los2 = value;
        tx_los2.value_namespace = name_space;
        tx_los2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los3")
    {
        tx_los3 = value;
        tx_los3.value_namespace = name_space;
        tx_los3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los4")
    {
        tx_los4 = value;
        tx_los4.value_namespace = name_space;
        tx_los4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los5")
    {
        tx_los5 = value;
        tx_los5.value_namespace = name_space;
        tx_los5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los6")
    {
        tx_los6 = value;
        tx_los6.value_namespace = name_space;
        tx_los6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los7")
    {
        tx_los7 = value;
        tx_los7.value_namespace = name_space;
        tx_los7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los8")
    {
        tx_los8 = value;
        tx_los8.value_namespace = name_space;
        tx_los8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los9")
    {
        tx_los9 = value;
        tx_los9.value_namespace = name_space;
        tx_los9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los10")
    {
        tx_los10 = value;
        tx_los10.value_namespace = name_space;
        tx_los10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_los11")
    {
        tx_los11 = value;
        tx_los11.value_namespace = name_space;
        tx_los11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm0")
    {
        tx_opt_pw_alm0 = value;
        tx_opt_pw_alm0.value_namespace = name_space;
        tx_opt_pw_alm0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm1")
    {
        tx_opt_pw_alm1 = value;
        tx_opt_pw_alm1.value_namespace = name_space;
        tx_opt_pw_alm1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm2")
    {
        tx_opt_pw_alm2 = value;
        tx_opt_pw_alm2.value_namespace = name_space;
        tx_opt_pw_alm2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm3")
    {
        tx_opt_pw_alm3 = value;
        tx_opt_pw_alm3.value_namespace = name_space;
        tx_opt_pw_alm3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm4")
    {
        tx_opt_pw_alm4 = value;
        tx_opt_pw_alm4.value_namespace = name_space;
        tx_opt_pw_alm4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm5")
    {
        tx_opt_pw_alm5 = value;
        tx_opt_pw_alm5.value_namespace = name_space;
        tx_opt_pw_alm5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm6")
    {
        tx_opt_pw_alm6 = value;
        tx_opt_pw_alm6.value_namespace = name_space;
        tx_opt_pw_alm6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm7")
    {
        tx_opt_pw_alm7 = value;
        tx_opt_pw_alm7.value_namespace = name_space;
        tx_opt_pw_alm7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm8")
    {
        tx_opt_pw_alm8 = value;
        tx_opt_pw_alm8.value_namespace = name_space;
        tx_opt_pw_alm8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm9")
    {
        tx_opt_pw_alm9 = value;
        tx_opt_pw_alm9.value_namespace = name_space;
        tx_opt_pw_alm9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm10")
    {
        tx_opt_pw_alm10 = value;
        tx_opt_pw_alm10.value_namespace = name_space;
        tx_opt_pw_alm10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_pw_alm11")
    {
        tx_opt_pw_alm11 = value;
        tx_opt_pw_alm11.value_namespace = name_space;
        tx_opt_pw_alm11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm0")
    {
        tx_opt_bs_alm0 = value;
        tx_opt_bs_alm0.value_namespace = name_space;
        tx_opt_bs_alm0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm1")
    {
        tx_opt_bs_alm1 = value;
        tx_opt_bs_alm1.value_namespace = name_space;
        tx_opt_bs_alm1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm2")
    {
        tx_opt_bs_alm2 = value;
        tx_opt_bs_alm2.value_namespace = name_space;
        tx_opt_bs_alm2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm3")
    {
        tx_opt_bs_alm3 = value;
        tx_opt_bs_alm3.value_namespace = name_space;
        tx_opt_bs_alm3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm4")
    {
        tx_opt_bs_alm4 = value;
        tx_opt_bs_alm4.value_namespace = name_space;
        tx_opt_bs_alm4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm5")
    {
        tx_opt_bs_alm5 = value;
        tx_opt_bs_alm5.value_namespace = name_space;
        tx_opt_bs_alm5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm6")
    {
        tx_opt_bs_alm6 = value;
        tx_opt_bs_alm6.value_namespace = name_space;
        tx_opt_bs_alm6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm7")
    {
        tx_opt_bs_alm7 = value;
        tx_opt_bs_alm7.value_namespace = name_space;
        tx_opt_bs_alm7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm8")
    {
        tx_opt_bs_alm8 = value;
        tx_opt_bs_alm8.value_namespace = name_space;
        tx_opt_bs_alm8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm9")
    {
        tx_opt_bs_alm9 = value;
        tx_opt_bs_alm9.value_namespace = name_space;
        tx_opt_bs_alm9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm10")
    {
        tx_opt_bs_alm10 = value;
        tx_opt_bs_alm10.value_namespace = name_space;
        tx_opt_bs_alm10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_opt_bs_alm11")
    {
        tx_opt_bs_alm11 = value;
        tx_opt_bs_alm11.value_namespace = name_space;
        tx_opt_bs_alm11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm0")
    {
        tx_light_op_dbm0 = value;
        tx_light_op_dbm0.value_namespace = name_space;
        tx_light_op_dbm0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm1")
    {
        tx_light_op_dbm1 = value;
        tx_light_op_dbm1.value_namespace = name_space;
        tx_light_op_dbm1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm2")
    {
        tx_light_op_dbm2 = value;
        tx_light_op_dbm2.value_namespace = name_space;
        tx_light_op_dbm2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm3")
    {
        tx_light_op_dbm3 = value;
        tx_light_op_dbm3.value_namespace = name_space;
        tx_light_op_dbm3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm4")
    {
        tx_light_op_dbm4 = value;
        tx_light_op_dbm4.value_namespace = name_space;
        tx_light_op_dbm4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm5")
    {
        tx_light_op_dbm5 = value;
        tx_light_op_dbm5.value_namespace = name_space;
        tx_light_op_dbm5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm6")
    {
        tx_light_op_dbm6 = value;
        tx_light_op_dbm6.value_namespace = name_space;
        tx_light_op_dbm6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm7")
    {
        tx_light_op_dbm7 = value;
        tx_light_op_dbm7.value_namespace = name_space;
        tx_light_op_dbm7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm8")
    {
        tx_light_op_dbm8 = value;
        tx_light_op_dbm8.value_namespace = name_space;
        tx_light_op_dbm8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm9")
    {
        tx_light_op_dbm9 = value;
        tx_light_op_dbm9.value_namespace = name_space;
        tx_light_op_dbm9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm10")
    {
        tx_light_op_dbm10 = value;
        tx_light_op_dbm10.value_namespace = name_space;
        tx_light_op_dbm10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_light_op_dBm11")
    {
        tx_light_op_dbm11 = value;
        tx_light_op_dbm11.value_namespace = name_space;
        tx_light_op_dbm11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_temp_rd")
    {
        rx_temp_rd = value;
        rx_temp_rd.value_namespace = name_space;
        rx_temp_rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_temp_sts")
    {
        rx_temp_sts = value;
        rx_temp_sts.value_namespace = name_space;
        rx_temp_sts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_volt_sts")
    {
        rx_volt_sts = value;
        rx_volt_sts.value_namespace = name_space;
        rx_volt_sts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_volt_rd")
    {
        rx_volt_rd = value;
        rx_volt_rd.value_namespace = name_space;
        rx_volt_rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts0")
    {
        rx_chn_sts0 = value;
        rx_chn_sts0.value_namespace = name_space;
        rx_chn_sts0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts1")
    {
        rx_chn_sts1 = value;
        rx_chn_sts1.value_namespace = name_space;
        rx_chn_sts1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts2")
    {
        rx_chn_sts2 = value;
        rx_chn_sts2.value_namespace = name_space;
        rx_chn_sts2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts3")
    {
        rx_chn_sts3 = value;
        rx_chn_sts3.value_namespace = name_space;
        rx_chn_sts3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts4")
    {
        rx_chn_sts4 = value;
        rx_chn_sts4.value_namespace = name_space;
        rx_chn_sts4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts5")
    {
        rx_chn_sts5 = value;
        rx_chn_sts5.value_namespace = name_space;
        rx_chn_sts5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts6")
    {
        rx_chn_sts6 = value;
        rx_chn_sts6.value_namespace = name_space;
        rx_chn_sts6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts7")
    {
        rx_chn_sts7 = value;
        rx_chn_sts7.value_namespace = name_space;
        rx_chn_sts7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts8")
    {
        rx_chn_sts8 = value;
        rx_chn_sts8.value_namespace = name_space;
        rx_chn_sts8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts9")
    {
        rx_chn_sts9 = value;
        rx_chn_sts9.value_namespace = name_space;
        rx_chn_sts9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts10")
    {
        rx_chn_sts10 = value;
        rx_chn_sts10.value_namespace = name_space;
        rx_chn_sts10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_chn_sts11")
    {
        rx_chn_sts11 = value;
        rx_chn_sts11.value_namespace = name_space;
        rx_chn_sts11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los0")
    {
        rx_los0 = value;
        rx_los0.value_namespace = name_space;
        rx_los0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los1")
    {
        rx_los1 = value;
        rx_los1.value_namespace = name_space;
        rx_los1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los2")
    {
        rx_los2 = value;
        rx_los2.value_namespace = name_space;
        rx_los2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los3")
    {
        rx_los3 = value;
        rx_los3.value_namespace = name_space;
        rx_los3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los4")
    {
        rx_los4 = value;
        rx_los4.value_namespace = name_space;
        rx_los4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los5")
    {
        rx_los5 = value;
        rx_los5.value_namespace = name_space;
        rx_los5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los6")
    {
        rx_los6 = value;
        rx_los6.value_namespace = name_space;
        rx_los6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los7")
    {
        rx_los7 = value;
        rx_los7.value_namespace = name_space;
        rx_los7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los8")
    {
        rx_los8 = value;
        rx_los8.value_namespace = name_space;
        rx_los8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los9")
    {
        rx_los9 = value;
        rx_los9.value_namespace = name_space;
        rx_los9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los10")
    {
        rx_los10 = value;
        rx_los10.value_namespace = name_space;
        rx_los10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_los11")
    {
        rx_los11 = value;
        rx_los11.value_namespace = name_space;
        rx_los11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm0")
    {
        rx_opt_pw_alm0 = value;
        rx_opt_pw_alm0.value_namespace = name_space;
        rx_opt_pw_alm0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm1")
    {
        rx_opt_pw_alm1 = value;
        rx_opt_pw_alm1.value_namespace = name_space;
        rx_opt_pw_alm1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm2")
    {
        rx_opt_pw_alm2 = value;
        rx_opt_pw_alm2.value_namespace = name_space;
        rx_opt_pw_alm2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm3")
    {
        rx_opt_pw_alm3 = value;
        rx_opt_pw_alm3.value_namespace = name_space;
        rx_opt_pw_alm3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm4")
    {
        rx_opt_pw_alm4 = value;
        rx_opt_pw_alm4.value_namespace = name_space;
        rx_opt_pw_alm4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm5")
    {
        rx_opt_pw_alm5 = value;
        rx_opt_pw_alm5.value_namespace = name_space;
        rx_opt_pw_alm5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm6")
    {
        rx_opt_pw_alm6 = value;
        rx_opt_pw_alm6.value_namespace = name_space;
        rx_opt_pw_alm6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm7")
    {
        rx_opt_pw_alm7 = value;
        rx_opt_pw_alm7.value_namespace = name_space;
        rx_opt_pw_alm7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm8")
    {
        rx_opt_pw_alm8 = value;
        rx_opt_pw_alm8.value_namespace = name_space;
        rx_opt_pw_alm8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm9")
    {
        rx_opt_pw_alm9 = value;
        rx_opt_pw_alm9.value_namespace = name_space;
        rx_opt_pw_alm9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm10")
    {
        rx_opt_pw_alm10 = value;
        rx_opt_pw_alm10.value_namespace = name_space;
        rx_opt_pw_alm10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_opt_pw_alm11")
    {
        rx_opt_pw_alm11 = value;
        rx_opt_pw_alm11.value_namespace = name_space;
        rx_opt_pw_alm11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm0")
    {
        rx_light_in_dbm0 = value;
        rx_light_in_dbm0.value_namespace = name_space;
        rx_light_in_dbm0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm1")
    {
        rx_light_in_dbm1 = value;
        rx_light_in_dbm1.value_namespace = name_space;
        rx_light_in_dbm1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm2")
    {
        rx_light_in_dbm2 = value;
        rx_light_in_dbm2.value_namespace = name_space;
        rx_light_in_dbm2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm3")
    {
        rx_light_in_dbm3 = value;
        rx_light_in_dbm3.value_namespace = name_space;
        rx_light_in_dbm3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm4")
    {
        rx_light_in_dbm4 = value;
        rx_light_in_dbm4.value_namespace = name_space;
        rx_light_in_dbm4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm5")
    {
        rx_light_in_dbm5 = value;
        rx_light_in_dbm5.value_namespace = name_space;
        rx_light_in_dbm5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm6")
    {
        rx_light_in_dbm6 = value;
        rx_light_in_dbm6.value_namespace = name_space;
        rx_light_in_dbm6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm7")
    {
        rx_light_in_dbm7 = value;
        rx_light_in_dbm7.value_namespace = name_space;
        rx_light_in_dbm7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm8")
    {
        rx_light_in_dbm8 = value;
        rx_light_in_dbm8.value_namespace = name_space;
        rx_light_in_dbm8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm9")
    {
        rx_light_in_dbm9 = value;
        rx_light_in_dbm9.value_namespace = name_space;
        rx_light_in_dbm9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm10")
    {
        rx_light_in_dbm10 = value;
        rx_light_in_dbm10.value_namespace = name_space;
        rx_light_in_dbm10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_light_in_dBm11")
    {
        rx_light_in_dbm11 = value;
        rx_light_in_dbm11.value_namespace = name_space;
        rx_light_in_dbm11.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Cxp::Dom::Location::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cxp_port")
    {
        cxp_port.yfilter = yfilter;
    }
    if(value_path == "show_port")
    {
        show_port.yfilter = yfilter;
    }
    if(value_path == "cxp2_display")
    {
        cxp2_display.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot_num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "cur_loc_str")
    {
        cur_loc_str.yfilter = yfilter;
    }
    if(value_path == "vendorname")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "partnumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "serialnumber")
    {
        serialnumber.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vendor_rev_num")
    {
        vendor_rev_num.yfilter = yfilter;
    }
    if(value_path == "vendor_pn")
    {
        vendor_pn.yfilter = yfilter;
    }
    if(value_path == "vendor_sn")
    {
        vendor_sn.yfilter = yfilter;
    }
    if(value_path == "dev_description")
    {
        dev_description.yfilter = yfilter;
    }
    if(value_path == "clei_code_num")
    {
        clei_code_num.yfilter = yfilter;
    }
    if(value_path == "ven_date_code")
    {
        ven_date_code.yfilter = yfilter;
    }
    if(value_path == "ven_lot_code")
    {
        ven_lot_code.yfilter = yfilter;
    }
    if(value_path == "vendor_oui_ieee_company_id")
    {
        vendor_oui_ieee_company_id.yfilter = yfilter;
    }
    if(value_path == "eeprom_rev_num")
    {
        eeprom_rev_num.yfilter = yfilter;
    }
    if(value_path == "firmware_rev_num")
    {
        firmware_rev_num.yfilter = yfilter;
    }
    if(value_path == "TX_temp_rd")
    {
        tx_temp_rd.yfilter = yfilter;
    }
    if(value_path == "TX_temp_sts")
    {
        tx_temp_sts.yfilter = yfilter;
    }
    if(value_path == "TX_volt_sts")
    {
        tx_volt_sts.yfilter = yfilter;
    }
    if(value_path == "TX_volt_rd")
    {
        tx_volt_rd.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts0")
    {
        tx_chn_sts0.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts1")
    {
        tx_chn_sts1.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts2")
    {
        tx_chn_sts2.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts3")
    {
        tx_chn_sts3.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts4")
    {
        tx_chn_sts4.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts5")
    {
        tx_chn_sts5.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts6")
    {
        tx_chn_sts6.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts7")
    {
        tx_chn_sts7.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts8")
    {
        tx_chn_sts8.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts9")
    {
        tx_chn_sts9.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts10")
    {
        tx_chn_sts10.yfilter = yfilter;
    }
    if(value_path == "tx_chn_sts11")
    {
        tx_chn_sts11.yfilter = yfilter;
    }
    if(value_path == "tx_fault0")
    {
        tx_fault0.yfilter = yfilter;
    }
    if(value_path == "tx_fault1")
    {
        tx_fault1.yfilter = yfilter;
    }
    if(value_path == "tx_fault2")
    {
        tx_fault2.yfilter = yfilter;
    }
    if(value_path == "tx_fault3")
    {
        tx_fault3.yfilter = yfilter;
    }
    if(value_path == "tx_fault4")
    {
        tx_fault4.yfilter = yfilter;
    }
    if(value_path == "tx_fault5")
    {
        tx_fault5.yfilter = yfilter;
    }
    if(value_path == "tx_fault6")
    {
        tx_fault6.yfilter = yfilter;
    }
    if(value_path == "tx_fault7")
    {
        tx_fault7.yfilter = yfilter;
    }
    if(value_path == "tx_fault8")
    {
        tx_fault8.yfilter = yfilter;
    }
    if(value_path == "tx_fault9")
    {
        tx_fault9.yfilter = yfilter;
    }
    if(value_path == "tx_fault10")
    {
        tx_fault10.yfilter = yfilter;
    }
    if(value_path == "tx_fault11")
    {
        tx_fault11.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur0")
    {
        tx_bias_cur0.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur1")
    {
        tx_bias_cur1.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur2")
    {
        tx_bias_cur2.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur3")
    {
        tx_bias_cur3.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur4")
    {
        tx_bias_cur4.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur5")
    {
        tx_bias_cur5.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur6")
    {
        tx_bias_cur6.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur7")
    {
        tx_bias_cur7.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur8")
    {
        tx_bias_cur8.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur9")
    {
        tx_bias_cur9.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur10")
    {
        tx_bias_cur10.yfilter = yfilter;
    }
    if(value_path == "tx_bias_cur11")
    {
        tx_bias_cur11.yfilter = yfilter;
    }
    if(value_path == "tx_los0")
    {
        tx_los0.yfilter = yfilter;
    }
    if(value_path == "tx_los1")
    {
        tx_los1.yfilter = yfilter;
    }
    if(value_path == "tx_los2")
    {
        tx_los2.yfilter = yfilter;
    }
    if(value_path == "tx_los3")
    {
        tx_los3.yfilter = yfilter;
    }
    if(value_path == "tx_los4")
    {
        tx_los4.yfilter = yfilter;
    }
    if(value_path == "tx_los5")
    {
        tx_los5.yfilter = yfilter;
    }
    if(value_path == "tx_los6")
    {
        tx_los6.yfilter = yfilter;
    }
    if(value_path == "tx_los7")
    {
        tx_los7.yfilter = yfilter;
    }
    if(value_path == "tx_los8")
    {
        tx_los8.yfilter = yfilter;
    }
    if(value_path == "tx_los9")
    {
        tx_los9.yfilter = yfilter;
    }
    if(value_path == "tx_los10")
    {
        tx_los10.yfilter = yfilter;
    }
    if(value_path == "tx_los11")
    {
        tx_los11.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm0")
    {
        tx_opt_pw_alm0.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm1")
    {
        tx_opt_pw_alm1.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm2")
    {
        tx_opt_pw_alm2.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm3")
    {
        tx_opt_pw_alm3.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm4")
    {
        tx_opt_pw_alm4.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm5")
    {
        tx_opt_pw_alm5.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm6")
    {
        tx_opt_pw_alm6.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm7")
    {
        tx_opt_pw_alm7.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm8")
    {
        tx_opt_pw_alm8.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm9")
    {
        tx_opt_pw_alm9.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm10")
    {
        tx_opt_pw_alm10.yfilter = yfilter;
    }
    if(value_path == "tx_opt_pw_alm11")
    {
        tx_opt_pw_alm11.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm0")
    {
        tx_opt_bs_alm0.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm1")
    {
        tx_opt_bs_alm1.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm2")
    {
        tx_opt_bs_alm2.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm3")
    {
        tx_opt_bs_alm3.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm4")
    {
        tx_opt_bs_alm4.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm5")
    {
        tx_opt_bs_alm5.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm6")
    {
        tx_opt_bs_alm6.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm7")
    {
        tx_opt_bs_alm7.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm8")
    {
        tx_opt_bs_alm8.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm9")
    {
        tx_opt_bs_alm9.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm10")
    {
        tx_opt_bs_alm10.yfilter = yfilter;
    }
    if(value_path == "tx_opt_bs_alm11")
    {
        tx_opt_bs_alm11.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm0")
    {
        tx_light_op_dbm0.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm1")
    {
        tx_light_op_dbm1.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm2")
    {
        tx_light_op_dbm2.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm3")
    {
        tx_light_op_dbm3.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm4")
    {
        tx_light_op_dbm4.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm5")
    {
        tx_light_op_dbm5.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm6")
    {
        tx_light_op_dbm6.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm7")
    {
        tx_light_op_dbm7.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm8")
    {
        tx_light_op_dbm8.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm9")
    {
        tx_light_op_dbm9.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm10")
    {
        tx_light_op_dbm10.yfilter = yfilter;
    }
    if(value_path == "tx_light_op_dBm11")
    {
        tx_light_op_dbm11.yfilter = yfilter;
    }
    if(value_path == "RX_temp_rd")
    {
        rx_temp_rd.yfilter = yfilter;
    }
    if(value_path == "RX_temp_sts")
    {
        rx_temp_sts.yfilter = yfilter;
    }
    if(value_path == "RX_volt_sts")
    {
        rx_volt_sts.yfilter = yfilter;
    }
    if(value_path == "RX_volt_rd")
    {
        rx_volt_rd.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts0")
    {
        rx_chn_sts0.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts1")
    {
        rx_chn_sts1.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts2")
    {
        rx_chn_sts2.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts3")
    {
        rx_chn_sts3.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts4")
    {
        rx_chn_sts4.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts5")
    {
        rx_chn_sts5.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts6")
    {
        rx_chn_sts6.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts7")
    {
        rx_chn_sts7.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts8")
    {
        rx_chn_sts8.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts9")
    {
        rx_chn_sts9.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts10")
    {
        rx_chn_sts10.yfilter = yfilter;
    }
    if(value_path == "rx_chn_sts11")
    {
        rx_chn_sts11.yfilter = yfilter;
    }
    if(value_path == "rx_los0")
    {
        rx_los0.yfilter = yfilter;
    }
    if(value_path == "rx_los1")
    {
        rx_los1.yfilter = yfilter;
    }
    if(value_path == "rx_los2")
    {
        rx_los2.yfilter = yfilter;
    }
    if(value_path == "rx_los3")
    {
        rx_los3.yfilter = yfilter;
    }
    if(value_path == "rx_los4")
    {
        rx_los4.yfilter = yfilter;
    }
    if(value_path == "rx_los5")
    {
        rx_los5.yfilter = yfilter;
    }
    if(value_path == "rx_los6")
    {
        rx_los6.yfilter = yfilter;
    }
    if(value_path == "rx_los7")
    {
        rx_los7.yfilter = yfilter;
    }
    if(value_path == "rx_los8")
    {
        rx_los8.yfilter = yfilter;
    }
    if(value_path == "rx_los9")
    {
        rx_los9.yfilter = yfilter;
    }
    if(value_path == "rx_los10")
    {
        rx_los10.yfilter = yfilter;
    }
    if(value_path == "rx_los11")
    {
        rx_los11.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm0")
    {
        rx_opt_pw_alm0.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm1")
    {
        rx_opt_pw_alm1.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm2")
    {
        rx_opt_pw_alm2.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm3")
    {
        rx_opt_pw_alm3.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm4")
    {
        rx_opt_pw_alm4.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm5")
    {
        rx_opt_pw_alm5.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm6")
    {
        rx_opt_pw_alm6.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm7")
    {
        rx_opt_pw_alm7.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm8")
    {
        rx_opt_pw_alm8.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm9")
    {
        rx_opt_pw_alm9.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm10")
    {
        rx_opt_pw_alm10.yfilter = yfilter;
    }
    if(value_path == "rx_opt_pw_alm11")
    {
        rx_opt_pw_alm11.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm0")
    {
        rx_light_in_dbm0.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm1")
    {
        rx_light_in_dbm1.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm2")
    {
        rx_light_in_dbm2.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm3")
    {
        rx_light_in_dbm3.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm4")
    {
        rx_light_in_dbm4.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm5")
    {
        rx_light_in_dbm5.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm6")
    {
        rx_light_in_dbm6.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm7")
    {
        rx_light_in_dbm7.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm8")
    {
        rx_light_in_dbm8.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm9")
    {
        rx_light_in_dbm9.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm10")
    {
        rx_light_in_dbm10.yfilter = yfilter;
    }
    if(value_path == "rx_light_in_dBm11")
    {
        rx_light_in_dbm11.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Cxp::Dom::Location::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cxp_port" || name == "show_port" || name == "cxp2_display" || name == "rack_num" || name == "slot_num" || name == "cur_loc_str" || name == "vendorname" || name == "partnumber" || name == "serialnumber" || name == "vid" || name == "pid" || name == "vendor_rev_num" || name == "vendor_pn" || name == "vendor_sn" || name == "dev_description" || name == "clei_code_num" || name == "ven_date_code" || name == "ven_lot_code" || name == "vendor_oui_ieee_company_id" || name == "eeprom_rev_num" || name == "firmware_rev_num" || name == "TX_temp_rd" || name == "TX_temp_sts" || name == "TX_volt_sts" || name == "TX_volt_rd" || name == "tx_chn_sts0" || name == "tx_chn_sts1" || name == "tx_chn_sts2" || name == "tx_chn_sts3" || name == "tx_chn_sts4" || name == "tx_chn_sts5" || name == "tx_chn_sts6" || name == "tx_chn_sts7" || name == "tx_chn_sts8" || name == "tx_chn_sts9" || name == "tx_chn_sts10" || name == "tx_chn_sts11" || name == "tx_fault0" || name == "tx_fault1" || name == "tx_fault2" || name == "tx_fault3" || name == "tx_fault4" || name == "tx_fault5" || name == "tx_fault6" || name == "tx_fault7" || name == "tx_fault8" || name == "tx_fault9" || name == "tx_fault10" || name == "tx_fault11" || name == "tx_bias_cur0" || name == "tx_bias_cur1" || name == "tx_bias_cur2" || name == "tx_bias_cur3" || name == "tx_bias_cur4" || name == "tx_bias_cur5" || name == "tx_bias_cur6" || name == "tx_bias_cur7" || name == "tx_bias_cur8" || name == "tx_bias_cur9" || name == "tx_bias_cur10" || name == "tx_bias_cur11" || name == "tx_los0" || name == "tx_los1" || name == "tx_los2" || name == "tx_los3" || name == "tx_los4" || name == "tx_los5" || name == "tx_los6" || name == "tx_los7" || name == "tx_los8" || name == "tx_los9" || name == "tx_los10" || name == "tx_los11" || name == "tx_opt_pw_alm0" || name == "tx_opt_pw_alm1" || name == "tx_opt_pw_alm2" || name == "tx_opt_pw_alm3" || name == "tx_opt_pw_alm4" || name == "tx_opt_pw_alm5" || name == "tx_opt_pw_alm6" || name == "tx_opt_pw_alm7" || name == "tx_opt_pw_alm8" || name == "tx_opt_pw_alm9" || name == "tx_opt_pw_alm10" || name == "tx_opt_pw_alm11" || name == "tx_opt_bs_alm0" || name == "tx_opt_bs_alm1" || name == "tx_opt_bs_alm2" || name == "tx_opt_bs_alm3" || name == "tx_opt_bs_alm4" || name == "tx_opt_bs_alm5" || name == "tx_opt_bs_alm6" || name == "tx_opt_bs_alm7" || name == "tx_opt_bs_alm8" || name == "tx_opt_bs_alm9" || name == "tx_opt_bs_alm10" || name == "tx_opt_bs_alm11" || name == "tx_light_op_dBm0" || name == "tx_light_op_dBm1" || name == "tx_light_op_dBm2" || name == "tx_light_op_dBm3" || name == "tx_light_op_dBm4" || name == "tx_light_op_dBm5" || name == "tx_light_op_dBm6" || name == "tx_light_op_dBm7" || name == "tx_light_op_dBm8" || name == "tx_light_op_dBm9" || name == "tx_light_op_dBm10" || name == "tx_light_op_dBm11" || name == "RX_temp_rd" || name == "RX_temp_sts" || name == "RX_volt_sts" || name == "RX_volt_rd" || name == "rx_chn_sts0" || name == "rx_chn_sts1" || name == "rx_chn_sts2" || name == "rx_chn_sts3" || name == "rx_chn_sts4" || name == "rx_chn_sts5" || name == "rx_chn_sts6" || name == "rx_chn_sts7" || name == "rx_chn_sts8" || name == "rx_chn_sts9" || name == "rx_chn_sts10" || name == "rx_chn_sts11" || name == "rx_los0" || name == "rx_los1" || name == "rx_los2" || name == "rx_los3" || name == "rx_los4" || name == "rx_los5" || name == "rx_los6" || name == "rx_los7" || name == "rx_los8" || name == "rx_los9" || name == "rx_los10" || name == "rx_los11" || name == "rx_opt_pw_alm0" || name == "rx_opt_pw_alm1" || name == "rx_opt_pw_alm2" || name == "rx_opt_pw_alm3" || name == "rx_opt_pw_alm4" || name == "rx_opt_pw_alm5" || name == "rx_opt_pw_alm6" || name == "rx_opt_pw_alm7" || name == "rx_opt_pw_alm8" || name == "rx_opt_pw_alm9" || name == "rx_opt_pw_alm10" || name == "rx_opt_pw_alm11" || name == "rx_light_in_dBm0" || name == "rx_light_in_dBm1" || name == "rx_light_in_dBm2" || name == "rx_light_in_dBm3" || name == "rx_light_in_dBm4" || name == "rx_light_in_dBm5" || name == "rx_light_in_dBm6" || name == "rx_light_in_dBm7" || name == "rx_light_in_dBm8" || name == "rx_light_in_dBm9" || name == "rx_light_in_dBm10" || name == "rx_light_in_dBm11")
        return true;
    return false;
}

Controller::Fabric::Oper::Cxp::Summary::Summary()
    :
    rack(this, {"rack_str"})
{

    yang_name = "summary"; yang_parent_name = "cxp"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Cxp::Summary::~Summary()
{
}

bool Controller::Fabric::Oper::Cxp::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Cxp::Summary::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Cxp::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/cxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Cxp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Cxp::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Cxp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Cxp::Summary::Rack>();
        c->parent = this;
        rack.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Cxp::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rack.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Cxp::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Cxp::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Cxp::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Controller::Fabric::Oper::Cxp::Summary::Rack::Rack()
    :
    rack_str{YType::str, "rack_str"},
    description{YType::str, "description"}
        ,
    split_tbl_flag(this, {"tbl_splt"})
{

    yang_name = "rack"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Cxp::Summary::Rack::~Rack()
{
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<split_tbl_flag.len(); index++)
    {
        if(split_tbl_flag[index]->has_data())
            return true;
    }
    return rack_str.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::has_operation() const
{
    for (std::size_t index=0; index<split_tbl_flag.len(); index++)
    {
        if(split_tbl_flag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::Cxp::Summary::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/cxp/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Cxp::Summary::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack_str, "rack_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Cxp::Summary::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_str.is_set || is_set(rack_str.yfilter)) leaf_name_data.push_back(rack_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Cxp::Summary::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split_tbl_flag")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag>();
        c->parent = this;
        split_tbl_flag.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Cxp::Summary::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : split_tbl_flag.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Cxp::Summary::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_str")
    {
        rack_str = value;
        rack_str.value_namespace = name_space;
        rack_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Cxp::Summary::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_str")
    {
        rack_str.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split_tbl_flag" || name == "rack_str" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SplitTblFlag()
    :
    tbl_splt{YType::uint32, "tbl_splt"}
        ,
    smry_per_slot(this, {"slot_no"})
{

    yang_name = "split_tbl_flag"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::~SplitTblFlag()
{
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<smry_per_slot.len(); index++)
    {
        if(smry_per_slot[index]->has_data())
            return true;
    }
    return tbl_splt.is_set;
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::has_operation() const
{
    for (std::size_t index=0; index<smry_per_slot.len(); index++)
    {
        if(smry_per_slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tbl_splt.yfilter);
}

std::string Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split_tbl_flag";
    ADD_KEY_TOKEN(tbl_splt, "tbl_splt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tbl_splt.is_set || is_set(tbl_splt.yfilter)) leaf_name_data.push_back(tbl_splt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "smry_per_slot")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot>();
        c->parent = this;
        smry_per_slot.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : smry_per_slot.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tbl_splt")
    {
        tbl_splt = value;
        tbl_splt.value_namespace = name_space;
        tbl_splt.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tbl_splt")
    {
        tbl_splt.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "smry_per_slot" || name == "tbl_splt")
        return true;
    return false;
}

Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::SmryPerSlot()
    :
    slot_no{YType::uint32, "slot_no"},
    func_rack_name{YType::str, "func_rack_name"},
    max_cxp{YType::uint32, "max_cxp"},
    row_cxp_1{YType::boolean, "row_cxp_1"},
    row_cxp_2{YType::boolean, "row_cxp_2"},
    slot_row{YType::boolean, "slot_row"},
    tbl_splt_flag{YType::boolean, "tbl_splt_flag"},
    cxp_port_no{YType::uint32, "cxp_port_no"},
    fc_loc_str{YType::str, "fc_loc_str"},
    cxp_sts_0{YType::str, "cxp_sts_0"},
    cxp_sts_1{YType::str, "cxp_sts_1"},
    cxp_sts_2{YType::str, "cxp_sts_2"},
    cxp_sts_3{YType::str, "cxp_sts_3"},
    cxp_sts_4{YType::str, "cxp_sts_4"},
    cxp_sts_5{YType::str, "cxp_sts_5"},
    cxp_sts_6{YType::str, "cxp_sts_6"},
    cxp_sts_7{YType::str, "cxp_sts_7"},
    cxp_sts_8{YType::str, "cxp_sts_8"},
    cxp_sts_9{YType::str, "cxp_sts_9"},
    cxp_sts_10{YType::str, "cxp_sts_10"},
    cxp_sts_11{YType::str, "cxp_sts_11"},
    cxp_sts_12{YType::str, "cxp_sts_12"},
    cxp_sts_13{YType::str, "cxp_sts_13"},
    cxp_sts_14{YType::str, "cxp_sts_14"},
    cxp_sts_15{YType::str, "cxp_sts_15"}
{

    yang_name = "smry_per_slot"; yang_parent_name = "split_tbl_flag"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::~SmryPerSlot()
{
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::has_data() const
{
    if (is_presence_container) return true;
    return slot_no.is_set
	|| func_rack_name.is_set
	|| max_cxp.is_set
	|| row_cxp_1.is_set
	|| row_cxp_2.is_set
	|| slot_row.is_set
	|| tbl_splt_flag.is_set
	|| cxp_port_no.is_set
	|| fc_loc_str.is_set
	|| cxp_sts_0.is_set
	|| cxp_sts_1.is_set
	|| cxp_sts_2.is_set
	|| cxp_sts_3.is_set
	|| cxp_sts_4.is_set
	|| cxp_sts_5.is_set
	|| cxp_sts_6.is_set
	|| cxp_sts_7.is_set
	|| cxp_sts_8.is_set
	|| cxp_sts_9.is_set
	|| cxp_sts_10.is_set
	|| cxp_sts_11.is_set
	|| cxp_sts_12.is_set
	|| cxp_sts_13.is_set
	|| cxp_sts_14.is_set
	|| cxp_sts_15.is_set;
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_no.yfilter)
	|| ydk::is_set(func_rack_name.yfilter)
	|| ydk::is_set(max_cxp.yfilter)
	|| ydk::is_set(row_cxp_1.yfilter)
	|| ydk::is_set(row_cxp_2.yfilter)
	|| ydk::is_set(slot_row.yfilter)
	|| ydk::is_set(tbl_splt_flag.yfilter)
	|| ydk::is_set(cxp_port_no.yfilter)
	|| ydk::is_set(fc_loc_str.yfilter)
	|| ydk::is_set(cxp_sts_0.yfilter)
	|| ydk::is_set(cxp_sts_1.yfilter)
	|| ydk::is_set(cxp_sts_2.yfilter)
	|| ydk::is_set(cxp_sts_3.yfilter)
	|| ydk::is_set(cxp_sts_4.yfilter)
	|| ydk::is_set(cxp_sts_5.yfilter)
	|| ydk::is_set(cxp_sts_6.yfilter)
	|| ydk::is_set(cxp_sts_7.yfilter)
	|| ydk::is_set(cxp_sts_8.yfilter)
	|| ydk::is_set(cxp_sts_9.yfilter)
	|| ydk::is_set(cxp_sts_10.yfilter)
	|| ydk::is_set(cxp_sts_11.yfilter)
	|| ydk::is_set(cxp_sts_12.yfilter)
	|| ydk::is_set(cxp_sts_13.yfilter)
	|| ydk::is_set(cxp_sts_14.yfilter)
	|| ydk::is_set(cxp_sts_15.yfilter);
}

std::string Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smry_per_slot";
    ADD_KEY_TOKEN(slot_no, "slot_no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_no.is_set || is_set(slot_no.yfilter)) leaf_name_data.push_back(slot_no.get_name_leafdata());
    if (func_rack_name.is_set || is_set(func_rack_name.yfilter)) leaf_name_data.push_back(func_rack_name.get_name_leafdata());
    if (max_cxp.is_set || is_set(max_cxp.yfilter)) leaf_name_data.push_back(max_cxp.get_name_leafdata());
    if (row_cxp_1.is_set || is_set(row_cxp_1.yfilter)) leaf_name_data.push_back(row_cxp_1.get_name_leafdata());
    if (row_cxp_2.is_set || is_set(row_cxp_2.yfilter)) leaf_name_data.push_back(row_cxp_2.get_name_leafdata());
    if (slot_row.is_set || is_set(slot_row.yfilter)) leaf_name_data.push_back(slot_row.get_name_leafdata());
    if (tbl_splt_flag.is_set || is_set(tbl_splt_flag.yfilter)) leaf_name_data.push_back(tbl_splt_flag.get_name_leafdata());
    if (cxp_port_no.is_set || is_set(cxp_port_no.yfilter)) leaf_name_data.push_back(cxp_port_no.get_name_leafdata());
    if (fc_loc_str.is_set || is_set(fc_loc_str.yfilter)) leaf_name_data.push_back(fc_loc_str.get_name_leafdata());
    if (cxp_sts_0.is_set || is_set(cxp_sts_0.yfilter)) leaf_name_data.push_back(cxp_sts_0.get_name_leafdata());
    if (cxp_sts_1.is_set || is_set(cxp_sts_1.yfilter)) leaf_name_data.push_back(cxp_sts_1.get_name_leafdata());
    if (cxp_sts_2.is_set || is_set(cxp_sts_2.yfilter)) leaf_name_data.push_back(cxp_sts_2.get_name_leafdata());
    if (cxp_sts_3.is_set || is_set(cxp_sts_3.yfilter)) leaf_name_data.push_back(cxp_sts_3.get_name_leafdata());
    if (cxp_sts_4.is_set || is_set(cxp_sts_4.yfilter)) leaf_name_data.push_back(cxp_sts_4.get_name_leafdata());
    if (cxp_sts_5.is_set || is_set(cxp_sts_5.yfilter)) leaf_name_data.push_back(cxp_sts_5.get_name_leafdata());
    if (cxp_sts_6.is_set || is_set(cxp_sts_6.yfilter)) leaf_name_data.push_back(cxp_sts_6.get_name_leafdata());
    if (cxp_sts_7.is_set || is_set(cxp_sts_7.yfilter)) leaf_name_data.push_back(cxp_sts_7.get_name_leafdata());
    if (cxp_sts_8.is_set || is_set(cxp_sts_8.yfilter)) leaf_name_data.push_back(cxp_sts_8.get_name_leafdata());
    if (cxp_sts_9.is_set || is_set(cxp_sts_9.yfilter)) leaf_name_data.push_back(cxp_sts_9.get_name_leafdata());
    if (cxp_sts_10.is_set || is_set(cxp_sts_10.yfilter)) leaf_name_data.push_back(cxp_sts_10.get_name_leafdata());
    if (cxp_sts_11.is_set || is_set(cxp_sts_11.yfilter)) leaf_name_data.push_back(cxp_sts_11.get_name_leafdata());
    if (cxp_sts_12.is_set || is_set(cxp_sts_12.yfilter)) leaf_name_data.push_back(cxp_sts_12.get_name_leafdata());
    if (cxp_sts_13.is_set || is_set(cxp_sts_13.yfilter)) leaf_name_data.push_back(cxp_sts_13.get_name_leafdata());
    if (cxp_sts_14.is_set || is_set(cxp_sts_14.yfilter)) leaf_name_data.push_back(cxp_sts_14.get_name_leafdata());
    if (cxp_sts_15.is_set || is_set(cxp_sts_15.yfilter)) leaf_name_data.push_back(cxp_sts_15.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot_no")
    {
        slot_no = value;
        slot_no.value_namespace = name_space;
        slot_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "func_rack_name")
    {
        func_rack_name = value;
        func_rack_name.value_namespace = name_space;
        func_rack_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max_cxp")
    {
        max_cxp = value;
        max_cxp.value_namespace = name_space;
        max_cxp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "row_cxp_1")
    {
        row_cxp_1 = value;
        row_cxp_1.value_namespace = name_space;
        row_cxp_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "row_cxp_2")
    {
        row_cxp_2 = value;
        row_cxp_2.value_namespace = name_space;
        row_cxp_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot_row")
    {
        slot_row = value;
        slot_row.value_namespace = name_space;
        slot_row.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl_splt_flag")
    {
        tbl_splt_flag = value;
        tbl_splt_flag.value_namespace = name_space;
        tbl_splt_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_port_no")
    {
        cxp_port_no = value;
        cxp_port_no.value_namespace = name_space;
        cxp_port_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc_loc_str")
    {
        fc_loc_str = value;
        fc_loc_str.value_namespace = name_space;
        fc_loc_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_0")
    {
        cxp_sts_0 = value;
        cxp_sts_0.value_namespace = name_space;
        cxp_sts_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_1")
    {
        cxp_sts_1 = value;
        cxp_sts_1.value_namespace = name_space;
        cxp_sts_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_2")
    {
        cxp_sts_2 = value;
        cxp_sts_2.value_namespace = name_space;
        cxp_sts_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_3")
    {
        cxp_sts_3 = value;
        cxp_sts_3.value_namespace = name_space;
        cxp_sts_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_4")
    {
        cxp_sts_4 = value;
        cxp_sts_4.value_namespace = name_space;
        cxp_sts_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_5")
    {
        cxp_sts_5 = value;
        cxp_sts_5.value_namespace = name_space;
        cxp_sts_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_6")
    {
        cxp_sts_6 = value;
        cxp_sts_6.value_namespace = name_space;
        cxp_sts_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_7")
    {
        cxp_sts_7 = value;
        cxp_sts_7.value_namespace = name_space;
        cxp_sts_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_8")
    {
        cxp_sts_8 = value;
        cxp_sts_8.value_namespace = name_space;
        cxp_sts_8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_9")
    {
        cxp_sts_9 = value;
        cxp_sts_9.value_namespace = name_space;
        cxp_sts_9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_10")
    {
        cxp_sts_10 = value;
        cxp_sts_10.value_namespace = name_space;
        cxp_sts_10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_11")
    {
        cxp_sts_11 = value;
        cxp_sts_11.value_namespace = name_space;
        cxp_sts_11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_12")
    {
        cxp_sts_12 = value;
        cxp_sts_12.value_namespace = name_space;
        cxp_sts_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_13")
    {
        cxp_sts_13 = value;
        cxp_sts_13.value_namespace = name_space;
        cxp_sts_13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_14")
    {
        cxp_sts_14 = value;
        cxp_sts_14.value_namespace = name_space;
        cxp_sts_14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_sts_15")
    {
        cxp_sts_15 = value;
        cxp_sts_15.value_namespace = name_space;
        cxp_sts_15.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot_no")
    {
        slot_no.yfilter = yfilter;
    }
    if(value_path == "func_rack_name")
    {
        func_rack_name.yfilter = yfilter;
    }
    if(value_path == "max_cxp")
    {
        max_cxp.yfilter = yfilter;
    }
    if(value_path == "row_cxp_1")
    {
        row_cxp_1.yfilter = yfilter;
    }
    if(value_path == "row_cxp_2")
    {
        row_cxp_2.yfilter = yfilter;
    }
    if(value_path == "slot_row")
    {
        slot_row.yfilter = yfilter;
    }
    if(value_path == "tbl_splt_flag")
    {
        tbl_splt_flag.yfilter = yfilter;
    }
    if(value_path == "cxp_port_no")
    {
        cxp_port_no.yfilter = yfilter;
    }
    if(value_path == "fc_loc_str")
    {
        fc_loc_str.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_0")
    {
        cxp_sts_0.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_1")
    {
        cxp_sts_1.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_2")
    {
        cxp_sts_2.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_3")
    {
        cxp_sts_3.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_4")
    {
        cxp_sts_4.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_5")
    {
        cxp_sts_5.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_6")
    {
        cxp_sts_6.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_7")
    {
        cxp_sts_7.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_8")
    {
        cxp_sts_8.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_9")
    {
        cxp_sts_9.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_10")
    {
        cxp_sts_10.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_11")
    {
        cxp_sts_11.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_12")
    {
        cxp_sts_12.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_13")
    {
        cxp_sts_13.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_14")
    {
        cxp_sts_14.yfilter = yfilter;
    }
    if(value_path == "cxp_sts_15")
    {
        cxp_sts_15.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Cxp::Summary::Rack::SplitTblFlag::SmryPerSlot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot_no" || name == "func_rack_name" || name == "max_cxp" || name == "row_cxp_1" || name == "row_cxp_2" || name == "slot_row" || name == "tbl_splt_flag" || name == "cxp_port_no" || name == "fc_loc_str" || name == "cxp_sts_0" || name == "cxp_sts_1" || name == "cxp_sts_2" || name == "cxp_sts_3" || name == "cxp_sts_4" || name == "cxp_sts_5" || name == "cxp_sts_6" || name == "cxp_sts_7" || name == "cxp_sts_8" || name == "cxp_sts_9" || name == "cxp_sts_10" || name == "cxp_sts_11" || name == "cxp_sts_12" || name == "cxp_sts_13" || name == "cxp_sts_14" || name == "cxp_sts_15")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Fgid()
    :
    information(std::make_shared<Controller::Fabric::Oper::Fgid::Information>())
    , resource(std::make_shared<Controller::Fabric::Oper::Fgid::Resource>())
    , statistics(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics>())
    , fgid_mgr(std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr>())
    , program_error(this, {"start", "end"})
{
    information->parent = this;
    resource->parent = this;
    statistics->parent = this;
    fgid_mgr->parent = this;

    yang_name = "fgid"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::~Fgid()
{
}

bool Controller::Fabric::Oper::Fgid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<program_error.len(); index++)
    {
        if(program_error[index]->has_data())
            return true;
    }
    return (information !=  nullptr && information->has_data())
	|| (resource !=  nullptr && resource->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (fgid_mgr !=  nullptr && fgid_mgr->has_data());
}

bool Controller::Fabric::Oper::Fgid::has_operation() const
{
    for (std::size_t index=0; index<program_error.len(); index++)
    {
        if(program_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation())
	|| (resource !=  nullptr && resource->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (fgid_mgr !=  nullptr && fgid_mgr->has_operation());
}

std::string Controller::Fabric::Oper::Fgid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Controller::Fabric::Oper::Fgid::Information>();
        }
        return information;
    }

    if(child_yang_name == "resource")
    {
        if(resource == nullptr)
        {
            resource = std::make_shared<Controller::Fabric::Oper::Fgid::Resource>();
        }
        return resource;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "fgid_mgr")
    {
        if(fgid_mgr == nullptr)
        {
            fgid_mgr = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr>();
        }
        return fgid_mgr;
    }

    if(child_yang_name == "program_error")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::ProgramError>();
        c->parent = this;
        program_error.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(resource != nullptr)
    {
        children["resource"] = resource;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(fgid_mgr != nullptr)
    {
        children["fgid_mgr"] = fgid_mgr;
    }

    count = 0;
    for (auto c : program_error.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "resource" || name == "statistics" || name == "fgid_mgr" || name == "program_error")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Information()
    :
    id(this, {"fgid_id"})
{

    yang_name = "information"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Information::~Information()
{
}

bool Controller::Fabric::Oper::Fgid::Information::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Information::has_operation() const
{
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id>();
        c->parent = this;
        id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Id()
    :
    fgid_id{YType::int32, "fgid_id"},
    total_asso_fabricq_ids{YType::int32, "total_asso_fabricq_ids"},
    asso_client_info{YType::str, "asso_client_info"}
        ,
    hex_bitmaps(this, {"rack_number"})
    , binary_bitmaps(this, {"rack_number"})
    , asso_fabricq_ids(this, {"fabricq_id"})
    , drivers(this, {"rack_number"})
{

    yang_name = "id"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Information::Id::~Id()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hex_bitmaps.len(); index++)
    {
        if(hex_bitmaps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<binary_bitmaps.len(); index++)
    {
        if(binary_bitmaps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<asso_fabricq_ids.len(); index++)
    {
        if(asso_fabricq_ids[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<drivers.len(); index++)
    {
        if(drivers[index]->has_data())
            return true;
    }
    return fgid_id.is_set
	|| total_asso_fabricq_ids.is_set
	|| asso_client_info.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_operation() const
{
    for (std::size_t index=0; index<hex_bitmaps.len(); index++)
    {
        if(hex_bitmaps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<binary_bitmaps.len(); index++)
    {
        if(binary_bitmaps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<asso_fabricq_ids.len(); index++)
    {
        if(asso_fabricq_ids[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<drivers.len(); index++)
    {
        if(drivers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fgid_id.yfilter)
	|| ydk::is_set(total_asso_fabricq_ids.yfilter)
	|| ydk::is_set(asso_client_info.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    ADD_KEY_TOKEN(fgid_id, "fgid_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgid_id.is_set || is_set(fgid_id.yfilter)) leaf_name_data.push_back(fgid_id.get_name_leafdata());
    if (total_asso_fabricq_ids.is_set || is_set(total_asso_fabricq_ids.yfilter)) leaf_name_data.push_back(total_asso_fabricq_ids.get_name_leafdata());
    if (asso_client_info.is_set || is_set(asso_client_info.yfilter)) leaf_name_data.push_back(asso_client_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Information::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex_bitmaps")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps>();
        c->parent = this;
        hex_bitmaps.append(c);
        return c;
    }

    if(child_yang_name == "binary_bitmaps")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps>();
        c->parent = this;
        binary_bitmaps.append(c);
        return c;
    }

    if(child_yang_name == "asso_fabricq_ids")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds>();
        c->parent = this;
        asso_fabricq_ids.append(c);
        return c;
    }

    if(child_yang_name == "drivers")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::Drivers>();
        c->parent = this;
        drivers.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Information::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hex_bitmaps.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : binary_bitmaps.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : asso_fabricq_ids.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : drivers.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgid_id")
    {
        fgid_id = value;
        fgid_id.value_namespace = name_space;
        fgid_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_asso_fabricq_ids")
    {
        total_asso_fabricq_ids = value;
        total_asso_fabricq_ids.value_namespace = name_space;
        total_asso_fabricq_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asso_client_info")
    {
        asso_client_info = value;
        asso_client_info.value_namespace = name_space;
        asso_client_info.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgid_id")
    {
        fgid_id.yfilter = yfilter;
    }
    if(value_path == "total_asso_fabricq_ids")
    {
        total_asso_fabricq_ids.yfilter = yfilter;
    }
    if(value_path == "asso_client_info")
    {
        asso_client_info.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex_bitmaps" || name == "binary_bitmaps" || name == "asso_fabricq_ids" || name == "drivers" || name == "fgid_id" || name == "total_asso_fabricq_ids" || name == "asso_client_info")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::HexBitmaps()
    :
    rack_number{YType::int32, "rack_number"},
    bitmap{YType::str, "bitmap"}
{

    yang_name = "hex_bitmaps"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::~HexBitmaps()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_data() const
{
    if (is_presence_container) return true;
    return rack_number.is_set
	|| bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex_bitmaps";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (bitmap.is_set || is_set(bitmap.yfilter)) leaf_name_data.push_back(bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitmap")
    {
        bitmap = value;
        bitmap.value_namespace = name_space;
        bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "bitmap")
    {
        bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_number" || name == "bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::BinaryBitmaps()
    :
    rack_number{YType::int32, "rack_number"},
    bitmap{YType::str, "bitmap"}
{

    yang_name = "binary_bitmaps"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::~BinaryBitmaps()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_data() const
{
    if (is_presence_container) return true;
    return rack_number.is_set
	|| bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binary_bitmaps";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (bitmap.is_set || is_set(bitmap.yfilter)) leaf_name_data.push_back(bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitmap")
    {
        bitmap = value;
        bitmap.value_namespace = name_space;
        bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "bitmap")
    {
        bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_number" || name == "bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::AssoFabricqIds()
    :
    fabricq_id{YType::str, "fabricq_id"}
{

    yang_name = "asso_fabricq_ids"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::~AssoFabricqIds()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_data() const
{
    if (is_presence_container) return true;
    return fabricq_id.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabricq_id.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asso_fabricq_ids";
    ADD_KEY_TOKEN(fabricq_id, "fabricq_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabricq_id.is_set || is_set(fabricq_id.yfilter)) leaf_name_data.push_back(fabricq_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabricq_id")
    {
        fabricq_id = value;
        fabricq_id.value_namespace = name_space;
        fabricq_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabricq_id")
    {
        fabricq_id.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabricq_id")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Drivers()
    :
    rack_number{YType::int32, "rack_number"}
        ,
    clients(this, {"client_idx"})
{

    yang_name = "drivers"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::~Drivers()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clients.len(); index++)
    {
        if(clients[index]->has_data())
            return true;
    }
    return rack_number.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_operation() const
{
    for (std::size_t index=0; index<clients.len(); index++)
    {
        if(clients[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drivers";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients>();
        c->parent = this;
        clients.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clients.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "rack_number")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::Clients()
    :
    client_idx{YType::int32, "client_idx"},
    show_asic_0{YType::boolean, "show_asic_0"},
    asic_0_bitmap{YType::str, "asic_0_bitmap"},
    show_asic_1{YType::boolean, "show_asic_1"},
    asic_1_bitmap{YType::str, "asic_1_bitmap"},
    show_asic_2{YType::boolean, "show_asic_2"},
    asic_2_bitmap{YType::str, "asic_2_bitmap"},
    show_asic_3{YType::boolean, "show_asic_3"},
    asic_3_bitmap{YType::str, "asic_3_bitmap"},
    show_asic_4{YType::boolean, "show_asic_4"},
    asic_4_bitmap{YType::str, "asic_4_bitmap"},
    show_asic_5{YType::boolean, "show_asic_5"},
    asic_5_bitmap{YType::str, "asic_5_bitmap"},
    show_asic_6{YType::boolean, "show_asic_6"},
    asic_6_bitmap{YType::str, "asic_6_bitmap"},
    show_asic_7{YType::boolean, "show_asic_7"},
    asic_7_bitmap{YType::str, "asic_7_bitmap"},
    show_asic_8{YType::boolean, "show_asic_8"},
    asic_8_bitmap{YType::str, "asic_8_bitmap"},
    show_asic_9{YType::boolean, "show_asic_9"},
    asic_9_bitmap{YType::str, "asic_9_bitmap"},
    show_asic_10{YType::boolean, "show_asic_10"},
    asic_10_bitmap{YType::str, "asic_10_bitmap"},
    show_asic_11{YType::boolean, "show_asic_11"},
    asic_11_bitmap{YType::str, "asic_11_bitmap"},
    show_asic_12{YType::boolean, "show_asic_12"},
    asic_12_bitmap{YType::str, "asic_12_bitmap"},
    show_asic_13{YType::boolean, "show_asic_13"},
    asic_13_bitmap{YType::str, "asic_13_bitmap"},
    show_asic_14{YType::boolean, "show_asic_14"},
    asic_14_bitmap{YType::str, "asic_14_bitmap"},
    show_asic_15{YType::boolean, "show_asic_15"},
    asic_15_bitmap{YType::str, "asic_15_bitmap"},
    show_asic_16{YType::boolean, "show_asic_16"},
    asic_16_bitmap{YType::str, "asic_16_bitmap"},
    show_asic_17{YType::boolean, "show_asic_17"},
    asic_17_bitmap{YType::str, "asic_17_bitmap"},
    show_asic_18{YType::boolean, "show_asic_18"},
    asic_18_bitmap{YType::str, "asic_18_bitmap"},
    show_asic_19{YType::boolean, "show_asic_19"},
    asic_19_bitmap{YType::str, "asic_19_bitmap"},
    show_asic_20{YType::boolean, "show_asic_20"},
    asic_20_bitmap{YType::str, "asic_20_bitmap"},
    show_asic_21{YType::boolean, "show_asic_21"},
    asic_21_bitmap{YType::str, "asic_21_bitmap"},
    show_asic_22{YType::boolean, "show_asic_22"},
    asic_22_bitmap{YType::str, "asic_22_bitmap"},
    show_asic_23{YType::boolean, "show_asic_23"},
    asic_23_bitmap{YType::str, "asic_23_bitmap"},
    show_asic_24{YType::boolean, "show_asic_24"},
    asic_24_bitmap{YType::str, "asic_24_bitmap"},
    show_asic_25{YType::boolean, "show_asic_25"},
    asic_25_bitmap{YType::str, "asic_25_bitmap"},
    show_asic_26{YType::boolean, "show_asic_26"},
    asic_26_bitmap{YType::str, "asic_26_bitmap"},
    show_asic_27{YType::boolean, "show_asic_27"},
    asic_27_bitmap{YType::str, "asic_27_bitmap"},
    show_asic_28{YType::boolean, "show_asic_28"},
    asic_28_bitmap{YType::str, "asic_28_bitmap"},
    show_asic_29{YType::boolean, "show_asic_29"},
    asic_29_bitmap{YType::str, "asic_29_bitmap"},
    show_asic_30{YType::boolean, "show_asic_30"},
    asic_30_bitmap{YType::str, "asic_30_bitmap"},
    show_asic_31{YType::boolean, "show_asic_31"},
    asic_31_bitmap{YType::str, "asic_31_bitmap"},
    show_asic_32{YType::boolean, "show_asic_32"},
    asic_32_bitmap{YType::str, "asic_32_bitmap"},
    show_asic_33{YType::boolean, "show_asic_33"},
    asic_33_bitmap{YType::str, "asic_33_bitmap"},
    show_asic_34{YType::boolean, "show_asic_34"},
    asic_34_bitmap{YType::str, "asic_34_bitmap"},
    show_asic_35{YType::boolean, "show_asic_35"},
    asic_35_bitmap{YType::str, "asic_35_bitmap"}
{

    yang_name = "clients"; yang_parent_name = "drivers"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::~Clients()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_data() const
{
    if (is_presence_container) return true;
    return client_idx.is_set
	|| show_asic_0.is_set
	|| asic_0_bitmap.is_set
	|| show_asic_1.is_set
	|| asic_1_bitmap.is_set
	|| show_asic_2.is_set
	|| asic_2_bitmap.is_set
	|| show_asic_3.is_set
	|| asic_3_bitmap.is_set
	|| show_asic_4.is_set
	|| asic_4_bitmap.is_set
	|| show_asic_5.is_set
	|| asic_5_bitmap.is_set
	|| show_asic_6.is_set
	|| asic_6_bitmap.is_set
	|| show_asic_7.is_set
	|| asic_7_bitmap.is_set
	|| show_asic_8.is_set
	|| asic_8_bitmap.is_set
	|| show_asic_9.is_set
	|| asic_9_bitmap.is_set
	|| show_asic_10.is_set
	|| asic_10_bitmap.is_set
	|| show_asic_11.is_set
	|| asic_11_bitmap.is_set
	|| show_asic_12.is_set
	|| asic_12_bitmap.is_set
	|| show_asic_13.is_set
	|| asic_13_bitmap.is_set
	|| show_asic_14.is_set
	|| asic_14_bitmap.is_set
	|| show_asic_15.is_set
	|| asic_15_bitmap.is_set
	|| show_asic_16.is_set
	|| asic_16_bitmap.is_set
	|| show_asic_17.is_set
	|| asic_17_bitmap.is_set
	|| show_asic_18.is_set
	|| asic_18_bitmap.is_set
	|| show_asic_19.is_set
	|| asic_19_bitmap.is_set
	|| show_asic_20.is_set
	|| asic_20_bitmap.is_set
	|| show_asic_21.is_set
	|| asic_21_bitmap.is_set
	|| show_asic_22.is_set
	|| asic_22_bitmap.is_set
	|| show_asic_23.is_set
	|| asic_23_bitmap.is_set
	|| show_asic_24.is_set
	|| asic_24_bitmap.is_set
	|| show_asic_25.is_set
	|| asic_25_bitmap.is_set
	|| show_asic_26.is_set
	|| asic_26_bitmap.is_set
	|| show_asic_27.is_set
	|| asic_27_bitmap.is_set
	|| show_asic_28.is_set
	|| asic_28_bitmap.is_set
	|| show_asic_29.is_set
	|| asic_29_bitmap.is_set
	|| show_asic_30.is_set
	|| asic_30_bitmap.is_set
	|| show_asic_31.is_set
	|| asic_31_bitmap.is_set
	|| show_asic_32.is_set
	|| asic_32_bitmap.is_set
	|| show_asic_33.is_set
	|| asic_33_bitmap.is_set
	|| show_asic_34.is_set
	|| asic_34_bitmap.is_set
	|| show_asic_35.is_set
	|| asic_35_bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_idx.yfilter)
	|| ydk::is_set(show_asic_0.yfilter)
	|| ydk::is_set(asic_0_bitmap.yfilter)
	|| ydk::is_set(show_asic_1.yfilter)
	|| ydk::is_set(asic_1_bitmap.yfilter)
	|| ydk::is_set(show_asic_2.yfilter)
	|| ydk::is_set(asic_2_bitmap.yfilter)
	|| ydk::is_set(show_asic_3.yfilter)
	|| ydk::is_set(asic_3_bitmap.yfilter)
	|| ydk::is_set(show_asic_4.yfilter)
	|| ydk::is_set(asic_4_bitmap.yfilter)
	|| ydk::is_set(show_asic_5.yfilter)
	|| ydk::is_set(asic_5_bitmap.yfilter)
	|| ydk::is_set(show_asic_6.yfilter)
	|| ydk::is_set(asic_6_bitmap.yfilter)
	|| ydk::is_set(show_asic_7.yfilter)
	|| ydk::is_set(asic_7_bitmap.yfilter)
	|| ydk::is_set(show_asic_8.yfilter)
	|| ydk::is_set(asic_8_bitmap.yfilter)
	|| ydk::is_set(show_asic_9.yfilter)
	|| ydk::is_set(asic_9_bitmap.yfilter)
	|| ydk::is_set(show_asic_10.yfilter)
	|| ydk::is_set(asic_10_bitmap.yfilter)
	|| ydk::is_set(show_asic_11.yfilter)
	|| ydk::is_set(asic_11_bitmap.yfilter)
	|| ydk::is_set(show_asic_12.yfilter)
	|| ydk::is_set(asic_12_bitmap.yfilter)
	|| ydk::is_set(show_asic_13.yfilter)
	|| ydk::is_set(asic_13_bitmap.yfilter)
	|| ydk::is_set(show_asic_14.yfilter)
	|| ydk::is_set(asic_14_bitmap.yfilter)
	|| ydk::is_set(show_asic_15.yfilter)
	|| ydk::is_set(asic_15_bitmap.yfilter)
	|| ydk::is_set(show_asic_16.yfilter)
	|| ydk::is_set(asic_16_bitmap.yfilter)
	|| ydk::is_set(show_asic_17.yfilter)
	|| ydk::is_set(asic_17_bitmap.yfilter)
	|| ydk::is_set(show_asic_18.yfilter)
	|| ydk::is_set(asic_18_bitmap.yfilter)
	|| ydk::is_set(show_asic_19.yfilter)
	|| ydk::is_set(asic_19_bitmap.yfilter)
	|| ydk::is_set(show_asic_20.yfilter)
	|| ydk::is_set(asic_20_bitmap.yfilter)
	|| ydk::is_set(show_asic_21.yfilter)
	|| ydk::is_set(asic_21_bitmap.yfilter)
	|| ydk::is_set(show_asic_22.yfilter)
	|| ydk::is_set(asic_22_bitmap.yfilter)
	|| ydk::is_set(show_asic_23.yfilter)
	|| ydk::is_set(asic_23_bitmap.yfilter)
	|| ydk::is_set(show_asic_24.yfilter)
	|| ydk::is_set(asic_24_bitmap.yfilter)
	|| ydk::is_set(show_asic_25.yfilter)
	|| ydk::is_set(asic_25_bitmap.yfilter)
	|| ydk::is_set(show_asic_26.yfilter)
	|| ydk::is_set(asic_26_bitmap.yfilter)
	|| ydk::is_set(show_asic_27.yfilter)
	|| ydk::is_set(asic_27_bitmap.yfilter)
	|| ydk::is_set(show_asic_28.yfilter)
	|| ydk::is_set(asic_28_bitmap.yfilter)
	|| ydk::is_set(show_asic_29.yfilter)
	|| ydk::is_set(asic_29_bitmap.yfilter)
	|| ydk::is_set(show_asic_30.yfilter)
	|| ydk::is_set(asic_30_bitmap.yfilter)
	|| ydk::is_set(show_asic_31.yfilter)
	|| ydk::is_set(asic_31_bitmap.yfilter)
	|| ydk::is_set(show_asic_32.yfilter)
	|| ydk::is_set(asic_32_bitmap.yfilter)
	|| ydk::is_set(show_asic_33.yfilter)
	|| ydk::is_set(asic_33_bitmap.yfilter)
	|| ydk::is_set(show_asic_34.yfilter)
	|| ydk::is_set(asic_34_bitmap.yfilter)
	|| ydk::is_set(show_asic_35.yfilter)
	|| ydk::is_set(asic_35_bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    ADD_KEY_TOKEN(client_idx, "client_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_idx.is_set || is_set(client_idx.yfilter)) leaf_name_data.push_back(client_idx.get_name_leafdata());
    if (show_asic_0.is_set || is_set(show_asic_0.yfilter)) leaf_name_data.push_back(show_asic_0.get_name_leafdata());
    if (asic_0_bitmap.is_set || is_set(asic_0_bitmap.yfilter)) leaf_name_data.push_back(asic_0_bitmap.get_name_leafdata());
    if (show_asic_1.is_set || is_set(show_asic_1.yfilter)) leaf_name_data.push_back(show_asic_1.get_name_leafdata());
    if (asic_1_bitmap.is_set || is_set(asic_1_bitmap.yfilter)) leaf_name_data.push_back(asic_1_bitmap.get_name_leafdata());
    if (show_asic_2.is_set || is_set(show_asic_2.yfilter)) leaf_name_data.push_back(show_asic_2.get_name_leafdata());
    if (asic_2_bitmap.is_set || is_set(asic_2_bitmap.yfilter)) leaf_name_data.push_back(asic_2_bitmap.get_name_leafdata());
    if (show_asic_3.is_set || is_set(show_asic_3.yfilter)) leaf_name_data.push_back(show_asic_3.get_name_leafdata());
    if (asic_3_bitmap.is_set || is_set(asic_3_bitmap.yfilter)) leaf_name_data.push_back(asic_3_bitmap.get_name_leafdata());
    if (show_asic_4.is_set || is_set(show_asic_4.yfilter)) leaf_name_data.push_back(show_asic_4.get_name_leafdata());
    if (asic_4_bitmap.is_set || is_set(asic_4_bitmap.yfilter)) leaf_name_data.push_back(asic_4_bitmap.get_name_leafdata());
    if (show_asic_5.is_set || is_set(show_asic_5.yfilter)) leaf_name_data.push_back(show_asic_5.get_name_leafdata());
    if (asic_5_bitmap.is_set || is_set(asic_5_bitmap.yfilter)) leaf_name_data.push_back(asic_5_bitmap.get_name_leafdata());
    if (show_asic_6.is_set || is_set(show_asic_6.yfilter)) leaf_name_data.push_back(show_asic_6.get_name_leafdata());
    if (asic_6_bitmap.is_set || is_set(asic_6_bitmap.yfilter)) leaf_name_data.push_back(asic_6_bitmap.get_name_leafdata());
    if (show_asic_7.is_set || is_set(show_asic_7.yfilter)) leaf_name_data.push_back(show_asic_7.get_name_leafdata());
    if (asic_7_bitmap.is_set || is_set(asic_7_bitmap.yfilter)) leaf_name_data.push_back(asic_7_bitmap.get_name_leafdata());
    if (show_asic_8.is_set || is_set(show_asic_8.yfilter)) leaf_name_data.push_back(show_asic_8.get_name_leafdata());
    if (asic_8_bitmap.is_set || is_set(asic_8_bitmap.yfilter)) leaf_name_data.push_back(asic_8_bitmap.get_name_leafdata());
    if (show_asic_9.is_set || is_set(show_asic_9.yfilter)) leaf_name_data.push_back(show_asic_9.get_name_leafdata());
    if (asic_9_bitmap.is_set || is_set(asic_9_bitmap.yfilter)) leaf_name_data.push_back(asic_9_bitmap.get_name_leafdata());
    if (show_asic_10.is_set || is_set(show_asic_10.yfilter)) leaf_name_data.push_back(show_asic_10.get_name_leafdata());
    if (asic_10_bitmap.is_set || is_set(asic_10_bitmap.yfilter)) leaf_name_data.push_back(asic_10_bitmap.get_name_leafdata());
    if (show_asic_11.is_set || is_set(show_asic_11.yfilter)) leaf_name_data.push_back(show_asic_11.get_name_leafdata());
    if (asic_11_bitmap.is_set || is_set(asic_11_bitmap.yfilter)) leaf_name_data.push_back(asic_11_bitmap.get_name_leafdata());
    if (show_asic_12.is_set || is_set(show_asic_12.yfilter)) leaf_name_data.push_back(show_asic_12.get_name_leafdata());
    if (asic_12_bitmap.is_set || is_set(asic_12_bitmap.yfilter)) leaf_name_data.push_back(asic_12_bitmap.get_name_leafdata());
    if (show_asic_13.is_set || is_set(show_asic_13.yfilter)) leaf_name_data.push_back(show_asic_13.get_name_leafdata());
    if (asic_13_bitmap.is_set || is_set(asic_13_bitmap.yfilter)) leaf_name_data.push_back(asic_13_bitmap.get_name_leafdata());
    if (show_asic_14.is_set || is_set(show_asic_14.yfilter)) leaf_name_data.push_back(show_asic_14.get_name_leafdata());
    if (asic_14_bitmap.is_set || is_set(asic_14_bitmap.yfilter)) leaf_name_data.push_back(asic_14_bitmap.get_name_leafdata());
    if (show_asic_15.is_set || is_set(show_asic_15.yfilter)) leaf_name_data.push_back(show_asic_15.get_name_leafdata());
    if (asic_15_bitmap.is_set || is_set(asic_15_bitmap.yfilter)) leaf_name_data.push_back(asic_15_bitmap.get_name_leafdata());
    if (show_asic_16.is_set || is_set(show_asic_16.yfilter)) leaf_name_data.push_back(show_asic_16.get_name_leafdata());
    if (asic_16_bitmap.is_set || is_set(asic_16_bitmap.yfilter)) leaf_name_data.push_back(asic_16_bitmap.get_name_leafdata());
    if (show_asic_17.is_set || is_set(show_asic_17.yfilter)) leaf_name_data.push_back(show_asic_17.get_name_leafdata());
    if (asic_17_bitmap.is_set || is_set(asic_17_bitmap.yfilter)) leaf_name_data.push_back(asic_17_bitmap.get_name_leafdata());
    if (show_asic_18.is_set || is_set(show_asic_18.yfilter)) leaf_name_data.push_back(show_asic_18.get_name_leafdata());
    if (asic_18_bitmap.is_set || is_set(asic_18_bitmap.yfilter)) leaf_name_data.push_back(asic_18_bitmap.get_name_leafdata());
    if (show_asic_19.is_set || is_set(show_asic_19.yfilter)) leaf_name_data.push_back(show_asic_19.get_name_leafdata());
    if (asic_19_bitmap.is_set || is_set(asic_19_bitmap.yfilter)) leaf_name_data.push_back(asic_19_bitmap.get_name_leafdata());
    if (show_asic_20.is_set || is_set(show_asic_20.yfilter)) leaf_name_data.push_back(show_asic_20.get_name_leafdata());
    if (asic_20_bitmap.is_set || is_set(asic_20_bitmap.yfilter)) leaf_name_data.push_back(asic_20_bitmap.get_name_leafdata());
    if (show_asic_21.is_set || is_set(show_asic_21.yfilter)) leaf_name_data.push_back(show_asic_21.get_name_leafdata());
    if (asic_21_bitmap.is_set || is_set(asic_21_bitmap.yfilter)) leaf_name_data.push_back(asic_21_bitmap.get_name_leafdata());
    if (show_asic_22.is_set || is_set(show_asic_22.yfilter)) leaf_name_data.push_back(show_asic_22.get_name_leafdata());
    if (asic_22_bitmap.is_set || is_set(asic_22_bitmap.yfilter)) leaf_name_data.push_back(asic_22_bitmap.get_name_leafdata());
    if (show_asic_23.is_set || is_set(show_asic_23.yfilter)) leaf_name_data.push_back(show_asic_23.get_name_leafdata());
    if (asic_23_bitmap.is_set || is_set(asic_23_bitmap.yfilter)) leaf_name_data.push_back(asic_23_bitmap.get_name_leafdata());
    if (show_asic_24.is_set || is_set(show_asic_24.yfilter)) leaf_name_data.push_back(show_asic_24.get_name_leafdata());
    if (asic_24_bitmap.is_set || is_set(asic_24_bitmap.yfilter)) leaf_name_data.push_back(asic_24_bitmap.get_name_leafdata());
    if (show_asic_25.is_set || is_set(show_asic_25.yfilter)) leaf_name_data.push_back(show_asic_25.get_name_leafdata());
    if (asic_25_bitmap.is_set || is_set(asic_25_bitmap.yfilter)) leaf_name_data.push_back(asic_25_bitmap.get_name_leafdata());
    if (show_asic_26.is_set || is_set(show_asic_26.yfilter)) leaf_name_data.push_back(show_asic_26.get_name_leafdata());
    if (asic_26_bitmap.is_set || is_set(asic_26_bitmap.yfilter)) leaf_name_data.push_back(asic_26_bitmap.get_name_leafdata());
    if (show_asic_27.is_set || is_set(show_asic_27.yfilter)) leaf_name_data.push_back(show_asic_27.get_name_leafdata());
    if (asic_27_bitmap.is_set || is_set(asic_27_bitmap.yfilter)) leaf_name_data.push_back(asic_27_bitmap.get_name_leafdata());
    if (show_asic_28.is_set || is_set(show_asic_28.yfilter)) leaf_name_data.push_back(show_asic_28.get_name_leafdata());
    if (asic_28_bitmap.is_set || is_set(asic_28_bitmap.yfilter)) leaf_name_data.push_back(asic_28_bitmap.get_name_leafdata());
    if (show_asic_29.is_set || is_set(show_asic_29.yfilter)) leaf_name_data.push_back(show_asic_29.get_name_leafdata());
    if (asic_29_bitmap.is_set || is_set(asic_29_bitmap.yfilter)) leaf_name_data.push_back(asic_29_bitmap.get_name_leafdata());
    if (show_asic_30.is_set || is_set(show_asic_30.yfilter)) leaf_name_data.push_back(show_asic_30.get_name_leafdata());
    if (asic_30_bitmap.is_set || is_set(asic_30_bitmap.yfilter)) leaf_name_data.push_back(asic_30_bitmap.get_name_leafdata());
    if (show_asic_31.is_set || is_set(show_asic_31.yfilter)) leaf_name_data.push_back(show_asic_31.get_name_leafdata());
    if (asic_31_bitmap.is_set || is_set(asic_31_bitmap.yfilter)) leaf_name_data.push_back(asic_31_bitmap.get_name_leafdata());
    if (show_asic_32.is_set || is_set(show_asic_32.yfilter)) leaf_name_data.push_back(show_asic_32.get_name_leafdata());
    if (asic_32_bitmap.is_set || is_set(asic_32_bitmap.yfilter)) leaf_name_data.push_back(asic_32_bitmap.get_name_leafdata());
    if (show_asic_33.is_set || is_set(show_asic_33.yfilter)) leaf_name_data.push_back(show_asic_33.get_name_leafdata());
    if (asic_33_bitmap.is_set || is_set(asic_33_bitmap.yfilter)) leaf_name_data.push_back(asic_33_bitmap.get_name_leafdata());
    if (show_asic_34.is_set || is_set(show_asic_34.yfilter)) leaf_name_data.push_back(show_asic_34.get_name_leafdata());
    if (asic_34_bitmap.is_set || is_set(asic_34_bitmap.yfilter)) leaf_name_data.push_back(asic_34_bitmap.get_name_leafdata());
    if (show_asic_35.is_set || is_set(show_asic_35.yfilter)) leaf_name_data.push_back(show_asic_35.get_name_leafdata());
    if (asic_35_bitmap.is_set || is_set(asic_35_bitmap.yfilter)) leaf_name_data.push_back(asic_35_bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client_idx")
    {
        client_idx = value;
        client_idx.value_namespace = name_space;
        client_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_0")
    {
        show_asic_0 = value;
        show_asic_0.value_namespace = name_space;
        show_asic_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_0_bitmap")
    {
        asic_0_bitmap = value;
        asic_0_bitmap.value_namespace = name_space;
        asic_0_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_1")
    {
        show_asic_1 = value;
        show_asic_1.value_namespace = name_space;
        show_asic_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_1_bitmap")
    {
        asic_1_bitmap = value;
        asic_1_bitmap.value_namespace = name_space;
        asic_1_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_2")
    {
        show_asic_2 = value;
        show_asic_2.value_namespace = name_space;
        show_asic_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_2_bitmap")
    {
        asic_2_bitmap = value;
        asic_2_bitmap.value_namespace = name_space;
        asic_2_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_3")
    {
        show_asic_3 = value;
        show_asic_3.value_namespace = name_space;
        show_asic_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_3_bitmap")
    {
        asic_3_bitmap = value;
        asic_3_bitmap.value_namespace = name_space;
        asic_3_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_4")
    {
        show_asic_4 = value;
        show_asic_4.value_namespace = name_space;
        show_asic_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_4_bitmap")
    {
        asic_4_bitmap = value;
        asic_4_bitmap.value_namespace = name_space;
        asic_4_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_5")
    {
        show_asic_5 = value;
        show_asic_5.value_namespace = name_space;
        show_asic_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_5_bitmap")
    {
        asic_5_bitmap = value;
        asic_5_bitmap.value_namespace = name_space;
        asic_5_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_6")
    {
        show_asic_6 = value;
        show_asic_6.value_namespace = name_space;
        show_asic_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_6_bitmap")
    {
        asic_6_bitmap = value;
        asic_6_bitmap.value_namespace = name_space;
        asic_6_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_7")
    {
        show_asic_7 = value;
        show_asic_7.value_namespace = name_space;
        show_asic_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_7_bitmap")
    {
        asic_7_bitmap = value;
        asic_7_bitmap.value_namespace = name_space;
        asic_7_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_8")
    {
        show_asic_8 = value;
        show_asic_8.value_namespace = name_space;
        show_asic_8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_8_bitmap")
    {
        asic_8_bitmap = value;
        asic_8_bitmap.value_namespace = name_space;
        asic_8_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_9")
    {
        show_asic_9 = value;
        show_asic_9.value_namespace = name_space;
        show_asic_9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_9_bitmap")
    {
        asic_9_bitmap = value;
        asic_9_bitmap.value_namespace = name_space;
        asic_9_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_10")
    {
        show_asic_10 = value;
        show_asic_10.value_namespace = name_space;
        show_asic_10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_10_bitmap")
    {
        asic_10_bitmap = value;
        asic_10_bitmap.value_namespace = name_space;
        asic_10_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_11")
    {
        show_asic_11 = value;
        show_asic_11.value_namespace = name_space;
        show_asic_11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_11_bitmap")
    {
        asic_11_bitmap = value;
        asic_11_bitmap.value_namespace = name_space;
        asic_11_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_12")
    {
        show_asic_12 = value;
        show_asic_12.value_namespace = name_space;
        show_asic_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_12_bitmap")
    {
        asic_12_bitmap = value;
        asic_12_bitmap.value_namespace = name_space;
        asic_12_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_13")
    {
        show_asic_13 = value;
        show_asic_13.value_namespace = name_space;
        show_asic_13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_13_bitmap")
    {
        asic_13_bitmap = value;
        asic_13_bitmap.value_namespace = name_space;
        asic_13_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_14")
    {
        show_asic_14 = value;
        show_asic_14.value_namespace = name_space;
        show_asic_14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_14_bitmap")
    {
        asic_14_bitmap = value;
        asic_14_bitmap.value_namespace = name_space;
        asic_14_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_15")
    {
        show_asic_15 = value;
        show_asic_15.value_namespace = name_space;
        show_asic_15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_15_bitmap")
    {
        asic_15_bitmap = value;
        asic_15_bitmap.value_namespace = name_space;
        asic_15_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_16")
    {
        show_asic_16 = value;
        show_asic_16.value_namespace = name_space;
        show_asic_16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_16_bitmap")
    {
        asic_16_bitmap = value;
        asic_16_bitmap.value_namespace = name_space;
        asic_16_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_17")
    {
        show_asic_17 = value;
        show_asic_17.value_namespace = name_space;
        show_asic_17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_17_bitmap")
    {
        asic_17_bitmap = value;
        asic_17_bitmap.value_namespace = name_space;
        asic_17_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_18")
    {
        show_asic_18 = value;
        show_asic_18.value_namespace = name_space;
        show_asic_18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_18_bitmap")
    {
        asic_18_bitmap = value;
        asic_18_bitmap.value_namespace = name_space;
        asic_18_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_19")
    {
        show_asic_19 = value;
        show_asic_19.value_namespace = name_space;
        show_asic_19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_19_bitmap")
    {
        asic_19_bitmap = value;
        asic_19_bitmap.value_namespace = name_space;
        asic_19_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_20")
    {
        show_asic_20 = value;
        show_asic_20.value_namespace = name_space;
        show_asic_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_20_bitmap")
    {
        asic_20_bitmap = value;
        asic_20_bitmap.value_namespace = name_space;
        asic_20_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_21")
    {
        show_asic_21 = value;
        show_asic_21.value_namespace = name_space;
        show_asic_21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_21_bitmap")
    {
        asic_21_bitmap = value;
        asic_21_bitmap.value_namespace = name_space;
        asic_21_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_22")
    {
        show_asic_22 = value;
        show_asic_22.value_namespace = name_space;
        show_asic_22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_22_bitmap")
    {
        asic_22_bitmap = value;
        asic_22_bitmap.value_namespace = name_space;
        asic_22_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_23")
    {
        show_asic_23 = value;
        show_asic_23.value_namespace = name_space;
        show_asic_23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_23_bitmap")
    {
        asic_23_bitmap = value;
        asic_23_bitmap.value_namespace = name_space;
        asic_23_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_24")
    {
        show_asic_24 = value;
        show_asic_24.value_namespace = name_space;
        show_asic_24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_24_bitmap")
    {
        asic_24_bitmap = value;
        asic_24_bitmap.value_namespace = name_space;
        asic_24_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_25")
    {
        show_asic_25 = value;
        show_asic_25.value_namespace = name_space;
        show_asic_25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_25_bitmap")
    {
        asic_25_bitmap = value;
        asic_25_bitmap.value_namespace = name_space;
        asic_25_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_26")
    {
        show_asic_26 = value;
        show_asic_26.value_namespace = name_space;
        show_asic_26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_26_bitmap")
    {
        asic_26_bitmap = value;
        asic_26_bitmap.value_namespace = name_space;
        asic_26_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_27")
    {
        show_asic_27 = value;
        show_asic_27.value_namespace = name_space;
        show_asic_27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_27_bitmap")
    {
        asic_27_bitmap = value;
        asic_27_bitmap.value_namespace = name_space;
        asic_27_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_28")
    {
        show_asic_28 = value;
        show_asic_28.value_namespace = name_space;
        show_asic_28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_28_bitmap")
    {
        asic_28_bitmap = value;
        asic_28_bitmap.value_namespace = name_space;
        asic_28_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_29")
    {
        show_asic_29 = value;
        show_asic_29.value_namespace = name_space;
        show_asic_29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_29_bitmap")
    {
        asic_29_bitmap = value;
        asic_29_bitmap.value_namespace = name_space;
        asic_29_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_30")
    {
        show_asic_30 = value;
        show_asic_30.value_namespace = name_space;
        show_asic_30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_30_bitmap")
    {
        asic_30_bitmap = value;
        asic_30_bitmap.value_namespace = name_space;
        asic_30_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_31")
    {
        show_asic_31 = value;
        show_asic_31.value_namespace = name_space;
        show_asic_31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_31_bitmap")
    {
        asic_31_bitmap = value;
        asic_31_bitmap.value_namespace = name_space;
        asic_31_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_32")
    {
        show_asic_32 = value;
        show_asic_32.value_namespace = name_space;
        show_asic_32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_32_bitmap")
    {
        asic_32_bitmap = value;
        asic_32_bitmap.value_namespace = name_space;
        asic_32_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_33")
    {
        show_asic_33 = value;
        show_asic_33.value_namespace = name_space;
        show_asic_33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_33_bitmap")
    {
        asic_33_bitmap = value;
        asic_33_bitmap.value_namespace = name_space;
        asic_33_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_34")
    {
        show_asic_34 = value;
        show_asic_34.value_namespace = name_space;
        show_asic_34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_34_bitmap")
    {
        asic_34_bitmap = value;
        asic_34_bitmap.value_namespace = name_space;
        asic_34_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_35")
    {
        show_asic_35 = value;
        show_asic_35.value_namespace = name_space;
        show_asic_35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_35_bitmap")
    {
        asic_35_bitmap = value;
        asic_35_bitmap.value_namespace = name_space;
        asic_35_bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client_idx")
    {
        client_idx.yfilter = yfilter;
    }
    if(value_path == "show_asic_0")
    {
        show_asic_0.yfilter = yfilter;
    }
    if(value_path == "asic_0_bitmap")
    {
        asic_0_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_1")
    {
        show_asic_1.yfilter = yfilter;
    }
    if(value_path == "asic_1_bitmap")
    {
        asic_1_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_2")
    {
        show_asic_2.yfilter = yfilter;
    }
    if(value_path == "asic_2_bitmap")
    {
        asic_2_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_3")
    {
        show_asic_3.yfilter = yfilter;
    }
    if(value_path == "asic_3_bitmap")
    {
        asic_3_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_4")
    {
        show_asic_4.yfilter = yfilter;
    }
    if(value_path == "asic_4_bitmap")
    {
        asic_4_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_5")
    {
        show_asic_5.yfilter = yfilter;
    }
    if(value_path == "asic_5_bitmap")
    {
        asic_5_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_6")
    {
        show_asic_6.yfilter = yfilter;
    }
    if(value_path == "asic_6_bitmap")
    {
        asic_6_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_7")
    {
        show_asic_7.yfilter = yfilter;
    }
    if(value_path == "asic_7_bitmap")
    {
        asic_7_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_8")
    {
        show_asic_8.yfilter = yfilter;
    }
    if(value_path == "asic_8_bitmap")
    {
        asic_8_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_9")
    {
        show_asic_9.yfilter = yfilter;
    }
    if(value_path == "asic_9_bitmap")
    {
        asic_9_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_10")
    {
        show_asic_10.yfilter = yfilter;
    }
    if(value_path == "asic_10_bitmap")
    {
        asic_10_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_11")
    {
        show_asic_11.yfilter = yfilter;
    }
    if(value_path == "asic_11_bitmap")
    {
        asic_11_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_12")
    {
        show_asic_12.yfilter = yfilter;
    }
    if(value_path == "asic_12_bitmap")
    {
        asic_12_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_13")
    {
        show_asic_13.yfilter = yfilter;
    }
    if(value_path == "asic_13_bitmap")
    {
        asic_13_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_14")
    {
        show_asic_14.yfilter = yfilter;
    }
    if(value_path == "asic_14_bitmap")
    {
        asic_14_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_15")
    {
        show_asic_15.yfilter = yfilter;
    }
    if(value_path == "asic_15_bitmap")
    {
        asic_15_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_16")
    {
        show_asic_16.yfilter = yfilter;
    }
    if(value_path == "asic_16_bitmap")
    {
        asic_16_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_17")
    {
        show_asic_17.yfilter = yfilter;
    }
    if(value_path == "asic_17_bitmap")
    {
        asic_17_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_18")
    {
        show_asic_18.yfilter = yfilter;
    }
    if(value_path == "asic_18_bitmap")
    {
        asic_18_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_19")
    {
        show_asic_19.yfilter = yfilter;
    }
    if(value_path == "asic_19_bitmap")
    {
        asic_19_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_20")
    {
        show_asic_20.yfilter = yfilter;
    }
    if(value_path == "asic_20_bitmap")
    {
        asic_20_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_21")
    {
        show_asic_21.yfilter = yfilter;
    }
    if(value_path == "asic_21_bitmap")
    {
        asic_21_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_22")
    {
        show_asic_22.yfilter = yfilter;
    }
    if(value_path == "asic_22_bitmap")
    {
        asic_22_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_23")
    {
        show_asic_23.yfilter = yfilter;
    }
    if(value_path == "asic_23_bitmap")
    {
        asic_23_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_24")
    {
        show_asic_24.yfilter = yfilter;
    }
    if(value_path == "asic_24_bitmap")
    {
        asic_24_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_25")
    {
        show_asic_25.yfilter = yfilter;
    }
    if(value_path == "asic_25_bitmap")
    {
        asic_25_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_26")
    {
        show_asic_26.yfilter = yfilter;
    }
    if(value_path == "asic_26_bitmap")
    {
        asic_26_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_27")
    {
        show_asic_27.yfilter = yfilter;
    }
    if(value_path == "asic_27_bitmap")
    {
        asic_27_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_28")
    {
        show_asic_28.yfilter = yfilter;
    }
    if(value_path == "asic_28_bitmap")
    {
        asic_28_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_29")
    {
        show_asic_29.yfilter = yfilter;
    }
    if(value_path == "asic_29_bitmap")
    {
        asic_29_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_30")
    {
        show_asic_30.yfilter = yfilter;
    }
    if(value_path == "asic_30_bitmap")
    {
        asic_30_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_31")
    {
        show_asic_31.yfilter = yfilter;
    }
    if(value_path == "asic_31_bitmap")
    {
        asic_31_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_32")
    {
        show_asic_32.yfilter = yfilter;
    }
    if(value_path == "asic_32_bitmap")
    {
        asic_32_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_33")
    {
        show_asic_33.yfilter = yfilter;
    }
    if(value_path == "asic_33_bitmap")
    {
        asic_33_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_34")
    {
        show_asic_34.yfilter = yfilter;
    }
    if(value_path == "asic_34_bitmap")
    {
        asic_34_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_35")
    {
        show_asic_35.yfilter = yfilter;
    }
    if(value_path == "asic_35_bitmap")
    {
        asic_35_bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client_idx" || name == "show_asic_0" || name == "asic_0_bitmap" || name == "show_asic_1" || name == "asic_1_bitmap" || name == "show_asic_2" || name == "asic_2_bitmap" || name == "show_asic_3" || name == "asic_3_bitmap" || name == "show_asic_4" || name == "asic_4_bitmap" || name == "show_asic_5" || name == "asic_5_bitmap" || name == "show_asic_6" || name == "asic_6_bitmap" || name == "show_asic_7" || name == "asic_7_bitmap" || name == "show_asic_8" || name == "asic_8_bitmap" || name == "show_asic_9" || name == "asic_9_bitmap" || name == "show_asic_10" || name == "asic_10_bitmap" || name == "show_asic_11" || name == "asic_11_bitmap" || name == "show_asic_12" || name == "asic_12_bitmap" || name == "show_asic_13" || name == "asic_13_bitmap" || name == "show_asic_14" || name == "asic_14_bitmap" || name == "show_asic_15" || name == "asic_15_bitmap" || name == "show_asic_16" || name == "asic_16_bitmap" || name == "show_asic_17" || name == "asic_17_bitmap" || name == "show_asic_18" || name == "asic_18_bitmap" || name == "show_asic_19" || name == "asic_19_bitmap" || name == "show_asic_20" || name == "asic_20_bitmap" || name == "show_asic_21" || name == "asic_21_bitmap" || name == "show_asic_22" || name == "asic_22_bitmap" || name == "show_asic_23" || name == "asic_23_bitmap" || name == "show_asic_24" || name == "asic_24_bitmap" || name == "show_asic_25" || name == "asic_25_bitmap" || name == "show_asic_26" || name == "asic_26_bitmap" || name == "show_asic_27" || name == "asic_27_bitmap" || name == "show_asic_28" || name == "asic_28_bitmap" || name == "show_asic_29" || name == "asic_29_bitmap" || name == "show_asic_30" || name == "asic_30_bitmap" || name == "show_asic_31" || name == "asic_31_bitmap" || name == "show_asic_32" || name == "asic_32_bitmap" || name == "show_asic_33" || name == "asic_33_bitmap" || name == "show_asic_34" || name == "asic_34_bitmap" || name == "show_asic_35" || name == "asic_35_bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Resource()
    :
    sdr(this, {"sdr_name"})
{

    yang_name = "resource"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Resource::~Resource()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Resource::has_operation() const
{
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr>();
        c->parent = this;
        sdr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Sdr()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::~Sdr()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/resource/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application>();
        c->parent = this;
        application.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : application.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"}
        ,
    ids_range(this, {"id", "elements"})
{

    yang_name = "application"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ids_range.len(); index++)
    {
        if(ids_range[index]->has_data())
            return true;
    }
    return app_name.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_operation() const
{
    for (std::size_t index=0; index<ids_range.len(); index++)
    {
        if(ids_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ids_range")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange>();
        c->parent = this;
        ids_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ids_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ids_range" || name == "app_name" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::IdsRange()
    :
    id{YType::int32, "id"},
    elements{YType::int32, "elements"}
        ,
    fgid_ids(this, {"fgid_id", "line_idx"})
{

    yang_name = "ids_range"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::~IdsRange()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fgid_ids.len(); index++)
    {
        if(fgid_ids[index]->has_data())
            return true;
    }
    return id.is_set
	|| elements.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_operation() const
{
    for (std::size_t index=0; index<fgid_ids.len(); index++)
    {
        if(fgid_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(elements.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ids_range";
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(elements, "elements");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (elements.is_set || is_set(elements.yfilter)) leaf_name_data.push_back(elements.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fgid_ids")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds>();
        c->parent = this;
        fgid_ids.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fgid_ids.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elements")
    {
        elements = value;
        elements.value_namespace = name_space;
        elements.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "elements")
    {
        elements.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgid_ids" || name == "id" || name == "elements")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::FgidIds()
    :
    fgid_id{YType::str, "fgid_id"},
    line_idx{YType::int32, "line_idx"},
    sdr_name_h{YType::str, "sdr_name_h"},
    app_name_h{YType::str, "app_name_h"}
{

    yang_name = "fgid_ids"; yang_parent_name = "ids_range"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::~FgidIds()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_data() const
{
    if (is_presence_container) return true;
    return fgid_id.is_set
	|| line_idx.is_set
	|| sdr_name_h.is_set
	|| app_name_h.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fgid_id.yfilter)
	|| ydk::is_set(line_idx.yfilter)
	|| ydk::is_set(sdr_name_h.yfilter)
	|| ydk::is_set(app_name_h.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid_ids";
    ADD_KEY_TOKEN(fgid_id, "fgid_id");
    ADD_KEY_TOKEN(line_idx, "line_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgid_id.is_set || is_set(fgid_id.yfilter)) leaf_name_data.push_back(fgid_id.get_name_leafdata());
    if (line_idx.is_set || is_set(line_idx.yfilter)) leaf_name_data.push_back(line_idx.get_name_leafdata());
    if (sdr_name_h.is_set || is_set(sdr_name_h.yfilter)) leaf_name_data.push_back(sdr_name_h.get_name_leafdata());
    if (app_name_h.is_set || is_set(app_name_h.yfilter)) leaf_name_data.push_back(app_name_h.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgid_id")
    {
        fgid_id = value;
        fgid_id.value_namespace = name_space;
        fgid_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line_idx")
    {
        line_idx = value;
        line_idx.value_namespace = name_space;
        line_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_name_h")
    {
        sdr_name_h = value;
        sdr_name_h.value_namespace = name_space;
        sdr_name_h.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_name_h")
    {
        app_name_h = value;
        app_name_h.value_namespace = name_space;
        app_name_h.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgid_id")
    {
        fgid_id.yfilter = yfilter;
    }
    if(value_path == "line_idx")
    {
        line_idx.yfilter = yfilter;
    }
    if(value_path == "sdr_name_h")
    {
        sdr_name_h.yfilter = yfilter;
    }
    if(value_path == "app_name_h")
    {
        app_name_h.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgid_id" || name == "line_idx" || name == "sdr_name_h" || name == "app_name_h")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Statistics()
    :
    all(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All>())
    , sdr(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr>())
    , pool(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool>())
    , system(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System>())
{
    all->parent = this;
    sdr->parent = this;
    pool->parent = this;
    system->parent = this;

    yang_name = "statistics"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (sdr !=  nullptr && sdr->has_data())
	|| (pool !=  nullptr && pool->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (sdr !=  nullptr && sdr->has_operation())
	|| (pool !=  nullptr && pool->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string Controller::Fabric::Oper::Fgid::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All>();
        }
        return all;
    }

    if(child_yang_name == "sdr")
    {
        if(sdr == nullptr)
        {
            sdr = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr>();
        }
        return sdr;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool>();
        }
        return pool;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(sdr != nullptr)
    {
        children["sdr"] = sdr;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "sdr" || name == "pool" || name == "system")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::All()
    :
    stats_list(this, {"system_stats"})
    , sdr_list(this, {"sdr_name"})
    , pool_list(this, {"pool_id"})
{

    yang_name = "all"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::~All()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::StatsList>();
        c->parent = this;
        stats_list.append(c);
        return c;
    }

    if(child_yang_name == "sdr_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::SdrList>();
        c->parent = this;
        sdr_list.append(c);
        return c;
    }

    if(child_yang_name == "pool_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::PoolList>();
        c->parent = this;
        pool_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : sdr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : pool_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats_list" || name == "sdr_list" || name == "pool_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::StatsList()
    :
    system_stats{YType::int32, "system_stats"},
    system_total_fgids{YType::uint32, "system_total_fgids"},
    system_inuse_fgids{YType::uint32, "system_inuse_fgids"},
    system_hwm_fgids{YType::uint32, "system_hwm_fgids"}
{

    yang_name = "stats_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::~StatsList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return system_stats.is_set
	|| system_total_fgids.is_set
	|| system_inuse_fgids.is_set
	|| system_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_stats.yfilter)
	|| ydk::is_set(system_total_fgids.yfilter)
	|| ydk::is_set(system_inuse_fgids.yfilter)
	|| ydk::is_set(system_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats_list";
    ADD_KEY_TOKEN(system_stats, "system_stats");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_stats.is_set || is_set(system_stats.yfilter)) leaf_name_data.push_back(system_stats.get_name_leafdata());
    if (system_total_fgids.is_set || is_set(system_total_fgids.yfilter)) leaf_name_data.push_back(system_total_fgids.get_name_leafdata());
    if (system_inuse_fgids.is_set || is_set(system_inuse_fgids.yfilter)) leaf_name_data.push_back(system_inuse_fgids.get_name_leafdata());
    if (system_hwm_fgids.is_set || is_set(system_hwm_fgids.yfilter)) leaf_name_data.push_back(system_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system_stats")
    {
        system_stats = value;
        system_stats.value_namespace = name_space;
        system_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids = value;
        system_total_fgids.value_namespace = name_space;
        system_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids = value;
        system_inuse_fgids.value_namespace = name_space;
        system_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids = value;
        system_hwm_fgids.value_namespace = name_space;
        system_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system_stats")
    {
        system_stats.yfilter = yfilter;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids.yfilter = yfilter;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system_stats" || name == "system_total_fgids" || name == "system_inuse_fgids" || name == "system_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::SdrList()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"},
    sdr_total_fgids{YType::uint32, "sdr_total_fgids"},
    sdr_inuse_fgids{YType::uint32, "sdr_inuse_fgids"},
    sdr_hwm_fgids{YType::uint32, "sdr_hwm_fgids"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::~SdrList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set
	|| sdr_total_fgids.is_set
	|| sdr_inuse_fgids.is_set
	|| sdr_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sdr_total_fgids.yfilter)
	|| ydk::is_set(sdr_inuse_fgids.yfilter)
	|| ydk::is_set(sdr_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr_list";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sdr_total_fgids.is_set || is_set(sdr_total_fgids.yfilter)) leaf_name_data.push_back(sdr_total_fgids.get_name_leafdata());
    if (sdr_inuse_fgids.is_set || is_set(sdr_inuse_fgids.yfilter)) leaf_name_data.push_back(sdr_inuse_fgids.get_name_leafdata());
    if (sdr_hwm_fgids.is_set || is_set(sdr_hwm_fgids.yfilter)) leaf_name_data.push_back(sdr_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application>();
        c->parent = this;
        application.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : application.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids = value;
        sdr_total_fgids.value_namespace = name_space;
        sdr_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids = value;
        sdr_inuse_fgids.value_namespace = name_space;
        sdr_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids = value;
        sdr_hwm_fgids.value_namespace = name_space;
        sdr_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description" || name == "sdr_total_fgids" || name == "sdr_inuse_fgids" || name == "sdr_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"},
    app_id{YType::uint32, "app_id"},
    pool_id{YType::uint32, "pool_id"},
    inuse_fgids{YType::uint32, "inuse_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "application"; yang_parent_name = "sdr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_data() const
{
    if (is_presence_container) return true;
    return app_name.is_set
	|| description.is_set
	|| app_id.is_set
	|| pool_id.is_set
	|| inuse_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(app_id.yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(inuse_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (app_id.is_set || is_set(app_id.yfilter)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (inuse_fgids.is_set || is_set(inuse_fgids.yfilter)) leaf_name_data.push_back(inuse_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_id")
    {
        app_id = value;
        app_id.value_namespace = name_space;
        app_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids = value;
        inuse_fgids.value_namespace = name_space;
        inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "app_id")
    {
        app_id.yfilter = yfilter;
    }
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app_name" || name == "description" || name == "app_id" || name == "pool_id" || name == "inuse_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::PoolList()
    :
    pool_id{YType::uint32, "pool_id"},
    pool_name{YType::str, "pool_name"},
    pool_type{YType::str, "pool_type"},
    start_fgid{YType::str, "start_fgid"},
    total_fgids{YType::uint32, "total_fgids"},
    current_fgids{YType::uint32, "current_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "pool_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::~PoolList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_data() const
{
    if (is_presence_container) return true;
    return pool_id.is_set
	|| pool_name.is_set
	|| pool_type.is_set
	|| start_fgid.is_set
	|| total_fgids.is_set
	|| current_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(start_fgid.yfilter)
	|| ydk::is_set(total_fgids.yfilter)
	|| ydk::is_set(current_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool_list";
    ADD_KEY_TOKEN(pool_id, "pool_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (start_fgid.is_set || is_set(start_fgid.yfilter)) leaf_name_data.push_back(start_fgid.get_name_leafdata());
    if (total_fgids.is_set || is_set(total_fgids.yfilter)) leaf_name_data.push_back(total_fgids.get_name_leafdata());
    if (current_fgids.is_set || is_set(current_fgids.yfilter)) leaf_name_data.push_back(current_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start_fgid")
    {
        start_fgid = value;
        start_fgid.value_namespace = name_space;
        start_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_fgids")
    {
        total_fgids = value;
        total_fgids.value_namespace = name_space;
        total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current_fgids")
    {
        current_fgids = value;
        current_fgids.value_namespace = name_space;
        current_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "pool_name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "pool_type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "start_fgid")
    {
        start_fgid.yfilter = yfilter;
    }
    if(value_path == "total_fgids")
    {
        total_fgids.yfilter = yfilter;
    }
    if(value_path == "current_fgids")
    {
        current_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_id" || name == "pool_name" || name == "pool_type" || name == "start_fgid" || name == "total_fgids" || name == "current_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::Sdr()
    :
    sdr_list(this, {"sdr_name"})
{

    yang_name = "sdr"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::~Sdr()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_operation() const
{
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList>();
        c->parent = this;
        sdr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::SdrList()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"},
    sdr_total_fgids{YType::uint32, "sdr_total_fgids"},
    sdr_inuse_fgids{YType::uint32, "sdr_inuse_fgids"},
    sdr_hwm_fgids{YType::uint32, "sdr_hwm_fgids"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr_list"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::~SdrList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set
	|| sdr_total_fgids.is_set
	|| sdr_inuse_fgids.is_set
	|| sdr_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sdr_total_fgids.yfilter)
	|| ydk::is_set(sdr_inuse_fgids.yfilter)
	|| ydk::is_set(sdr_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr_list";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sdr_total_fgids.is_set || is_set(sdr_total_fgids.yfilter)) leaf_name_data.push_back(sdr_total_fgids.get_name_leafdata());
    if (sdr_inuse_fgids.is_set || is_set(sdr_inuse_fgids.yfilter)) leaf_name_data.push_back(sdr_inuse_fgids.get_name_leafdata());
    if (sdr_hwm_fgids.is_set || is_set(sdr_hwm_fgids.yfilter)) leaf_name_data.push_back(sdr_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application>();
        c->parent = this;
        application.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : application.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids = value;
        sdr_total_fgids.value_namespace = name_space;
        sdr_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids = value;
        sdr_inuse_fgids.value_namespace = name_space;
        sdr_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids = value;
        sdr_hwm_fgids.value_namespace = name_space;
        sdr_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description" || name == "sdr_total_fgids" || name == "sdr_inuse_fgids" || name == "sdr_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"},
    app_id{YType::uint32, "app_id"},
    pool_id{YType::uint32, "pool_id"},
    inuse_fgids{YType::uint32, "inuse_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "application"; yang_parent_name = "sdr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_data() const
{
    if (is_presence_container) return true;
    return app_name.is_set
	|| description.is_set
	|| app_id.is_set
	|| pool_id.is_set
	|| inuse_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(app_id.yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(inuse_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (app_id.is_set || is_set(app_id.yfilter)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (inuse_fgids.is_set || is_set(inuse_fgids.yfilter)) leaf_name_data.push_back(inuse_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_id")
    {
        app_id = value;
        app_id.value_namespace = name_space;
        app_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids = value;
        inuse_fgids.value_namespace = name_space;
        inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "app_id")
    {
        app_id.yfilter = yfilter;
    }
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app_name" || name == "description" || name == "app_id" || name == "pool_id" || name == "inuse_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::Pool()
    :
    pool_list(this, {"pool_id"})
{

    yang_name = "pool"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::~Pool()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_operation() const
{
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList>();
        c->parent = this;
        pool_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pool_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::PoolList()
    :
    pool_id{YType::uint32, "pool_id"},
    pool_name{YType::str, "pool_name"},
    pool_type{YType::str, "pool_type"},
    start_fgid{YType::str, "start_fgid"},
    total_fgids{YType::uint32, "total_fgids"},
    current_fgids{YType::uint32, "current_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "pool_list"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::~PoolList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_data() const
{
    if (is_presence_container) return true;
    return pool_id.is_set
	|| pool_name.is_set
	|| pool_type.is_set
	|| start_fgid.is_set
	|| total_fgids.is_set
	|| current_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(start_fgid.yfilter)
	|| ydk::is_set(total_fgids.yfilter)
	|| ydk::is_set(current_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/pool/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool_list";
    ADD_KEY_TOKEN(pool_id, "pool_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (start_fgid.is_set || is_set(start_fgid.yfilter)) leaf_name_data.push_back(start_fgid.get_name_leafdata());
    if (total_fgids.is_set || is_set(total_fgids.yfilter)) leaf_name_data.push_back(total_fgids.get_name_leafdata());
    if (current_fgids.is_set || is_set(current_fgids.yfilter)) leaf_name_data.push_back(current_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start_fgid")
    {
        start_fgid = value;
        start_fgid.value_namespace = name_space;
        start_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_fgids")
    {
        total_fgids = value;
        total_fgids.value_namespace = name_space;
        total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current_fgids")
    {
        current_fgids = value;
        current_fgids.value_namespace = name_space;
        current_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "pool_name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "pool_type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "start_fgid")
    {
        start_fgid.yfilter = yfilter;
    }
    if(value_path == "total_fgids")
    {
        total_fgids.yfilter = yfilter;
    }
    if(value_path == "current_fgids")
    {
        current_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_id" || name == "pool_name" || name == "pool_type" || name == "start_fgid" || name == "total_fgids" || name == "current_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::System::System()
    :
    stats_list(this, {"system_stats"})
{

    yang_name = "system"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::System::~System()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System::StatsList>();
        c->parent = this;
        stats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::StatsList()
    :
    system_stats{YType::int32, "system_stats"},
    system_total_fgids{YType::uint32, "system_total_fgids"},
    system_inuse_fgids{YType::uint32, "system_inuse_fgids"},
    system_hwm_fgids{YType::uint32, "system_hwm_fgids"}
{

    yang_name = "stats_list"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::~StatsList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return system_stats.is_set
	|| system_total_fgids.is_set
	|| system_inuse_fgids.is_set
	|| system_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_stats.yfilter)
	|| ydk::is_set(system_total_fgids.yfilter)
	|| ydk::is_set(system_inuse_fgids.yfilter)
	|| ydk::is_set(system_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/statistics/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats_list";
    ADD_KEY_TOKEN(system_stats, "system_stats");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_stats.is_set || is_set(system_stats.yfilter)) leaf_name_data.push_back(system_stats.get_name_leafdata());
    if (system_total_fgids.is_set || is_set(system_total_fgids.yfilter)) leaf_name_data.push_back(system_total_fgids.get_name_leafdata());
    if (system_inuse_fgids.is_set || is_set(system_inuse_fgids.yfilter)) leaf_name_data.push_back(system_inuse_fgids.get_name_leafdata());
    if (system_hwm_fgids.is_set || is_set(system_hwm_fgids.yfilter)) leaf_name_data.push_back(system_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system_stats")
    {
        system_stats = value;
        system_stats.value_namespace = name_space;
        system_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids = value;
        system_total_fgids.value_namespace = name_space;
        system_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids = value;
        system_inuse_fgids.value_namespace = name_space;
        system_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids = value;
        system_hwm_fgids.value_namespace = name_space;
        system_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system_stats")
    {
        system_stats.yfilter = yfilter;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids.yfilter = yfilter;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system_stats" || name == "system_total_fgids" || name == "system_inuse_fgids" || name == "system_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::FgidMgr()
    :
    trace(this, {"buffer"})
{

    yang_name = "fgid_mgr"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::~FgidMgr()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid_mgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::FgidMgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace>();
        c->parent = this;
        trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::FgidMgr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "fgid_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::~Trace()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/fgid_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_children() const
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

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::~Location()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : all_options.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace_blocks.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::ProgramError::ProgramError()
    :
    start{YType::int32, "start"},
    end{YType::int32, "end"}
        ,
    rack(this, {"rack_id"})
{

    yang_name = "program_error"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::ProgramError::~ProgramError()
{
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return start.is_set
	|| end.is_set;
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "program_error";
    ADD_KEY_TOKEN(start, "start");
    ADD_KEY_TOKEN(end, "end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::ProgramError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::ProgramError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Fgid::ProgramError::Rack>();
        c->parent = this;
        rack.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::ProgramError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rack.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Fgid::ProgramError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::ProgramError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "start" || name == "end")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::ProgramError::Rack::Rack()
    :
    rack_id{YType::int32, "rack_id"},
    rack_id_str{YType::str, "rack_id_str"},
    fgids_in_error{YType::str, "fgids_in_error"},
    found_fgids_in_error{YType::boolean, "found_fgids_in_error"},
    total_error_fgids{YType::int32, "total_error_fgids"},
    incorrect_fgids_range{YType::boolean, "incorrect_fgids_range"},
    cmd_not_supported{YType::boolean, "cmd_not_supported"}
{

    yang_name = "rack"; yang_parent_name = "program_error"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::ProgramError::Rack::~Rack()
{
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack_id.is_set
	|| rack_id_str.is_set
	|| fgids_in_error.is_set
	|| found_fgids_in_error.is_set
	|| total_error_fgids.is_set
	|| incorrect_fgids_range.is_set
	|| cmd_not_supported.is_set;
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(rack_id_str.yfilter)
	|| ydk::is_set(fgids_in_error.yfilter)
	|| ydk::is_set(found_fgids_in_error.yfilter)
	|| ydk::is_set(total_error_fgids.yfilter)
	|| ydk::is_set(incorrect_fgids_range.yfilter)
	|| ydk::is_set(cmd_not_supported.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack_id, "rack_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (rack_id_str.is_set || is_set(rack_id_str.yfilter)) leaf_name_data.push_back(rack_id_str.get_name_leafdata());
    if (fgids_in_error.is_set || is_set(fgids_in_error.yfilter)) leaf_name_data.push_back(fgids_in_error.get_name_leafdata());
    if (found_fgids_in_error.is_set || is_set(found_fgids_in_error.yfilter)) leaf_name_data.push_back(found_fgids_in_error.get_name_leafdata());
    if (total_error_fgids.is_set || is_set(total_error_fgids.yfilter)) leaf_name_data.push_back(total_error_fgids.get_name_leafdata());
    if (incorrect_fgids_range.is_set || is_set(incorrect_fgids_range.yfilter)) leaf_name_data.push_back(incorrect_fgids_range.get_name_leafdata());
    if (cmd_not_supported.is_set || is_set(cmd_not_supported.yfilter)) leaf_name_data.push_back(cmd_not_supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Fgid::ProgramError::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_id_str")
    {
        rack_id_str = value;
        rack_id_str.value_namespace = name_space;
        rack_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgids_in_error")
    {
        fgids_in_error = value;
        fgids_in_error.value_namespace = name_space;
        fgids_in_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found_fgids_in_error")
    {
        found_fgids_in_error = value;
        found_fgids_in_error.value_namespace = name_space;
        found_fgids_in_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_error_fgids")
    {
        total_error_fgids = value;
        total_error_fgids.value_namespace = name_space;
        total_error_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incorrect_fgids_range")
    {
        incorrect_fgids_range = value;
        incorrect_fgids_range.value_namespace = name_space;
        incorrect_fgids_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmd_not_supported")
    {
        cmd_not_supported = value;
        cmd_not_supported.value_namespace = name_space;
        cmd_not_supported.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::ProgramError::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "rack_id_str")
    {
        rack_id_str.yfilter = yfilter;
    }
    if(value_path == "fgids_in_error")
    {
        fgids_in_error.yfilter = yfilter;
    }
    if(value_path == "found_fgids_in_error")
    {
        found_fgids_in_error.yfilter = yfilter;
    }
    if(value_path == "total_error_fgids")
    {
        total_error_fgids.yfilter = yfilter;
    }
    if(value_path == "incorrect_fgids_range")
    {
        incorrect_fgids_range.yfilter = yfilter;
    }
    if(value_path == "cmd_not_supported")
    {
        cmd_not_supported.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_id" || name == "rack_id_str" || name == "fgids_in_error" || name == "found_fgids_in_error" || name == "total_error_fgids" || name == "incorrect_fgids_range" || name == "cmd_not_supported")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::FsdbaggActive()
    :
    plane(this, {"planeid"})
    , bundle(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle>())
    , statistics(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Statistics>())
{
    bundle->parent = this;
    statistics->parent = this;

    yang_name = "fsdbagg_active"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::~FsdbaggActive()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return (bundle !=  nullptr && bundle->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg_active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Plane>();
        c->parent = this;
        plane.append(c);
        return c;
    }

    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle>();
        }
        return bundle;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : plane.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(bundle != nullptr)
    {
        children["bundle"] = bundle;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane" || name == "bundle" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Plane::Plane()
    :
    planeid{YType::str, "planeid"},
    admin_state{YType::str, "admin-state"},
    ucast_oper_state{YType::str, "ucast_oper_state"},
    mcast_oper_state{YType::str, "mcast_oper_state"},
    plane_mode{YType::str, "plane_mode"},
    ucast_cnt_up{YType::int32, "ucast_cnt_up"},
    ucast_cnt_some_up{YType::int32, "ucast_cnt_some_up"},
    ucast_cnt_dn{YType::int32, "ucast_cnt_dn"},
    mcast_cnt_up{YType::int32, "mcast_cnt_up"},
    mcast_cnt_some_up{YType::int32, "mcast_cnt_some_up"},
    mcast_cnt_dn{YType::int32, "mcast_cnt_dn"},
    total_bundles{YType::int32, "total_bundles"},
    down_bundles{YType::int32, "down_bundles"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    ucast_lost_cells{YType::uint32, "ucast_lost_cells"},
    mcast_lost_cells{YType::uint32, "mcast_lost_cells"},
    last_clear_ts{YType::str, "last_clear_ts"},
    last_clear_reason{YType::str, "last_clear_reason"},
    last_clear_req_ts{YType::str, "last_clear_req_ts"},
    last_clear_status{YType::str, "last_clear_status"},
    is_asic_internal_error{YType::boolean, "is_asic_internal_error"},
    asic_internal_drops{YType::uint64, "asic_internal_drops"},
    asic_location_drops{YType::str, "asic_location_drops"},
    ppu_state{YType::str, "ppu_state"}
        ,
    asic_internal_error(this, {"asic_number"})
{

    yang_name = "plane"; yang_parent_name = "fsdbagg_active"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Plane::~Plane()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_data())
            return true;
    }
    return planeid.is_set
	|| admin_state.is_set
	|| ucast_oper_state.is_set
	|| mcast_oper_state.is_set
	|| plane_mode.is_set
	|| ucast_cnt_up.is_set
	|| ucast_cnt_some_up.is_set
	|| ucast_cnt_dn.is_set
	|| mcast_cnt_up.is_set
	|| mcast_cnt_some_up.is_set
	|| mcast_cnt_dn.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| ucast_lost_cells.is_set
	|| mcast_lost_cells.is_set
	|| last_clear_ts.is_set
	|| last_clear_reason.is_set
	|| last_clear_req_ts.is_set
	|| last_clear_status.is_set
	|| is_asic_internal_error.is_set
	|| asic_internal_drops.is_set
	|| asic_location_drops.is_set
	|| ppu_state.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::has_operation() const
{
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(ucast_oper_state.yfilter)
	|| ydk::is_set(mcast_oper_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(ucast_cnt_up.yfilter)
	|| ydk::is_set(ucast_cnt_some_up.yfilter)
	|| ydk::is_set(ucast_cnt_dn.yfilter)
	|| ydk::is_set(mcast_cnt_up.yfilter)
	|| ydk::is_set(mcast_cnt_some_up.yfilter)
	|| ydk::is_set(mcast_cnt_dn.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(ucast_lost_cells.yfilter)
	|| ydk::is_set(mcast_lost_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter)
	|| ydk::is_set(last_clear_reason.yfilter)
	|| ydk::is_set(last_clear_req_ts.yfilter)
	|| ydk::is_set(last_clear_status.yfilter)
	|| ydk::is_set(is_asic_internal_error.yfilter)
	|| ydk::is_set(asic_internal_drops.yfilter)
	|| ydk::is_set(asic_location_drops.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(planeid, "planeid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ucast_oper_state.is_set || is_set(ucast_oper_state.yfilter)) leaf_name_data.push_back(ucast_oper_state.get_name_leafdata());
    if (mcast_oper_state.is_set || is_set(mcast_oper_state.yfilter)) leaf_name_data.push_back(mcast_oper_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (ucast_cnt_up.is_set || is_set(ucast_cnt_up.yfilter)) leaf_name_data.push_back(ucast_cnt_up.get_name_leafdata());
    if (ucast_cnt_some_up.is_set || is_set(ucast_cnt_some_up.yfilter)) leaf_name_data.push_back(ucast_cnt_some_up.get_name_leafdata());
    if (ucast_cnt_dn.is_set || is_set(ucast_cnt_dn.yfilter)) leaf_name_data.push_back(ucast_cnt_dn.get_name_leafdata());
    if (mcast_cnt_up.is_set || is_set(mcast_cnt_up.yfilter)) leaf_name_data.push_back(mcast_cnt_up.get_name_leafdata());
    if (mcast_cnt_some_up.is_set || is_set(mcast_cnt_some_up.yfilter)) leaf_name_data.push_back(mcast_cnt_some_up.get_name_leafdata());
    if (mcast_cnt_dn.is_set || is_set(mcast_cnt_dn.yfilter)) leaf_name_data.push_back(mcast_cnt_dn.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (ucast_lost_cells.is_set || is_set(ucast_lost_cells.yfilter)) leaf_name_data.push_back(ucast_lost_cells.get_name_leafdata());
    if (mcast_lost_cells.is_set || is_set(mcast_lost_cells.yfilter)) leaf_name_data.push_back(mcast_lost_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());
    if (last_clear_reason.is_set || is_set(last_clear_reason.yfilter)) leaf_name_data.push_back(last_clear_reason.get_name_leafdata());
    if (last_clear_req_ts.is_set || is_set(last_clear_req_ts.yfilter)) leaf_name_data.push_back(last_clear_req_ts.get_name_leafdata());
    if (last_clear_status.is_set || is_set(last_clear_status.yfilter)) leaf_name_data.push_back(last_clear_status.get_name_leafdata());
    if (is_asic_internal_error.is_set || is_set(is_asic_internal_error.yfilter)) leaf_name_data.push_back(is_asic_internal_error.get_name_leafdata());
    if (asic_internal_drops.is_set || is_set(asic_internal_drops.yfilter)) leaf_name_data.push_back(asic_internal_drops.get_name_leafdata());
    if (asic_location_drops.is_set || is_set(asic_location_drops.yfilter)) leaf_name_data.push_back(asic_location_drops.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_internal_error")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError>();
        c->parent = this;
        asic_internal_error.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic_internal_error.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state = value;
        ucast_oper_state.value_namespace = name_space;
        ucast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state = value;
        mcast_oper_state.value_namespace = name_space;
        mcast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up = value;
        ucast_cnt_up.value_namespace = name_space;
        ucast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up = value;
        ucast_cnt_some_up.value_namespace = name_space;
        ucast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn = value;
        ucast_cnt_dn.value_namespace = name_space;
        ucast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up = value;
        mcast_cnt_up.value_namespace = name_space;
        mcast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up = value;
        mcast_cnt_some_up.value_namespace = name_space;
        mcast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn = value;
        mcast_cnt_dn.value_namespace = name_space;
        mcast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells = value;
        ucast_lost_cells.value_namespace = name_space;
        ucast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells = value;
        mcast_lost_cells.value_namespace = name_space;
        mcast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason = value;
        last_clear_reason.value_namespace = name_space;
        last_clear_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts = value;
        last_clear_req_ts.value_namespace = name_space;
        last_clear_req_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status = value;
        last_clear_status.value_namespace = name_space;
        last_clear_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error = value;
        is_asic_internal_error.value_namespace = name_space;
        is_asic_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops = value;
        asic_internal_drops.value_namespace = name_space;
        asic_internal_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops = value;
        asic_location_drops.value_namespace = name_space;
        asic_location_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu_state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state.yfilter = yfilter;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason.yfilter = yfilter;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status.yfilter = yfilter;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error.yfilter = yfilter;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops.yfilter = yfilter;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops.yfilter = yfilter;
    }
    if(value_path == "ppu_state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_internal_error" || name == "planeid" || name == "admin-state" || name == "ucast_oper_state" || name == "mcast_oper_state" || name == "plane_mode" || name == "ucast_cnt_up" || name == "ucast_cnt_some_up" || name == "ucast_cnt_dn" || name == "mcast_cnt_up" || name == "mcast_cnt_some_up" || name == "mcast_cnt_dn" || name == "total_bundles" || name == "down_bundles" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "ucast_lost_cells" || name == "mcast_lost_cells" || name == "last_clear_ts" || name == "last_clear_reason" || name == "last_clear_req_ts" || name == "last_clear_status" || name == "is_asic_internal_error" || name == "asic_internal_drops" || name == "asic_location_drops" || name == "ppu_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::AsicInternalError()
    :
    asic_number{YType::int64, "asic_number"},
    asic_location{YType::str, "asic_location"},
    link_crc_error{YType::boolean, "link_crc_error"},
    link_size_error{YType::boolean, "link_size_error"},
    link_mis_align_error{YType::boolean, "link_mis_align_error"},
    link_code_group_error{YType::boolean, "link_code_group_error"},
    link_no_sig_lock_error{YType::boolean, "link_no_sig_lock_error"},
    link_no_sign_accept_error{YType::boolean, "link_no_sign_accept_error"},
    link_token_error{YType::boolean, "link_token_error"},
    error_token_count{YType::boolean, "error_token_count"},
    last_asic_internal_error_ts{YType::str, "last_asic_internal_error_ts"}
{

    yang_name = "asic_internal_error"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::~AsicInternalError()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::has_data() const
{
    if (is_presence_container) return true;
    return asic_number.is_set
	|| asic_location.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sign_accept_error.is_set
	|| link_token_error.is_set
	|| error_token_count.is_set
	|| last_asic_internal_error_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_number.yfilter)
	|| ydk::is_set(asic_location.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sign_accept_error.yfilter)
	|| ydk::is_set(link_token_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter)
	|| ydk::is_set(last_asic_internal_error_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_internal_error";
    ADD_KEY_TOKEN(asic_number, "asic_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_number.is_set || is_set(asic_number.yfilter)) leaf_name_data.push_back(asic_number.get_name_leafdata());
    if (asic_location.is_set || is_set(asic_location.yfilter)) leaf_name_data.push_back(asic_location.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sign_accept_error.is_set || is_set(link_no_sign_accept_error.yfilter)) leaf_name_data.push_back(link_no_sign_accept_error.get_name_leafdata());
    if (link_token_error.is_set || is_set(link_token_error.yfilter)) leaf_name_data.push_back(link_token_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (last_asic_internal_error_ts.is_set || is_set(last_asic_internal_error_ts.yfilter)) leaf_name_data.push_back(last_asic_internal_error_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_number")
    {
        asic_number = value;
        asic_number.value_namespace = name_space;
        asic_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location")
    {
        asic_location = value;
        asic_location.value_namespace = name_space;
        asic_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error = value;
        link_no_sign_accept_error.value_namespace = name_space;
        link_no_sign_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_token_error")
    {
        link_token_error = value;
        link_token_error.value_namespace = name_space;
        link_token_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts = value;
        last_asic_internal_error_ts.value_namespace = name_space;
        last_asic_internal_error_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_number")
    {
        asic_number.yfilter = yfilter;
    }
    if(value_path == "asic_location")
    {
        asic_location.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_token_error")
    {
        link_token_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_number" || name == "asic_location" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sign_accept_error" || name == "link_token_error" || name == "error_token_count" || name == "last_asic_internal_error_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Bundle()
    :
    summary(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary>())
    , all(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::All>())
    , port(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port>())
    , location(this, {"loc_str"})
{
    summary->parent = this;
    all->parent = this;
    port->parent = this;

    yang_name = "bundle"; yang_parent_name = "fsdbagg_active"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::~Bundle()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (summary !=  nullptr && summary->has_data())
	|| (all !=  nullptr && all->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (all !=  nullptr && all->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::All>();
        }
        return all;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port>();
        }
        return port;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

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

void Controller::Fabric::Oper::FsdbaggActive::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "all" || name == "port" || name == "location")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::Summary()
    :
    bundle_summary_list(this, {"idx"})
{

    yang_name = "summary"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::~Summary()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_summary_list.len(); index++)
    {
        if(bundle_summary_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::has_operation() const
{
    for (std::size_t index=0; index<bundle_summary_list.len(); index++)
    {
        if(bundle_summary_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle_summary_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList>();
        c->parent = this;
        bundle_summary_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bundle_summary_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle_summary_list")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::BundleSummaryList()
    :
    idx{YType::int32, "idx"},
    total_bundles{YType::uint32, "total_bundles"},
    down_bundles{YType::uint32, "down_bundles"},
    bundles_not_connected{YType::uint32, "bundles_not_connected"},
    total_bports{YType::uint32, "total_bports"},
    down_bports{YType::uint32, "down_bports"},
    bports_not_connected{YType::uint32, "bports_not_connected"}
{

    yang_name = "bundle_summary_list"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::~BundleSummaryList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| bundles_not_connected.is_set
	|| total_bports.is_set
	|| down_bports.is_set
	|| bports_not_connected.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(bundles_not_connected.yfilter)
	|| ydk::is_set(total_bports.yfilter)
	|| ydk::is_set(down_bports.yfilter)
	|| ydk::is_set(bports_not_connected.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle_summary_list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (bundles_not_connected.is_set || is_set(bundles_not_connected.yfilter)) leaf_name_data.push_back(bundles_not_connected.get_name_leafdata());
    if (total_bports.is_set || is_set(total_bports.yfilter)) leaf_name_data.push_back(total_bports.get_name_leafdata());
    if (down_bports.is_set || is_set(down_bports.yfilter)) leaf_name_data.push_back(down_bports.get_name_leafdata());
    if (bports_not_connected.is_set || is_set(bports_not_connected.yfilter)) leaf_name_data.push_back(bports_not_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundles_not_connected")
    {
        bundles_not_connected = value;
        bundles_not_connected.value_namespace = name_space;
        bundles_not_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bports")
    {
        total_bports = value;
        total_bports.value_namespace = name_space;
        total_bports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bports")
    {
        down_bports = value;
        down_bports.value_namespace = name_space;
        down_bports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bports_not_connected")
    {
        bports_not_connected = value;
        bports_not_connected.value_namespace = name_space;
        bports_not_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "bundles_not_connected")
    {
        bundles_not_connected.yfilter = yfilter;
    }
    if(value_path == "total_bports")
    {
        total_bports.yfilter = yfilter;
    }
    if(value_path == "down_bports")
    {
        down_bports.yfilter = yfilter;
    }
    if(value_path == "bports_not_connected")
    {
        bports_not_connected.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "total_bundles" || name == "down_bundles" || name == "bundles_not_connected" || name == "total_bports" || name == "down_bports" || name == "bports_not_connected")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::All::All()
    :
    bundle_all_list(this, {"idx"})
{

    yang_name = "all"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::All::~All()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_all_list.len(); index++)
    {
        if(bundle_all_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::has_operation() const
{
    for (std::size_t index=0; index<bundle_all_list.len(); index++)
    {
        if(bundle_all_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle_all_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList>();
        c->parent = this;
        bundle_all_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bundle_all_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle_all_list")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::BundleAllList()
    :
    idx{YType::int64, "idx"},
    bundle_id{YType::str, "bundle_id"},
    oper_state{YType::str, "oper_state"},
    plane_id{YType::uint32, "plane_id"},
    total_links{YType::uint32, "total_links"},
    down_links{YType::uint32, "down_links"},
    bport1{YType::str, "bport1"},
    bport2{YType::str, "bport2"}
{

    yang_name = "bundle_all_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::~BundleAllList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| bundle_id.is_set
	|| oper_state.is_set
	|| plane_id.is_set
	|| total_links.is_set
	|| down_links.is_set
	|| bport1.is_set
	|| bport2.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(total_links.yfilter)
	|| ydk::is_set(down_links.yfilter)
	|| ydk::is_set(bport1.yfilter)
	|| ydk::is_set(bport2.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle_all_list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.yfilter)) leaf_name_data.push_back(total_links.get_name_leafdata());
    if (down_links.is_set || is_set(down_links.yfilter)) leaf_name_data.push_back(down_links.get_name_leafdata());
    if (bport1.is_set || is_set(bport1.yfilter)) leaf_name_data.push_back(bport1.get_name_leafdata());
    if (bport2.is_set || is_set(bport2.yfilter)) leaf_name_data.push_back(bport2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle_id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_links")
    {
        total_links = value;
        total_links.value_namespace = name_space;
        total_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_links")
    {
        down_links = value;
        down_links.value_namespace = name_space;
        down_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport1")
    {
        bport1 = value;
        bport1.value_namespace = name_space;
        bport1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport2")
    {
        bport2 = value;
        bport2.value_namespace = name_space;
        bport2.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bundle_id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "total_links")
    {
        total_links.yfilter = yfilter;
    }
    if(value_path == "down_links")
    {
        down_links.yfilter = yfilter;
    }
    if(value_path == "bport1")
    {
        bport1.yfilter = yfilter;
    }
    if(value_path == "bport2")
    {
        bport2.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bundle_id" || name == "oper_state" || name == "plane_id" || name == "total_links" || name == "down_links" || name == "bport1" || name == "bport2")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Port()
    :
    all(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All>())
    , location(this, {"loc_str"})
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::~Port()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

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

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "location")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::All()
    :
    bport_all_list(this, {"idx"})
    , statistics(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics>())
{
    statistics->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::~All()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_all_list.len(); index++)
    {
        if(bport_all_list[index]->has_data())
            return true;
    }
    return (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::has_operation() const
{
    for (std::size_t index=0; index<bport_all_list.len(); index++)
    {
        if(bport_all_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/port/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_all_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList>();
        c->parent = this;
        bport_all_list.append(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bport_all_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_all_list" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::BportAllList()
    :
    idx{YType::int64, "idx"},
    bport_id{YType::str, "bport_id"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"}
{

    yang_name = "bport_all_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::~BportAllList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| bport_id.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bport_id.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/port/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_all_list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bport_id.is_set || is_set(bport_id.yfilter)) leaf_name_data.push_back(bport_id.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport_id")
    {
        bport_id = value;
        bport_id.value_namespace = name_space;
        bport_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bport_id")
    {
        bport_id.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bport_id" || name == "admin-state" || name == "oper_state" || name == "down_flags")
        return true;
    return false;
}


}
}

