
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_45.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_65.hpp"
#include "Cisco_IOS_XE_native_54.hpp"
#include "Cisco_IOS_XE_native_41.hpp"
#include "Cisco_IOS_XE_native_38.hpp"
#include "Cisco_IOS_XE_native_39.hpp"
#include "Cisco_IOS_XE_native_52.hpp"
#include "Cisco_IOS_XE_native_44.hpp"
#include "Cisco_IOS_XE_native_55.hpp"
#include "Cisco_IOS_XE_native_73.hpp"
#include "Cisco_IOS_XE_native_24.hpp"
#include "Cisco_IOS_XE_native_22.hpp"
#include "Cisco_IOS_XE_native_26.hpp"
#include "Cisco_IOS_XE_native_56.hpp"
#include "Cisco_IOS_XE_native_40.hpp"
#include "Cisco_IOS_XE_native_33.hpp"
#include "Cisco_IOS_XE_native_70.hpp"
#include "Cisco_IOS_XE_native_21.hpp"
#include "Cisco_IOS_XE_native_61.hpp"
#include "Cisco_IOS_XE_native_25.hpp"
#include "Cisco_IOS_XE_native_47.hpp"
#include "Cisco_IOS_XE_native_31.hpp"
#include "Cisco_IOS_XE_native_23.hpp"
#include "Cisco_IOS_XE_native_67.hpp"
#include "Cisco_IOS_XE_native_68.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Flow::Record::Match::Ipv4::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv4::Destination::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    offset{YType::empty, "offset"}
{

    yang_name = "fragmentation"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Match::Ipv4::Fragmentation::has_data() const
{
    return flags.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "offset")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
    	,
    total(nullptr) // presence node
{

    yang_name = "length"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Length::~Length()
{
}

bool Native::Flow::Record::Match::Ipv4::Length::has_data() const
{
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Match::Ipv4::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Match::Ipv4::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header.is_set || is_set(header.yfilter)) leaf_name_data.push_back(header.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Match::Ipv4::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv4::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header")
    {
        header = value;
        header.value_namespace = name_space;
        header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header")
    {
        header.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Length::Total::~Total()
{
}

bool Native::Flow::Record::Match::Ipv4::Length::Total::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Length::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Length::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Length::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Length::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Length::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Option::Option()
    :
    map{YType::empty, "map"}
{

    yang_name = "option"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Option::~Option()
{
}

bool Native::Flow::Record::Match::Ipv4::Option::has_data() const
{
    return map.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Match::Ipv4::Section::Header>())
	,payload(std::make_shared<Native::Flow::Record::Match::Ipv4::Section::Payload>())
{
    header->parent = this;
    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Section::~Section()
{
}

bool Native::Flow::Record::Match::Ipv4::Section::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Match::Ipv4::Section::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Match::Ipv4::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Match::Ipv4::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Match::Ipv4::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(payload != nullptr)
    {
        children["payload"] = payload;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv4::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Ipv4::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Ipv4::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{

    yang_name = "header"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Section::Header::~Header()
{
}

bool Native::Flow::Record::Match::Ipv4::Section::Header::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Section::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Section::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Section::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Section::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Section::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{

    yang_name = "payload"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Match::Ipv4::Section::Payload::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Section::Payload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Section::Payload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Section::Payload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Section::Payload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Section::Payload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Source::Source()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Source::~Source()
{
}

bool Native::Flow::Record::Match::Ipv4::Source::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Ipv4::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Ipv4::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Ipv4::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Ipv4::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv4::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv4::Source::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Source::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Source::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Source::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Source::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Source::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv4::Source::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::TotalLength::TotalLength()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total-length"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::TotalLength::~TotalLength()
{
}

bool Native::Flow::Record::Match::Ipv4::TotalLength::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv4::TotalLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::TotalLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::TotalLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::TotalLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::TotalLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::TotalLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::TotalLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::TotalLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Ttl::Ttl()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "ttl"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv4::Ttl::~Ttl()
{
}

bool Native::Flow::Record::Match::Ipv4::Ttl::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv4::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv4::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv4::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Ipv6()
    :
    dscp{YType::empty, "dscp"},
    flow_label{YType::empty, "flow-label"},
    next_header{YType::empty, "next-header"},
    payload_length{YType::empty, "payload-length"},
    precedence{YType::empty, "precedence"},
    protocol{YType::empty, "protocol"},
    traffic_class{YType::empty, "traffic-class"},
    version{YType::empty, "version"}
    	,
    destination(std::make_shared<Native::Flow::Record::Match::Ipv6::Destination>())
	,extension(std::make_shared<Native::Flow::Record::Match::Ipv6::Extension>())
	,fragmentation(std::make_shared<Native::Flow::Record::Match::Ipv6::Fragmentation>())
	,hop_limit(nullptr) // presence node
	,length(std::make_shared<Native::Flow::Record::Match::Ipv6::Length>())
	,section(std::make_shared<Native::Flow::Record::Match::Ipv6::Section>())
	,source(std::make_shared<Native::Flow::Record::Match::Ipv6::Source>())
{
    destination->parent = this;
    extension->parent = this;
    fragmentation->parent = this;
    length->parent = this;
    section->parent = this;
    source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Ipv6::has_data() const
{
    return dscp.is_set
	|| flow_label.is_set
	|| next_header.is_set
	|| payload_length.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| traffic_class.is_set
	|| version.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (extension !=  nullptr && extension->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (hop_limit !=  nullptr && hop_limit->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (section !=  nullptr && section->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Match::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(next_header.yfilter)
	|| ydk::is_set(payload_length.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (extension !=  nullptr && extension->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (hop_limit !=  nullptr && hop_limit->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (section !=  nullptr && section->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (next_header.is_set || is_set(next_header.yfilter)) leaf_name_data.push_back(next_header.get_name_leafdata());
    if (payload_length.is_set || is_set(payload_length.yfilter)) leaf_name_data.push_back(payload_length.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Ipv6::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "extension")
    {
        if(extension == nullptr)
        {
            extension = std::make_shared<Native::Flow::Record::Match::Ipv6::Extension>();
        }
        return extension;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Flow::Record::Match::Ipv6::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "hop-limit")
    {
        if(hop_limit == nullptr)
        {
            hop_limit = std::make_shared<Native::Flow::Record::Match::Ipv6::HopLimit>();
        }
        return hop_limit;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Flow::Record::Match::Ipv6::Length>();
        }
        return length;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<Native::Flow::Record::Match::Ipv6::Section>();
        }
        return section;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Ipv6::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(extension != nullptr)
    {
        children["extension"] = extension;
    }

    if(fragmentation != nullptr)
    {
        children["fragmentation"] = fragmentation;
    }

    if(hop_limit != nullptr)
    {
        children["hop-limit"] = hop_limit;
    }

    if(length != nullptr)
    {
        children["length"] = length;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-header")
    {
        next_header = value;
        next_header.value_namespace = name_space;
        next_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-length")
    {
        payload_length = value;
        payload_length.value_namespace = name_space;
        payload_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "next-header")
    {
        next_header.yfilter = yfilter;
    }
    if(value_path == "payload-length")
    {
        payload_length.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "extension" || name == "fragmentation" || name == "hop-limit" || name == "length" || name == "section" || name == "source" || name == "dscp" || name == "flow-label" || name == "next-header" || name == "payload-length" || name == "precedence" || name == "protocol" || name == "traffic-class" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Destination::Destination()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Ipv6::Destination::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Ipv6::Destination::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Ipv6::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv6::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv6::Destination::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Destination::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Destination::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Destination::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Destination::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Destination::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv6::Destination::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Extension::Extension()
    :
    map{YType::empty, "map"}
{

    yang_name = "extension"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Extension::~Extension()
{
}

bool Native::Flow::Record::Match::Ipv6::Extension::has_data() const
{
    return map.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Extension::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Extension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Extension::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Extension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Extension::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Extension::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Extension::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Extension::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    id{YType::empty, "id"},
    offset{YType::empty, "offset"}
{

    yang_name = "fragmentation"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Match::Ipv6::Fragmentation::has_data() const
{
    return flags.is_set
	|| id.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "id" || name == "offset")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::HopLimit::HopLimit()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "hop-limit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::HopLimit::~HopLimit()
{
}

bool Native::Flow::Record::Match::Ipv6::HopLimit::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv6::HopLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::HopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::HopLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::HopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::HopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::HopLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::HopLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::HopLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
    	,
    total(nullptr) // presence node
{

    yang_name = "length"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Length::~Length()
{
}

bool Native::Flow::Record::Match::Ipv6::Length::has_data() const
{
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header.is_set || is_set(header.yfilter)) leaf_name_data.push_back(header.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Match::Ipv6::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv6::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header")
    {
        header = value;
        header.value_namespace = name_space;
        header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header")
    {
        header.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Length::Total::~Total()
{
}

bool Native::Flow::Record::Match::Ipv6::Length::Total::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Length::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Length::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Length::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Length::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Length::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Header>())
	,payload(std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Payload>())
{
    header->parent = this;
    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Section::~Section()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Section::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(payload != nullptr)
    {
        children["payload"] = payload;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv6::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Ipv6::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Ipv6::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{

    yang_name = "header"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Section::Header::~Header()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::Header::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Section::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Section::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Section::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Section::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Section::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{

    yang_name = "payload"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::Payload::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Section::Payload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Section::Payload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Section::Payload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Section::Payload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Section::Payload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Source::Source()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Source::~Source()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Ipv6::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Ipv6::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Match::Ipv6::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Source::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Source::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Source::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Source::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Source::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Ipv6::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Ipv6::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Ipv6::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Ipv6::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Metadata::Metadata()
    :
    global_session_id{YType::empty, "global-session-id"},
    multi_party_session_id{YType::empty, "multi-party-session-id"}
{

    yang_name = "metadata"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Metadata::~Metadata()
{
}

bool Native::Flow::Record::Match::Metadata::has_data() const
{
    return global_session_id.is_set
	|| multi_party_session_id.is_set;
}

bool Native::Flow::Record::Match::Metadata::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_session_id.yfilter)
	|| ydk::is_set(multi_party_session_id.yfilter);
}

std::string Native::Flow::Record::Match::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Metadata::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_session_id.is_set || is_set(global_session_id.yfilter)) leaf_name_data.push_back(global_session_id.get_name_leafdata());
    if (multi_party_session_id.is_set || is_set(multi_party_session_id.yfilter)) leaf_name_data.push_back(multi_party_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Metadata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-session-id")
    {
        global_session_id = value;
        global_session_id.value_namespace = name_space;
        global_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id = value;
        multi_party_session_id.value_namespace = name_space;
        multi_party_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Metadata::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-session-id")
    {
        global_session_id.yfilter = yfilter;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Metadata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-session-id" || name == "multi-party-session-id")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Mpls()
    :
    label(std::make_shared<Native::Flow::Record::Match::Mpls::Label>())
{
    label->parent = this;

    yang_name = "mpls"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Mpls::~Mpls()
{
}

bool Native::Flow::Record::Match::Mpls::has_data() const
{
    return (label !=  nullptr && label->has_data());
}

bool Native::Flow::Record::Match::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation());
}

std::string Native::Flow::Record::Match::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Match::Mpls::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label != nullptr)
    {
        children["label"] = label;
    }

    return children;
}

void Native::Flow::Record::Match::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Label()
    :
    five(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Five>())
	,four(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Four>())
	,one(std::make_shared<Native::Flow::Record::Match::Mpls::Label::One>())
	,six(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Six>())
	,three(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Three>())
	,two(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Two>())
{
    five->parent = this;
    four->parent = this;
    one->parent = this;
    six->parent = this;
    three->parent = this;
    two->parent = this;

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Mpls::Label::~Label()
{
}

bool Native::Flow::Record::Match::Mpls::Label::has_data() const
{
    return (five !=  nullptr && five->has_data())
	|| (four !=  nullptr && four->has_data())
	|| (one !=  nullptr && one->has_data())
	|| (six !=  nullptr && six->has_data())
	|| (three !=  nullptr && three->has_data())
	|| (two !=  nullptr && two->has_data());
}

bool Native::Flow::Record::Match::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| (five !=  nullptr && five->has_operation())
	|| (four !=  nullptr && four->has_operation())
	|| (one !=  nullptr && one->has_operation())
	|| (six !=  nullptr && six->has_operation())
	|| (three !=  nullptr && three->has_operation())
	|| (two !=  nullptr && two->has_operation());
}

std::string Native::Flow::Record::Match::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "five")
    {
        if(five == nullptr)
        {
            five = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Five>();
        }
        return five;
    }

    if(child_yang_name == "four")
    {
        if(four == nullptr)
        {
            four = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Four>();
        }
        return four;
    }

    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Native::Flow::Record::Match::Mpls::Label::One>();
        }
        return one;
    }

    if(child_yang_name == "six")
    {
        if(six == nullptr)
        {
            six = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Six>();
        }
        return six;
    }

    if(child_yang_name == "three")
    {
        if(three == nullptr)
        {
            three = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Three>();
        }
        return three;
    }

    if(child_yang_name == "two")
    {
        if(two == nullptr)
        {
            two = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Two>();
        }
        return two;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(five != nullptr)
    {
        children["five"] = five;
    }

    if(four != nullptr)
    {
        children["four"] = four;
    }

    if(one != nullptr)
    {
        children["one"] = one;
    }

    if(six != nullptr)
    {
        children["six"] = six;
    }

    if(three != nullptr)
    {
        children["three"] = three;
    }

    if(two != nullptr)
    {
        children["two"] = two;
    }

    return children;
}

void Native::Flow::Record::Match::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "five" || name == "four" || name == "one" || name == "six" || name == "three" || name == "two")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Five::Five()
    :
    details{YType::empty, "details"}
{

    yang_name = "five"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Mpls::Label::Five::~Five()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Five::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Five::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Five::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "five";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Five::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Five::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Five::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Five::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Five::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Five::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Four::Four()
    :
    details{YType::empty, "details"}
{

    yang_name = "four"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Mpls::Label::Four::~Four()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Four::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Four::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Four::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Four::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Four::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Four::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Four::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Four::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Four::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::One::One()
    :
    details{YType::empty, "details"},
    exp{YType::empty, "exp"},
    ttl{YType::empty, "ttl"},
    type{YType::empty, "type"}
{

    yang_name = "one"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Mpls::Label::One::~One()
{
}

bool Native::Flow::Record::Match::Mpls::Label::One::has_data() const
{
    return details.is_set
	|| exp.is_set
	|| ttl.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::One::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());
    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::One::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::One::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "exp" || name == "ttl" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Six::Six()
    :
    details{YType::empty, "details"}
{

    yang_name = "six"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Mpls::Label::Six::~Six()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Six::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Six::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Six::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "six";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Six::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Six::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Six::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Six::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Six::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Six::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Three::Three()
    :
    details{YType::empty, "details"}
{

    yang_name = "three"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Mpls::Label::Three::~Three()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Three::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Three::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Three::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Three::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Three::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Three::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Three::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Three::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Three::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Two::Two()
    :
    details{YType::empty, "details"}
{

    yang_name = "two"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Mpls::Label::Two::~Two()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Two::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Two::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Two::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Two::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Mpls::Label::Two::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Mpls::Label::Two::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Mpls::Label::Two::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Two::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Two::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Network::Network()
    :
    delay(std::make_shared<Native::Flow::Record::Match::Network::Delay>())
{
    delay->parent = this;

    yang_name = "network"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Network::~Network()
{
}

bool Native::Flow::Record::Match::Network::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Flow::Record::Match::Network::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Flow::Record::Match::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Match::Network::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Flow::Record::Match::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Flow::Record::Match::Network::Delay::Delay()
    :
    sample{YType::empty, "sample"},
    sum{YType::empty, "sum"}
{

    yang_name = "delay"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Network::Delay::~Delay()
{
}

bool Native::Flow::Record::Match::Network::Delay::has_data() const
{
    return sample.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Match::Network::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Match::Network::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Network::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample.is_set || is_set(sample.yfilter)) leaf_name_data.push_back(sample.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Network::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Network::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Network::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample")
    {
        sample = value;
        sample.value_namespace = name_space;
        sample.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Network::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample")
    {
        sample.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Network::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Pfr()
    :
    label(std::make_shared<Native::Flow::Record::Match::Pfr::Label>())
	,one_way_delay(std::make_shared<Native::Flow::Record::Match::Pfr::OneWayDelay>())
	,service(std::make_shared<Native::Flow::Record::Match::Pfr::Service>())
	,site(std::make_shared<Native::Flow::Record::Match::Pfr::Site>())
{
    label->parent = this;
    one_way_delay->parent = this;
    service->parent = this;
    site->parent = this;

    yang_name = "pfr"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::~Pfr()
{
}

bool Native::Flow::Record::Match::Pfr::has_data() const
{
    return (label !=  nullptr && label->has_data())
	|| (one_way_delay !=  nullptr && one_way_delay->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (site !=  nullptr && site->has_data());
}

bool Native::Flow::Record::Match::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation())
	|| (one_way_delay !=  nullptr && one_way_delay->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (site !=  nullptr && site->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Match::Pfr::Label>();
        }
        return label;
    }

    if(child_yang_name == "one-way-delay")
    {
        if(one_way_delay == nullptr)
        {
            one_way_delay = std::make_shared<Native::Flow::Record::Match::Pfr::OneWayDelay>();
        }
        return one_way_delay;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Flow::Record::Match::Pfr::Service>();
        }
        return service;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::Flow::Record::Match::Pfr::Site>();
        }
        return site;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(one_way_delay != nullptr)
    {
        children["one-way-delay"] = one_way_delay;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    if(site != nullptr)
    {
        children["site"] = site;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "one-way-delay" || name == "service" || name == "site")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Label::Label()
    :
    identifier{YType::empty, "identifier"}
{

    yang_name = "label"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Label::~Label()
{
}

bool Native::Flow::Record::Match::Pfr::Label::has_data() const
{
    return identifier.is_set;
}

bool Native::Flow::Record::Match::Pfr::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::OneWayDelay::OneWayDelay()
    :
    samples{YType::empty, "samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "one-way-delay"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::OneWayDelay::~OneWayDelay()
{
}

bool Native::Flow::Record::Match::Pfr::OneWayDelay::has_data() const
{
    return samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Match::Pfr::OneWayDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::OneWayDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-way-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::OneWayDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (samples.is_set || is_set(samples.yfilter)) leaf_name_data.push_back(samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::OneWayDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::OneWayDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::OneWayDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "samples")
    {
        samples = value;
        samples.value_namespace = name_space;
        samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::OneWayDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "samples")
    {
        samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::OneWayDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Service::Service()
    :
    identifier{YType::empty, "identifier"},
    provider{YType::empty, "provider"},
    tag{YType::empty, "tag"}
{

    yang_name = "service"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Service::~Service()
{
}

bool Native::Flow::Record::Match::Pfr::Service::has_data() const
{
    return identifier.is_set
	|| provider.is_set
	|| tag.is_set;
}

bool Native::Flow::Record::Match::Pfr::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(provider.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (provider.is_set || is_set(provider.yfilter)) leaf_name_data.push_back(provider.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provider")
    {
        provider = value;
        provider.value_namespace = name_space;
        provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "provider")
    {
        provider.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "provider" || name == "tag")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Site()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination>())
	,source(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "site"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::~Site()
{
}

bool Native::Flow::Record::Match::Pfr::Site::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Pfr::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Pfr::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Destination()
    :
    id(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Id>())
	,prefix(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix>())
{
    id->parent = this;
    prefix->parent = this;

    yang_name = "destination"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Pfr::Site::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "prefix")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "id"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Id::~Id()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Id::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
    	,
    mask(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::has_data() const
{
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "mask"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Source::Source()
    :
    id(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Id>())
	,prefix(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix>())
{
    id->parent = this;
    prefix->parent = this;

    yang_name = "source"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::Source::~Source()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Source::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Pfr::Site::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "prefix")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Source::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::Source::Id::~Id()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Id::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Source::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Source::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Source::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
    	,
    mask(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::has_data() const
{
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "mask"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::Policy()
    :
    performance_monitor(std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor>())
	,qos(std::make_shared<Native::Flow::Record::Match::Policy::Qos>())
{
    performance_monitor->parent = this;
    qos->parent = this;

    yang_name = "policy"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Policy::~Policy()
{
}

bool Native::Flow::Record::Match::Policy::has_data() const
{
    return (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Flow::Record::Match::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Flow::Record::Match::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Flow::Record::Match::Policy::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Flow::Record::Match::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "performance-monitor" || name == "qos")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::PerformanceMonitor()
    :
    classification(std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification>())
{
    classification->parent = this;

    yang_name = "performance-monitor"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::has_data() const
{
    return (classification !=  nullptr && classification->has_data());
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (classification !=  nullptr && classification->has_operation());
}

std::string Native::Flow::Record::Match::Policy::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification>();
        }
        return classification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classification != nullptr)
    {
        children["classification"] = classification;
    }

    return children;
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classification")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "classification"; yang_parent_name = "performance-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::~Classification()
{
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::has_data() const
{
    return hierarchy.is_set;
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::Qos::Qos()
    :
    classification(std::make_shared<Native::Flow::Record::Match::Policy::Qos::Classification>())
	,queue(std::make_shared<Native::Flow::Record::Match::Policy::Qos::Queue>())
{
    classification->parent = this;
    queue->parent = this;

    yang_name = "qos"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Policy::Qos::~Qos()
{
}

bool Native::Flow::Record::Match::Policy::Qos::has_data() const
{
    return (classification !=  nullptr && classification->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Flow::Record::Match::Policy::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (classification !=  nullptr && classification->has_operation())
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Flow::Record::Match::Policy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Match::Policy::Qos::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Flow::Record::Match::Policy::Qos::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classification != nullptr)
    {
        children["classification"] = classification;
    }

    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Flow::Record::Match::Policy::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Policy::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Policy::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classification" || name == "queue")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::Qos::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "classification"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Policy::Qos::Classification::~Classification()
{
}

bool Native::Flow::Record::Match::Policy::Qos::Classification::has_data() const
{
    return hierarchy.is_set;
}

bool Native::Flow::Record::Match::Policy::Qos::Classification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Native::Flow::Record::Match::Policy::Qos::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::Qos::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::Qos::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::Qos::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Policy::Qos::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Policy::Qos::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Policy::Qos::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::Qos::Queue::Queue()
    :
    drops{YType::empty, "drops"},
    index_{YType::empty, "index"}
{

    yang_name = "queue"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Policy::Qos::Queue::~Queue()
{
}

bool Native::Flow::Record::Match::Policy::Qos::Queue::has_data() const
{
    return drops.is_set
	|| index_.is_set;
}

bool Native::Flow::Record::Match::Policy::Qos::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Native::Flow::Record::Match::Policy::Qos::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::Qos::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Policy::Qos::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Policy::Qos::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Policy::Qos::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Policy::Qos::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Policy::Qos::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "index")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Routing()
    :
    is_multicast{YType::empty, "is-multicast"}
    	,
    destination(std::make_shared<Native::Flow::Record::Match::Routing::Destination>())
	,forwarding_status(nullptr) // presence node
	,next_hop(std::make_shared<Native::Flow::Record::Match::Routing::NextHop>())
	,pw(std::make_shared<Native::Flow::Record::Match::Routing::Pw>())
	,source(std::make_shared<Native::Flow::Record::Match::Routing::Source>())
	,vrf(std::make_shared<Native::Flow::Record::Match::Routing::Vrf>())
{
    destination->parent = this;
    next_hop->parent = this;
    pw->parent = this;
    source->parent = this;
    vrf->parent = this;

    yang_name = "routing"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::~Routing()
{
}

bool Native::Flow::Record::Match::Routing::has_data() const
{
    return is_multicast.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (forwarding_status !=  nullptr && forwarding_status->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Flow::Record::Match::Routing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_multicast.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (forwarding_status !=  nullptr && forwarding_status->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Flow::Record::Match::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_multicast.is_set || is_set(is_multicast.yfilter)) leaf_name_data.push_back(is_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Routing::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "forwarding-status")
    {
        if(forwarding_status == nullptr)
        {
            forwarding_status = std::make_shared<Native::Flow::Record::Match::Routing::ForwardingStatus>();
        }
        return forwarding_status;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Flow::Record::Match::Routing::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<Native::Flow::Record::Match::Routing::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Routing::Source>();
        }
        return source;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Flow::Record::Match::Routing::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(forwarding_status != nullptr)
    {
        children["forwarding-status"] = forwarding_status;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-multicast")
    {
        is_multicast = value;
        is_multicast.value_namespace = name_space;
        is_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-multicast")
    {
        is_multicast.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "forwarding-status" || name == "next-hop" || name == "pw" || name == "source" || name == "vrf" || name == "is-multicast")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Destination::Destination()
    :
    traffic_index{YType::empty, "traffic-index"}
    	,
    as(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Routing::Destination::has_data() const
{
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Match::Routing::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Match::Routing::Destination::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as != nullptr)
    {
        children["as"] = as;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Destination::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
    	,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Destination::As::~As()
{
}

bool Native::Flow::Record::Match::Routing::Destination::As::has_data() const
{
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Match::Routing::Destination::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Destination::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Destination::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Destination::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Match::Routing::Destination::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Destination::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Destination::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Destination::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Destination::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Destination::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Destination::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Match::Routing::Destination::As::Peer::has_data() const
{
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Match::Routing::Destination::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Destination::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Destination::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Destination::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Destination::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::Destination::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Destination::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Destination::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::ForwardingStatus::ForwardingStatus()
    :
    reason{YType::empty, "reason"}
{

    yang_name = "forwarding-status"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::ForwardingStatus::~ForwardingStatus()
{
}

bool Native::Flow::Record::Match::Routing::ForwardingStatus::has_data() const
{
    return reason.is_set;
}

bool Native::Flow::Record::Match::Routing::ForwardingStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Native::Flow::Record::Match::Routing::ForwardingStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::ForwardingStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::ForwardingStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::ForwardingStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::ForwardingStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::ForwardingStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::ForwardingStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::NextHop::NextHop()
    :
    address(std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address>())
{
    address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::NextHop::~NextHop()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Match::Routing::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Match::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Routing::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Routing::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Address()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::NextHop::Address::~Address()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::NextHop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::NextHop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Routing::NextHop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::Ipv4()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::has_data() const
{
    return bgp.is_set;
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::Ipv6()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::has_data() const
{
    return bgp.is_set;
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Pw::Pw()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Routing::Pw::Destination>())
{
    destination->parent = this;

    yang_name = "pw"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Pw::~Pw()
{
}

bool Native::Flow::Record::Match::Routing::Pw::has_data() const
{
    return (destination !=  nullptr && destination->has_data());
}

bool Native::Flow::Record::Match::Routing::Pw::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Routing::Pw::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Routing::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Routing::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Pw::Destination::Destination()
    :
    address{YType::empty, "address"}
{

    yang_name = "destination"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Pw::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Pw::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Pw::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Pw::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Pw::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::Pw::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Pw::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::Source()
    :
    traffic_index{YType::empty, "traffic-index"}
    	,
    as(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Source::~Source()
{
}

bool Native::Flow::Record::Match::Routing::Source::has_data() const
{
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Match::Routing::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Match::Routing::Source::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as != nullptr)
    {
        children["as"] = as;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
    	,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Source::As::~As()
{
}

bool Native::Flow::Record::Match::Routing::Source::As::has_data() const
{
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Match::Routing::Source::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Source::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Match::Routing::Source::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Source::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Source::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_data() const
{
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Source::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::Source::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Vrf::Vrf()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "vrf"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Vrf::~Vrf()
{
}

bool Native::Flow::Record::Match::Routing::Vrf::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Match::Routing::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Routing::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Services()
    :
    waas(std::make_shared<Native::Flow::Record::Match::Services::Waas>())
{
    waas->parent = this;

    yang_name = "services"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Services::~Services()
{
}

bool Native::Flow::Record::Match::Services::has_data() const
{
    return (waas !=  nullptr && waas->has_data());
}

bool Native::Flow::Record::Match::Services::has_operation() const
{
    return is_set(yfilter)
	|| (waas !=  nullptr && waas->has_operation());
}

std::string Native::Flow::Record::Match::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        if(waas == nullptr)
        {
            waas = std::make_shared<Native::Flow::Record::Match::Services::Waas>();
        }
        return waas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(waas != nullptr)
    {
        children["waas"] = waas;
    }

    return children;
}

void Native::Flow::Record::Match::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "waas")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Waas::Waas()
    :
    passthrough_reason{YType::empty, "passthrough-reason"}
    	,
    segment(nullptr) // presence node
{

    yang_name = "waas"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Services::Waas::~Waas()
{
}

bool Native::Flow::Record::Match::Services::Waas::has_data() const
{
    return passthrough_reason.is_set
	|| (segment !=  nullptr && segment->has_data());
}

bool Native::Flow::Record::Match::Services::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passthrough_reason.yfilter)
	|| (segment !=  nullptr && segment->has_operation());
}

std::string Native::Flow::Record::Match::Services::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::Waas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passthrough_reason.is_set || is_set(passthrough_reason.yfilter)) leaf_name_data.push_back(passthrough_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<Native::Flow::Record::Match::Services::Waas::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void Native::Flow::Record::Match::Services::Waas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason = value;
        passthrough_reason.value_namespace = name_space;
        passthrough_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Services::Waas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Services::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "passthrough-reason")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Waas::Segment::Segment()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "segment"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Services::Waas::Segment::~Segment()
{
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_data() const
{
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Match::Services::Waas::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::Waas::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::Waas::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::Waas::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Services::Waas::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Services::Waas::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Timestamp()
    :
    absolute(std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute>())
{
    absolute->parent = this;

    yang_name = "timestamp"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Timestamp::~Timestamp()
{
}

bool Native::Flow::Record::Match::Timestamp::has_data() const
{
    return (absolute !=  nullptr && absolute->has_data());
}

bool Native::Flow::Record::Match::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::Flow::Record::Match::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::Flow::Record::Match::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Absolute::Absolute()
    :
    monitoring_interval(std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval>())
{
    monitoring_interval->parent = this;

    yang_name = "absolute"; yang_parent_name = "timestamp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Timestamp::Absolute::~Absolute()
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_data() const
{
    return (monitoring_interval !=  nullptr && monitoring_interval->has_data());
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring_interval !=  nullptr && monitoring_interval->has_operation());
}

std::string Native::Flow::Record::Match::Timestamp::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring-interval")
    {
        if(monitoring_interval == nullptr)
        {
            monitoring_interval = std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval>();
        }
        return monitoring_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitoring_interval != nullptr)
    {
        children["monitoring-interval"] = monitoring_interval;
    }

    return children;
}

void Native::Flow::Record::Match::Timestamp::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Timestamp::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring-interval")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::MonitoringInterval()
    :
    start{YType::empty, "start"}
{

    yang_name = "monitoring-interval"; yang_parent_name = "absolute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::~MonitoringInterval()
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_data() const
{
    return start.is_set;
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter);
}

std::string Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Transport()
    :
    destination_port{YType::empty, "destination-port"},
    source_port{YType::empty, "source-port"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Match::Transport::Bytes>())
	,icmp(std::make_shared<Native::Flow::Record::Match::Transport::Icmp>())
	,igmp(std::make_shared<Native::Flow::Record::Match::Transport::Igmp>())
	,rtp(std::make_shared<Native::Flow::Record::Match::Transport::Rtp>())
	,tcp(std::make_shared<Native::Flow::Record::Match::Transport::Tcp>())
	,udp(std::make_shared<Native::Flow::Record::Match::Transport::Udp>())
{
    bytes->parent = this;
    icmp->parent = this;
    igmp->parent = this;
    rtp->parent = this;
    tcp->parent = this;
    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::~Transport()
{
}

bool Native::Flow::Record::Match::Transport::has_data() const
{
    return destination_port.is_set
	|| source_port.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Flow::Record::Match::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Flow::Record::Match::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Match::Transport::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Flow::Record::Match::Transport::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Flow::Record::Match::Transport::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Flow::Record::Match::Transport::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Flow::Record::Match::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Flow::Record::Match::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "icmp" || name == "igmp" || name == "rtp" || name == "tcp" || name == "udp" || name == "destination-port" || name == "source-port")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Bytes::Bytes()
    :
    expected{YType::empty, "expected"}
    	,
    lost(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Match::Transport::Bytes::has_data() const
{
    return expected.is_set
	|| (lost !=  nullptr && lost->has_data());
}

bool Native::Flow::Record::Match::Transport::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expected.yfilter)
	|| (lost !=  nullptr && lost->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expected.is_set || is_set(expected.yfilter)) leaf_name_data.push_back(expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lost")
    {
        if(lost == nullptr)
        {
            lost = std::make_shared<Native::Flow::Record::Match::Transport::Bytes::Lost>();
        }
        return lost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lost != nullptr)
    {
        children["lost"] = lost;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expected")
    {
        expected = value;
        expected.value_namespace = name_space;
        expected.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expected")
    {
        expected.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lost" || name == "expected")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Bytes::Lost::Lost()
    :
    rate{YType::empty, "rate"}
{

    yang_name = "lost"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Bytes::Lost::~Lost()
{
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_data() const
{
    return rate.is_set;
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Bytes::Lost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Bytes::Lost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Bytes::Lost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Bytes::Lost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Bytes::Lost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Bytes::Lost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Icmp::Icmp()
    :
    ipv4(std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "icmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Icmp::~Icmp()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Match::Transport::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Transport::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Transport::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv4::Ipv4()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv4"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv6::Ipv6()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv6"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Igmp::Igmp()
    :
    type{YType::empty, "type"}
{

    yang_name = "igmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Igmp::~Igmp()
{
}

bool Native::Flow::Record::Match::Transport::Igmp::has_data() const
{
    return type.is_set;
}

bool Native::Flow::Record::Match::Transport::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Rtp::Rtp()
    :
    ssrc{YType::empty, "ssrc"}
{

    yang_name = "rtp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Rtp::~Rtp()
{
}

bool Native::Flow::Record::Match::Transport::Rtp::has_data() const
{
    return ssrc.is_set;
}

bool Native::Flow::Record::Match::Transport::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssrc")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Tcp()
    :
    acknowledgement_number{YType::empty, "acknowledgement-number"},
    destination_port{YType::empty, "destination-port"},
    header_length{YType::empty, "header-length"},
    maximum_segment_size{YType::empty, "maximum-segment-size"},
    sequence_number{YType::empty, "sequence-number"},
    source_port{YType::empty, "source-port"},
    urgent_pointer{YType::empty, "urgent-pointer"}
    	,
    flags(nullptr) // presence node
	,flow(std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flow_>())
	,option(std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option>())
	,window_size(nullptr) // presence node
{
    flow->parent = this;
    option->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::~Tcp()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::has_data() const
{
    return acknowledgement_number.is_set
	|| destination_port.is_set
	|| header_length.is_set
	|| maximum_segment_size.is_set
	|| sequence_number.is_set
	|| source_port.is_set
	|| urgent_pointer.is_set
	|| (flags !=  nullptr && flags->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (window_size !=  nullptr && window_size->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement_number.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(header_length.yfilter)
	|| ydk::is_set(maximum_segment_size.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(urgent_pointer.yfilter)
	|| (flags !=  nullptr && flags->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (window_size !=  nullptr && window_size->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_number.is_set || is_set(acknowledgement_number.yfilter)) leaf_name_data.push_back(acknowledgement_number.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.yfilter)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (maximum_segment_size.is_set || is_set(maximum_segment_size.yfilter)) leaf_name_data.push_back(maximum_segment_size.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (urgent_pointer.is_set || is_set(urgent_pointer.yfilter)) leaf_name_data.push_back(urgent_pointer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option>();
        }
        return option;
    }

    if(child_yang_name == "window-size")
    {
        if(window_size == nullptr)
        {
            window_size = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::WindowSize>();
        }
        return window_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(window_size != nullptr)
    {
        children["window-size"] = window_size;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number = value;
        acknowledgement_number.value_namespace = name_space;
        acknowledgement_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-length")
    {
        header_length = value;
        header_length.value_namespace = name_space;
        header_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size = value;
        maximum_segment_size.value_namespace = name_space;
        maximum_segment_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer = value;
        urgent_pointer.value_namespace = name_space;
        urgent_pointer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "header-length")
    {
        header_length.yfilter = yfilter;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "flow" || name == "option" || name == "window-size" || name == "acknowledgement-number" || name == "destination-port" || name == "header-length" || name == "maximum-segment-size" || name == "sequence-number" || name == "source-port" || name == "urgent-pointer")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Flags::Flags()
    :
    ack{YType::empty, "ack"},
    cwr{YType::empty, "cwr"},
    ece{YType::empty, "ece"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"}
{

    yang_name = "flags"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::Flags::~Flags()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Flags::has_data() const
{
    return ack.is_set
	|| cwr.is_set
	|| ece.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(cwr.yfilter)
	|| ydk::is_set(ece.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (cwr.is_set || is_set(cwr.yfilter)) leaf_name_data.push_back(cwr.get_name_leafdata());
    if (ece.is_set || is_set(ece.yfilter)) leaf_name_data.push_back(ece.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cwr")
    {
        cwr = value;
        cwr.value_namespace = name_space;
        cwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ece")
    {
        ece = value;
        ece.value_namespace = name_space;
        ece.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "cwr")
    {
        cwr.yfilter = yfilter;
    }
    if(value_path == "ece")
    {
        ece.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "cwr" || name == "ece" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Flow_::Flow_()
    :
    count{YType::empty, "count"}
{

    yang_name = "flow"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Flow_::has_data() const
{
    return count.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Flow_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::Flow_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Flow_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::Flow_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::Flow_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Option::Option()
    :
    map(nullptr) // presence node
{

    yang_name = "option"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::Option::~Option()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Transport::Tcp::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Option::Map::Map()
    :
    long_{YType::empty, "long"}
{

    yang_name = "map"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::Option::Map::~Map()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::Map::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Option::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::Option::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::WindowSize()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"},
    sum{YType::empty, "sum"}
    	,
    average(nullptr) // presence node
{

    yang_name = "window-size"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::~WindowSize()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::has_data() const
{
    return maximum.is_set
	|| minimum.is_set
	|| sum.is_set
	|| (average !=  nullptr && average->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(sum.yfilter)
	|| (average !=  nullptr && average->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average")
    {
        if(average == nullptr)
        {
            average = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average>();
        }
        return average;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average != nullptr)
    {
        children["average"] = average;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "minimum" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::Average()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "average"; yang_parent_name = "window-size"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::~Average()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Udp::Udp()
    :
    destination_port{YType::empty, "destination-port"},
    message_length{YType::empty, "message-length"},
    source_port{YType::empty, "source-port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Udp::~Udp()
{
}

bool Native::Flow::Record::Match::Transport::Udp::has_data() const
{
    return destination_port.is_set
	|| message_length.is_set
	|| source_port.is_set;
}

bool Native::Flow::Record::Match::Transport::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(message_length.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (message_length.is_set || is_set(message_length.yfilter)) leaf_name_data.push_back(message_length.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Match::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-length")
    {
        message_length = value;
        message_length.value_namespace = name_space;
        message_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "message-length")
    {
        message_length.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port" || name == "message-length" || name == "source-port")
        return true;
    return false;
}

Native::HwModule::HwModule()
    :
    pvdm{YType::str, "pvdm"},
    sm{YType::uint8, "sm"}
    	,
    uplink(std::make_shared<Native::HwModule::Uplink>())
{
    uplink->parent = this;

    yang_name = "hw-module"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::HwModule::~HwModule()
{
}

bool Native::HwModule::has_data() const
{
    return pvdm.is_set
	|| sm.is_set
	|| (uplink !=  nullptr && uplink->has_data());
}

bool Native::HwModule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pvdm.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| (uplink !=  nullptr && uplink->has_operation());
}

std::string Native::HwModule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvdm.is_set || is_set(pvdm.yfilter)) leaf_name_data.push_back(pvdm.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::HwModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uplink")
    {
        if(uplink == nullptr)
        {
            uplink = std::make_shared<Native::HwModule::Uplink>();
        }
        return uplink;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(uplink != nullptr)
    {
        children["uplink"] = uplink;
    }

    return children;
}

void Native::HwModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pvdm")
    {
        pvdm = value;
        pvdm.value_namespace = name_space;
        pvdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sm")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pvdm")
    {
        pvdm.yfilter = yfilter;
    }
    if(value_path == "sm")
    {
        sm.yfilter = yfilter;
    }
}

bool Native::HwModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uplink" || name == "pvdm" || name == "sm")
        return true;
    return false;
}

Native::HwModule::Uplink::Uplink()
    :
    mode{YType::enumeration, "mode"},
    select{YType::str, "select"}
{

    yang_name = "uplink"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false;
}

Native::HwModule::Uplink::~Uplink()
{
}

bool Native::HwModule::Uplink::has_data() const
{
    return mode.is_set
	|| select.is_set;
}

bool Native::HwModule::Uplink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(select.yfilter);
}

std::string Native::HwModule::Uplink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwModule::Uplink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uplink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::Uplink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (select.is_set || is_set(select.yfilter)) leaf_name_data.push_back(select.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::HwModule::Uplink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwModule::Uplink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::HwModule::Uplink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "select")
    {
        select = value;
        select.value_namespace = name_space;
        select.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::Uplink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
}

bool Native::HwModule::Uplink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "select")
        return true;
    return false;
}

Native::HwSwitch::HwSwitch()
    :
    switch_(std::make_shared<Native::HwSwitch::Switch_>())
{
    switch_->parent = this;

    yang_name = "hw-switch"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::HwSwitch::~HwSwitch()
{
}

bool Native::HwSwitch::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::HwSwitch::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::HwSwitch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwSwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:hw-switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::HwSwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::HwSwitch::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::HwSwitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::HwSwitch::Switch_::Switch_()
{

    yang_name = "switch"; yang_parent_name = "hw-switch"; is_top_level_class = false; has_list_ancestor = false;
}

Native::HwSwitch::Switch_::~Switch_()
{
}

bool Native::HwSwitch::Switch_::has_data() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_data())
            return true;
    }
    return false;
}

bool Native::HwSwitch::Switch_::has_operation() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::HwSwitch::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:hw-switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwSwitch::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-number")
    {
        for(auto const & c : switch_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::HwSwitch::Switch_::SwitchNumber>();
        c->parent = this;
        switch_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::HwSwitch::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-number")
        return true;
    return false;
}

Native::HwSwitch::Switch_::SwitchNumber::SwitchNumber()
    :
    switch_number{YType::uint8, "switch-number"}
    	,
    logging(std::make_shared<Native::HwSwitch::Switch_::SwitchNumber::Logging>())
{
    logging->parent = this;

    yang_name = "switch-number"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false;
}

Native::HwSwitch::Switch_::SwitchNumber::~SwitchNumber()
{
}

bool Native::HwSwitch::Switch_::SwitchNumber::has_data() const
{
    return switch_number.is_set
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::HwSwitch::Switch_::SwitchNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::HwSwitch::Switch_::SwitchNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:hw-switch/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwSwitch::Switch_::SwitchNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-number" <<"[switch-number='" <<switch_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::Switch_::SwitchNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch_::SwitchNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::HwSwitch::Switch_::SwitchNumber::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch_::SwitchNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::HwSwitch::Switch_::SwitchNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwSwitch::Switch_::SwitchNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::HwSwitch::Switch_::SwitchNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "switch-number")
        return true;
    return false;
}

Native::HwSwitch::Switch_::SwitchNumber::Logging::Logging()
    :
    onboard(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "switch-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::HwSwitch::Switch_::SwitchNumber::Logging::~Logging()
{
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::has_data() const
{
    return (onboard !=  nullptr && onboard->has_data());
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (onboard !=  nullptr && onboard->has_operation());
}

std::string Native::HwSwitch::Switch_::SwitchNumber::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::Switch_::SwitchNumber::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch_::SwitchNumber::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "onboard")
    {
        if(onboard == nullptr)
        {
            onboard = std::make_shared<Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard>();
        }
        return onboard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch_::SwitchNumber::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(onboard != nullptr)
    {
        children["onboard"] = onboard;
    }

    return children;
}

void Native::HwSwitch::Switch_::SwitchNumber::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwSwitch::Switch_::SwitchNumber::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onboard")
        return true;
    return false;
}

Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::Onboard()
    :
    counter{YType::empty, "counter"},
    environment{YType::empty, "environment"},
    message{YType::empty, "message"},
    poe{YType::empty, "poe"},
    temperature{YType::empty, "temperature"},
    voltage{YType::empty, "voltage"}
{

    yang_name = "onboard"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::~Onboard()
{
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::has_data() const
{
    return counter.is_set
	|| environment.is_set
	|| message.is_set
	|| poe.is_set
	|| temperature.is_set
	|| voltage.is_set;
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(environment.yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(poe.yfilter)
	|| ydk::is_set(temperature.yfilter)
	|| ydk::is_set(voltage.yfilter);
}

std::string Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onboard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (environment.is_set || is_set(environment.yfilter)) leaf_name_data.push_back(environment.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (poe.is_set || is_set(poe.yfilter)) leaf_name_data.push_back(poe.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.yfilter)) leaf_name_data.push_back(temperature.get_name_leafdata());
    if (voltage.is_set || is_set(voltage.yfilter)) leaf_name_data.push_back(voltage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environment")
    {
        environment = value;
        environment.value_namespace = name_space;
        environment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poe")
    {
        poe = value;
        poe.value_namespace = name_space;
        poe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature")
    {
        temperature = value;
        temperature.value_namespace = name_space;
        temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voltage")
    {
        voltage = value;
        voltage.value_namespace = name_space;
        voltage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "environment")
    {
        environment.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "poe")
    {
        poe.yfilter = yfilter;
    }
    if(value_path == "temperature")
    {
        temperature.yfilter = yfilter;
    }
    if(value_path == "voltage")
    {
        voltage.yfilter = yfilter;
    }
}

bool Native::HwSwitch::Switch_::SwitchNumber::Logging::Onboard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "environment" || name == "message" || name == "poe" || name == "temperature" || name == "voltage")
        return true;
    return false;
}

Native::Identity::Identity()
    :
    profile(std::make_shared<Native::Identity::Profile>())
{
    profile->parent = this;

    yang_name = "identity"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Identity::~Identity()
{
}

bool Native::Identity::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Identity::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Identity::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Identity::Profile::Profile()
    :
    default_{YType::empty, "default"},
    dot1x{YType::empty, "dot1x"}
{

    yang_name = "profile"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Identity::Profile::~Profile()
{
}

bool Native::Identity::Profile::has_data() const
{
    return default_.is_set
	|| dot1x.is_set;
}

bool Native::Identity::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dot1x.yfilter);
}

std::string Native::Identity::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/identity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Identity::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Identity::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
}

bool Native::Identity::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dot1x")
        return true;
    return false;
}

Native::Interface::Interface()
    :
    atm_acrsubinterface(std::make_shared<Native::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
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
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_data())
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
    for (std::size_t index=0; index<fortygigabitethernet.size(); index++)
    {
        if(fortygigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<gigabitethernet.size(); index++)
    {
        if(gigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group_async.size(); index++)
    {
        if(group_async[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lisp.size(); index++)
    {
        if(lisp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multilink.size(); index++)
    {
        if(multilink[index]->has_data())
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
    for (std::size_t index=0; index<serial.size(); index++)
    {
        if(serial[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sm.size(); index++)
    {
        if(sm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tengigabitethernet.size(); index++)
    {
        if(tengigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
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
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
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
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_operation())
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
    for (std::size_t index=0; index<fortygigabitethernet.size(); index++)
    {
        if(fortygigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<gigabitethernet.size(); index++)
    {
        if(gigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group_async.size(); index++)
    {
        if(group_async[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lisp.size(); index++)
    {
        if(lisp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multilink.size(); index++)
    {
        if(multilink[index]->has_operation())
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
    for (std::size_t index=0; index<serial.size(); index++)
    {
        if(serial[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sm.size(); index++)
    {
        if(sm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tengigabitethernet.size(); index++)
    {
        if(tengigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
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
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
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

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
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

    for (auto const & c : atm_acr)
    {
        children[c->get_segment_path()] = c;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    for (auto const & c : bdi)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cellular)
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

    for (auto const & c : fortygigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : gigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : group_async)
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

    for (auto const & c : loopback)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : multilink)
    {
        children[c->get_segment_path()] = c;
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

    for (auto const & c : serial)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sm)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tengigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel)
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

    for (auto const & c : virtual_template)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : virtualportgroup)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan)
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
    if(name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "FortyGigabitEthernet" || name == "GigabitEthernet" || name == "Group-Async" || name == "LISP" || name == "LISP-subinterface" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "Port-channel-subinterface" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Interface::ATM::ATM()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    atm(std::make_shared<Native::Interface::ATM::Atm>())
	,ip(std::make_shared<Native::Interface::ATM::Ip>())
{
    atm->parent = this;
    ip->parent = this;

    yang_name = "ATM"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::ATM::~ATM()
{
}

bool Native::Interface::ATM::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::ATM::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::ATM::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::ATM::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::ATM::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATM::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::ATM::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATM::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATM::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "cem" || name == "ip" || name == "pvc" || name == "name" || name == "load-interval")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{

    yang_name = "atm"; yang_parent_name = "ATM"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::~Atm()
{
}

bool Native::Interface::ATM::Atm::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::ATM::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable_ilmi_trap.yfilter);
}

std::string Native::Interface::ATM::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.yfilter)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATM::Atm::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATM::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap = value;
        enable_ilmi_trap.value_namespace = name_space;
        enable_ilmi_trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp" || name == "bandwidth" || name == "enable-ilmi-trap")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::ATM::Atm::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATM::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::ATM::Atm::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATM::Atm::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pvp_number.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATM::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.yfilter)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATM::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATM::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATM::Atm::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pvp-number")
    {
        pvp_number = value;
        pvp_number.value_namespace = name_space;
        pvp_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
        l2transport.value_namespace = name_space;
        l2transport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Atm::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pvp-number")
    {
        pvp_number.yfilter = yfilter;
    }
    if(value_path == "l2transport")
    {
        l2transport.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Atm::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "pvp-number" || name == "l2transport")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::ATM::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::ATM::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATM::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATM::Atm::Pvp::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Atm::Pvp::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "encapsulation" || name == "manual" || name == "mtu" || name == "pw-class" || name == "sequencing" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer>())
{
    delay->parent = this;
    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "peer")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter);
}

std::string Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "priority" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATM::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATM::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Atm::Pvp::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATM::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::ATM::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATM::Cem::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::~Cem()
{
}

bool Native::Interface::ATM::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATM::Cem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATM::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATM::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATM::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATM::Cem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Cem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Cem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "number")
        return true;
    return false;
}

Native::Interface::ATM::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::ATM::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATM::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATM::Cem::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::ATM::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATM::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATM::Cem::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Cem::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Cem::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "encapsulation" || name == "manual" || name == "mtu" || name == "pw-class" || name == "sequencing" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Cem::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::ATM::Cem::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::ATM::Cem::Xconnect::Backup::Peer>())
{
    delay->parent = this;
    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::ATM::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATM::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATM::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::ATM::Cem::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Cem::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "peer")
        return true;
    return false;
}

Native::Interface::ATM::Cem::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Interface::ATM::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Cem::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Interface::ATM::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter);
}

std::string Native::Interface::ATM::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Cem::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Cem::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "priority" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATM::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATM::Cem::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATM::Cem::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATM::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATM::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATM::Cem::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Cem::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Cem::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATM::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "ATM"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Ip::~Ip()
{
}

bool Native::Interface::ATM::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Interface::ATM::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::ATM::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    ubr{YType::uint32, "ubr"}
    	,
    xconnect(std::make_shared<Native::Interface::ATM::Pvc::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATM::Pvc::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "ATM"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::~Pvc()
{
}

bool Native::Interface::ATM::Pvc::has_data() const
{
    return local_vpi_vci.is_set
	|| l2transport.is_set
	|| remote_vpi_vci.is_set
	|| ubr.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATM::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_vpi_vci.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| ydk::is_set(remote_vpi_vci.yfilter)
	|| ydk::is_set(ubr.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATM::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc" <<"[local-vpi-vci='" <<local_vpi_vci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.yfilter)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.yfilter)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.yfilter)) leaf_name_data.push_back(ubr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATM::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATM::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATM::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci = value;
        local_vpi_vci.value_namespace = name_space;
        local_vpi_vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
        l2transport.value_namespace = name_space;
        l2transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci = value;
        remote_vpi_vci.value_namespace = name_space;
        remote_vpi_vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubr")
    {
        ubr = value;
        ubr.value_namespace = name_space;
        ubr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci.yfilter = yfilter;
    }
    if(value_path == "l2transport")
    {
        l2transport.yfilter = yfilter;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci.yfilter = yfilter;
    }
    if(value_path == "ubr")
    {
        ubr.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "local-vpi-vci" || name == "l2transport" || name == "remote-vpi-vci" || name == "ubr")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::ATM::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATM::Pvc::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATM::Pvc::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::ATM::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATM::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATM::Pvc::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Pvc::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Pvc::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "encapsulation" || name == "manual" || name == "mtu" || name == "pw-class" || name == "sequencing" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::ATM::Pvc::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::ATM::Pvc::Xconnect::Backup::Peer>())
{
    delay->parent = this;
    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::ATM::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATM::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATM::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::ATM::Pvc::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Pvc::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "peer")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter);
}

std::string Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Pvc::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "priority" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATM::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATM::Pvc::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Pvc::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMACR::ATMACR()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    atm(std::make_shared<Native::Interface::ATMACR::Atm>())
	,ip(std::make_shared<Native::Interface::ATMACR::Ip>())
{
    atm->parent = this;
    ip->parent = this;

    yang_name = "ATM-ACR"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::ATMACR::~ATMACR()
{
}

bool Native::Interface::ATMACR::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::ATMACR::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::ATMACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::ATMACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACR" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::ATMACR::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACR::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::ATMACR::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACR::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "cem" || name == "ip" || name == "pvc" || name == "name" || name == "load-interval")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{

    yang_name = "atm"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::~Atm()
{
}

bool Native::Interface::ATMACR::Atm::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::ATMACR::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable_ilmi_trap.yfilter);
}

std::string Native::Interface::ATMACR::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.yfilter)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACR::Atm::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap = value;
        enable_ilmi_trap.value_namespace = name_space;
        enable_ilmi_trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp" || name == "bandwidth" || name == "enable-ilmi-trap")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pvp_number.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.yfilter)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pvp-number")
    {
        pvp_number = value;
        pvp_number.value_namespace = name_space;
        pvp_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
        l2transport.value_namespace = name_space;
        l2transport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Atm::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pvp-number")
    {
        pvp_number.yfilter = yfilter;
    }
    if(value_path == "l2transport")
    {
        l2transport.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Atm::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "pvp-number" || name == "l2transport")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "encapsulation" || name == "manual" || name == "mtu" || name == "pw-class" || name == "sequencing" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer>())
{
    delay->parent = this;
    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "peer")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter);
}

std::string Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "priority" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMACR::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::~Cem()
{
}

bool Native::Interface::ATMACR::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMACR::Cem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMACR::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Cem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Cem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "number")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMACR::Cem::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::ATMACR::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Cem::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Cem::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "encapsulation" || name == "manual" || name == "mtu" || name == "pw-class" || name == "sequencing" || name == "vcid")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer>())
{
    delay->parent = this;
    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::ATMACR::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Cem::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "peer")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

const Enum::YLeaf Native::HwModule::Uplink::Mode::shared_backplane {0, "shared-backplane"};

const Enum::YLeaf Native::Interface::ATM::Atm::Bandwidth::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::ATM::Atm::Pvp::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATM::Atm::Pvp::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATM::Atm::Pvp::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATM::Atm::Pvp::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATM::Atm::Pvp::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATM::Cem::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATM::Cem::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATM::Cem::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATM::Cem::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATM::Cem::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATM::Pvc::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATM::Pvc::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATM::Pvc::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATM::Pvc::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATM::Pvc::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMACR::Atm::Bandwidth::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Sequencing::transmit {2, "transmit"};


}
}

