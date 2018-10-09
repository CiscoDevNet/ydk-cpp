
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_220.hpp"
#include "Cisco_IOS_XE_native_221.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
        ,
    index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index>())
    , absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(ipprefix, "ipprefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::Index()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::~Index()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::Ipv4()
    :
    strict_spf(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-spf")
    {
        if(strict_spf == nullptr)
        {
            strict_spf = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf>();
        }
        return strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(strict_spf != nullptr)
    {
        children["strict-spf"] = strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::StrictSpf()
    :
    prefixes(this, {"ipprefix"})
{

    yang_name = "strict-spf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefixes.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
        ,
    index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index>())
    , absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(ipprefix, "ipprefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::Index()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::~Index()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::SetAttributes()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "set-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::SetAttributes::~SetAttributes()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::SetAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
{

    yang_name = "address-family"; yang_parent_name = "set-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::Ipv4()
    :
    explicit_null{YType::empty, "explicit-null"},
    sr_label_preferred{YType::empty, "sr-label-preferred"}
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return explicit_null.is_set
	|| sr_label_preferred.is_set;
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(sr_label_preferred.yfilter);
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (sr_label_preferred.is_set || is_set(sr_label_preferred.yfilter)) leaf_name_data.push_back(sr_label_preferred.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-label-preferred")
    {
        sr_label_preferred = value;
        sr_label_preferred.value_namespace = name_space;
        sr_label_preferred.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "sr-label-preferred")
    {
        sr_label_preferred.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "sr-label-preferred")
        return true;
    return false;
}

Native::License::License()
    :
    udi(std::make_shared<Native::License::Udi>())
    , feature(std::make_shared<Native::License::Feature>())
    , accept(std::make_shared<Native::License::Accept>())
    , boot(std::make_shared<Native::License::Boot>())
    , smart(std::make_shared<Native::License::Smart>())
{
    udi->parent = this;
    feature->parent = this;
    accept->parent = this;
    boot->parent = this;
    smart->parent = this;

    yang_name = "license"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::~License()
{
}

bool Native::License::has_data() const
{
    if (is_presence_container) return true;
    return (udi !=  nullptr && udi->has_data())
	|| (feature !=  nullptr && feature->has_data())
	|| (accept !=  nullptr && accept->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (smart !=  nullptr && smart->has_data());
}

bool Native::License::has_operation() const
{
    return is_set(yfilter)
	|| (udi !=  nullptr && udi->has_operation())
	|| (feature !=  nullptr && feature->has_operation())
	|| (accept !=  nullptr && accept->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (smart !=  nullptr && smart->has_operation());
}

std::string Native::License::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udi")
    {
        if(udi == nullptr)
        {
            udi = std::make_shared<Native::License::Udi>();
        }
        return udi;
    }

    if(child_yang_name == "feature")
    {
        if(feature == nullptr)
        {
            feature = std::make_shared<Native::License::Feature>();
        }
        return feature;
    }

    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::License::Accept>();
        }
        return accept;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<Native::License::Boot>();
        }
        return boot;
    }

    if(child_yang_name == "smart")
    {
        if(smart == nullptr)
        {
            smart = std::make_shared<Native::License::Smart>();
        }
        return smart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(udi != nullptr)
    {
        children["udi"] = udi;
    }

    if(feature != nullptr)
    {
        children["feature"] = feature;
    }

    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    if(boot != nullptr)
    {
        children["boot"] = boot;
    }

    if(smart != nullptr)
    {
        children["smart"] = smart;
    }

    return children;
}

void Native::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udi" || name == "feature" || name == "accept" || name == "boot" || name == "smart")
        return true;
    return false;
}

Native::License::Udi::Udi()
    :
    pid{YType::str, "pid"},
    sn{YType::str, "sn"}
{

    yang_name = "udi"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Udi::~Udi()
{
}

bool Native::License::Udi::has_data() const
{
    if (is_presence_container) return true;
    return pid.is_set
	|| sn.is_set;
}

bool Native::License::Udi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(sn.yfilter);
}

std::string Native::License::Udi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Udi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Udi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Udi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "sn")
    {
        sn.yfilter = yfilter;
    }
}

bool Native::License::Udi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "sn")
        return true;
    return false;
}

Native::License::Feature::Feature()
    :
    name{YType::str, "name"}
        ,
    port(std::make_shared<Native::License::Feature::Port>())
{
    port->parent = this;

    yang_name = "feature"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Feature::~Feature()
{
}

bool Native::License::Feature::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (port !=  nullptr && port->has_data());
}

bool Native::License::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::License::Feature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::License::Feature::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::License::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::License::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "name")
        return true;
    return false;
}

Native::License::Feature::Port::Port()
    :
    bulk{YType::empty, "bulk"},
    onegig{YType::uint8, "onegig"},
    b_6xonegig{YType::uint8, "b-6xonegig"},
    tengig{YType::uint8, "tengig"}
{

    yang_name = "port"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Feature::Port::~Port()
{
}

bool Native::License::Feature::Port::has_data() const
{
    if (is_presence_container) return true;
    return bulk.is_set
	|| onegig.is_set
	|| b_6xonegig.is_set
	|| tengig.is_set;
}

bool Native::License::Feature::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bulk.yfilter)
	|| ydk::is_set(onegig.yfilter)
	|| ydk::is_set(b_6xonegig.yfilter)
	|| ydk::is_set(tengig.yfilter);
}

std::string Native::License::Feature::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/feature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Feature::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Feature::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bulk.is_set || is_set(bulk.yfilter)) leaf_name_data.push_back(bulk.get_name_leafdata());
    if (onegig.is_set || is_set(onegig.yfilter)) leaf_name_data.push_back(onegig.get_name_leafdata());
    if (b_6xonegig.is_set || is_set(b_6xonegig.yfilter)) leaf_name_data.push_back(b_6xonegig.get_name_leafdata());
    if (tengig.is_set || is_set(tengig.yfilter)) leaf_name_data.push_back(tengig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Feature::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Feature::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bulk")
    {
        bulk = value;
        bulk.value_namespace = name_space;
        bulk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "onegig")
    {
        onegig = value;
        onegig.value_namespace = name_space;
        onegig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-6xonegig")
    {
        b_6xonegig = value;
        b_6xonegig.value_namespace = name_space;
        b_6xonegig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tengig")
    {
        tengig = value;
        tengig.value_namespace = name_space;
        tengig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Feature::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bulk")
    {
        bulk.yfilter = yfilter;
    }
    if(value_path == "onegig")
    {
        onegig.yfilter = yfilter;
    }
    if(value_path == "b-6xonegig")
    {
        b_6xonegig.yfilter = yfilter;
    }
    if(value_path == "tengig")
    {
        tengig.yfilter = yfilter;
    }
}

bool Native::License::Feature::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk" || name == "onegig" || name == "b-6xonegig" || name == "tengig")
        return true;
    return false;
}

Native::License::Accept::Accept()
    :
    end{YType::empty, "end"},
    user{YType::empty, "user"},
    agreement{YType::empty, "agreement"}
{

    yang_name = "accept"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Accept::~Accept()
{
}

bool Native::License::Accept::has_data() const
{
    if (is_presence_container) return true;
    return end.is_set
	|| user.is_set
	|| agreement.is_set;
}

bool Native::License::Accept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(agreement.yfilter);
}

std::string Native::License::Accept::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (agreement.is_set || is_set(agreement.yfilter)) leaf_name_data.push_back(agreement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agreement")
    {
        agreement = value;
        agreement.value_namespace = name_space;
        agreement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "agreement")
    {
        agreement.yfilter = yfilter;
    }
}

bool Native::License::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end" || name == "user" || name == "agreement")
        return true;
    return false;
}

Native::License::Boot::Boot()
    :
    level(std::make_shared<Native::License::Boot::Level>())
    , boot_module(std::make_shared<Native::License::Boot::BootModule>())
{
    level->parent = this;
    boot_module->parent = this;

    yang_name = "boot"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Boot::~Boot()
{
}

bool Native::License::Boot::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data())
	|| (boot_module !=  nullptr && boot_module->has_data());
}

bool Native::License::Boot::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation())
	|| (boot_module !=  nullptr && boot_module->has_operation());
}

std::string Native::License::Boot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::License::Boot::Level>();
        }
        return level;
    }

    if(child_yang_name == "boot-module")
    {
        if(boot_module == nullptr)
        {
            boot_module = std::make_shared<Native::License::Boot::BootModule>();
        }
        return boot_module;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(level != nullptr)
    {
        children["level"] = level;
    }

    if(boot_module != nullptr)
    {
        children["boot-module"] = boot_module;
    }

    return children;
}

void Native::License::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::License::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::License::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "boot-module")
        return true;
    return false;
}

Native::License::Boot::Level::Level()
    :
    metroipservices{YType::empty, "metroipservices"},
    metroservices{YType::empty, "metroservices"},
    advancedmetroipaccess{YType::empty, "advancedmetroipaccess"},
    metroaccess{YType::empty, "metroaccess"},
    metroipaccess{YType::empty, "metroipaccess"},
    entservices{YType::empty, "entservices"},
    adventerprise{YType::empty, "adventerprise"},
    appx{YType::empty, "appx"},
    appxk9{YType::empty, "appxk9"},
    ax{YType::empty, "ax"},
    security{YType::empty, "security"},
    securityk9{YType::empty, "securityk9"},
    advucsuitek9{YType::empty, "AdvUCSuiteK9"},
    foundationsuitek9{YType::empty, "FoundationSuiteK9"}
        ,
    ipbase(nullptr) // presence node
    , ipbasek9(nullptr) // presence node
    , ipservices(nullptr) // presence node
    , ipservicesk9(nullptr) // presence node
    , lanbase(nullptr) // presence node
    , lanbasek9(nullptr) // presence node
    , lite(nullptr) // presence node
    , metroaggrservices(nullptr) // presence node
    , uck9(nullptr) // presence node
    , network_advantage(nullptr) // presence node
    , network_essentials(nullptr) // presence node
{

    yang_name = "level"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Boot::Level::~Level()
{
}

bool Native::License::Boot::Level::has_data() const
{
    if (is_presence_container) return true;
    return metroipservices.is_set
	|| metroservices.is_set
	|| advancedmetroipaccess.is_set
	|| metroaccess.is_set
	|| metroipaccess.is_set
	|| entservices.is_set
	|| adventerprise.is_set
	|| appx.is_set
	|| appxk9.is_set
	|| ax.is_set
	|| security.is_set
	|| securityk9.is_set
	|| advucsuitek9.is_set
	|| foundationsuitek9.is_set
	|| (ipbase !=  nullptr && ipbase->has_data())
	|| (ipbasek9 !=  nullptr && ipbasek9->has_data())
	|| (ipservices !=  nullptr && ipservices->has_data())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_data())
	|| (lanbase !=  nullptr && lanbase->has_data())
	|| (lanbasek9 !=  nullptr && lanbasek9->has_data())
	|| (lite !=  nullptr && lite->has_data())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_data())
	|| (uck9 !=  nullptr && uck9->has_data())
	|| (network_advantage !=  nullptr && network_advantage->has_data())
	|| (network_essentials !=  nullptr && network_essentials->has_data());
}

bool Native::License::Boot::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metroipservices.yfilter)
	|| ydk::is_set(metroservices.yfilter)
	|| ydk::is_set(advancedmetroipaccess.yfilter)
	|| ydk::is_set(metroaccess.yfilter)
	|| ydk::is_set(metroipaccess.yfilter)
	|| ydk::is_set(entservices.yfilter)
	|| ydk::is_set(adventerprise.yfilter)
	|| ydk::is_set(appx.yfilter)
	|| ydk::is_set(appxk9.yfilter)
	|| ydk::is_set(ax.yfilter)
	|| ydk::is_set(security.yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| ydk::is_set(advucsuitek9.yfilter)
	|| ydk::is_set(foundationsuitek9.yfilter)
	|| (ipbase !=  nullptr && ipbase->has_operation())
	|| (ipbasek9 !=  nullptr && ipbasek9->has_operation())
	|| (ipservices !=  nullptr && ipservices->has_operation())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_operation())
	|| (lanbase !=  nullptr && lanbase->has_operation())
	|| (lanbasek9 !=  nullptr && lanbasek9->has_operation())
	|| (lite !=  nullptr && lite->has_operation())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_operation())
	|| (uck9 !=  nullptr && uck9->has_operation())
	|| (network_advantage !=  nullptr && network_advantage->has_operation())
	|| (network_essentials !=  nullptr && network_essentials->has_operation());
}

std::string Native::License::Boot::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metroipservices.is_set || is_set(metroipservices.yfilter)) leaf_name_data.push_back(metroipservices.get_name_leafdata());
    if (metroservices.is_set || is_set(metroservices.yfilter)) leaf_name_data.push_back(metroservices.get_name_leafdata());
    if (advancedmetroipaccess.is_set || is_set(advancedmetroipaccess.yfilter)) leaf_name_data.push_back(advancedmetroipaccess.get_name_leafdata());
    if (metroaccess.is_set || is_set(metroaccess.yfilter)) leaf_name_data.push_back(metroaccess.get_name_leafdata());
    if (metroipaccess.is_set || is_set(metroipaccess.yfilter)) leaf_name_data.push_back(metroipaccess.get_name_leafdata());
    if (entservices.is_set || is_set(entservices.yfilter)) leaf_name_data.push_back(entservices.get_name_leafdata());
    if (adventerprise.is_set || is_set(adventerprise.yfilter)) leaf_name_data.push_back(adventerprise.get_name_leafdata());
    if (appx.is_set || is_set(appx.yfilter)) leaf_name_data.push_back(appx.get_name_leafdata());
    if (appxk9.is_set || is_set(appxk9.yfilter)) leaf_name_data.push_back(appxk9.get_name_leafdata());
    if (ax.is_set || is_set(ax.yfilter)) leaf_name_data.push_back(ax.get_name_leafdata());
    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());
    if (advucsuitek9.is_set || is_set(advucsuitek9.yfilter)) leaf_name_data.push_back(advucsuitek9.get_name_leafdata());
    if (foundationsuitek9.is_set || is_set(foundationsuitek9.yfilter)) leaf_name_data.push_back(foundationsuitek9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipbase")
    {
        if(ipbase == nullptr)
        {
            ipbase = std::make_shared<Native::License::Boot::Level::Ipbase>();
        }
        return ipbase;
    }

    if(child_yang_name == "ipbasek9")
    {
        if(ipbasek9 == nullptr)
        {
            ipbasek9 = std::make_shared<Native::License::Boot::Level::Ipbasek9>();
        }
        return ipbasek9;
    }

    if(child_yang_name == "ipservices")
    {
        if(ipservices == nullptr)
        {
            ipservices = std::make_shared<Native::License::Boot::Level::Ipservices>();
        }
        return ipservices;
    }

    if(child_yang_name == "ipservicesk9")
    {
        if(ipservicesk9 == nullptr)
        {
            ipservicesk9 = std::make_shared<Native::License::Boot::Level::Ipservicesk9>();
        }
        return ipservicesk9;
    }

    if(child_yang_name == "lanbase")
    {
        if(lanbase == nullptr)
        {
            lanbase = std::make_shared<Native::License::Boot::Level::Lanbase>();
        }
        return lanbase;
    }

    if(child_yang_name == "lanbasek9")
    {
        if(lanbasek9 == nullptr)
        {
            lanbasek9 = std::make_shared<Native::License::Boot::Level::Lanbasek9>();
        }
        return lanbasek9;
    }

    if(child_yang_name == "lite")
    {
        if(lite == nullptr)
        {
            lite = std::make_shared<Native::License::Boot::Level::Lite>();
        }
        return lite;
    }

    if(child_yang_name == "metroaggrservices")
    {
        if(metroaggrservices == nullptr)
        {
            metroaggrservices = std::make_shared<Native::License::Boot::Level::Metroaggrservices>();
        }
        return metroaggrservices;
    }

    if(child_yang_name == "uck9")
    {
        if(uck9 == nullptr)
        {
            uck9 = std::make_shared<Native::License::Boot::Level::Uck9>();
        }
        return uck9;
    }

    if(child_yang_name == "network-advantage")
    {
        if(network_advantage == nullptr)
        {
            network_advantage = std::make_shared<Native::License::Boot::Level::NetworkAdvantage>();
        }
        return network_advantage;
    }

    if(child_yang_name == "network-essentials")
    {
        if(network_essentials == nullptr)
        {
            network_essentials = std::make_shared<Native::License::Boot::Level::NetworkEssentials>();
        }
        return network_essentials;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipbase != nullptr)
    {
        children["ipbase"] = ipbase;
    }

    if(ipbasek9 != nullptr)
    {
        children["ipbasek9"] = ipbasek9;
    }

    if(ipservices != nullptr)
    {
        children["ipservices"] = ipservices;
    }

    if(ipservicesk9 != nullptr)
    {
        children["ipservicesk9"] = ipservicesk9;
    }

    if(lanbase != nullptr)
    {
        children["lanbase"] = lanbase;
    }

    if(lanbasek9 != nullptr)
    {
        children["lanbasek9"] = lanbasek9;
    }

    if(lite != nullptr)
    {
        children["lite"] = lite;
    }

    if(metroaggrservices != nullptr)
    {
        children["metroaggrservices"] = metroaggrservices;
    }

    if(uck9 != nullptr)
    {
        children["uck9"] = uck9;
    }

    if(network_advantage != nullptr)
    {
        children["network-advantage"] = network_advantage;
    }

    if(network_essentials != nullptr)
    {
        children["network-essentials"] = network_essentials;
    }

    return children;
}

void Native::License::Boot::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metroipservices")
    {
        metroipservices = value;
        metroipservices.value_namespace = name_space;
        metroipservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroservices")
    {
        metroservices = value;
        metroservices.value_namespace = name_space;
        metroservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess = value;
        advancedmetroipaccess.value_namespace = name_space;
        advancedmetroipaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroaccess")
    {
        metroaccess = value;
        metroaccess.value_namespace = name_space;
        metroaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess = value;
        metroipaccess.value_namespace = name_space;
        metroipaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entservices")
    {
        entservices = value;
        entservices.value_namespace = name_space;
        entservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adventerprise")
    {
        adventerprise = value;
        adventerprise.value_namespace = name_space;
        adventerprise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appx")
    {
        appx = value;
        appx.value_namespace = name_space;
        appx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appxk9")
    {
        appxk9 = value;
        appxk9.value_namespace = name_space;
        appxk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ax")
    {
        ax = value;
        ax.value_namespace = name_space;
        ax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AdvUCSuiteK9")
    {
        advucsuitek9 = value;
        advucsuitek9.value_namespace = name_space;
        advucsuitek9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FoundationSuiteK9")
    {
        foundationsuitek9 = value;
        foundationsuitek9.value_namespace = name_space;
        foundationsuitek9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metroipservices")
    {
        metroipservices.yfilter = yfilter;
    }
    if(value_path == "metroservices")
    {
        metroservices.yfilter = yfilter;
    }
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess.yfilter = yfilter;
    }
    if(value_path == "metroaccess")
    {
        metroaccess.yfilter = yfilter;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess.yfilter = yfilter;
    }
    if(value_path == "entservices")
    {
        entservices.yfilter = yfilter;
    }
    if(value_path == "adventerprise")
    {
        adventerprise.yfilter = yfilter;
    }
    if(value_path == "appx")
    {
        appx.yfilter = yfilter;
    }
    if(value_path == "appxk9")
    {
        appxk9.yfilter = yfilter;
    }
    if(value_path == "ax")
    {
        ax.yfilter = yfilter;
    }
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
    if(value_path == "AdvUCSuiteK9")
    {
        advucsuitek9.yfilter = yfilter;
    }
    if(value_path == "FoundationSuiteK9")
    {
        foundationsuitek9.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipbase" || name == "ipbasek9" || name == "ipservices" || name == "ipservicesk9" || name == "lanbase" || name == "lanbasek9" || name == "lite" || name == "metroaggrservices" || name == "uck9" || name == "network-advantage" || name == "network-essentials" || name == "metroipservices" || name == "metroservices" || name == "advancedmetroipaccess" || name == "metroaccess" || name == "metroipaccess" || name == "entservices" || name == "adventerprise" || name == "appx" || name == "appxk9" || name == "ax" || name == "security" || name == "securityk9" || name == "AdvUCSuiteK9" || name == "FoundationSuiteK9")
        return true;
    return false;
}

Native::License::Boot::Level::Ipbase::Ipbase()
    :
    switch_{YType::uint8, "switch"}
{

    yang_name = "ipbase"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Ipbase::~Ipbase()
{
}

bool Native::License::Boot::Level::Ipbase::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipbase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipbase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Ipbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Ipbasek9::Ipbasek9()
    :
    addon{YType::enumeration, "addon"}
{

    yang_name = "ipbasek9"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Ipbasek9::~Ipbasek9()
{
}

bool Native::License::Boot::Level::Ipbasek9::has_data() const
{
    if (is_presence_container) return true;
    return addon.is_set;
}

bool Native::License::Boot::Level::Ipbasek9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addon.yfilter);
}

std::string Native::License::Boot::Level::Ipbasek9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipbasek9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipbasek9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipbasek9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addon.is_set || is_set(addon.yfilter)) leaf_name_data.push_back(addon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipbasek9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipbasek9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Ipbasek9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addon")
    {
        addon = value;
        addon.value_namespace = name_space;
        addon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipbasek9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addon")
    {
        addon.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipbasek9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addon")
        return true;
    return false;
}

Native::License::Boot::Level::Ipservices::Ipservices()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "ipservices"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Ipservices::~Ipservices()
{
}

bool Native::License::Boot::Level::Ipservices::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipservices::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipservices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipservices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Ipservices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipservices::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipservices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Ipservicesk9::Ipservicesk9()
    :
    addon{YType::enumeration, "addon"}
{

    yang_name = "ipservicesk9"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Ipservicesk9::~Ipservicesk9()
{
}

bool Native::License::Boot::Level::Ipservicesk9::has_data() const
{
    if (is_presence_container) return true;
    return addon.is_set;
}

bool Native::License::Boot::Level::Ipservicesk9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addon.yfilter);
}

std::string Native::License::Boot::Level::Ipservicesk9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipservicesk9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservicesk9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipservicesk9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addon.is_set || is_set(addon.yfilter)) leaf_name_data.push_back(addon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservicesk9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservicesk9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Ipservicesk9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addon")
    {
        addon = value;
        addon.value_namespace = name_space;
        addon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipservicesk9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addon")
    {
        addon.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipservicesk9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addon")
        return true;
    return false;
}

Native::License::Boot::Level::Lanbase::Lanbase()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "lanbase"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Lanbase::~Lanbase()
{
}

bool Native::License::Boot::Level::Lanbase::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::License::Boot::Level::Lanbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Lanbase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Lanbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lanbase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Lanbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lanbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lanbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Lanbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lanbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lanbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Lanbasek9::Lanbasek9()
    :
    addon{YType::enumeration, "addon"}
{

    yang_name = "lanbasek9"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Lanbasek9::~Lanbasek9()
{
}

bool Native::License::Boot::Level::Lanbasek9::has_data() const
{
    if (is_presence_container) return true;
    return addon.is_set;
}

bool Native::License::Boot::Level::Lanbasek9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addon.yfilter);
}

std::string Native::License::Boot::Level::Lanbasek9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Lanbasek9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lanbasek9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Lanbasek9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addon.is_set || is_set(addon.yfilter)) leaf_name_data.push_back(addon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lanbasek9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lanbasek9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Lanbasek9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addon")
    {
        addon = value;
        addon.value_namespace = name_space;
        addon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lanbasek9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addon")
    {
        addon.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lanbasek9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addon")
        return true;
    return false;
}

Native::License::Boot::Level::Lite::Lite()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "lite"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Lite::~Lite()
{
}

bool Native::License::Boot::Level::Lite::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::License::Boot::Level::Lite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Lite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Lite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Lite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Metroaggrservices::Metroaggrservices()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "metroaggrservices"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Metroaggrservices::~Metroaggrservices()
{
}

bool Native::License::Boot::Level::Metroaggrservices::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::License::Boot::Level::Metroaggrservices::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Metroaggrservices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Metroaggrservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metroaggrservices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Metroaggrservices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Metroaggrservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Metroaggrservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Metroaggrservices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Metroaggrservices::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Metroaggrservices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Uck9::Uck9()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "uck9"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::Uck9::~Uck9()
{
}

bool Native::License::Boot::Level::Uck9::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::License::Boot::Level::Uck9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::License::Boot::Level::Uck9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Uck9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uck9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Uck9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Uck9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Uck9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::Uck9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Uck9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Uck9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::License::Boot::Level::NetworkAdvantage::NetworkAdvantage()
    :
    addon{YType::enumeration, "addon"}
{

    yang_name = "network-advantage"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::NetworkAdvantage::~NetworkAdvantage()
{
}

bool Native::License::Boot::Level::NetworkAdvantage::has_data() const
{
    if (is_presence_container) return true;
    return addon.is_set;
}

bool Native::License::Boot::Level::NetworkAdvantage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addon.yfilter);
}

std::string Native::License::Boot::Level::NetworkAdvantage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::NetworkAdvantage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-advantage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::NetworkAdvantage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addon.is_set || is_set(addon.yfilter)) leaf_name_data.push_back(addon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::NetworkAdvantage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::NetworkAdvantage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::NetworkAdvantage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addon")
    {
        addon = value;
        addon.value_namespace = name_space;
        addon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::NetworkAdvantage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addon")
    {
        addon.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::NetworkAdvantage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addon")
        return true;
    return false;
}

Native::License::Boot::Level::NetworkEssentials::NetworkEssentials()
    :
    addon{YType::enumeration, "addon"}
{

    yang_name = "network-essentials"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::License::Boot::Level::NetworkEssentials::~NetworkEssentials()
{
}

bool Native::License::Boot::Level::NetworkEssentials::has_data() const
{
    if (is_presence_container) return true;
    return addon.is_set;
}

bool Native::License::Boot::Level::NetworkEssentials::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addon.yfilter);
}

std::string Native::License::Boot::Level::NetworkEssentials::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::NetworkEssentials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-essentials";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::NetworkEssentials::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addon.is_set || is_set(addon.yfilter)) leaf_name_data.push_back(addon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::NetworkEssentials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::NetworkEssentials::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::Level::NetworkEssentials::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addon")
    {
        addon = value;
        addon.value_namespace = name_space;
        addon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::NetworkEssentials::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addon")
    {
        addon.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::NetworkEssentials::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addon")
        return true;
    return false;
}

Native::License::Boot::BootModule::BootModule()
    :
    module{YType::enumeration, "module"}
        ,
    technology_package(std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>())
{
    technology_package->parent = this;

    yang_name = "boot-module"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Boot::BootModule::~BootModule()
{
}

bool Native::License::Boot::BootModule::has_data() const
{
    if (is_presence_container) return true;
    return module.is_set
	|| (technology_package !=  nullptr && technology_package->has_data());
}

bool Native::License::Boot::BootModule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| (technology_package !=  nullptr && technology_package->has_operation());
}

std::string Native::License::Boot::BootModule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::BootModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::BootModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "technology-package")
    {
        if(technology_package == nullptr)
        {
            technology_package = std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>();
        }
        return technology_package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(technology_package != nullptr)
    {
        children["technology-package"] = technology_package;
    }

    return children;
}

void Native::License::Boot::BootModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::BootModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::License::Boot::BootModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "technology-package" || name == "module")
        return true;
    return false;
}

Native::License::Boot::BootModule::TechnologyPackage::TechnologyPackage()
    :
    securityk9{YType::empty, "securityk9"},
    uck9{YType::empty, "uck9"},
    datak9{YType::empty, "datak9"}
{

    yang_name = "technology-package"; yang_parent_name = "boot-module"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Boot::BootModule::TechnologyPackage::~TechnologyPackage()
{
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_data() const
{
    if (is_presence_container) return true;
    return securityk9.is_set
	|| uck9.is_set
	|| datak9.is_set;
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| ydk::is_set(uck9.yfilter)
	|| ydk::is_set(datak9.yfilter);
}

std::string Native::License::Boot::BootModule::TechnologyPackage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/boot-module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::BootModule::TechnologyPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "technology-package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::BootModule::TechnologyPackage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());
    if (uck9.is_set || is_set(uck9.yfilter)) leaf_name_data.push_back(uck9.get_name_leafdata());
    if (datak9.is_set || is_set(datak9.yfilter)) leaf_name_data.push_back(datak9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::TechnologyPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::TechnologyPackage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Boot::BootModule::TechnologyPackage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uck9")
    {
        uck9 = value;
        uck9.value_namespace = name_space;
        uck9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "datak9")
    {
        datak9 = value;
        datak9.value_namespace = name_space;
        datak9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::BootModule::TechnologyPackage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
    if(value_path == "uck9")
    {
        uck9.yfilter = yfilter;
    }
    if(value_path == "datak9")
    {
        datak9.yfilter = yfilter;
    }
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "securityk9" || name == "uck9" || name == "datak9")
        return true;
    return false;
}

Native::License::Smart::Smart()
    :
    customer_id{YType::str, "customer-id"},
    enable{YType::empty, "enable"},
    transport_type{YType::enumeration, "transport-type"}
        ,
    privacy(std::make_shared<Native::License::Smart::Privacy>())
    , utility(std::make_shared<Native::License::Smart::Utility>())
    , url(std::make_shared<Native::License::Smart::Url>())
{
    privacy->parent = this;
    utility->parent = this;
    url->parent = this;

    yang_name = "smart"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Smart::~Smart()
{
}

bool Native::License::Smart::has_data() const
{
    if (is_presence_container) return true;
    return customer_id.is_set
	|| enable.is_set
	|| transport_type.is_set
	|| (privacy !=  nullptr && privacy->has_data())
	|| (utility !=  nullptr && utility->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::License::Smart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(customer_id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(transport_type.yfilter)
	|| (privacy !=  nullptr && privacy->has_operation())
	|| (utility !=  nullptr && utility->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::License::Smart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Smart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Smart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (customer_id.is_set || is_set(customer_id.yfilter)) leaf_name_data.push_back(customer_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transport_type.is_set || is_set(transport_type.yfilter)) leaf_name_data.push_back(transport_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Smart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "privacy")
    {
        if(privacy == nullptr)
        {
            privacy = std::make_shared<Native::License::Smart::Privacy>();
        }
        return privacy;
    }

    if(child_yang_name == "utility")
    {
        if(utility == nullptr)
        {
            utility = std::make_shared<Native::License::Smart::Utility>();
        }
        return utility;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::License::Smart::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Smart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(privacy != nullptr)
    {
        children["privacy"] = privacy;
    }

    if(utility != nullptr)
    {
        children["utility"] = utility;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::License::Smart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "customer-id")
    {
        customer_id = value;
        customer_id.value_namespace = name_space;
        customer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-type")
    {
        transport_type = value;
        transport_type.value_namespace = name_space;
        transport_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Smart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "customer-id")
    {
        customer_id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "transport-type")
    {
        transport_type.yfilter = yfilter;
    }
}

bool Native::License::Smart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "privacy" || name == "utility" || name == "url" || name == "customer-id" || name == "enable" || name == "transport-type")
        return true;
    return false;
}

Native::License::Smart::Privacy::Privacy()
    :
    hostname{YType::empty, "hostname"},
    version{YType::empty, "version"}
{

    yang_name = "privacy"; yang_parent_name = "smart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Smart::Privacy::~Privacy()
{
}

bool Native::License::Smart::Privacy::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| version.is_set;
}

bool Native::License::Smart::Privacy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::License::Smart::Privacy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/smart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Smart::Privacy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privacy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Smart::Privacy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Smart::Privacy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Smart::Privacy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Smart::Privacy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Smart::Privacy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::License::Smart::Privacy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "version")
        return true;
    return false;
}

Native::License::Smart::Utility::Utility()
    :
    enable{YType::empty, "enable"}
        ,
    customer_info(std::make_shared<Native::License::Smart::Utility::CustomerInfo>())
{
    customer_info->parent = this;

    yang_name = "utility"; yang_parent_name = "smart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Smart::Utility::~Utility()
{
}

bool Native::License::Smart::Utility::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (customer_info !=  nullptr && customer_info->has_data());
}

bool Native::License::Smart::Utility::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (customer_info !=  nullptr && customer_info->has_operation());
}

std::string Native::License::Smart::Utility::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/smart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Smart::Utility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Smart::Utility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Smart::Utility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customer-info")
    {
        if(customer_info == nullptr)
        {
            customer_info = std::make_shared<Native::License::Smart::Utility::CustomerInfo>();
        }
        return customer_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Smart::Utility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(customer_info != nullptr)
    {
        children["customer-info"] = customer_info;
    }

    return children;
}

void Native::License::Smart::Utility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Smart::Utility::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::License::Smart::Utility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customer-info" || name == "enable")
        return true;
    return false;
}

Native::License::Smart::Utility::CustomerInfo::CustomerInfo()
    :
    city{YType::str, "city"},
    country{YType::str, "country"},
    id{YType::str, "id"},
    name{YType::str, "name"},
    postalcode{YType::str, "postalcode"},
    state{YType::str, "state"},
    street{YType::str, "street"}
{

    yang_name = "customer-info"; yang_parent_name = "utility"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Smart::Utility::CustomerInfo::~CustomerInfo()
{
}

bool Native::License::Smart::Utility::CustomerInfo::has_data() const
{
    if (is_presence_container) return true;
    return city.is_set
	|| country.is_set
	|| id.is_set
	|| name.is_set
	|| postalcode.is_set
	|| state.is_set
	|| street.is_set;
}

bool Native::License::Smart::Utility::CustomerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(city.yfilter)
	|| ydk::is_set(country.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(postalcode.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(street.yfilter);
}

std::string Native::License::Smart::Utility::CustomerInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/smart/utility/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Smart::Utility::CustomerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Smart::Utility::CustomerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (city.is_set || is_set(city.yfilter)) leaf_name_data.push_back(city.get_name_leafdata());
    if (country.is_set || is_set(country.yfilter)) leaf_name_data.push_back(country.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (postalcode.is_set || is_set(postalcode.yfilter)) leaf_name_data.push_back(postalcode.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (street.is_set || is_set(street.yfilter)) leaf_name_data.push_back(street.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Smart::Utility::CustomerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Smart::Utility::CustomerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Smart::Utility::CustomerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "city")
    {
        city = value;
        city.value_namespace = name_space;
        city.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "country")
    {
        country = value;
        country.value_namespace = name_space;
        country.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postalcode")
    {
        postalcode = value;
        postalcode.value_namespace = name_space;
        postalcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "street")
    {
        street = value;
        street.value_namespace = name_space;
        street.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Smart::Utility::CustomerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "city")
    {
        city.yfilter = yfilter;
    }
    if(value_path == "country")
    {
        country.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "postalcode")
    {
        postalcode.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "street")
    {
        street.yfilter = yfilter;
    }
}

bool Native::License::Smart::Utility::CustomerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "city" || name == "country" || name == "id" || name == "name" || name == "postalcode" || name == "state" || name == "street")
        return true;
    return false;
}

Native::License::Smart::Url::Url()
    :
    default_{YType::empty, "default"},
    name{YType::str, "name"},
    utility{YType::str, "utility"}
{

    yang_name = "url"; yang_parent_name = "smart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Smart::Url::~Url()
{
}

bool Native::License::Smart::Url::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| name.is_set
	|| utility.is_set;
}

bool Native::License::Smart::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(utility.yfilter);
}

std::string Native::License::Smart::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/smart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Smart::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Smart::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (utility.is_set || is_set(utility.yfilter)) leaf_name_data.push_back(utility.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Smart::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Smart::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::License::Smart::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utility")
    {
        utility = value;
        utility.value_namespace = name_space;
        utility.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Smart::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "utility")
    {
        utility.yfilter = yfilter;
    }
}

bool Native::License::Smart::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "name" || name == "utility")
        return true;
    return false;
}

Native::MemorySize::MemorySize()
    :
    iomem{YType::uint8, "iomem"}
{

    yang_name = "memory-size"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MemorySize::~MemorySize()
{
}

bool Native::MemorySize::has_data() const
{
    if (is_presence_container) return true;
    return iomem.is_set;
}

bool Native::MemorySize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iomem.yfilter);
}

std::string Native::MemorySize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MemorySize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MemorySize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iomem.is_set || is_set(iomem.yfilter)) leaf_name_data.push_back(iomem.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MemorySize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MemorySize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::MemorySize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iomem")
    {
        iomem = value;
        iomem.value_namespace = name_space;
        iomem.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MemorySize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iomem")
    {
        iomem.yfilter = yfilter;
    }
}

bool Native::MemorySize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iomem")
        return true;
    return false;
}

Native::Transceiver::Transceiver()
    :
    type(std::make_shared<Native::Transceiver::Type>())
{
    type->parent = this;

    yang_name = "transceiver"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Transceiver::~Transceiver()
{
}

bool Native::Transceiver::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::Transceiver::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Transceiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Transceiver::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Transceiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Transceiver::Type::Type()
    :
    all(std::make_shared<Native::Transceiver::Type::All>())
{
    all->parent = this;

    yang_name = "type"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Transceiver::Type::~Type()
{
}

bool Native::Transceiver::Type::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Transceiver::Type::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Transceiver::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Transceiver::Type::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Transceiver::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Transceiver::Type::All::All()
    :
    monitoring(nullptr) // presence node
{

    yang_name = "all"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Transceiver::Type::All::~All()
{
}

bool Native::Transceiver::Type::All::has_data() const
{
    if (is_presence_container) return true;
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Transceiver::Type::All::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Transceiver::Type::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Transceiver::Type::All::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(monitoring != nullptr)
    {
        children["monitoring"] = monitoring;
    }

    return children;
}

void Native::Transceiver::Type::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::Type::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::Type::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Transceiver::Type::All::Monitoring::Monitoring()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "monitoring"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Transceiver::Type::All::Monitoring::~Monitoring()
{
}

bool Native::Transceiver::Type::All::Monitoring::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Transceiver::Type::All::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Transceiver::Type::All::Monitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::All::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::All::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Transceiver::Type::All::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Transceiver::Type::All::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Transceiver::Type::All::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceInsertion()
    :
    acg_reload_delay{YType::uint16, "Cisco-IOS-XE-service-insertion:acg-reload-delay"}
        ,
    appnav_controller_group(this, {"group_name"})
    , service_context(std::make_shared<Native::ServiceInsertion::ServiceContext>())
    , service_node_group(this, {"name"})
    , swap(std::make_shared<Native::ServiceInsertion::Swap>())
{
    service_context->parent = this;
    swap->parent = this;

    yang_name = "service-insertion"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceInsertion::~ServiceInsertion()
{
}

bool Native::ServiceInsertion::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appnav_controller_group.len(); index++)
    {
        if(appnav_controller_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.len(); index++)
    {
        if(service_node_group[index]->has_data())
            return true;
    }
    return acg_reload_delay.is_set
	|| (service_context !=  nullptr && service_context->has_data())
	|| (swap !=  nullptr && swap->has_data());
}

bool Native::ServiceInsertion::has_operation() const
{
    for (std::size_t index=0; index<appnav_controller_group.len(); index++)
    {
        if(appnav_controller_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.len(); index++)
    {
        if(service_node_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(acg_reload_delay.yfilter)
	|| (service_context !=  nullptr && service_context->has_operation())
	|| (swap !=  nullptr && swap->has_operation());
}

std::string Native::ServiceInsertion::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-insertion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acg_reload_delay.is_set || is_set(acg_reload_delay.yfilter)) leaf_name_data.push_back(acg_reload_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-service-insertion:appnav-controller-group")
    {
        auto c = std::make_shared<Native::ServiceInsertion::AppnavControllerGroup>();
        c->parent = this;
        appnav_controller_group.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-insertion:service-context")
    {
        if(service_context == nullptr)
        {
            service_context = std::make_shared<Native::ServiceInsertion::ServiceContext>();
        }
        return service_context;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-insertion:service-node-group")
    {
        auto c = std::make_shared<Native::ServiceInsertion::ServiceNodeGroup>();
        c->parent = this;
        service_node_group.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-insertion:swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<Native::ServiceInsertion::Swap>();
        }
        return swap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : appnav_controller_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(service_context != nullptr)
    {
        children["Cisco-IOS-XE-service-insertion:service-context"] = service_context;
    }

    count = 0;
    for (auto c : service_node_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(swap != nullptr)
    {
        children["Cisco-IOS-XE-service-insertion:swap"] = swap;
    }

    return children;
}

void Native::ServiceInsertion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-service-insertion:acg-reload-delay")
    {
        acg_reload_delay = value;
        acg_reload_delay.value_namespace = name_space;
        acg_reload_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acg-reload-delay")
    {
        acg_reload_delay.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appnav-controller-group" || name == "service-context" || name == "service-node-group" || name == "swap" || name == "acg-reload-delay")
        return true;
    return false;
}

Native::ServiceInsertion::AppnavControllerGroup::AppnavControllerGroup()
    :
    group_name{YType::str, "group-name"},
    appnav_controller{YType::str, "appnav-controller"},
    description{YType::str, "description"}
{

    yang_name = "appnav-controller-group"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceInsertion::AppnavControllerGroup::~AppnavControllerGroup()
{
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : appnav_controller.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group_name.is_set
	|| description.is_set;
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_operation() const
{
    for (auto const & leaf : appnav_controller.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(appnav_controller.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::ServiceInsertion::AppnavControllerGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::AppnavControllerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:appnav-controller-group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::AppnavControllerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    auto appnav_controller_name_datas = appnav_controller.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), appnav_controller_name_datas.begin(), appnav_controller_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::AppnavControllerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::AppnavControllerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceInsertion::AppnavControllerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appnav-controller")
    {
        appnav_controller.append(value);
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::AppnavControllerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "appnav-controller")
    {
        appnav_controller.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "appnav-controller" || name == "description")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::ServiceContext()
    :
    waas(this, {"name"})
{

    yang_name = "service-context"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceInsertion::ServiceContext::~ServiceContext()
{
}

bool Native::ServiceInsertion::ServiceContext::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<waas.len(); index++)
    {
        if(waas[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceInsertion::ServiceContext::has_operation() const
{
    for (std::size_t index=0; index<waas.len(); index++)
    {
        if(waas[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::ServiceContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:service-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        auto c = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas>();
        c->parent = this;
        waas.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : waas.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::ServiceInsertion::ServiceContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceInsertion::ServiceContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceInsertion::ServiceContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "waas")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Waas()
    :
    name{YType::str, "name"},
    appnav_controller_group{YType::str, "appnav-controller-group"},
    service_node_group{YType::str, "service-node-group"},
    service_policy{YType::str, "service-policy"},
    enable{YType::empty, "enable"}
        ,
    authentication(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>())
    , vrf(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>())
{
    authentication->parent = this;
    vrf->parent = this;

    yang_name = "waas"; yang_parent_name = "service-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceInsertion::ServiceContext::Waas::~Waas()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| appnav_controller_group.is_set
	|| service_node_group.is_set
	|| service_policy.is_set
	|| enable.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(appnav_controller_group.yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::ServiceInsertion::ServiceContext::Waas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/Cisco-IOS-XE-service-insertion:service-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::ServiceContext::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::Waas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (appnav_controller_group.is_set || is_set(appnav_controller_group.yfilter)) leaf_name_data.push_back(appnav_controller_group.get_name_leafdata());
    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appnav-controller-group")
    {
        appnav_controller_group = value;
        appnav_controller_group.value_namespace = name_space;
        appnav_controller_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-node-group")
    {
        service_node_group = value;
        service_node_group.value_namespace = name_space;
        service_node_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "appnav-controller-group")
    {
        appnav_controller_group.yfilter = yfilter;
    }
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "vrf" || name == "name" || name == "appnav-controller-group" || name == "service-node-group" || name == "service-policy" || name == "enable")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::Authentication()
    :
    sha1{YType::empty, "sha1"},
    key{YType::empty, "key"},
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "authentication"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::~Authentication()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return sha1.is_set
	|| key.is_set
	|| encrypt.is_set
	|| string.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha1" || name == "key" || name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Vrf::Vrf()
    :
    default_{YType::empty, "default"},
    global{YType::empty, "global"},
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceInsertion::ServiceContext::Waas::Vrf::~Vrf()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| global.is_set
	|| name.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "global" || name == "name")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceNodeGroup::ServiceNodeGroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    node_discovery{YType::enumeration, "node-discovery"},
    service_node{YType::str, "service-node"}
{

    yang_name = "service-node-group"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceInsertion::ServiceNodeGroup::~ServiceNodeGroup()
{
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : service_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| description.is_set
	|| node_discovery.is_set;
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_operation() const
{
    for (auto const & leaf : service_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(node_discovery.yfilter)
	|| ydk::is_set(service_node.yfilter);
}

std::string Native::ServiceInsertion::ServiceNodeGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::ServiceNodeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:service-node-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceNodeGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (node_discovery.is_set || is_set(node_discovery.yfilter)) leaf_name_data.push_back(node_discovery.get_name_leafdata());

    auto service_node_name_datas = service_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_node_name_datas.begin(), service_node_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceNodeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceNodeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceInsertion::ServiceNodeGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "node-discovery")
    {
        node_discovery = value;
        node_discovery.value_namespace = name_space;
        node_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-node")
    {
        service_node.append(value);
    }
}

void Native::ServiceInsertion::ServiceNodeGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "node-discovery")
    {
        node_discovery.yfilter = yfilter;
    }
    if(value_path == "service-node")
    {
        service_node.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "node-discovery" || name == "service-node")
        return true;
    return false;
}

Native::ServiceInsertion::Swap::Swap()
    :
    src_ip{YType::empty, "src-ip"}
{

    yang_name = "swap"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceInsertion::Swap::~Swap()
{
}

bool Native::ServiceInsertion::Swap::has_data() const
{
    if (is_presence_container) return true;
    return src_ip.is_set;
}

bool Native::ServiceInsertion::Swap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_ip.yfilter);
}

std::string Native::ServiceInsertion::Swap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceInsertion::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ip")
        return true;
    return false;
}

Native::Udld::Udld()
    :
    aggressive{YType::empty, "Cisco-IOS-XE-udld:aggressive"},
    enable{YType::empty, "Cisco-IOS-XE-udld:enable"}
        ,
    message(std::make_shared<Native::Udld::Message>())
    , recovery(nullptr) // presence node
{
    message->parent = this;

    yang_name = "udld"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Udld::~Udld()
{
}

bool Native::Udld::has_data() const
{
    if (is_presence_container) return true;
    return aggressive.is_set
	|| enable.is_set
	|| (message !=  nullptr && message->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Udld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (message !=  nullptr && message->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Udld::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-udld:message")
    {
        if(message == nullptr)
        {
            message = std::make_shared<Native::Udld::Message>();
        }
        return message;
    }

    if(child_yang_name == "Cisco-IOS-XE-udld:recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Udld::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(message != nullptr)
    {
        children["Cisco-IOS-XE-udld:message"] = message;
    }

    if(recovery != nullptr)
    {
        children["Cisco-IOS-XE-udld:recovery"] = recovery;
    }

    return children;
}

void Native::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-udld:aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-udld:enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message" || name == "recovery" || name == "aggressive" || name == "enable")
        return true;
    return false;
}

Native::Udld::Message::Message()
    :
    time{YType::uint8, "time"}
{

    yang_name = "message"; yang_parent_name = "udld"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Udld::Message::~Message()
{
}

bool Native::Udld::Message::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set;
}

bool Native::Udld::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Udld::Message::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/udld/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Udld::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Udld::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Udld::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Udld::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Udld::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Udld::Recovery::Recovery()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "recovery"; yang_parent_name = "udld"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Udld::Recovery::~Recovery()
{
}

bool Native::Udld::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Udld::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Udld::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/udld/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Udld::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Udld::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Udld::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Udld::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Udld::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Qos::Qos()
    :
    diffservmib{YType::empty, "Cisco-IOS-XE-qos:diffservmib"}
        ,
    account(std::make_shared<Native::Qos::Account>())
    , control_packets(nullptr) // presence node
    , preserve(std::make_shared<Native::Qos::Preserve>())
    , trace(std::make_shared<Native::Qos::Trace>())
    , queue_softmax_multiplier(std::make_shared<Native::Qos::QueueSoftmaxMultiplier>())
{
    account->parent = this;
    preserve->parent = this;
    trace->parent = this;
    queue_softmax_multiplier->parent = this;

    yang_name = "qos"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Qos::~Qos()
{
}

bool Native::Qos::has_data() const
{
    if (is_presence_container) return true;
    return diffservmib.is_set
	|| (account !=  nullptr && account->has_data())
	|| (control_packets !=  nullptr && control_packets->has_data())
	|| (preserve !=  nullptr && preserve->has_data())
	|| (trace !=  nullptr && trace->has_data())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_data());
}

bool Native::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmib.yfilter)
	|| (account !=  nullptr && account->has_operation())
	|| (control_packets !=  nullptr && control_packets->has_operation())
	|| (preserve !=  nullptr && preserve->has_operation())
	|| (trace !=  nullptr && trace->has_operation())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_operation());
}

std::string Native::Qos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmib.is_set || is_set(diffservmib.yfilter)) leaf_name_data.push_back(diffservmib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-qos:account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Qos::Account>();
        }
        return account;
    }

    if(child_yang_name == "Cisco-IOS-XE-qos:control-packets")
    {
        if(control_packets == nullptr)
        {
            control_packets = std::make_shared<Native::Qos::ControlPackets>();
        }
        return control_packets;
    }

    if(child_yang_name == "Cisco-IOS-XE-qos:preserve")
    {
        if(preserve == nullptr)
        {
            preserve = std::make_shared<Native::Qos::Preserve>();
        }
        return preserve;
    }

    if(child_yang_name == "Cisco-IOS-XE-qos:trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Qos::Trace>();
        }
        return trace;
    }

    if(child_yang_name == "Cisco-IOS-XE-qos:queue-softmax-multiplier")
    {
        if(queue_softmax_multiplier == nullptr)
        {
            queue_softmax_multiplier = std::make_shared<Native::Qos::QueueSoftmaxMultiplier>();
        }
        return queue_softmax_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(account != nullptr)
    {
        children["Cisco-IOS-XE-qos:account"] = account;
    }

    if(control_packets != nullptr)
    {
        children["Cisco-IOS-XE-qos:control-packets"] = control_packets;
    }

    if(preserve != nullptr)
    {
        children["Cisco-IOS-XE-qos:preserve"] = preserve;
    }

    if(trace != nullptr)
    {
        children["Cisco-IOS-XE-qos:trace"] = trace;
    }

    if(queue_softmax_multiplier != nullptr)
    {
        children["Cisco-IOS-XE-qos:queue-softmax-multiplier"] = queue_softmax_multiplier;
    }

    return children;
}

void Native::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-qos:diffservmib")
    {
        diffservmib = value;
        diffservmib.value_namespace = name_space;
        diffservmib.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffservmib")
    {
        diffservmib.yfilter = yfilter;
    }
}

bool Native::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account" || name == "control-packets" || name == "preserve" || name == "trace" || name == "queue-softmax-multiplier" || name == "diffservmib")
        return true;
    return false;
}

Native::Qos::Account::Account()
    :
    layer_all(std::make_shared<Native::Qos::Account::LayerAll>())
    , layer2(std::make_shared<Native::Qos::Account::Layer2>())
{
    layer_all->parent = this;
    layer2->parent = this;

    yang_name = "account"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Account::~Account()
{
}

bool Native::Qos::Account::has_data() const
{
    if (is_presence_container) return true;
    return (layer_all !=  nullptr && layer_all->has_data())
	|| (layer2 !=  nullptr && layer2->has_data());
}

bool Native::Qos::Account::has_operation() const
{
    return is_set(yfilter)
	|| (layer_all !=  nullptr && layer_all->has_operation())
	|| (layer2 !=  nullptr && layer2->has_operation());
}

std::string Native::Qos::Account::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "layer-all")
    {
        if(layer_all == nullptr)
        {
            layer_all = std::make_shared<Native::Qos::Account::LayerAll>();
        }
        return layer_all;
    }

    if(child_yang_name == "layer2")
    {
        if(layer2 == nullptr)
        {
            layer2 = std::make_shared<Native::Qos::Account::Layer2>();
        }
        return layer2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(layer_all != nullptr)
    {
        children["layer-all"] = layer_all;
    }

    if(layer2 != nullptr)
    {
        children["layer2"] = layer2;
    }

    return children;
}

void Native::Qos::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer-all" || name == "layer2")
        return true;
    return false;
}

Native::Qos::Account::LayerAll::LayerAll()
    :
    encapsulation{YType::empty, "encapsulation"}
{

    yang_name = "layer-all"; yang_parent_name = "account"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Account::LayerAll::~LayerAll()
{
}

bool Native::Qos::Account::LayerAll::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set;
}

bool Native::Qos::Account::LayerAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter);
}

std::string Native::Qos::Account::LayerAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::LayerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::LayerAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::LayerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::LayerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Qos::Account::LayerAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::LayerAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::Qos::Account::LayerAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Layer2()
    :
    encapsulation(std::make_shared<Native::Qos::Account::Layer2::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "layer2"; yang_parent_name = "account"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Account::Layer2::~Layer2()
{
}

bool Native::Qos::Account::Layer2::has_data() const
{
    if (is_presence_container) return true;
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::Qos::Account::Layer2::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::Qos::Account::Layer2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Qos::Account::Layer2::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::Qos::Account::Layer2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Account::Layer2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Account::Layer2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Encapsulation::Encapsulation()
    :
    arpa{YType::empty, "arpa"},
    dot1q{YType::empty, "dot1q"},
    isl{YType::empty, "isl"}
        ,
    length(nullptr) // presence node
{

    yang_name = "encapsulation"; yang_parent_name = "layer2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Account::Layer2::Encapsulation::~Encapsulation()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return arpa.is_set
	|| dot1q.is_set
	|| isl.is_set
	|| (length !=  nullptr && length->has_data());
}

bool Native::Qos::Account::Layer2::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arpa.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(isl.yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Qos::Account::Layer2::Encapsulation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpa.is_set || is_set(arpa.yfilter)) leaf_name_data.push_back(arpa.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (isl.is_set || is_set(isl.yfilter)) leaf_name_data.push_back(isl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Qos::Account::Layer2::Encapsulation::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arpa")
    {
        arpa = value;
        arpa.value_namespace = name_space;
        arpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isl")
    {
        isl = value;
        isl.value_namespace = name_space;
        isl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::Layer2::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arpa")
    {
        arpa.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "isl")
    {
        isl.yfilter = yfilter;
    }
}

bool Native::Qos::Account::Layer2::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length" || name == "arpa" || name == "dot1q" || name == "isl")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Encapsulation::Length::Length()
    :
    byte_length{YType::int8, "byte-length"}
{

    yang_name = "length"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Qos::Account::Layer2::Encapsulation::Length::~Length()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_data() const
{
    if (is_presence_container) return true;
    return byte_length.is_set;
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_length.yfilter);
}

std::string Native::Qos::Account::Layer2::Encapsulation::Length::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/encapsulation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::Encapsulation::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::Encapsulation::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_length.is_set || is_set(byte_length.yfilter)) leaf_name_data.push_back(byte_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-length")
    {
        byte_length = value;
        byte_length.value_namespace = name_space;
        byte_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-length")
    {
        byte_length.yfilter = yfilter;
    }
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-length")
        return true;
    return false;
}

Native::Qos::ControlPackets::ControlPackets()
    :
    bpdu_range{YType::empty, "bpdu-range"},
    cdp_vtp{YType::empty, "cdp-vtp"},
    eapol{YType::empty, "eapol"},
    lldp{YType::empty, "lldp"},
    protocol_tunnel{YType::empty, "protocol-tunnel"},
    sstp{YType::empty, "sstp"}
{

    yang_name = "control-packets"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Qos::ControlPackets::~ControlPackets()
{
}

bool Native::Qos::ControlPackets::has_data() const
{
    if (is_presence_container) return true;
    return bpdu_range.is_set
	|| cdp_vtp.is_set
	|| eapol.is_set
	|| lldp.is_set
	|| protocol_tunnel.is_set
	|| sstp.is_set;
}

bool Native::Qos::ControlPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bpdu_range.yfilter)
	|| ydk::is_set(cdp_vtp.yfilter)
	|| ydk::is_set(eapol.yfilter)
	|| ydk::is_set(lldp.yfilter)
	|| ydk::is_set(protocol_tunnel.yfilter)
	|| ydk::is_set(sstp.yfilter);
}

std::string Native::Qos::ControlPackets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::ControlPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:control-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::ControlPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdu_range.is_set || is_set(bpdu_range.yfilter)) leaf_name_data.push_back(bpdu_range.get_name_leafdata());
    if (cdp_vtp.is_set || is_set(cdp_vtp.yfilter)) leaf_name_data.push_back(cdp_vtp.get_name_leafdata());
    if (eapol.is_set || is_set(eapol.yfilter)) leaf_name_data.push_back(eapol.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.yfilter)) leaf_name_data.push_back(lldp.get_name_leafdata());
    if (protocol_tunnel.is_set || is_set(protocol_tunnel.yfilter)) leaf_name_data.push_back(protocol_tunnel.get_name_leafdata());
    if (sstp.is_set || is_set(sstp.yfilter)) leaf_name_data.push_back(sstp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::ControlPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::ControlPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Qos::ControlPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range = value;
        bpdu_range.value_namespace = name_space;
        bpdu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp = value;
        cdp_vtp.value_namespace = name_space;
        cdp_vtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eapol")
    {
        eapol = value;
        eapol.value_namespace = name_space;
        eapol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp")
    {
        lldp = value;
        lldp.value_namespace = name_space;
        lldp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel = value;
        protocol_tunnel.value_namespace = name_space;
        protocol_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sstp")
    {
        sstp = value;
        sstp.value_namespace = name_space;
        sstp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::ControlPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range.yfilter = yfilter;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp.yfilter = yfilter;
    }
    if(value_path == "eapol")
    {
        eapol.yfilter = yfilter;
    }
    if(value_path == "lldp")
    {
        lldp.yfilter = yfilter;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel.yfilter = yfilter;
    }
    if(value_path == "sstp")
    {
        sstp.yfilter = yfilter;
    }
}

bool Native::Qos::ControlPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu-range" || name == "cdp-vtp" || name == "eapol" || name == "lldp" || name == "protocol-tunnel" || name == "sstp")
        return true;
    return false;
}

Native::Qos::Preserve::Preserve()
    :
    marking(std::make_shared<Native::Qos::Preserve::Marking>())
    , mpls(std::make_shared<Native::Qos::Preserve::Mpls>())
{
    marking->parent = this;
    mpls->parent = this;

    yang_name = "preserve"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Preserve::~Preserve()
{
}

bool Native::Qos::Preserve::has_data() const
{
    if (is_presence_container) return true;
    return (marking !=  nullptr && marking->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Qos::Preserve::has_operation() const
{
    return is_set(yfilter)
	|| (marking !=  nullptr && marking->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Qos::Preserve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:preserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<Native::Qos::Preserve::Marking>();
        }
        return marking;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Qos::Preserve::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Qos::Preserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Preserve::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Preserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "marking" || name == "mpls")
        return true;
    return false;
}

Native::Qos::Preserve::Marking::Marking()
    :
    hipriority{YType::empty, "hipriority"}
{

    yang_name = "marking"; yang_parent_name = "preserve"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Preserve::Marking::~Marking()
{
}

bool Native::Qos::Preserve::Marking::has_data() const
{
    if (is_presence_container) return true;
    return hipriority.is_set;
}

bool Native::Qos::Preserve::Marking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hipriority.yfilter);
}

std::string Native::Qos::Preserve::Marking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::Marking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hipriority.is_set || is_set(hipriority.yfilter)) leaf_name_data.push_back(hipriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Qos::Preserve::Marking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hipriority")
    {
        hipriority = value;
        hipriority.value_namespace = name_space;
        hipriority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Preserve::Marking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hipriority")
    {
        hipriority.yfilter = yfilter;
    }
}

bool Native::Qos::Preserve::Marking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hipriority")
        return true;
    return false;
}

Native::Qos::Preserve::Mpls::Mpls()
    :
    exp{YType::empty, "exp"}
{

    yang_name = "mpls"; yang_parent_name = "preserve"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Preserve::Mpls::~Mpls()
{
}

bool Native::Qos::Preserve::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return exp.is_set;
}

bool Native::Qos::Preserve::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter);
}

std::string Native::Qos::Preserve::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Qos::Preserve::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Preserve::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
}

bool Native::Qos::Preserve::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp")
        return true;
    return false;
}

Native::Qos::Trace::Trace()
    :
    resize(std::make_shared<Native::Qos::Trace::Resize>())
{
    resize->parent = this;

    yang_name = "trace"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Trace::~Trace()
{
}

bool Native::Qos::Trace::has_data() const
{
    if (is_presence_container) return true;
    return (resize !=  nullptr && resize->has_data());
}

bool Native::Qos::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (resize !=  nullptr && resize->has_operation());
}

std::string Native::Qos::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resize")
    {
        if(resize == nullptr)
        {
            resize = std::make_shared<Native::Qos::Trace::Resize>();
        }
        return resize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(resize != nullptr)
    {
        children["resize"] = resize;
    }

    return children;
}

void Native::Qos::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resize")
        return true;
    return false;
}

Native::Qos::Trace::Resize::Resize()
    :
    size{YType::int32, "size"},
    all{YType::int32, "all"},
    error{YType::int32, "error"},
    event{YType::int32, "event"},
    warning{YType::int32, "warning"}
{

    yang_name = "resize"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::Trace::Resize::~Resize()
{
}

bool Native::Qos::Trace::Resize::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| all.is_set
	|| error.is_set
	|| event.is_set
	|| warning.is_set;
}

bool Native::Qos::Trace::Resize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(warning.yfilter);
}

std::string Native::Qos::Trace::Resize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Trace::Resize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Trace::Resize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (warning.is_set || is_set(warning.yfilter)) leaf_name_data.push_back(warning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Trace::Resize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::Resize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Qos::Trace::Resize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning")
    {
        warning = value;
        warning.value_namespace = name_space;
        warning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Trace::Resize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "warning")
    {
        warning.yfilter = yfilter;
    }
}

bool Native::Qos::Trace::Resize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "all" || name == "error" || name == "event" || name == "warning")
        return true;
    return false;
}

Native::Qos::QueueSoftmaxMultiplier::QueueSoftmaxMultiplier()
    :
    value_{YType::int16, "value"}
{

    yang_name = "queue-softmax-multiplier"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Qos::QueueSoftmaxMultiplier::~QueueSoftmaxMultiplier()
{
}

bool Native::Qos::QueueSoftmaxMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Qos::QueueSoftmaxMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Qos::QueueSoftmaxMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::QueueSoftmaxMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:queue-softmax-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::QueueSoftmaxMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::QueueSoftmaxMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::QueueSoftmaxMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Qos::QueueSoftmaxMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::QueueSoftmaxMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Qos::QueueSoftmaxMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::TimeRange::TimeRange()
    :
    word{YType::str, "word"}
        ,
    absolute(std::make_shared<Native::TimeRange::Absolute>())
{
    absolute->parent = this;

    yang_name = "time-range"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TimeRange::~TimeRange()
{
}

bool Native::TimeRange::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::TimeRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::TimeRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TimeRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-range";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::TimeRange::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::TimeRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TimeRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::TimeRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "word")
        return true;
    return false;
}

Native::TimeRange::Absolute::Absolute()
    :
    start(std::make_shared<Native::TimeRange::Absolute::Start>())
{
    start->parent = this;

    yang_name = "absolute"; yang_parent_name = "time-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::TimeRange::Absolute::~Absolute()
{
}

bool Native::TimeRange::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return (start !=  nullptr && start->has_data());
}

bool Native::TimeRange::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| (start !=  nullptr && start->has_operation());
}

std::string Native::TimeRange::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Native::TimeRange::Absolute::Start>();
        }
        return start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start != nullptr)
    {
        children["start"] = start;
    }

    return children;
}

void Native::TimeRange::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::TimeRange::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::TimeRange::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Native::TimeRange::Absolute::Start::Start()
    :
    start_time{YType::str, "start-time"},
    day_of_month{YType::uint8, "day-of-month"},
    month{YType::str, "month"},
    year{YType::uint16, "year"}
{

    yang_name = "start"; yang_parent_name = "absolute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::TimeRange::Absolute::Start::~Start()
{
}

bool Native::TimeRange::Absolute::Start::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| day_of_month.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::TimeRange::Absolute::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::TimeRange::Absolute::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::Absolute::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::TimeRange::Absolute::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TimeRange::Absolute::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::TimeRange::Absolute::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "day-of-month" || name == "month" || name == "year")
        return true;
    return false;
}

Native::DeviceTracking::DeviceTracking()
    :
    policy(this, {"word"})
    , tracking(nullptr) // presence node
{

    yang_name = "device-tracking"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DeviceTracking::~DeviceTracking()
{
}

bool Native::DeviceTracking::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return (tracking !=  nullptr && tracking->has_data());
}

bool Native::DeviceTracking::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::DeviceTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-device-tracking:policy")
    {
        auto c = std::make_shared<Native::DeviceTracking::Policy>();
        c->parent = this;
        policy.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-device-tracking:tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policy.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(tracking != nullptr)
    {
        children["Cisco-IOS-XE-device-tracking:tracking"] = tracking;
    }

    return children;
}

void Native::DeviceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tracking")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Policy()
    :
    word{YType::str, "word"}
        ,
    device_role(std::make_shared<Native::DeviceTracking::Policy::DeviceRole>())
    , protocol(std::make_shared<Native::DeviceTracking::Policy::Protocol>())
    , tracking(std::make_shared<Native::DeviceTracking::Policy::Tracking>())
    , limit(std::make_shared<Native::DeviceTracking::Policy::Limit>())
    , security_level(std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>())
{
    device_role->parent = this;
    protocol->parent = this;
    tracking->parent = this;
    limit->parent = this;
    security_level->parent = this;

    yang_name = "policy"; yang_parent_name = "device-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DeviceTracking::Policy::~Policy()
{
}

bool Native::DeviceTracking::Policy::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (tracking !=  nullptr && tracking->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (security_level !=  nullptr && security_level->has_data());
}

bool Native::DeviceTracking::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (tracking !=  nullptr && tracking->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (security_level !=  nullptr && security_level->has_operation());
}

std::string Native::DeviceTracking::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:policy";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::DeviceTracking::Policy::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::DeviceTracking::Policy::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Policy::Tracking>();
        }
        return tracking;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::DeviceTracking::Policy::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "security-level")
    {
        if(security_level == nullptr)
        {
            security_level = std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>();
        }
        return security_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(security_level != nullptr)
    {
        children["security-level"] = security_level;
    }

    return children;
}

void Native::DeviceTracking::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-role" || name == "protocol" || name == "tracking" || name == "limit" || name == "security-level" || name == "word")
        return true;
    return false;
}

Native::DeviceTracking::Policy::DeviceRole::DeviceRole()
    :
    node{YType::boolean, "node"},
    switch_{YType::empty, "switch"}
{

    yang_name = "device-role"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::DeviceTracking::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::DeviceTracking::Policy::DeviceRole::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| switch_.is_set;
}

bool Native::DeviceTracking::Policy::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::DeviceTracking::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::DeviceRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DeviceTracking::Policy::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "switch")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Protocol::Protocol()
    :
    udp{YType::boolean, "udp"},
    arp{YType::boolean, "arp"},
    dhcp4{YType::boolean, "dhcp4"},
    dhcp6{YType::boolean, "dhcp6"},
    ndp{YType::boolean, "ndp"}
{

    yang_name = "protocol"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::DeviceTracking::Policy::Protocol::~Protocol()
{
}

bool Native::DeviceTracking::Policy::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return udp.is_set
	|| arp.is_set
	|| dhcp4.is_set
	|| dhcp6.is_set
	|| ndp.is_set;
}

bool Native::DeviceTracking::Policy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp.yfilter)
	|| ydk::is_set(arp.yfilter)
	|| ydk::is_set(dhcp4.yfilter)
	|| ydk::is_set(dhcp6.yfilter)
	|| ydk::is_set(ndp.yfilter);
}

std::string Native::DeviceTracking::Policy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());
    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());
    if (dhcp4.is_set || is_set(dhcp4.yfilter)) leaf_name_data.push_back(dhcp4.get_name_leafdata());
    if (dhcp6.is_set || is_set(dhcp6.yfilter)) leaf_name_data.push_back(dhcp6.get_name_leafdata());
    if (ndp.is_set || is_set(ndp.yfilter)) leaf_name_data.push_back(ndp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DeviceTracking::Policy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp4")
    {
        dhcp4 = value;
        dhcp4.value_namespace = name_space;
        dhcp4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp6")
    {
        dhcp6 = value;
        dhcp6.value_namespace = name_space;
        dhcp6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndp")
    {
        ndp = value;
        ndp.value_namespace = name_space;
        ndp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
    if(value_path == "dhcp4")
    {
        dhcp4.yfilter = yfilter;
    }
    if(value_path == "dhcp6")
    {
        dhcp6.yfilter = yfilter;
    }
    if(value_path == "ndp")
    {
        ndp.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "arp" || name == "dhcp4" || name == "dhcp6" || name == "ndp")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Tracking::Tracking()
    :
    disable{YType::empty, "disable"}
        ,
    enable(nullptr) // presence node
{

    yang_name = "tracking"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::DeviceTracking::Policy::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Policy::Tracking::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::DeviceTracking::Policy::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::DeviceTracking::Policy::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::DeviceTracking::Policy::Tracking::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    return children;
}

void Native::DeviceTracking::Policy::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "disable")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Tracking::Enable::Enable()
    :
    reachable_lifetime(std::make_shared<Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime>())
{
    reachable_lifetime->parent = this;

    yang_name = "enable"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::DeviceTracking::Policy::Tracking::Enable::~Enable()
{
}

bool Native::DeviceTracking::Policy::Tracking::Enable::has_data() const
{
    if (is_presence_container) return true;
    return (reachable_lifetime !=  nullptr && reachable_lifetime->has_data());
}

bool Native::DeviceTracking::Policy::Tracking::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (reachable_lifetime !=  nullptr && reachable_lifetime->has_operation());
}

std::string Native::DeviceTracking::Policy::Tracking::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Tracking::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Tracking::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable-lifetime")
    {
        if(reachable_lifetime == nullptr)
        {
            reachable_lifetime = std::make_shared<Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime>();
        }
        return reachable_lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Tracking::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reachable_lifetime != nullptr)
    {
        children["reachable-lifetime"] = reachable_lifetime;
    }

    return children;
}

void Native::DeviceTracking::Policy::Tracking::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::Policy::Tracking::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::Policy::Tracking::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-lifetime")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::ReachableLifetime()
    :
    seconds{YType::uint32, "seconds"}
{

    yang_name = "reachable-lifetime"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::~ReachableLifetime()
{
}

bool Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set;
}

bool Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Tracking::Enable::ReachableLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Limit::Limit()
    :
    address_count{YType::uint16, "address-count"}
{

    yang_name = "limit"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::DeviceTracking::Policy::Limit::~Limit()
{
}

bool Native::DeviceTracking::Policy::Limit::has_data() const
{
    if (is_presence_container) return true;
    return address_count.is_set;
}

bool Native::DeviceTracking::Policy::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_count.yfilter);
}

std::string Native::DeviceTracking::Policy::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DeviceTracking::Policy::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-count")
        return true;
    return false;
}

Native::DeviceTracking::Policy::SecurityLevel::SecurityLevel()
    :
    glean{YType::empty, "glean"}
{

    yang_name = "security-level"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::DeviceTracking::Policy::SecurityLevel::~SecurityLevel()
{
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_data() const
{
    if (is_presence_container) return true;
    return glean.is_set;
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(glean.yfilter);
}

std::string Native::DeviceTracking::Policy::SecurityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::SecurityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (glean.is_set || is_set(glean.yfilter)) leaf_name_data.push_back(glean.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::SecurityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::SecurityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DeviceTracking::Policy::SecurityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "glean")
    {
        glean = value;
        glean.value_namespace = name_space;
        glean.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::SecurityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "glean")
    {
        glean.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "glean")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::Tracking()
    :
    retry_interval{YType::uint16, "retry-interval"}
        ,
    auto_source(nullptr) // presence node
{

    yang_name = "tracking"; yang_parent_name = "device-tracking"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::DeviceTracking::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Tracking::has_data() const
{
    if (is_presence_container) return true;
    return retry_interval.is_set
	|| (auto_source !=  nullptr && auto_source->has_data());
}

bool Native::DeviceTracking::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry_interval.yfilter)
	|| (auto_source !=  nullptr && auto_source->has_operation());
}

std::string Native::DeviceTracking::Tracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry_interval.is_set || is_set(retry_interval.yfilter)) leaf_name_data.push_back(retry_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-source")
    {
        if(auto_source == nullptr)
        {
            auto_source = std::make_shared<Native::DeviceTracking::Tracking::AutoSource>();
        }
        return auto_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_source != nullptr)
    {
        children["auto-source"] = auto_source;
    }

    return children;
}

void Native::DeviceTracking::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry-interval")
    {
        retry_interval = value;
        retry_interval.value_namespace = name_space;
        retry_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry-interval")
    {
        retry_interval.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-source" || name == "retry-interval")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::AutoSource()
    :
    override{YType::empty, "override"}
        ,
    fallback(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback>())
{
    fallback->parent = this;

    yang_name = "auto-source"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::DeviceTracking::Tracking::AutoSource::~AutoSource()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::has_data() const
{
    if (is_presence_container) return true;
    return override.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::DeviceTracking::Tracking::AutoSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::DeviceTracking::Tracking::AutoSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "override")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Fallback()
    :
    ipv4_subnet_type1(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1>())
    , ipv4_subnet_type2(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2>())
{
    ipv4_subnet_type1->parent = this;
    ipv4_subnet_type2->parent = this;

    yang_name = "fallback"; yang_parent_name = "auto-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::~Fallback()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_subnet_type1 !=  nullptr && ipv4_subnet_type1->has_data())
	|| (ipv4_subnet_type2 !=  nullptr && ipv4_subnet_type2->has_data());
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_subnet_type1 !=  nullptr && ipv4_subnet_type1->has_operation())
	|| (ipv4_subnet_type2 !=  nullptr && ipv4_subnet_type2->has_operation());
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subnet-type1")
    {
        if(ipv4_subnet_type1 == nullptr)
        {
            ipv4_subnet_type1 = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1>();
        }
        return ipv4_subnet_type1;
    }

    if(child_yang_name == "ipv4-subnet-type2")
    {
        if(ipv4_subnet_type2 == nullptr)
        {
            ipv4_subnet_type2 = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2>();
        }
        return ipv4_subnet_type2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_subnet_type1 != nullptr)
    {
        children["ipv4-subnet-type1"] = ipv4_subnet_type1;
    }

    if(ipv4_subnet_type2 != nullptr)
    {
        children["ipv4-subnet-type2"] = ipv4_subnet_type2;
    }

    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subnet-type1" || name == "ipv4-subnet-type2")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::Ipv4SubnetType1()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"},
    override{YType::empty, "override"}
{

    yang_name = "ipv4-subnet-type1"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::~Ipv4SubnetType1()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mask.is_set
	|| override.is_set;
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subnet-type1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask" || name == "override")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::Ipv4SubnetType2()
    :
    ipv4_prefix_name{YType::str, "ipv4-prefix-name"},
    override{YType::empty, "override"}
{

    yang_name = "ipv4-subnet-type2"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::~Ipv4SubnetType2()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix_name.is_set
	|| override.is_set;
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix_name.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subnet-type2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix_name.is_set || is_set(ipv4_prefix_name.yfilter)) leaf_name_data.push_back(ipv4_prefix_name.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix-name")
    {
        ipv4_prefix_name = value;
        ipv4_prefix_name.value_namespace = name_space;
        ipv4_prefix_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix-name")
    {
        ipv4_prefix_name.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-name" || name == "override")
        return true;
    return false;
}

Native::Fhrp::Fhrp()
    :
    version(std::make_shared<Native::Fhrp::Version>())
{
    version->parent = this;

    yang_name = "fhrp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fhrp::~Fhrp()
{
}

bool Native::Fhrp::has_data() const
{
    if (is_presence_container) return true;
    return (version !=  nullptr && version->has_data());
}

bool Native::Fhrp::has_operation() const
{
    return is_set(yfilter)
	|| (version !=  nullptr && version->has_operation());
}

std::string Native::Fhrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fhrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<Native::Fhrp::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(version != nullptr)
    {
        children["version"] = version;
    }

    return children;
}

void Native::Fhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version")
        return true;
    return false;
}

Native::Fhrp::Version::Version()
    :
    vrrp{YType::enumeration, "vrrp"}
{

    yang_name = "version"; yang_parent_name = "fhrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fhrp::Version::~Version()
{
}

bool Native::Fhrp::Version::has_data() const
{
    if (is_presence_container) return true;
    return vrrp.is_set;
}

bool Native::Fhrp::Version::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrrp.yfilter);
}

std::string Native::Fhrp::Version::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fhrp::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fhrp::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fhrp::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Fhrp::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fhrp::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
}

bool Native::Fhrp::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp")
        return true;
    return false;
}

Native::Metadata::Metadata()
    :
    flow(nullptr) // presence node
{

    yang_name = "metadata"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Metadata::~Metadata()
{
}

bool Native::Metadata::has_data() const
{
    if (is_presence_container) return true;
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Metadata::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Metadata::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Metadata::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Metadata::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Metadata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Metadata::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Metadata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Metadata::Flow::Flow()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "flow"; yang_parent_name = "metadata"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Metadata::Flow::~Flow()
{
}

bool Native::Metadata::Flow::has_data() const
{
    if (is_presence_container) return true;
    return transmit.is_set;
}

bool Native::Metadata::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Metadata::Flow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/metadata/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Metadata::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Metadata::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Metadata::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Metadata::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Metadata::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Metadata::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Profile::Profile()
    :
    flow{YType::empty, "flow"}
{

    yang_name = "profile"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Profile::~Profile()
{
}

bool Native::Profile::has_data() const
{
    if (is_presence_container) return true;
    return flow.is_set;
}

bool Native::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow.yfilter);
}

std::string Native::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
}

bool Native::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Alias::Alias()
    :
    exec(std::make_shared<Native::Alias::Exec>())
{
    exec->parent = this;

    yang_name = "alias"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Alias::~Alias()
{
}

bool Native::Alias::has_data() const
{
    if (is_presence_container) return true;
    return (exec !=  nullptr && exec->has_data());
}

bool Native::Alias::has_operation() const
{
    return is_set(yfilter)
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Alias::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Alias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Alias::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Alias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Alias::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Alias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Alias::Exec::Exec()
    :
    alias_name{YType::str, "alias-name"},
    new_alias_name{YType::str, "new-alias-name"}
{

    yang_name = "exec"; yang_parent_name = "alias"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Alias::Exec::~Exec()
{
}

bool Native::Alias::Exec::has_data() const
{
    if (is_presence_container) return true;
    return alias_name.is_set
	|| new_alias_name.is_set;
}

bool Native::Alias::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alias_name.yfilter)
	|| ydk::is_set(new_alias_name.yfilter);
}

std::string Native::Alias::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/alias/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Alias::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Alias::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias_name.is_set || is_set(alias_name.yfilter)) leaf_name_data.push_back(alias_name.get_name_leafdata());
    if (new_alias_name.is_set || is_set(new_alias_name.yfilter)) leaf_name_data.push_back(new_alias_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Alias::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Alias::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Alias::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alias-name")
    {
        alias_name = value;
        alias_name.value_namespace = name_space;
        alias_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-alias-name")
    {
        new_alias_name = value;
        new_alias_name.value_namespace = name_space;
        new_alias_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Alias::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alias-name")
    {
        alias_name.yfilter = yfilter;
    }
    if(value_path == "new-alias-name")
    {
        new_alias_name.yfilter = yfilter;
    }
}

bool Native::Alias::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alias-name" || name == "new-alias-name")
        return true;
    return false;
}

Native::Line::Line()
    :
    line_list(this, {"first_number"})
    , aux(this, {"first"})
    , console(this, {"first"})
    , vty(this, {"first"})
{

    yang_name = "line"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Line::~Line()
{
}

bool Native::Line::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<line_list.len(); index++)
    {
        if(line_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<aux.len(); index++)
    {
        if(aux[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<console.len(); index++)
    {
        if(console[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vty.len(); index++)
    {
        if(vty[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::has_operation() const
{
    for (std::size_t index=0; index<line_list.len(); index++)
    {
        if(line_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<aux.len(); index++)
    {
        if(aux[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<console.len(); index++)
    {
        if(console[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vty.len(); index++)
    {
        if(vty[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-list")
    {
        auto c = std::make_shared<Native::Line::LineList>();
        c->parent = this;
        line_list.append(c);
        return c;
    }

    if(child_yang_name == "aux")
    {
        auto c = std::make_shared<Native::Line::Aux>();
        c->parent = this;
        aux.append(c);
        return c;
    }

    if(child_yang_name == "console")
    {
        auto c = std::make_shared<Native::Line::Console>();
        c->parent = this;
        console.append(c);
        return c;
    }

    if(child_yang_name == "vty")
    {
        auto c = std::make_shared<Native::Line::Vty>();
        c->parent = this;
        vty.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : line_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : aux.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : console.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vty.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-list" || name == "aux" || name == "console" || name == "vty")
        return true;
    return false;
}

Native::Line::LineList::LineList()
    :
    first_number{YType::uint8, "first-number"},
    last_number{YType::uint16, "last-number"},
    no_activation_character{YType::boolean, "no-activation-character"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    session_limit{YType::uint32, "session-limit"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
        ,
    authorization(std::make_shared<Native::Line::LineList::Authorization>())
    , access_class(std::make_shared<Native::Line::LineList::AccessClass>())
    , autocommand(std::make_shared<Native::Line::LineList::Autocommand>())
    , autocommand_options(nullptr) // presence node
    , databits(std::make_shared<Native::Line::LineList::Databits>())
    , escape_character(std::make_shared<Native::Line::LineList::EscapeCharacter>())
    , no_exec(std::make_shared<Native::Line::LineList::NoExec>())
    , exec(std::make_shared<Native::Line::LineList::Exec>())
    , exec_timeout(std::make_shared<Native::Line::LineList::ExecTimeout>())
    , flowcontrol(std::make_shared<Native::Line::LineList::Flowcontrol>())
    , history(nullptr) // presence node
    , ip(std::make_shared<Native::Line::LineList::Ip>())
    , ipv6(std::make_shared<Native::Line::LineList::Ipv6>())
    , logging(std::make_shared<Native::Line::LineList::Logging>())
    , login(nullptr) // presence node
    , media_type(std::make_shared<Native::Line::LineList::MediaType>())
    , modem(std::make_shared<Native::Line::LineList::Modem>())
    , padding(std::make_shared<Native::Line::LineList::Padding>())
    , parity(std::make_shared<Native::Line::LineList::Parity>())
    , password(std::make_shared<Native::Line::LineList::Password>())
    , prc(std::make_shared<Native::Line::LineList::Prc>())
    , privilege(std::make_shared<Native::Line::LineList::Privilege>())
    , session_timeout(std::make_shared<Native::Line::LineList::SessionTimeout>())
    , timeout(std::make_shared<Native::Line::LineList::Timeout>())
    , telnet(std::make_shared<Native::Line::LineList::Telnet>())
    , transport(std::make_shared<Native::Line::LineList::Transport>())
    , usb_inactivity_timeout(std::make_shared<Native::Line::LineList::UsbInactivityTimeout>())
{
    authorization->parent = this;
    access_class->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    no_exec->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    timeout->parent = this;
    telnet->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "line-list"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Line::LineList::~LineList()
{
}

bool Native::Line::LineList::has_data() const
{
    if (is_presence_container) return true;
    return first_number.is_set
	|| last_number.is_set
	|| no_activation_character.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| session_limit.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (access_class !=  nullptr && access_class->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::LineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_number.yfilter)
	|| ydk::is_set(last_number.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::LineList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::LineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-list";
    ADD_KEY_TOKEN(first_number, "first-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_number.is_set || is_set(first_number.yfilter)) leaf_name_data.push_back(first_number.get_name_leafdata());
    if (last_number.is_set || is_set(last_number.yfilter)) leaf_name_data.push_back(last_number.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::LineList::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::LineList::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::LineList::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::LineList::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::LineList::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::LineList::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::LineList::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::LineList::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::LineList::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::LineList::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::LineList::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::LineList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::LineList::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::LineList::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::LineList::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::LineList::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::LineList::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::LineList::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::LineList::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::LineList::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::LineList::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::LineList::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::LineList::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::LineList::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::LineList::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::LineList::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::LineList::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
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

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return children;
}

void Native::Line::LineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-number")
    {
        first_number = value;
        first_number.value_namespace = name_space;
        first_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-number")
    {
        last_number = value;
        last_number.value_namespace = name_space;
        last_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-number")
    {
        first_number.yfilter = yfilter;
    }
    if(value_path == "last-number")
    {
        last_number.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::LineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "access-class" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "no-exec" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "timeout" || name == "telnet" || name == "transport" || name == "usb-inactivity-timeout" || name == "first-number" || name == "last-number" || name == "no-activation-character" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "session-limit" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::LineList::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::LineList::Authorization::Command>())
    , exec(std::make_shared<Native::Line::LineList::Authorization::Exec>())
{
    command->parent = this;
    exec->parent = this;

    yang_name = "authorization"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Authorization::~Authorization()
{
}

bool Native::Line::LineList::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return (command !=  nullptr && command->has_data())
	|| (exec !=  nullptr && exec->has_data());
}

bool Native::Line::LineList::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation())
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Line::LineList::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::LineList::Authorization::Command>();
        }
        return command;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::LineList::Authorization::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(command != nullptr)
    {
        children["command"] = command;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Line::LineList::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "exec")
        return true;
    return false;
}

Native::Line::LineList::Authorization::Command::Command()
    :
    enable_level{YType::uint8, "enable-level"},
    auth_name{YType::str, "auth-name"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Authorization::Command::~Command()
{
}

bool Native::Line::LineList::Authorization::Command::has_data() const
{
    if (is_presence_container) return true;
    return enable_level.is_set
	|| auth_name.is_set;
}

bool Native::Line::LineList::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_level.yfilter)
	|| ydk::is_set(auth_name.yfilter);
}

std::string Native::Line::LineList::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());
    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-level" || name == "auth-name")
        return true;
    return false;
}

Native::Line::LineList::Authorization::Exec::Exec()
    :
    authorization_name{YType::str, "authorization-name"},
    default_{YType::empty, "default"}
{

    yang_name = "exec"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Authorization::Exec::~Exec()
{
}

bool Native::Line::LineList::Authorization::Exec::has_data() const
{
    if (is_presence_container) return true;
    return authorization_name.is_set
	|| default_.is_set;
}

bool Native::Line::LineList::Authorization::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Line::LineList::Authorization::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Authorization::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization_name.is_set || is_set(authorization_name.yfilter)) leaf_name_data.push_back(authorization_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Authorization::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization-name")
    {
        authorization_name = value;
        authorization_name.value_namespace = name_space;
        authorization_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Authorization::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization-name")
    {
        authorization_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Authorization::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization-name" || name == "default")
        return true;
    return false;
}

Native::Line::LineList::AccessClass::AccessClass()
    :
    acccess_list(this, {"direction"})
{

    yang_name = "access-class"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::AccessClass::~AccessClass()
{
}

bool Native::Line::LineList::AccessClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acccess_list.len(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::LineList::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.len(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::LineList::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        auto c = std::make_shared<Native::Line::LineList::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acccess_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Line::LineList::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::LineList::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::LineList::AccessClass::AcccessList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::LineList::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::LineList::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::LineList::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
        ,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Autocommand::~Autocommand()
{
}

bool Native::Line::LineList::Autocommand::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::LineList::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::LineList::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::LineList::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::LineList::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::LineList::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set;
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
    , delay(nullptr) // presence node
    , nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::LineList::AutocommandOptions::has_data() const
{
    if (is_presence_container) return true;
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::LineList::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::LineList::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::LineList::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::LineList::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::LineList::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::LineList::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_data() const
{
    if (is_presence_container) return true;
    return character.is_set;
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set;
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_data() const
{
    if (is_presence_container) return true;
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::LineList::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Databits::~Databits()
{
}

bool Native::Line::LineList::Databits::has_data() const
{
    if (is_presence_container) return true;
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::LineList::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::LineList::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::LineList::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::LineList::EscapeCharacter::has_data() const
{
    if (is_presence_container) return true;
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::LineList::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::LineList::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::LineList::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
        return true;
    return false;
}

Native::Line::LineList::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{

    yang_name = "no-exec"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::NoExec::~NoExec()
{
}

bool Native::Line::LineList::NoExec::has_data() const
{
    if (is_presence_container) return true;
    return exec.is_set;
}

bool Native::Line::LineList::NoExec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter);
}

std::string Native::Line::LineList::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::NoExec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::NoExec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::NoExec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
}

bool Native::Line::LineList::NoExec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Line::LineList::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::LineList::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Exec::~Exec()
{
}

bool Native::Line::LineList::Exec::has_data() const
{
    if (is_presence_container) return true;
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::LineList::Exec::has_operation() const
{
    return is_set(yfilter)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::LineList::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::LineList::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::LineList::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt")
        return true;
    return false;
}

Native::Line::LineList::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{

    yang_name = "prompt"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Exec::Prompt::~Prompt()
{
}

bool Native::Line::LineList::Exec::Prompt::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set;
}

bool Native::Line::LineList::Exec::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string Native::Line::LineList::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Exec::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Exec::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Exec::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Exec::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Native::Line::LineList::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "exec-timeout"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::LineList::ExecTimeout::has_data() const
{
    if (is_presence_container) return true;
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::LineList::ExecTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Line::LineList::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::ExecTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::ExecTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::ExecTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Line::LineList::ExecTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

Native::Line::LineList::Flowcontrol::Flowcontrol()
    :
    none{YType::empty, "NONE"},
    hardware{YType::empty, "hardware"},
    software{YType::empty, "software"}
{

    yang_name = "flowcontrol"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::LineList::Flowcontrol::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| hardware.is_set
	|| software.is_set;
}

bool Native::Line::LineList::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Line::LineList::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "NONE")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "NONE")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NONE" || name == "hardware" || name == "software")
        return true;
    return false;
}

Native::Line::LineList::History::History()
    :
    size{YType::uint16, "size"}
{

    yang_name = "history"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::History::~History()
{
}

bool Native::Line::LineList::History::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Line::LineList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Line::LineList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Line::LineList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Line::LineList::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
        ,
    netmask_format(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Ip::~Ip()
{
}

bool Native::Line::LineList::Ip::has_data() const
{
    if (is_presence_container) return true;
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::LineList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::LineList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::LineList::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::LineList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask-format" || name == "tcp")
        return true;
    return false;
}

Native::Line::LineList::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "netmask-format"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::LineList::Ip::NetmaskFormat::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set;
}

bool Native::Line::LineList::Ip::NetmaskFormat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Native::Line::LineList::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ip::NetmaskFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Ip::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Ip::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Ip::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Line::LineList::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::LineList::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Ipv6::~Ipv6()
{
}

bool Native::Line::LineList::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::LineList::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::LineList::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::LineList::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::LineList::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass()
    :
    access_class(this, {"access_class_name"})
{

    yang_name = "access-class"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::LineList::Ipv6::AccessClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_class.len(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::LineList::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.len(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::LineList::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ipv6::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        auto c = std::make_shared<Native::Line::LineList::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : access_class.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Line::LineList::Ipv6::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Ipv6::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Ipv6::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{

    yang_name = "access-class"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::LineList::Ipv6::AccessClass::AccessClass_::has_data() const
{
    if (is_presence_container) return true;
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::LineList::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class_name.yfilter)
	|| ydk::is_set(enumeration_in_out.yfilter);
}

std::string Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    ADD_KEY_TOKEN(access_class_name, "access-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.yfilter)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.yfilter)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
        access_class_name.value_namespace = name_space;
        access_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
        enumeration_in_out.value_namespace = name_space;
        enumeration_in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Ipv6::AccessClass::AccessClass_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class-name")
    {
        access_class_name.yfilter = yfilter;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Ipv6::AccessClass::AccessClass_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class-name" || name == "enumeration-in-out")
        return true;
    return false;
}

Native::Line::LineList::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Logging::~Logging()
{
}

bool Native::Line::LineList::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::LineList::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::LineList::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::LineList::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::LineList::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronous")
        return true;
    return false;
}

Native::Line::LineList::Logging::Synchronous::Synchronous()
{

    yang_name = "synchronous"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::LineList::Logging::Synchronous::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Line::LineList::Logging::Synchronous::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Line::LineList::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Logging::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Logging::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Logging::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Logging::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Line::LineList::Login::Login()
    :
    local{YType::empty, "local"},
    authentication{YType::str, "authentication"}
{

    yang_name = "login"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::Login::~Login()
{
}

bool Native::Line::LineList::Login::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| authentication.is_set;
}

bool Native::Line::LineList::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(authentication.yfilter);
}

std::string Native::Line::LineList::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "authentication")
        return true;
    return false;
}

Native::Line::LineList::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{

    yang_name = "media-type"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::MediaType::~MediaType()
{
}

bool Native::Line::LineList::MediaType::has_data() const
{
    if (is_presence_container) return true;
    return rj45.is_set;
}

bool Native::Line::LineList::MediaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rj45.yfilter);
}

std::string Native::Line::LineList::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.yfilter)) leaf_name_data.push_back(rj45.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rj45")
    {
        rj45 = value;
        rj45.value_namespace = name_space;
        rj45.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rj45")
    {
        rj45.yfilter = yfilter;
    }
}

bool Native::Line::LineList::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rj45")
        return true;
    return false;
}

Native::Line::LineList::Modem::Modem()
    :
    cts_alarm{YType::empty, "CTS-Alarm"},
    dtr_active{YType::empty, "DTR-active"},
    dialin{YType::empty, "Dialin"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"},
    answer_timeout{YType::empty, "answer-timeout"},
    dtr_delay{YType::empty, "dtr-delay"}
{

    yang_name = "modem"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Modem::~Modem()
{
}

bool Native::Line::LineList::Modem::has_data() const
{
    if (is_presence_container) return true;
    return cts_alarm.is_set
	|| dtr_active.is_set
	|| dialin.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set
	|| answer_timeout.is_set
	|| dtr_delay.is_set;
}

bool Native::Line::LineList::Modem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cts_alarm.yfilter)
	|| ydk::is_set(dtr_active.yfilter)
	|| ydk::is_set(dialin.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(printer.yfilter)
	|| ydk::is_set(answer_timeout.yfilter)
	|| ydk::is_set(dtr_delay.yfilter);
}

std::string Native::Line::LineList::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts_alarm.is_set || is_set(cts_alarm.yfilter)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.yfilter)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.yfilter)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());
    if (answer_timeout.is_set || is_set(answer_timeout.yfilter)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.yfilter)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
        cts_alarm.value_namespace = name_space;
        cts_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
        dtr_active.value_namespace = name_space;
        dtr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
        dialin.value_namespace = name_space;
        dialin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InOut")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
        answer_timeout.value_namespace = name_space;
        answer_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
        dtr_delay.value_namespace = name_space;
        dtr_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "CTS-Alarm")
    {
        cts_alarm.yfilter = yfilter;
    }
    if(value_path == "DTR-active")
    {
        dtr_active.yfilter = yfilter;
    }
    if(value_path == "Dialin")
    {
        dialin.yfilter = yfilter;
    }
    if(value_path == "Host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "InOut")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "Printer")
    {
        printer.yfilter = yfilter;
    }
    if(value_path == "answer-timeout")
    {
        answer_timeout.yfilter = yfilter;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CTS-Alarm" || name == "DTR-active" || name == "Dialin" || name == "Host" || name == "InOut" || name == "Printer" || name == "answer-timeout" || name == "dtr-delay")
        return true;
    return false;
}

Native::Line::LineList::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{

    yang_name = "padding"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Padding::~Padding()
{
}

bool Native::Line::LineList::Padding::has_data() const
{
    if (is_presence_container) return true;
    return character.is_set
	|| null.is_set;
}

bool Native::Line::LineList::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Line::LineList::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character" || name == "null")
        return true;
    return false;
}

Native::Line::LineList::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{

    yang_name = "parity"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Parity::~Parity()
{
}

bool Native::Line::LineList::Parity::has_data() const
{
    if (is_presence_container) return true;
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::LineList::Parity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(even.yfilter)
	|| ydk::is_set(mark.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(odd.yfilter)
	|| ydk::is_set(space.yfilter);
}

std::string Native::Line::LineList::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (even.is_set || is_set(even.yfilter)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.yfilter)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.yfilter)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.yfilter)) leaf_name_data.push_back(space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "even")
    {
        even = value;
        even.value_namespace = name_space;
        even.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark")
    {
        mark = value;
        mark.value_namespace = name_space;
        mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odd")
    {
        odd = value;
        odd.value_namespace = name_space;
        odd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "space")
    {
        space = value;
        space.value_namespace = name_space;
        space.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "even")
    {
        even.yfilter = yfilter;
    }
    if(value_path == "mark")
    {
        mark.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "odd")
    {
        odd.yfilter = yfilter;
    }
    if(value_path == "space")
    {
        space.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "even" || name == "mark" || name == "none" || name == "odd" || name == "space")
        return true;
    return false;
}

Native::Line::LineList::Password::Password()
    :
    level{YType::uint8, "level"},
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Password::~Password()
{
}

bool Native::Line::LineList::Password::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set
	|| secret.is_set;
}

bool Native::Line::LineList::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Line::LineList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type" || name == "secret")
        return true;
    return false;
}

Native::Line::LineList::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{

    yang_name = "prc"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Prc::~Prc()
{
}

bool Native::Line::LineList::Prc::has_data() const
{
    if (is_presence_container) return true;
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::LineList::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expose.yfilter)
	|| ydk::is_set(hide.yfilter);
}

std::string Native::Line::LineList::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expose.is_set || is_set(expose.yfilter)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.yfilter)) leaf_name_data.push_back(hide.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expose")
    {
        expose = value;
        expose.value_namespace = name_space;
        expose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide")
    {
        hide = value;
        hide.value_namespace = name_space;
        hide.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expose")
    {
        expose.yfilter = yfilter;
    }
    if(value_path == "hide")
    {
        hide.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expose" || name == "hide")
        return true;
    return false;
}

Native::Line::LineList::Privilege::Privilege()
    :
    level(nullptr) // presence node
{

    yang_name = "privilege"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Privilege::~Privilege()
{
}

bool Native::Line::LineList::Privilege::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::LineList::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::LineList::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::LineList::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::LineList::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Line::LineList::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::Privilege::Level::~Level()
{
}

bool Native::Line::LineList::Privilege::Level::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set;
}

bool Native::Line::LineList::Privilege::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Line::LineList::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Line::LineList::SessionTimeout::SessionTimeout()
    :
    session_timeout_value{YType::uint16, "session-timeout-value"},
    output{YType::empty, "output"}
{

    yang_name = "session-timeout"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::LineList::SessionTimeout::has_data() const
{
    if (is_presence_container) return true;
    return session_timeout_value.is_set
	|| output.is_set;
}

bool Native::Line::LineList::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_timeout_value.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::LineList::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::LineList::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-timeout-value" || name == "output")
        return true;
    return false;
}

Native::Line::LineList::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{

    yang_name = "timeout"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Timeout::~Timeout()
{
}

bool Native::Line::LineList::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return login.is_set;
}

bool Native::Line::LineList::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Line::LineList::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Line::LineList::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Telnet::~Telnet()
{
}

bool Native::Line::LineList::Telnet::has_data() const
{
    if (is_presence_container) return true;
    return transparent.is_set;
}

bool Native::Line::LineList::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Line::LineList::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Native::Line::LineList::Transport::Transport()
    :
    input(std::make_shared<Native::Line::LineList::Transport::Input>())
    , output(std::make_shared<Native::Line::LineList::Transport::Output>())
    , preferred(nullptr) // presence node
{
    input->parent = this;
    output->parent = this;

    yang_name = "transport"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Transport::~Transport()
{
}

bool Native::Line::LineList::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::LineList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::LineList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::LineList::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::LineList::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::LineList::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(preferred != nullptr)
    {
        children["preferred"] = preferred;
    }

    return children;
}

void Native::Line::LineList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
}

Native::Line::LineList::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{

    yang_name = "input"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Transport::Input::~Input()
{
}

bool Native::Line::LineList::Transport::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::LineList::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string Native::Line::LineList::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Transport::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::LineList::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Line::LineList::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "output"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::Transport::Output::~Output()
{
}

bool Native::Line::LineList::Transport::Output::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::LineList::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::LineList::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Transport::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::LineList::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Line::LineList::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "preferred"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::LineList::Transport::Preferred::~Preferred()
{
}

bool Native::Line::LineList::Transport::Preferred::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::Line::LineList::Transport::Preferred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Line::LineList::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Transport::Preferred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::LineList::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "usb-inactivity-timeout"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::LineList::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::LineList::UsbInactivityTimeout::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::Line::LineList::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Line::LineList::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::UsbInactivityTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::LineList::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::LineList::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Line::Aux::Aux()
    :
    first{YType::enumeration, "first"},
    no_activation_character{YType::boolean, "no-activation-character"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    session_limit{YType::uint32, "session-limit"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
        ,
    authorization(std::make_shared<Native::Line::Aux::Authorization>())
    , access_class(std::make_shared<Native::Line::Aux::AccessClass>())
    , autocommand(std::make_shared<Native::Line::Aux::Autocommand>())
    , autocommand_options(nullptr) // presence node
    , databits(std::make_shared<Native::Line::Aux::Databits>())
    , escape_character(std::make_shared<Native::Line::Aux::EscapeCharacter>())
    , no_exec(std::make_shared<Native::Line::Aux::NoExec>())
    , exec(std::make_shared<Native::Line::Aux::Exec>())
    , exec_timeout(std::make_shared<Native::Line::Aux::ExecTimeout>())
    , flowcontrol(std::make_shared<Native::Line::Aux::Flowcontrol>())
    , history(nullptr) // presence node
    , ip(std::make_shared<Native::Line::Aux::Ip>())
    , ipv6(std::make_shared<Native::Line::Aux::Ipv6>())
    , logging(std::make_shared<Native::Line::Aux::Logging>())
    , login(nullptr) // presence node
    , media_type(std::make_shared<Native::Line::Aux::MediaType>())
    , modem(std::make_shared<Native::Line::Aux::Modem>())
    , padding(std::make_shared<Native::Line::Aux::Padding>())
    , parity(std::make_shared<Native::Line::Aux::Parity>())
    , password(std::make_shared<Native::Line::Aux::Password>())
    , prc(std::make_shared<Native::Line::Aux::Prc>())
    , privilege(std::make_shared<Native::Line::Aux::Privilege>())
    , session_timeout(std::make_shared<Native::Line::Aux::SessionTimeout>())
    , timeout(std::make_shared<Native::Line::Aux::Timeout>())
    , telnet(std::make_shared<Native::Line::Aux::Telnet>())
    , transport(std::make_shared<Native::Line::Aux::Transport>())
    , usb_inactivity_timeout(std::make_shared<Native::Line::Aux::UsbInactivityTimeout>())
{
    authorization->parent = this;
    access_class->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    no_exec->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    timeout->parent = this;
    telnet->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "aux"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Line::Aux::~Aux()
{
}

bool Native::Line::Aux::has_data() const
{
    if (is_presence_container) return true;
    return first.is_set
	|| no_activation_character.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| session_limit.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (access_class !=  nullptr && access_class->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::Aux::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::Aux::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::Aux::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aux";
    ADD_KEY_TOKEN(first, "first");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.yfilter)) leaf_name_data.push_back(first.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Aux::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Aux::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Aux::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Aux::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Aux::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Aux::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Aux::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Aux::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Aux::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Aux::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Aux::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Aux::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Aux::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Aux::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Aux::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Aux::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Aux::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Aux::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Aux::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Aux::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Aux::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Aux::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Aux::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Aux::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Aux::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Aux::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Aux::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
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

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return children;
}

void Native::Line::Aux::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first")
    {
        first = value;
        first.value_namespace = name_space;
        first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first")
    {
        first.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::Aux::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "access-class" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "no-exec" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "timeout" || name == "telnet" || name == "transport" || name == "usb-inactivity-timeout" || name == "first" || name == "no-activation-character" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "session-limit" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::Aux::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Aux::Authorization::Command>())
    , exec(std::make_shared<Native::Line::Aux::Authorization::Exec>())
{
    command->parent = this;
    exec->parent = this;

    yang_name = "authorization"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Authorization::~Authorization()
{
}

bool Native::Line::Aux::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return (command !=  nullptr && command->has_data())
	|| (exec !=  nullptr && exec->has_data());
}

bool Native::Line::Aux::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation())
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Line::Aux::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Aux::Authorization::Command>();
        }
        return command;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Aux::Authorization::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(command != nullptr)
    {
        children["command"] = command;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Line::Aux::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "exec")
        return true;
    return false;
}

Native::Line::Aux::Authorization::Command::Command()
    :
    enable_level{YType::uint8, "enable-level"},
    auth_name{YType::str, "auth-name"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Authorization::Command::~Command()
{
}

bool Native::Line::Aux::Authorization::Command::has_data() const
{
    if (is_presence_container) return true;
    return enable_level.is_set
	|| auth_name.is_set;
}

bool Native::Line::Aux::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_level.yfilter)
	|| ydk::is_set(auth_name.yfilter);
}

std::string Native::Line::Aux::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());
    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-level" || name == "auth-name")
        return true;
    return false;
}

Native::Line::Aux::Authorization::Exec::Exec()
    :
    authorization_name{YType::str, "authorization-name"},
    default_{YType::empty, "default"}
{

    yang_name = "exec"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Authorization::Exec::~Exec()
{
}

bool Native::Line::Aux::Authorization::Exec::has_data() const
{
    if (is_presence_container) return true;
    return authorization_name.is_set
	|| default_.is_set;
}

bool Native::Line::Aux::Authorization::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Line::Aux::Authorization::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Authorization::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization_name.is_set || is_set(authorization_name.yfilter)) leaf_name_data.push_back(authorization_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::Authorization::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization-name")
    {
        authorization_name = value;
        authorization_name.value_namespace = name_space;
        authorization_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Authorization::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization-name")
    {
        authorization_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Authorization::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization-name" || name == "default")
        return true;
    return false;
}

Native::Line::Aux::AccessClass::AccessClass()
    :
    acccess_list(this, {"direction"})
{

    yang_name = "access-class"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::AccessClass::~AccessClass()
{
}

bool Native::Line::Aux::AccessClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acccess_list.len(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Aux::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.len(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Aux::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        auto c = std::make_shared<Native::Line::Aux::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acccess_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Line::Aux::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::Aux::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Aux::AccessClass::AcccessList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Aux::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::Aux::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::Aux::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::Aux::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
        ,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Autocommand::~Autocommand()
{
}

bool Native::Line::Aux::Autocommand::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Aux::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Aux::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Aux::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::Aux::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::Aux::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Aux::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Aux::Autocommand::NoSuppressLinenumber::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set;
}

bool Native::Line::Aux::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::Aux::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
    , delay(nullptr) // presence node
    , nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Aux::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Aux::AutocommandOptions::has_data() const
{
    if (is_presence_container) return true;
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Aux::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Aux::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Aux::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Aux::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Aux::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::Aux::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::Aux::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Aux::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Aux::AutocommandOptions::AbortCharacter::has_data() const
{
    if (is_presence_container) return true;
    return character.is_set;
}

bool Native::Line::Aux::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::Aux::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::Aux::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::Aux::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Aux::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Aux::AutocommandOptions::Delay::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set;
}

bool Native::Line::Aux::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::Aux::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::Aux::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::Aux::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Aux::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Aux::AutocommandOptions::Nohangup::has_data() const
{
    if (is_presence_container) return true;
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Aux::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::Aux::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::Aux::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::Aux::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Databits::~Databits()
{
}

bool Native::Line::Aux::Databits::has_data() const
{
    if (is_presence_container) return true;
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Aux::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::Aux::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::Aux::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Aux::EscapeCharacter::has_data() const
{
    if (is_presence_container) return true;
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::Aux::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::Aux::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::Aux::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
        return true;
    return false;
}

Native::Line::Aux::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{

    yang_name = "no-exec"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::NoExec::~NoExec()
{
}

bool Native::Line::Aux::NoExec::has_data() const
{
    if (is_presence_container) return true;
    return exec.is_set;
}

bool Native::Line::Aux::NoExec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter);
}

std::string Native::Line::Aux::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::NoExec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Line::Aux::NoExec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::NoExec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
}

bool Native::Line::Aux::NoExec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

const Enum::YLeaf Native::License::Boot::Level::Ipbasek9::Addon::dna_advantage {0, "dna-advantage"};
const Enum::YLeaf Native::License::Boot::Level::Ipbasek9::Addon::dna_essentials {1, "dna-essentials"};

const Enum::YLeaf Native::License::Boot::Level::Ipservicesk9::Addon::dna_advantage {0, "dna-advantage"};
const Enum::YLeaf Native::License::Boot::Level::Ipservicesk9::Addon::dna_essentials {1, "dna-essentials"};

const Enum::YLeaf Native::License::Boot::Level::Lanbasek9::Addon::dna_essentials {0, "dna-essentials"};

const Enum::YLeaf Native::License::Boot::Level::NetworkAdvantage::Addon::dna_advantage {0, "dna-advantage"};
const Enum::YLeaf Native::License::Boot::Level::NetworkAdvantage::Addon::dna_essentials {1, "dna-essentials"};

const Enum::YLeaf Native::License::Boot::Level::NetworkEssentials::Addon::dna_essentials {0, "dna-essentials"};

const Enum::YLeaf Native::License::Boot::BootModule::Module::c2900 {0, "c2900"};

const Enum::YLeaf Native::License::Smart::TransportType::callhome {0, "callhome"};
const Enum::YLeaf Native::License::Smart::TransportType::smart {1, "smart"};

const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::ServiceInsertion::ServiceNodeGroup::NodeDiscovery::enable {0, "enable"};

const Enum::YLeaf Native::Fhrp::Version::Vrrp::v2 {0, "v2"};
const Enum::YLeaf Native::Fhrp::Version::Vrrp::v3 {1, "v3"};

const Enum::YLeaf Native::Line::LineList::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::LineList::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::LineList::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::LineList::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::LineList::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::Format::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::Format::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::Format::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::LineList::Ipv6::AccessClass::AccessClass_::EnumerationInOut::in {0, "in"};
const Enum::YLeaf Native::Line::LineList::Ipv6::AccessClass::AccessClass_::EnumerationInOut::out {1, "out"};

const Enum::YLeaf Native::Line::LineList::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::LineList::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::all {1, "all"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::lat {3, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::mop {4, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::none {6, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::pad {7, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::Input_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::all {1, "all"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::lat {3, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::mop {4, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::none {6, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::pad {7, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::Output_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::Aux::First::Y_0 {0, "0"};

const Enum::YLeaf Native::Line::Aux::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Aux::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Aux::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Aux::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::Aux::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::Aux::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Aux::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Aux::EscapeCharacter::Char_::NONE {2, "NONE"};


}
}

