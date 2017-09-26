
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_176.hpp"
#include "Cisco_IOS_XE_native_177.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
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

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
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
{

    yang_name = "strict-spf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
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
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
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
    absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>())
{
    absolute->parent = this;
    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
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
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";
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
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
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
    if(name == "absolute" || name == "index" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
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

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::SetAttributes()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "set-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::SetAttributes::~SetAttributes()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_data() const
{
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

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_data() const
{
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

Native::Service::Service()
    :
    call_home{YType::empty, "call-home"},
    compress_config{YType::empty, "compress-config"},
    config{YType::empty, "config"},
    dhcp{YType::empty, "dhcp"},
    disable_ip_fast_frag{YType::empty, "disable-ip-fast-frag"},
    exec_callback{YType::empty, "exec-callback"},
    exec_wait{YType::empty, "exec-wait"},
    finger{YType::empty, "finger"},
    hide_telnet_addresses{YType::empty, "hide-telnet-addresses"},
    internal{YType::empty, "internal"},
    linenumber{YType::empty, "linenumber"},
    log_hidden{YType::empty, "log-hidden"},
    nagle{YType::empty, "nagle"},
    old_slip_prompts{YType::empty, "old-slip-prompts"},
    password_encryption{YType::empty, "password-encryption"},
    password_recovery{YType::boolean, "password-recovery"},
    pt_vty_logging{YType::empty, "pt-vty-logging"},
    sequence_numbers{YType::empty, "sequence-numbers"},
    slave_log{YType::empty, "slave-log"},
    tcp_keepalives_in{YType::empty, "tcp-keepalives-in"},
    tcp_keepalives_out{YType::empty, "tcp-keepalives-out"},
    tcp_small_servers{YType::empty, "tcp-small-servers"},
    telnet_zeroidle{YType::empty, "telnet-zeroidle"},
    udp_small_servers{YType::empty, "udp-small-servers"},
    unsupported_transceiver{YType::empty, "unsupported-transceiver"}
    	,
    alignment(std::make_shared<Native::Service::Alignment>())
	,counters(std::make_shared<Native::Service::Counters>())
	,heartbeat(std::make_shared<Native::Service::Heartbeat>())
	,pad(nullptr) // presence node
	,pad_conf(std::make_shared<Native::Service::PadConf>())
	,prompt(std::make_shared<Native::Service::Prompt>())
	,timestamps(nullptr) // presence node
{
    alignment->parent = this;
    counters->parent = this;
    heartbeat->parent = this;
    pad_conf->parent = this;
    prompt->parent = this;

    yang_name = "service"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::~Service()
{
}

bool Native::Service::has_data() const
{
    return call_home.is_set
	|| compress_config.is_set
	|| config.is_set
	|| dhcp.is_set
	|| disable_ip_fast_frag.is_set
	|| exec_callback.is_set
	|| exec_wait.is_set
	|| finger.is_set
	|| hide_telnet_addresses.is_set
	|| internal.is_set
	|| linenumber.is_set
	|| log_hidden.is_set
	|| nagle.is_set
	|| old_slip_prompts.is_set
	|| password_encryption.is_set
	|| password_recovery.is_set
	|| pt_vty_logging.is_set
	|| sequence_numbers.is_set
	|| slave_log.is_set
	|| tcp_keepalives_in.is_set
	|| tcp_keepalives_out.is_set
	|| tcp_small_servers.is_set
	|| telnet_zeroidle.is_set
	|| udp_small_servers.is_set
	|| unsupported_transceiver.is_set
	|| (alignment !=  nullptr && alignment->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (heartbeat !=  nullptr && heartbeat->has_data())
	|| (pad !=  nullptr && pad->has_data())
	|| (pad_conf !=  nullptr && pad_conf->has_data())
	|| (prompt !=  nullptr && prompt->has_data())
	|| (timestamps !=  nullptr && timestamps->has_data());
}

bool Native::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(call_home.yfilter)
	|| ydk::is_set(compress_config.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(disable_ip_fast_frag.yfilter)
	|| ydk::is_set(exec_callback.yfilter)
	|| ydk::is_set(exec_wait.yfilter)
	|| ydk::is_set(finger.yfilter)
	|| ydk::is_set(hide_telnet_addresses.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(linenumber.yfilter)
	|| ydk::is_set(log_hidden.yfilter)
	|| ydk::is_set(nagle.yfilter)
	|| ydk::is_set(old_slip_prompts.yfilter)
	|| ydk::is_set(password_encryption.yfilter)
	|| ydk::is_set(password_recovery.yfilter)
	|| ydk::is_set(pt_vty_logging.yfilter)
	|| ydk::is_set(sequence_numbers.yfilter)
	|| ydk::is_set(slave_log.yfilter)
	|| ydk::is_set(tcp_keepalives_in.yfilter)
	|| ydk::is_set(tcp_keepalives_out.yfilter)
	|| ydk::is_set(tcp_small_servers.yfilter)
	|| ydk::is_set(telnet_zeroidle.yfilter)
	|| ydk::is_set(udp_small_servers.yfilter)
	|| ydk::is_set(unsupported_transceiver.yfilter)
	|| (alignment !=  nullptr && alignment->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (heartbeat !=  nullptr && heartbeat->has_operation())
	|| (pad !=  nullptr && pad->has_operation())
	|| (pad_conf !=  nullptr && pad_conf->has_operation())
	|| (prompt !=  nullptr && prompt->has_operation())
	|| (timestamps !=  nullptr && timestamps->has_operation());
}

std::string Native::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_home.is_set || is_set(call_home.yfilter)) leaf_name_data.push_back(call_home.get_name_leafdata());
    if (compress_config.is_set || is_set(compress_config.yfilter)) leaf_name_data.push_back(compress_config.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (disable_ip_fast_frag.is_set || is_set(disable_ip_fast_frag.yfilter)) leaf_name_data.push_back(disable_ip_fast_frag.get_name_leafdata());
    if (exec_callback.is_set || is_set(exec_callback.yfilter)) leaf_name_data.push_back(exec_callback.get_name_leafdata());
    if (exec_wait.is_set || is_set(exec_wait.yfilter)) leaf_name_data.push_back(exec_wait.get_name_leafdata());
    if (finger.is_set || is_set(finger.yfilter)) leaf_name_data.push_back(finger.get_name_leafdata());
    if (hide_telnet_addresses.is_set || is_set(hide_telnet_addresses.yfilter)) leaf_name_data.push_back(hide_telnet_addresses.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (linenumber.is_set || is_set(linenumber.yfilter)) leaf_name_data.push_back(linenumber.get_name_leafdata());
    if (log_hidden.is_set || is_set(log_hidden.yfilter)) leaf_name_data.push_back(log_hidden.get_name_leafdata());
    if (nagle.is_set || is_set(nagle.yfilter)) leaf_name_data.push_back(nagle.get_name_leafdata());
    if (old_slip_prompts.is_set || is_set(old_slip_prompts.yfilter)) leaf_name_data.push_back(old_slip_prompts.get_name_leafdata());
    if (password_encryption.is_set || is_set(password_encryption.yfilter)) leaf_name_data.push_back(password_encryption.get_name_leafdata());
    if (password_recovery.is_set || is_set(password_recovery.yfilter)) leaf_name_data.push_back(password_recovery.get_name_leafdata());
    if (pt_vty_logging.is_set || is_set(pt_vty_logging.yfilter)) leaf_name_data.push_back(pt_vty_logging.get_name_leafdata());
    if (sequence_numbers.is_set || is_set(sequence_numbers.yfilter)) leaf_name_data.push_back(sequence_numbers.get_name_leafdata());
    if (slave_log.is_set || is_set(slave_log.yfilter)) leaf_name_data.push_back(slave_log.get_name_leafdata());
    if (tcp_keepalives_in.is_set || is_set(tcp_keepalives_in.yfilter)) leaf_name_data.push_back(tcp_keepalives_in.get_name_leafdata());
    if (tcp_keepalives_out.is_set || is_set(tcp_keepalives_out.yfilter)) leaf_name_data.push_back(tcp_keepalives_out.get_name_leafdata());
    if (tcp_small_servers.is_set || is_set(tcp_small_servers.yfilter)) leaf_name_data.push_back(tcp_small_servers.get_name_leafdata());
    if (telnet_zeroidle.is_set || is_set(telnet_zeroidle.yfilter)) leaf_name_data.push_back(telnet_zeroidle.get_name_leafdata());
    if (udp_small_servers.is_set || is_set(udp_small_servers.yfilter)) leaf_name_data.push_back(udp_small_servers.get_name_leafdata());
    if (unsupported_transceiver.is_set || is_set(unsupported_transceiver.yfilter)) leaf_name_data.push_back(unsupported_transceiver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alignment")
    {
        if(alignment == nullptr)
        {
            alignment = std::make_shared<Native::Service::Alignment>();
        }
        return alignment;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Native::Service::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "heartbeat")
    {
        if(heartbeat == nullptr)
        {
            heartbeat = std::make_shared<Native::Service::Heartbeat>();
        }
        return heartbeat;
    }

    if(child_yang_name == "pad")
    {
        if(pad == nullptr)
        {
            pad = std::make_shared<Native::Service::Pad>();
        }
        return pad;
    }

    if(child_yang_name == "pad-conf")
    {
        if(pad_conf == nullptr)
        {
            pad_conf = std::make_shared<Native::Service::PadConf>();
        }
        return pad_conf;
    }

    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Service::Prompt>();
        }
        return prompt;
    }

    if(child_yang_name == "timestamps")
    {
        if(timestamps == nullptr)
        {
            timestamps = std::make_shared<Native::Service::Timestamps>();
        }
        return timestamps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alignment != nullptr)
    {
        children["alignment"] = alignment;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(heartbeat != nullptr)
    {
        children["heartbeat"] = heartbeat;
    }

    if(pad != nullptr)
    {
        children["pad"] = pad;
    }

    if(pad_conf != nullptr)
    {
        children["pad-conf"] = pad_conf;
    }

    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    if(timestamps != nullptr)
    {
        children["timestamps"] = timestamps;
    }

    return children;
}

void Native::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "call-home")
    {
        call_home = value;
        call_home.value_namespace = name_space;
        call_home.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compress-config")
    {
        compress_config = value;
        compress_config.value_namespace = name_space;
        compress_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ip-fast-frag")
    {
        disable_ip_fast_frag = value;
        disable_ip_fast_frag.value_namespace = name_space;
        disable_ip_fast_frag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-callback")
    {
        exec_callback = value;
        exec_callback.value_namespace = name_space;
        exec_callback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-wait")
    {
        exec_wait = value;
        exec_wait.value_namespace = name_space;
        exec_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finger")
    {
        finger = value;
        finger.value_namespace = name_space;
        finger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide-telnet-addresses")
    {
        hide_telnet_addresses = value;
        hide_telnet_addresses.value_namespace = name_space;
        hide_telnet_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linenumber")
    {
        linenumber = value;
        linenumber.value_namespace = name_space;
        linenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-hidden")
    {
        log_hidden = value;
        log_hidden.value_namespace = name_space;
        log_hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nagle")
    {
        nagle = value;
        nagle.value_namespace = name_space;
        nagle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-slip-prompts")
    {
        old_slip_prompts = value;
        old_slip_prompts.value_namespace = name_space;
        old_slip_prompts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-encryption")
    {
        password_encryption = value;
        password_encryption.value_namespace = name_space;
        password_encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-recovery")
    {
        password_recovery = value;
        password_recovery.value_namespace = name_space;
        password_recovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pt-vty-logging")
    {
        pt_vty_logging = value;
        pt_vty_logging.value_namespace = name_space;
        pt_vty_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-numbers")
    {
        sequence_numbers = value;
        sequence_numbers.value_namespace = name_space;
        sequence_numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-log")
    {
        slave_log = value;
        slave_log.value_namespace = name_space;
        slave_log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-keepalives-in")
    {
        tcp_keepalives_in = value;
        tcp_keepalives_in.value_namespace = name_space;
        tcp_keepalives_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-keepalives-out")
    {
        tcp_keepalives_out = value;
        tcp_keepalives_out.value_namespace = name_space;
        tcp_keepalives_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-small-servers")
    {
        tcp_small_servers = value;
        tcp_small_servers.value_namespace = name_space;
        tcp_small_servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telnet-zeroidle")
    {
        telnet_zeroidle = value;
        telnet_zeroidle.value_namespace = name_space;
        telnet_zeroidle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-small-servers")
    {
        udp_small_servers = value;
        udp_small_servers.value_namespace = name_space;
        udp_small_servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-transceiver")
    {
        unsupported_transceiver = value;
        unsupported_transceiver.value_namespace = name_space;
        unsupported_transceiver.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "call-home")
    {
        call_home.yfilter = yfilter;
    }
    if(value_path == "compress-config")
    {
        compress_config.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "disable-ip-fast-frag")
    {
        disable_ip_fast_frag.yfilter = yfilter;
    }
    if(value_path == "exec-callback")
    {
        exec_callback.yfilter = yfilter;
    }
    if(value_path == "exec-wait")
    {
        exec_wait.yfilter = yfilter;
    }
    if(value_path == "finger")
    {
        finger.yfilter = yfilter;
    }
    if(value_path == "hide-telnet-addresses")
    {
        hide_telnet_addresses.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "linenumber")
    {
        linenumber.yfilter = yfilter;
    }
    if(value_path == "log-hidden")
    {
        log_hidden.yfilter = yfilter;
    }
    if(value_path == "nagle")
    {
        nagle.yfilter = yfilter;
    }
    if(value_path == "old-slip-prompts")
    {
        old_slip_prompts.yfilter = yfilter;
    }
    if(value_path == "password-encryption")
    {
        password_encryption.yfilter = yfilter;
    }
    if(value_path == "password-recovery")
    {
        password_recovery.yfilter = yfilter;
    }
    if(value_path == "pt-vty-logging")
    {
        pt_vty_logging.yfilter = yfilter;
    }
    if(value_path == "sequence-numbers")
    {
        sequence_numbers.yfilter = yfilter;
    }
    if(value_path == "slave-log")
    {
        slave_log.yfilter = yfilter;
    }
    if(value_path == "tcp-keepalives-in")
    {
        tcp_keepalives_in.yfilter = yfilter;
    }
    if(value_path == "tcp-keepalives-out")
    {
        tcp_keepalives_out.yfilter = yfilter;
    }
    if(value_path == "tcp-small-servers")
    {
        tcp_small_servers.yfilter = yfilter;
    }
    if(value_path == "telnet-zeroidle")
    {
        telnet_zeroidle.yfilter = yfilter;
    }
    if(value_path == "udp-small-servers")
    {
        udp_small_servers.yfilter = yfilter;
    }
    if(value_path == "unsupported-transceiver")
    {
        unsupported_transceiver.yfilter = yfilter;
    }
}

bool Native::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alignment" || name == "counters" || name == "heartbeat" || name == "pad" || name == "pad-conf" || name == "prompt" || name == "timestamps" || name == "call-home" || name == "compress-config" || name == "config" || name == "dhcp" || name == "disable-ip-fast-frag" || name == "exec-callback" || name == "exec-wait" || name == "finger" || name == "hide-telnet-addresses" || name == "internal" || name == "linenumber" || name == "log-hidden" || name == "nagle" || name == "old-slip-prompts" || name == "password-encryption" || name == "password-recovery" || name == "pt-vty-logging" || name == "sequence-numbers" || name == "slave-log" || name == "tcp-keepalives-in" || name == "tcp-keepalives-out" || name == "tcp-small-servers" || name == "telnet-zeroidle" || name == "udp-small-servers" || name == "unsupported-transceiver")
        return true;
    return false;
}

Native::Service::Alignment::Alignment()
    :
    detection{YType::empty, "detection"},
    logging{YType::empty, "logging"}
{

    yang_name = "alignment"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Alignment::~Alignment()
{
}

bool Native::Service::Alignment::has_data() const
{
    return detection.is_set
	|| logging.is_set;
}

bool Native::Service::Alignment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Native::Service::Alignment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Alignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alignment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Alignment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Alignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Alignment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Alignment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Alignment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Service::Alignment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "logging")
        return true;
    return false;
}

Native::Service::Counters::Counters()
    :
    max(std::make_shared<Native::Service::Counters::Max>())
{
    max->parent = this;

    yang_name = "counters"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Counters::~Counters()
{
}

bool Native::Service::Counters::has_data() const
{
    return (max !=  nullptr && max->has_data());
}

bool Native::Service::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (max !=  nullptr && max->has_operation());
}

std::string Native::Service::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max")
    {
        if(max == nullptr)
        {
            max = std::make_shared<Native::Service::Counters::Max>();
        }
        return max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max != nullptr)
    {
        children["max"] = max;
    }

    return children;
}

void Native::Service::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Service::Counters::Max::Max()
    :
    age{YType::uint8, "age"}
{

    yang_name = "max"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Counters::Max::~Max()
{
}

bool Native::Service::Counters::Max::has_data() const
{
    return age.is_set;
}

bool Native::Service::Counters::Max::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age.yfilter);
}

std::string Native::Service::Counters::Max::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Counters::Max::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Counters::Max::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Counters::Max::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Counters::Max::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Counters::Max::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Counters::Max::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
}

bool Native::Service::Counters::Max::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age")
        return true;
    return false;
}

Native::Service::Heartbeat::Heartbeat()
    :
    fatal_count{YType::uint8, "fatal-count"},
    interrupt_interval{YType::uint8, "interrupt-interval"},
    interrupt_max{YType::uint8, "interrupt-max"},
    transmit_interval{YType::uint8, "transmit-interval"},
    warning_timeout{YType::uint8, "warning-timeout"}
{

    yang_name = "heartbeat"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Heartbeat::~Heartbeat()
{
}

bool Native::Service::Heartbeat::has_data() const
{
    return fatal_count.is_set
	|| interrupt_interval.is_set
	|| interrupt_max.is_set
	|| transmit_interval.is_set
	|| warning_timeout.is_set;
}

bool Native::Service::Heartbeat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fatal_count.yfilter)
	|| ydk::is_set(interrupt_interval.yfilter)
	|| ydk::is_set(interrupt_max.yfilter)
	|| ydk::is_set(transmit_interval.yfilter)
	|| ydk::is_set(warning_timeout.yfilter);
}

std::string Native::Service::Heartbeat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Heartbeat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heartbeat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Heartbeat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fatal_count.is_set || is_set(fatal_count.yfilter)) leaf_name_data.push_back(fatal_count.get_name_leafdata());
    if (interrupt_interval.is_set || is_set(interrupt_interval.yfilter)) leaf_name_data.push_back(interrupt_interval.get_name_leafdata());
    if (interrupt_max.is_set || is_set(interrupt_max.yfilter)) leaf_name_data.push_back(interrupt_max.get_name_leafdata());
    if (transmit_interval.is_set || is_set(transmit_interval.yfilter)) leaf_name_data.push_back(transmit_interval.get_name_leafdata());
    if (warning_timeout.is_set || is_set(warning_timeout.yfilter)) leaf_name_data.push_back(warning_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Heartbeat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Heartbeat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Heartbeat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fatal-count")
    {
        fatal_count = value;
        fatal_count.value_namespace = name_space;
        fatal_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interrupt-interval")
    {
        interrupt_interval = value;
        interrupt_interval.value_namespace = name_space;
        interrupt_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interrupt-max")
    {
        interrupt_max = value;
        interrupt_max.value_namespace = name_space;
        interrupt_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval = value;
        transmit_interval.value_namespace = name_space;
        transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-timeout")
    {
        warning_timeout = value;
        warning_timeout.value_namespace = name_space;
        warning_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Heartbeat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fatal-count")
    {
        fatal_count.yfilter = yfilter;
    }
    if(value_path == "interrupt-interval")
    {
        interrupt_interval.yfilter = yfilter;
    }
    if(value_path == "interrupt-max")
    {
        interrupt_max.yfilter = yfilter;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval.yfilter = yfilter;
    }
    if(value_path == "warning-timeout")
    {
        warning_timeout.yfilter = yfilter;
    }
}

bool Native::Service::Heartbeat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fatal-count" || name == "interrupt-interval" || name == "interrupt-max" || name == "transmit-interval" || name == "warning-timeout")
        return true;
    return false;
}

Native::Service::Pad::Pad()
    :
    cmns{YType::empty, "cmns"},
    from_xot{YType::empty, "from-xot"},
    to_xot{YType::empty, "to-xot"}
{

    yang_name = "pad"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Pad::~Pad()
{
}

bool Native::Service::Pad::has_data() const
{
    return cmns.is_set
	|| from_xot.is_set
	|| to_xot.is_set;
}

bool Native::Service::Pad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmns.yfilter)
	|| ydk::is_set(from_xot.yfilter)
	|| ydk::is_set(to_xot.yfilter);
}

std::string Native::Service::Pad::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Pad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Pad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmns.is_set || is_set(cmns.yfilter)) leaf_name_data.push_back(cmns.get_name_leafdata());
    if (from_xot.is_set || is_set(from_xot.yfilter)) leaf_name_data.push_back(from_xot.get_name_leafdata());
    if (to_xot.is_set || is_set(to_xot.yfilter)) leaf_name_data.push_back(to_xot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Pad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Pad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Pad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmns")
    {
        cmns = value;
        cmns.value_namespace = name_space;
        cmns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-xot")
    {
        from_xot = value;
        from_xot.value_namespace = name_space;
        from_xot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-xot")
    {
        to_xot = value;
        to_xot.value_namespace = name_space;
        to_xot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Pad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmns")
    {
        cmns.yfilter = yfilter;
    }
    if(value_path == "from-xot")
    {
        from_xot.yfilter = yfilter;
    }
    if(value_path == "to-xot")
    {
        to_xot.yfilter = yfilter;
    }
}

bool Native::Service::Pad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmns" || name == "from-xot" || name == "to-xot")
        return true;
    return false;
}

Native::Service::PadConf::PadConf()
    :
    pad{YType::boolean, "pad"}
{

    yang_name = "pad-conf"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::PadConf::~PadConf()
{
}

bool Native::Service::PadConf::has_data() const
{
    return pad.is_set;
}

bool Native::Service::PadConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pad.yfilter);
}

std::string Native::Service::PadConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::PadConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pad-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::PadConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pad.is_set || is_set(pad.yfilter)) leaf_name_data.push_back(pad.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::PadConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::PadConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::PadConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pad")
    {
        pad = value;
        pad.value_namespace = name_space;
        pad.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::PadConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pad")
    {
        pad.yfilter = yfilter;
    }
}

bool Native::Service::PadConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pad")
        return true;
    return false;
}

Native::Service::Prompt::Prompt()
    :
    config{YType::empty, "config"}
{

    yang_name = "prompt"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Prompt::~Prompt()
{
}

bool Native::Service::Prompt::has_data() const
{
    return config.is_set;
}

bool Native::Service::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter);
}

std::string Native::Service::Prompt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
}

bool Native::Service::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Native::Service::Timestamps::Timestamps()
    :
    debug(std::make_shared<Native::Service::Timestamps::Debug>())
	,log(std::make_shared<Native::Service::Timestamps::Log>())
{
    debug->parent = this;
    log->parent = this;

    yang_name = "timestamps"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::~Timestamps()
{
}

bool Native::Service::Timestamps::has_data() const
{
    return (debug !=  nullptr && debug->has_data())
	|| (log !=  nullptr && log->has_data());
}

bool Native::Service::Timestamps::has_operation() const
{
    return is_set(yfilter)
	|| (debug !=  nullptr && debug->has_operation())
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Service::Timestamps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Native::Service::Timestamps::Debug>();
        }
        return debug;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Service::Timestamps::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Service::Timestamps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug" || name == "log")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Debug()
    :
    uptime{YType::empty, "uptime"}
    	,
    datetime(nullptr) // presence node
{

    yang_name = "debug"; yang_parent_name = "timestamps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::~Debug()
{
}

bool Native::Service::Timestamps::Debug::has_data() const
{
    return uptime.is_set
	|| (datetime !=  nullptr && datetime->has_data());
}

bool Native::Service::Timestamps::Debug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (datetime !=  nullptr && datetime->has_operation());
}

std::string Native::Service::Timestamps::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datetime")
    {
        if(datetime == nullptr)
        {
            datetime = std::make_shared<Native::Service::Timestamps::Debug::Datetime>();
        }
        return datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(datetime != nullptr)
    {
        children["datetime"] = datetime;
    }

    return children;
}

void Native::Service::Timestamps::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datetime" || name == "uptime")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Datetime()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{

    yang_name = "datetime"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::~Datetime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::has_operation() const
{
    return is_set(yfilter)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Localtime()
    :
    msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{

    yang_name = "localtime"; yang_parent_name = "datetime"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Localtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Msec()
    :
    show_timezone{YType::empty, "show-timezone"},
    year{YType::empty, "year"}
{

    yang_name = "msec"; yang_parent_name = "localtime"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_data() const
{
    return show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::ShowTimezone()
    :
    msec{YType::empty, "msec"},
    year{YType::empty, "year"}
{

    yang_name = "show-timezone"; yang_parent_name = "localtime"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_data() const
{
    return msec.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Year()
    :
    msec{YType::empty, "msec"},
    show_timezone{YType::empty, "show-timezone"}
{

    yang_name = "year"; yang_parent_name = "localtime"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_data() const
{
    return msec.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Msec()
    :
    localtime(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{

    yang_name = "msec"; yang_parent_name = "datetime"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_operation() const
{
    return is_set(yfilter)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Localtime()
    :
    show_timezone{YType::empty, "show-timezone"},
    year{YType::empty, "year"}
{

    yang_name = "localtime"; yang_parent_name = "msec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_data() const
{
    return show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"},
    year{YType::empty, "year"}
{

    yang_name = "show-timezone"; yang_parent_name = "msec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_data() const
{
    return localtime.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::Year()
    :
    localtime{YType::empty, "localtime"},
    show_timezone{YType::empty, "show-timezone"}
{

    yang_name = "year"; yang_parent_name = "msec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_data() const
{
    return localtime.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::ShowTimezone()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,year(nullptr) // presence node
{

    yang_name = "show-timezone"; yang_parent_name = "datetime"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Localtime()
    :
    msec{YType::empty, "msec"},
    year{YType::empty, "year"}
{

    yang_name = "localtime"; yang_parent_name = "show-timezone"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_data() const
{
    return msec.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Msec()
    :
    localtime{YType::empty, "localtime"},
    year{YType::empty, "year"}
{

    yang_name = "msec"; yang_parent_name = "show-timezone"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_data() const
{
    return localtime.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Year()
    :
    localtime{YType::empty, "localtime"},
    msec{YType::empty, "msec"}
{

    yang_name = "year"; yang_parent_name = "show-timezone"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_data() const
{
    return localtime.is_set
	|| msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Year()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{

    yang_name = "year"; yang_parent_name = "datetime"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_operation() const
{
    return is_set(yfilter)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Year::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Localtime()
    :
    msec{YType::empty, "msec"},
    show_timezone{YType::empty, "show-timezone"}
{

    yang_name = "localtime"; yang_parent_name = "year"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_data() const
{
    return msec.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::Msec()
    :
    localtime{YType::empty, "localtime"},
    show_timezone{YType::empty, "show-timezone"}
{

    yang_name = "msec"; yang_parent_name = "year"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_data() const
{
    return localtime.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"},
    msec{YType::empty, "msec"}
{

    yang_name = "show-timezone"; yang_parent_name = "year"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_data() const
{
    return localtime.is_set
	|| msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec")
        return true;
    return false;
}

Native::Service::Timestamps::Log::Log()
    :
    uptime{YType::empty, "uptime"}
    	,
    datetime(nullptr) // presence node
{

    yang_name = "log"; yang_parent_name = "timestamps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Log::~Log()
{
}

bool Native::Service::Timestamps::Log::has_data() const
{
    return uptime.is_set
	|| (datetime !=  nullptr && datetime->has_data());
}

bool Native::Service::Timestamps::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (datetime !=  nullptr && datetime->has_operation());
}

std::string Native::Service::Timestamps::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datetime")
    {
        if(datetime == nullptr)
        {
            datetime = std::make_shared<Native::Service::Timestamps::Log::Datetime>();
        }
        return datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(datetime != nullptr)
    {
        children["datetime"] = datetime;
    }

    return children;
}

void Native::Service::Timestamps::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datetime" || name == "uptime")
        return true;
    return false;
}

Native::Service::Timestamps::Log::Datetime::Datetime()
    :
    localtime{YType::empty, "localtime"},
    msec{YType::empty, "msec"},
    show_timezone{YType::empty, "show-timezone"},
    year{YType::empty, "year"}
{

    yang_name = "datetime"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Service::Timestamps::Log::Datetime::~Datetime()
{
}

bool Native::Service::Timestamps::Log::Datetime::has_data() const
{
    return localtime.is_set
	|| msec.is_set
	|| show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Log::Datetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Log::Datetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Log::Datetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Log::Datetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Log::Datetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::ServiceChain::ServiceChain()
    :
    service_function_forwarder(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder>())
{
    service_function_forwarder->parent = this;

    yang_name = "service-chain"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceChain::~ServiceChain()
{
}

bool Native::ServiceChain::has_data() const
{
    for (std::size_t index=0; index<service_function.size(); index++)
    {
        if(service_function[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_path.size(); index++)
    {
        if(service_path[index]->has_data())
            return true;
    }
    return (service_function_forwarder !=  nullptr && service_function_forwarder->has_data());
}

bool Native::ServiceChain::has_operation() const
{
    for (std::size_t index=0; index<service_function.size(); index++)
    {
        if(service_function[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_path.size(); index++)
    {
        if(service_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_operation());
}

std::string Native::ServiceChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-function")
    {
        for(auto const & c : service_function)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceChain::ServiceFunction>();
        c->parent = this;
        service_function.push_back(c);
        return c;
    }

    if(child_yang_name == "service-function-forwarder")
    {
        if(service_function_forwarder == nullptr)
        {
            service_function_forwarder = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder>();
        }
        return service_function_forwarder;
    }

    if(child_yang_name == "service-path")
    {
        for(auto const & c : service_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceChain::ServicePath>();
        c->parent = this;
        service_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_function)
    {
        children[c->get_segment_path()] = c;
    }

    if(service_function_forwarder != nullptr)
    {
        children["service-function-forwarder"] = service_function_forwarder;
    }

    for (auto const & c : service_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-function" || name == "service-function-forwarder" || name == "service-path")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ServiceFunction()
    :
    name{YType::str, "name"}
    	,
    config_service_chain_sf_mode(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode>())
{
    config_service_chain_sf_mode->parent = this;

    yang_name = "service-function"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceChain::ServiceFunction::~ServiceFunction()
{
}

bool Native::ServiceChain::ServiceFunction::has_data() const
{
    return name.is_set
	|| (config_service_chain_sf_mode !=  nullptr && config_service_chain_sf_mode->has_data());
}

bool Native::ServiceChain::ServiceFunction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config_service_chain_sf_mode !=  nullptr && config_service_chain_sf_mode->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-function" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-service-chain-sf-mode")
    {
        if(config_service_chain_sf_mode == nullptr)
        {
            config_service_chain_sf_mode = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode>();
        }
        return config_service_chain_sf_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_service_chain_sf_mode != nullptr)
    {
        children["config-service-chain-sf-mode"] = config_service_chain_sf_mode;
    }

    return children;
}

void Native::ServiceChain::ServiceFunction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-service-chain-sf-mode" || name == "name")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::ConfigServiceChainSfMode()
    :
    description{YType::str, "description"}
    	,
    encapsulation(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation>())
	,ip(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip>())
{
    encapsulation->parent = this;
    ip->parent = this;

    yang_name = "config-service-chain-sf-mode"; yang_parent_name = "service-function"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::~ConfigServiceChainSfMode()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::has_data() const
{
    return description.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-service-chain-sf-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "ip" || name == "description")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Encapsulation()
    :
    none{YType::empty, "none"}
    	,
    gre(nullptr) // presence node
{

    yang_name = "encapsulation"; yang_parent_name = "config-service-chain-sf-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::~Encapsulation()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::has_data() const
{
    return none.is_set
	|| (gre !=  nullptr && gre->has_data());
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (gre !=  nullptr && gre->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre>();
        }
        return gre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    return children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre" || name == "none")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Gre()
    :
    enhanced{YType::enumeration, "enhanced"}
{

    yang_name = "gre"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::~Gre()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::has_data() const
{
    return enhanced.is_set;
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enhanced.yfilter);
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "config-service-chain-sf-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::has_data() const
{
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFunctionForwarder()
    :
    local(nullptr) // presence node
{

    yang_name = "service-function-forwarder"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceChain::ServiceFunctionForwarder::~ServiceFunctionForwarder()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::has_data() const
{
    for (std::size_t index=0; index<service_ff_name.size(); index++)
    {
        if(service_ff_name[index]->has_data())
            return true;
    }
    return (local !=  nullptr && local->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::has_operation() const
{
    for (std::size_t index=0; index<service_ff_name.size(); index++)
    {
        if(service_ff_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunctionForwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-function-forwarder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local>();
        }
        return local;
    }

    if(child_yang_name == "service-ff-name")
    {
        for(auto const & c : service_ff_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName>();
        c->parent = this;
        service_ff_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    for (auto const & c : service_ff_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceChain::ServiceFunctionForwarder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "service-ff-name")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Local()
    :
    description{YType::str, "description"}
    	,
    ip(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local::Ip>())
{
    ip->parent = this;

    yang_name = "local"; yang_parent_name = "service-function-forwarder"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceChain::ServiceFunctionForwarder::Local::~Local()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::has_data() const
{
    return description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "description")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::has_data() const
{
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/local/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::ServiceFfName()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    ip(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip>())
{
    ip->parent = this;

    yang_name = "service-ff-name"; yang_parent_name = "service-function-forwarder"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::~ServiceFfName()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-ff-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "name" || name == "description")
        return true;
    return false;
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "service-ff-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::has_data() const
{
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::ServiceChain::ServicePath::ServicePath()
    :
    service_path_id{YType::uint32, "service-path-id"}
    	,
    config_service_chain_path_mode(std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode>())
{
    config_service_chain_path_mode->parent = this;

    yang_name = "service-path"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceChain::ServicePath::~ServicePath()
{
}

bool Native::ServiceChain::ServicePath::has_data() const
{
    return service_path_id.is_set
	|| (config_service_chain_path_mode !=  nullptr && config_service_chain_path_mode->has_data());
}

bool Native::ServiceChain::ServicePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_path_id.yfilter)
	|| (config_service_chain_path_mode !=  nullptr && config_service_chain_path_mode->has_operation());
}

std::string Native::ServiceChain::ServicePath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceChain::ServicePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-path" <<"[service-path-id='" <<service_path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServicePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_path_id.is_set || is_set(service_path_id.yfilter)) leaf_name_data.push_back(service_path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServicePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-service-chain-path-mode")
    {
        if(config_service_chain_path_mode == nullptr)
        {
            config_service_chain_path_mode = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode>();
        }
        return config_service_chain_path_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServicePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_service_chain_path_mode != nullptr)
    {
        children["config-service-chain-path-mode"] = config_service_chain_path_mode;
    }

    return children;
}

void Native::ServiceChain::ServicePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-path-id")
    {
        service_path_id = value;
        service_path_id.value_namespace = name_space;
        service_path_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServicePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-path-id")
    {
        service_path_id.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServicePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-service-chain-path-mode" || name == "service-path-id")
        return true;
    return false;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ConfigServiceChainPathMode()
    :
    description{YType::str, "description"}
    	,
    service_index(std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex>())
{
    service_index->parent = this;

    yang_name = "config-service-chain-path-mode"; yang_parent_name = "service-path"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::~ConfigServiceChainPathMode()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::has_data() const
{
    return description.is_set
	|| (service_index !=  nullptr && service_index->has_data());
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (service_index !=  nullptr && service_index->has_operation());
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-service-chain-path-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-index")
    {
        if(service_index == nullptr)
        {
            service_index = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex>();
        }
        return service_index;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_index != nullptr)
    {
        children["service-index"] = service_index;
    }

    return children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-index" || name == "description")
        return true;
    return false;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::ServiceIndex()
{

    yang_name = "service-index"; yang_parent_name = "config-service-chain-path-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::~ServiceIndex()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::has_data() const
{
    for (std::size_t index=0; index<services.size(); index++)
    {
        if(services[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::has_operation() const
{
    for (std::size_t index=0; index<services.size(); index++)
    {
        if(services[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "services")
    {
        for(auto const & c : services)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services>();
        c->parent = this;
        services.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : services)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "services")
        return true;
    return false;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::Services()
    :
    service_index_id{YType::uint8, "service-index-id"},
    service_function{YType::str, "service-function"},
    service_function_forwarder{YType::str, "service-function-forwarder"},
    terminate{YType::empty, "terminate"}
{

    yang_name = "services"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::~Services()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::has_data() const
{
    return service_index_id.is_set
	|| service_function.is_set
	|| service_function_forwarder.is_set
	|| terminate.is_set;
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_index_id.yfilter)
	|| ydk::is_set(service_function.yfilter)
	|| ydk::is_set(service_function_forwarder.yfilter)
	|| ydk::is_set(terminate.yfilter);
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services" <<"[service-index-id='" <<service_index_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_index_id.is_set || is_set(service_index_id.yfilter)) leaf_name_data.push_back(service_index_id.get_name_leafdata());
    if (service_function.is_set || is_set(service_function.yfilter)) leaf_name_data.push_back(service_function.get_name_leafdata());
    if (service_function_forwarder.is_set || is_set(service_function_forwarder.yfilter)) leaf_name_data.push_back(service_function_forwarder.get_name_leafdata());
    if (terminate.is_set || is_set(terminate.yfilter)) leaf_name_data.push_back(terminate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-index-id")
    {
        service_index_id = value;
        service_index_id.value_namespace = name_space;
        service_index_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-function")
    {
        service_function = value;
        service_function.value_namespace = name_space;
        service_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-function-forwarder")
    {
        service_function_forwarder = value;
        service_function_forwarder.value_namespace = name_space;
        service_function_forwarder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminate")
    {
        terminate = value;
        terminate.value_namespace = name_space;
        terminate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-index-id")
    {
        service_index_id.yfilter = yfilter;
    }
    if(value_path == "service-function")
    {
        service_function.yfilter = yfilter;
    }
    if(value_path == "service-function-forwarder")
    {
        service_function_forwarder.yfilter = yfilter;
    }
    if(value_path == "terminate")
    {
        terminate.yfilter = yfilter;
    }
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-index-id" || name == "service-function" || name == "service-function-forwarder" || name == "terminate")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceInsertion()
    :
    acg_reload_delay{YType::uint16, "Cisco-IOS-XE-service-insertion:acg-reload-delay"}
    	,
    service_context(std::make_shared<Native::ServiceInsertion::ServiceContext>())
	,swap(std::make_shared<Native::ServiceInsertion::Swap>())
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
    for (std::size_t index=0; index<appnav_controller_group.size(); index++)
    {
        if(appnav_controller_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.size(); index++)
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
    for (std::size_t index=0; index<appnav_controller_group.size(); index++)
    {
        if(appnav_controller_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.size(); index++)
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
    if(child_yang_name == "appnav-controller-group")
    {
        for(auto const & c : appnav_controller_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::AppnavControllerGroup>();
        c->parent = this;
        appnav_controller_group.push_back(c);
        return c;
    }

    if(child_yang_name == "service-context")
    {
        if(service_context == nullptr)
        {
            service_context = std::make_shared<Native::ServiceInsertion::ServiceContext>();
        }
        return service_context;
    }

    if(child_yang_name == "service-node-group")
    {
        for(auto const & c : service_node_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::ServiceNodeGroup>();
        c->parent = this;
        service_node_group.push_back(c);
        return c;
    }

    if(child_yang_name == "swap")
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
    for (auto const & c : appnav_controller_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(service_context != nullptr)
    {
        children["service-context"] = service_context;
    }

    for (auto const & c : service_node_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    return children;
}

void Native::ServiceInsertion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acg-reload-delay")
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
    path_buffer << "Cisco-IOS-XE-service-insertion:appnav-controller-group" <<"[group-name='" <<group_name <<"']";
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
{

    yang_name = "service-context"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceInsertion::ServiceContext::~ServiceContext()
{
}

bool Native::ServiceInsertion::ServiceContext::has_data() const
{
    for (std::size_t index=0; index<waas.size(); index++)
    {
        if(waas[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceInsertion::ServiceContext::has_operation() const
{
    for (std::size_t index=0; index<waas.size(); index++)
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
        for(auto const & c : waas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas>();
        c->parent = this;
        waas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : waas)
    {
        children[c->get_segment_path()] = c;
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
    enable{YType::empty, "enable"},
    service_node_group{YType::str, "service-node-group"},
    service_policy{YType::str, "service-policy"}
    	,
    authentication(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>())
	,vrf(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>())
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
    return name.is_set
	|| appnav_controller_group.is_set
	|| enable.is_set
	|| service_node_group.is_set
	|| service_policy.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(appnav_controller_group.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(service_policy.yfilter)
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
    path_buffer << "waas" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::Waas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (appnav_controller_group.is_set || is_set(appnav_controller_group.yfilter)) leaf_name_data.push_back(appnav_controller_group.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

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
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "vrf" || name == "name" || name == "appnav-controller-group" || name == "enable" || name == "service-node-group" || name == "service-policy")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::Authentication()
    :
    encrypt{YType::enumeration, "encrypt"},
    key{YType::empty, "key"},
    sha1{YType::empty, "sha1"},
    string{YType::str, "string"}
{

    yang_name = "authentication"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::~Authentication()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_data() const
{
    return encrypt.is_set
	|| key.is_set
	|| sha1.is_set
	|| string.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(sha1.yfilter)
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

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
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
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "key" || name == "sha1" || name == "string")
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
    path_buffer << "Cisco-IOS-XE-service-insertion:service-node-group" <<"[name='" <<name <<"']";
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

Native::ServiceList::ServiceList()
{

    yang_name = "service-list"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceList::~ServiceList()
{
}

bool Native::ServiceList::has_data() const
{
    for (std::size_t index=0; index<mdns_sd.size(); index++)
    {
        if(mdns_sd[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceList::has_operation() const
{
    for (std::size_t index=0; index<mdns_sd.size(); index++)
    {
        if(mdns_sd[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-discovery:service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdns-sd")
    {
        for(auto const & c : mdns_sd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceList::MdnsSd>();
        c->parent = this;
        mdns_sd.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mdns_sd)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-sd")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::MdnsSd()
    :
    service_list_name{YType::str, "service-list-name"}
    	,
    query(std::make_shared<Native::ServiceList::MdnsSd::Query>())
{
    query->parent = this;

    yang_name = "mdns-sd"; yang_parent_name = "service-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceList::MdnsSd::~MdnsSd()
{
}

bool Native::ServiceList::MdnsSd::has_data() const
{
    for (std::size_t index=0; index<deny.size(); index++)
    {
        if(deny[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<permit.size(); index++)
    {
        if(permit[index]->has_data())
            return true;
    }
    return service_list_name.is_set
	|| (query !=  nullptr && query->has_data());
}

bool Native::ServiceList::MdnsSd::has_operation() const
{
    for (std::size_t index=0; index<deny.size(); index++)
    {
        if(deny[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<permit.size(); index++)
    {
        if(permit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(service_list_name.yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::ServiceList::MdnsSd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-service-discovery:service-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceList::MdnsSd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdns-sd" <<"[service-list-name='" <<service_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_list_name.is_set || is_set(service_list_name.yfilter)) leaf_name_data.push_back(service_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        for(auto const & c : deny)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceList::MdnsSd::Deny>();
        c->parent = this;
        deny.push_back(c);
        return c;
    }

    if(child_yang_name == "permit")
    {
        for(auto const & c : permit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceList::MdnsSd::Permit>();
        c->parent = this;
        permit.push_back(c);
        return c;
    }

    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::ServiceList::MdnsSd::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : deny)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : permit)
    {
        children[c->get_segment_path()] = c;
    }

    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::ServiceList::MdnsSd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-list-name")
    {
        service_list_name = value;
        service_list_name.value_namespace = name_space;
        service_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-list-name")
    {
        service_list_name.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "query" || name == "service-list-name")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Deny()
    :
    deny_pack{YType::uint8, "deny-pack"}
    	,
    match(std::make_shared<Native::ServiceList::MdnsSd::Deny::Match>())
{
    match->parent = this;

    yang_name = "deny"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Deny::~Deny()
{
}

bool Native::ServiceList::MdnsSd::Deny::has_data() const
{
    return deny_pack.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::ServiceList::MdnsSd::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny_pack.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::ServiceList::MdnsSd::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny" <<"[deny-pack='" <<deny_pack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny_pack.is_set || is_set(deny_pack.yfilter)) leaf_name_data.push_back(deny_pack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::ServiceList::MdnsSd::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-pack")
    {
        deny_pack = value;
        deny_pack.value_namespace = name_space;
        deny_pack.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-pack")
    {
        deny_pack.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "deny-pack")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::Match()
    :
    learnt_interface{YType::empty, "learnt-interface"},
    service_instance{YType::str, "service-instance"},
    service_type{YType::str, "service-type"}
    	,
    location(nullptr) // presence node
	,message_type(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Deny::Match::~Match()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_data() const
{
    return learnt_interface.is_set
	|| service_instance.is_set
	|| service_type.is_set
	|| (location !=  nullptr && location->has_data())
	|| (message_type !=  nullptr && message_type->has_data());
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learnt_interface.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (location !=  nullptr && location->has_operation())
	|| (message_type !=  nullptr && message_type->has_operation());
}

std::string Native::ServiceList::MdnsSd::Deny::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learnt_interface.is_set || is_set(learnt_interface.yfilter)) leaf_name_data.push_back(learnt_interface.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Deny::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match::Location>();
        }
        return location;
    }

    if(child_yang_name == "message-type")
    {
        if(message_type == nullptr)
        {
            message_type = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match::MessageType>();
        }
        return message_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Deny::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(location != nullptr)
    {
        children["location"] = location;
    }

    if(message_type != nullptr)
    {
        children["message-type"] = message_type;
    }

    return children;
}

void Native::ServiceList::MdnsSd::Deny::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface = value;
        learnt_interface.value_namespace = name_space;
        learnt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "message-type" || name == "learnt-interface" || name == "service-instance" || name == "service-type")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::Location::Location()
    :
    civic{YType::str, "civic"}
{

    yang_name = "location"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Deny::Match::Location::~Location()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_data() const
{
    return civic.is_set;
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(civic.yfilter);
}

std::string Native::ServiceList::MdnsSd::Deny::Match::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (civic.is_set || is_set(civic.yfilter)) leaf_name_data.push_back(civic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Deny::Match::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Deny::Match::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Deny::Match::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "civic")
    {
        civic = value;
        civic.value_namespace = name_space;
        civic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "civic")
    {
        civic.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::MessageType::MessageType()
    :
    announcement{YType::empty, "announcement"},
    any{YType::empty, "any"},
    query{YType::empty, "query"}
{

    yang_name = "message-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Deny::Match::MessageType::~MessageType()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_data() const
{
    return announcement.is_set
	|| any.is_set
	|| query.is_set;
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announcement.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(query.yfilter);
}

std::string Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.yfilter)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Deny::Match::MessageType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announcement")
    {
        announcement = value;
        announcement.value_namespace = name_space;
        announcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::MessageType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announcement")
    {
        announcement.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announcement" || name == "any" || name == "query")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Permit()
    :
    deny_pack{YType::uint8, "deny-pack"}
    	,
    match(std::make_shared<Native::ServiceList::MdnsSd::Permit::Match>())
{
    match->parent = this;

    yang_name = "permit"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Permit::~Permit()
{
}

bool Native::ServiceList::MdnsSd::Permit::has_data() const
{
    return deny_pack.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::ServiceList::MdnsSd::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny_pack.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::ServiceList::MdnsSd::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit" <<"[deny-pack='" <<deny_pack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny_pack.is_set || is_set(deny_pack.yfilter)) leaf_name_data.push_back(deny_pack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::ServiceList::MdnsSd::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-pack")
    {
        deny_pack = value;
        deny_pack.value_namespace = name_space;
        deny_pack.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-pack")
    {
        deny_pack.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "deny-pack")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::Match()
    :
    learnt_interface{YType::empty, "learnt-interface"},
    service_instance{YType::str, "service-instance"},
    service_type{YType::str, "service-type"}
    	,
    location(nullptr) // presence node
	,message_type(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Permit::Match::~Match()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_data() const
{
    return learnt_interface.is_set
	|| service_instance.is_set
	|| service_type.is_set
	|| (location !=  nullptr && location->has_data())
	|| (message_type !=  nullptr && message_type->has_data());
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learnt_interface.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (location !=  nullptr && location->has_operation())
	|| (message_type !=  nullptr && message_type->has_operation());
}

std::string Native::ServiceList::MdnsSd::Permit::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learnt_interface.is_set || is_set(learnt_interface.yfilter)) leaf_name_data.push_back(learnt_interface.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Permit::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match::Location>();
        }
        return location;
    }

    if(child_yang_name == "message-type")
    {
        if(message_type == nullptr)
        {
            message_type = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match::MessageType>();
        }
        return message_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Permit::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(location != nullptr)
    {
        children["location"] = location;
    }

    if(message_type != nullptr)
    {
        children["message-type"] = message_type;
    }

    return children;
}

void Native::ServiceList::MdnsSd::Permit::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface = value;
        learnt_interface.value_namespace = name_space;
        learnt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "message-type" || name == "learnt-interface" || name == "service-instance" || name == "service-type")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::Location::Location()
    :
    civic{YType::str, "civic"}
{

    yang_name = "location"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Permit::Match::Location::~Location()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_data() const
{
    return civic.is_set;
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(civic.yfilter);
}

std::string Native::ServiceList::MdnsSd::Permit::Match::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (civic.is_set || is_set(civic.yfilter)) leaf_name_data.push_back(civic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Permit::Match::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Permit::Match::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Permit::Match::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "civic")
    {
        civic = value;
        civic.value_namespace = name_space;
        civic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "civic")
    {
        civic.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::MessageType::MessageType()
    :
    announcement{YType::empty, "announcement"},
    any{YType::empty, "any"},
    query{YType::empty, "query"}
{

    yang_name = "message-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Permit::Match::MessageType::~MessageType()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_data() const
{
    return announcement.is_set
	|| any.is_set
	|| query.is_set;
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announcement.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(query.yfilter);
}

std::string Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.yfilter)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Permit::Match::MessageType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announcement")
    {
        announcement = value;
        announcement.value_namespace = name_space;
        announcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::MessageType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announcement")
    {
        announcement.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announcement" || name == "any" || name == "query")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Query::Query()
    :
    service_type{YType::str, "service-type"}
{

    yang_name = "query"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Query::~Query()
{
}

bool Native::ServiceList::MdnsSd::Query::has_data() const
{
    return service_type.is_set;
}

bool Native::ServiceList::MdnsSd::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_type.yfilter);
}

std::string Native::ServiceList::MdnsSd::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-type")
        return true;
    return false;
}

Native::ServiceRouting::ServiceRouting()
    :
    capabilities_manager{YType::boolean, "capabilities-manager"},
    mdns_sd{YType::empty, "mdns-sd"}
{

    yang_name = "service-routing"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceRouting::~ServiceRouting()
{
}

bool Native::ServiceRouting::has_data() const
{
    return capabilities_manager.is_set
	|| mdns_sd.is_set;
}

bool Native::ServiceRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capabilities_manager.yfilter)
	|| ydk::is_set(mdns_sd.yfilter);
}

std::string Native::ServiceRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-routing:service-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capabilities_manager.is_set || is_set(capabilities_manager.yfilter)) leaf_name_data.push_back(capabilities_manager.get_name_leafdata());
    if (mdns_sd.is_set || is_set(mdns_sd.yfilter)) leaf_name_data.push_back(mdns_sd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capabilities-manager")
    {
        capabilities_manager = value;
        capabilities_manager.value_namespace = name_space;
        capabilities_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdns-sd")
    {
        mdns_sd = value;
        mdns_sd.value_namespace = name_space;
        mdns_sd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capabilities-manager")
    {
        capabilities_manager.yfilter = yfilter;
    }
    if(value_path == "mdns-sd")
    {
        mdns_sd.yfilter = yfilter;
    }
}

bool Native::ServiceRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities-manager" || name == "mdns-sd")
        return true;
    return false;
}

Native::ServiceTemplate::ServiceTemplate()
    :
    word{YType::str, "word"},
    sgt{YType::uint16, "sgt"},
    vlan{YType::uint16, "vlan"}
    	,
    inactivity_timer(std::make_shared<Native::ServiceTemplate::InactivityTimer>())
	,linksec(std::make_shared<Native::ServiceTemplate::Linksec>())
	,voice(std::make_shared<Native::ServiceTemplate::Voice>())
{
    inactivity_timer->parent = this;
    linksec->parent = this;
    voice->parent = this;

    yang_name = "service-template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceTemplate::~ServiceTemplate()
{
}

bool Native::ServiceTemplate::has_data() const
{
    return word.is_set
	|| sgt.is_set
	|| vlan.is_set
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_data())
	|| (linksec !=  nullptr && linksec->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::ServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_operation())
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::ServiceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:service-template" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity-timer")
    {
        if(inactivity_timer == nullptr)
        {
            inactivity_timer = std::make_shared<Native::ServiceTemplate::InactivityTimer>();
        }
        return inactivity_timer;
    }

    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::ServiceTemplate::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::ServiceTemplate::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inactivity_timer != nullptr)
    {
        children["inactivity-timer"] = inactivity_timer;
    }

    if(linksec != nullptr)
    {
        children["linksec"] = linksec;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::ServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity-timer" || name == "linksec" || name == "voice" || name == "word" || name == "sgt" || name == "vlan")
        return true;
    return false;
}

Native::ServiceTemplate::InactivityTimer::InactivityTimer()
    :
    probe{YType::empty, "probe"},
    value_{YType::uint16, "value"}
{

    yang_name = "inactivity-timer"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceTemplate::InactivityTimer::~InactivityTimer()
{
}

bool Native::ServiceTemplate::InactivityTimer::has_data() const
{
    return probe.is_set
	|| value_.is_set;
}

bool Native::ServiceTemplate::InactivityTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::ServiceTemplate::InactivityTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::InactivityTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceTemplate::InactivityTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::InactivityTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::InactivityTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::InactivityTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::InactivityTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe" || name == "value")
        return true;
    return false;
}

Native::ServiceTemplate::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "linksec"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceTemplate::Linksec::~Linksec()
{
}

bool Native::ServiceTemplate::Linksec::has_data() const
{
    return policy.is_set;
}

bool Native::ServiceTemplate::Linksec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::ServiceTemplate::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::Linksec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceTemplate::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::Linksec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::Linksec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::Linksec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::ServiceTemplate::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceTemplate::Voice::~Voice()
{
}

bool Native::ServiceTemplate::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::ServiceTemplate::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::ServiceTemplate::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceTemplate::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Setup::Setup()
    :
    express{YType::boolean, "Cisco-IOS-XE-switch:express"}
{

    yang_name = "setup"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Setup::~Setup()
{
}

bool Native::Setup::has_data() const
{
    return express.is_set;
}

bool Native::Setup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(express.yfilter);
}

std::string Native::Setup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Setup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Setup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (express.is_set || is_set(express.yfilter)) leaf_name_data.push_back(express.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Setup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Setup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Setup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "express")
    {
        express = value;
        express.value_namespace = name_space;
        express.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Setup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "express")
    {
        express.yfilter = yfilter;
    }
}

bool Native::Setup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "express")
        return true;
    return false;
}

Native::Snmp::Snmp()
    :
    ifmib(std::make_shared<Native::Snmp::Ifmib>())
	,mib(std::make_shared<Native::Snmp::Mib>())
{
    ifmib->parent = this;
    mib->parent = this;

    yang_name = "snmp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::~Snmp()
{
}

bool Native::Snmp::has_data() const
{
    return (ifmib !=  nullptr && ifmib->has_data())
	|| (mib !=  nullptr && mib->has_data());
}

bool Native::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifmib !=  nullptr && ifmib->has_operation())
	|| (mib !=  nullptr && mib->has_operation());
}

std::string Native::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifmib")
    {
        if(ifmib == nullptr)
        {
            ifmib = std::make_shared<Native::Snmp::Ifmib>();
        }
        return ifmib;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Native::Snmp::Mib>();
        }
        return mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifmib != nullptr)
    {
        children["ifmib"] = ifmib;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    return children;
}

void Native::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifmib" || name == "mib")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifmib()
    :
    ifalias(std::make_shared<Native::Snmp::Ifmib::Ifalias>())
	,ifindex(std::make_shared<Native::Snmp::Ifmib::Ifindex>())
{
    ifalias->parent = this;
    ifindex->parent = this;

    yang_name = "ifmib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Ifmib::~Ifmib()
{
}

bool Native::Snmp::Ifmib::has_data() const
{
    return (ifalias !=  nullptr && ifalias->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data());
}

bool Native::Snmp::Ifmib::has_operation() const
{
    return is_set(yfilter)
	|| (ifalias !=  nullptr && ifalias->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation());
}

std::string Native::Snmp::Ifmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Ifmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ifmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Ifmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Ifmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifalias")
    {
        if(ifalias == nullptr)
        {
            ifalias = std::make_shared<Native::Snmp::Ifmib::Ifalias>();
        }
        return ifalias;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Snmp::Ifmib::Ifindex>();
        }
        return ifindex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Ifmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifalias != nullptr)
    {
        children["ifalias"] = ifalias;
    }

    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    return children;
}

void Native::Snmp::Ifmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Ifmib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Ifmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifalias" || name == "ifindex")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifalias::Ifalias()
    :
    long_{YType::empty, "long"}
{

    yang_name = "ifalias"; yang_parent_name = "ifmib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Ifmib::Ifalias::~Ifalias()
{
}

bool Native::Snmp::Ifmib::Ifalias::has_data() const
{
    return long_.is_set;
}

bool Native::Snmp::Ifmib::Ifalias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Snmp::Ifmib::Ifalias::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:ifmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Ifmib::Ifalias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifalias";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Ifmib::Ifalias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Ifmib::Ifalias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Ifmib::Ifalias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Ifmib::Ifalias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Ifmib::Ifalias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Snmp::Ifmib::Ifalias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "ifmib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Ifmib::Ifindex::~Ifindex()
{
}

bool Native::Snmp::Ifmib::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::Snmp::Ifmib::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Snmp::Ifmib::Ifindex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:ifmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Ifmib::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Ifmib::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Ifmib::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Ifmib::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Ifmib::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Ifmib::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Snmp::Ifmib::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Snmp::Mib::Mib()
    :
    bulkstat(std::make_shared<Native::Snmp::Mib::Bulkstat>())
	,community_map(std::make_shared<Native::Snmp::Mib::CommunityMap>())
	,persist(nullptr) // presence node
{
    bulkstat->parent = this;
    community_map->parent = this;

    yang_name = "mib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Mib::~Mib()
{
}

bool Native::Snmp::Mib::has_data() const
{
    return (bulkstat !=  nullptr && bulkstat->has_data())
	|| (community_map !=  nullptr && community_map->has_data())
	|| (persist !=  nullptr && persist->has_data());
}

bool Native::Snmp::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (bulkstat !=  nullptr && bulkstat->has_operation())
	|| (community_map !=  nullptr && community_map->has_operation())
	|| (persist !=  nullptr && persist->has_operation());
}

std::string Native::Snmp::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulkstat")
    {
        if(bulkstat == nullptr)
        {
            bulkstat = std::make_shared<Native::Snmp::Mib::Bulkstat>();
        }
        return bulkstat;
    }

    if(child_yang_name == "community-map")
    {
        if(community_map == nullptr)
        {
            community_map = std::make_shared<Native::Snmp::Mib::CommunityMap>();
        }
        return community_map;
    }

    if(child_yang_name == "persist")
    {
        if(persist == nullptr)
        {
            persist = std::make_shared<Native::Snmp::Mib::Persist>();
        }
        return persist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bulkstat != nullptr)
    {
        children["bulkstat"] = bulkstat;
    }

    if(community_map != nullptr)
    {
        children["community-map"] = community_map;
    }

    if(persist != nullptr)
    {
        children["persist"] = persist;
    }

    return children;
}

void Native::Snmp::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulkstat" || name == "community-map" || name == "persist")
        return true;
    return false;
}

Native::Snmp::Mib::Bulkstat::Bulkstat()
{

    yang_name = "bulkstat"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Mib::Bulkstat::~Bulkstat()
{
}

bool Native::Snmp::Mib::Bulkstat::has_data() const
{
    for (std::size_t index=0; index<object_list.size(); index++)
    {
        if(object_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Snmp::Mib::Bulkstat::has_operation() const
{
    for (std::size_t index=0; index<object_list.size(); index++)
    {
        if(object_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Snmp::Mib::Bulkstat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::Bulkstat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulkstat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::Bulkstat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Mib::Bulkstat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-list")
    {
        for(auto const & c : object_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Snmp::Mib::Bulkstat::ObjectList>();
        c->parent = this;
        object_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::Bulkstat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : object_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Snmp::Mib::Bulkstat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::Bulkstat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::Bulkstat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-list")
        return true;
    return false;
}

Native::Snmp::Mib::Bulkstat::ObjectList::ObjectList()
    :
    name{YType::str, "name"}
{

    yang_name = "object-list"; yang_parent_name = "bulkstat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Mib::Bulkstat::ObjectList::~ObjectList()
{
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_data() const
{
    return name.is_set;
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Snmp::Mib::Bulkstat::ObjectList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/bulkstat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::Bulkstat::ObjectList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::Bulkstat::ObjectList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Mib::Bulkstat::ObjectList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::Bulkstat::ObjectList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Mib::Bulkstat::ObjectList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::Bulkstat::ObjectList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Snmp::Mib::CommunityMap::CommunityMap()
{

    yang_name = "community-map"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Mib::CommunityMap::~CommunityMap()
{
}

bool Native::Snmp::Mib::CommunityMap::has_data() const
{
    for (std::size_t index=0; index<community_map_list.size(); index++)
    {
        if(community_map_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Snmp::Mib::CommunityMap::has_operation() const
{
    for (std::size_t index=0; index<community_map_list.size(); index++)
    {
        if(community_map_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Snmp::Mib::CommunityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::CommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::CommunityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Mib::CommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-map-list")
    {
        for(auto const & c : community_map_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Snmp::Mib::CommunityMap::CommunityMapList>();
        c->parent = this;
        community_map_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::CommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_map_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Snmp::Mib::CommunityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::CommunityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::CommunityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-map-list")
        return true;
    return false;
}

Native::Snmp::Mib::CommunityMap::CommunityMapList::CommunityMapList()
    :
    name{YType::str, "name"},
    engineid{YType::str, "engineid"}
{

    yang_name = "community-map-list"; yang_parent_name = "community-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Mib::CommunityMap::CommunityMapList::~CommunityMapList()
{
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_data() const
{
    return name.is_set
	|| engineid.is_set;
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(engineid.yfilter);
}

std::string Native::Snmp::Mib::CommunityMap::CommunityMapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/community-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::CommunityMap::CommunityMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-map-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::CommunityMap::CommunityMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (engineid.is_set || is_set(engineid.yfilter)) leaf_name_data.push_back(engineid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Mib::CommunityMap::CommunityMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::CommunityMap::CommunityMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Mib::CommunityMap::CommunityMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engineid")
    {
        engineid = value;
        engineid.value_namespace = name_space;
        engineid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::CommunityMap::CommunityMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "engineid")
    {
        engineid.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "engineid")
        return true;
    return false;
}

Native::Snmp::Mib::Persist::Persist()
    :
    persist_enum{YType::enumeration, "persist-enum"}
{

    yang_name = "persist"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Snmp::Mib::Persist::~Persist()
{
}

bool Native::Snmp::Mib::Persist::has_data() const
{
    return persist_enum.is_set;
}

bool Native::Snmp::Mib::Persist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist_enum.yfilter);
}

std::string Native::Snmp::Mib::Persist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Snmp::Mib::Persist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Snmp::Mib::Persist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist_enum.is_set || is_set(persist_enum.yfilter)) leaf_name_data.push_back(persist_enum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Snmp::Mib::Persist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::Persist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Mib::Persist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist-enum")
    {
        persist_enum = value;
        persist_enum.value_namespace = name_space;
        persist_enum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::Persist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist-enum")
    {
        persist_enum.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::Persist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist-enum")
        return true;
    return false;
}

Native::SnmpServer::SnmpServer()
    :
    chassis_id{YType::str, "Cisco-IOS-XE-snmp:chassis-id"},
    contact{YType::str, "Cisco-IOS-XE-snmp:contact"},
    location{YType::str, "Cisco-IOS-XE-snmp:location"},
    packetsize{YType::uint32, "Cisco-IOS-XE-snmp:packetsize"},
    queue_length{YType::uint16, "Cisco-IOS-XE-snmp:queue-length"},
    system_shutdown{YType::empty, "Cisco-IOS-XE-snmp:system-shutdown"},
    tftp_server_list{YType::str, "Cisco-IOS-XE-snmp:tftp-server-list"}
    	,
    enable(std::make_shared<Native::SnmpServer::Enable>())
	,engineid(std::make_shared<Native::SnmpServer::Engineid>())
	,ifindex(std::make_shared<Native::SnmpServer::Ifindex>())
	,ip(std::make_shared<Native::SnmpServer::Ip>())
	,manager(nullptr) // presence node
	,source_interface(std::make_shared<Native::SnmpServer::SourceInterface>())
	,trap(std::make_shared<Native::SnmpServer::Trap>())
	,trap_source(std::make_shared<Native::SnmpServer::TrapSource>())
	,user(std::make_shared<Native::SnmpServer::User>())
{
    enable->parent = this;
    engineid->parent = this;
    ifindex->parent = this;
    ip->parent = this;
    source_interface->parent = this;
    trap->parent = this;
    trap_source->parent = this;
    user->parent = this;

    yang_name = "snmp-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::~SnmpServer()
{
}

bool Native::SnmpServer::has_data() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return chassis_id.is_set
	|| contact.is_set
	|| location.is_set
	|| packetsize.is_set
	|| queue_length.is_set
	|| system_shutdown.is_set
	|| tftp_server_list.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (engineid !=  nullptr && engineid->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (manager !=  nullptr && manager->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (trap !=  nullptr && trap->has_data())
	|| (trap_source !=  nullptr && trap_source->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::SnmpServer::has_operation() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(contact.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(packetsize.yfilter)
	|| ydk::is_set(queue_length.yfilter)
	|| ydk::is_set(system_shutdown.yfilter)
	|| ydk::is_set(tftp_server_list.yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (engineid !=  nullptr && engineid->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (manager !=  nullptr && manager->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (trap !=  nullptr && trap->has_operation())
	|| (trap_source !=  nullptr && trap_source->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::SnmpServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (contact.is_set || is_set(contact.yfilter)) leaf_name_data.push_back(contact.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (packetsize.is_set || is_set(packetsize.yfilter)) leaf_name_data.push_back(packetsize.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());
    if (system_shutdown.is_set || is_set(system_shutdown.yfilter)) leaf_name_data.push_back(system_shutdown.get_name_leafdata());
    if (tftp_server_list.is_set || is_set(tftp_server_list.yfilter)) leaf_name_data.push_back(tftp_server_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::SnmpServer::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "engineID")
    {
        if(engineid == nullptr)
        {
            engineid = std::make_shared<Native::SnmpServer::Engineid>();
        }
        return engineid;
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::SnmpServer::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::SnmpServer::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Native::SnmpServer::Manager>();
        }
        return manager;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::SnmpServer::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::SnmpServer::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "trap-source")
    {
        if(trap_source == nullptr)
        {
            trap_source = std::make_shared<Native::SnmpServer::TrapSource>();
        }
        return trap_source;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::SnmpServer::User>();
        }
        return user;
    }

    if(child_yang_name == "view")
    {
        for(auto const & c : view)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::View>();
        c->parent = this;
        view.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(engineid != nullptr)
    {
        children["engineID"] = engineid;
    }

    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(manager != nullptr)
    {
        children["manager"] = manager;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    if(trap_source != nullptr)
    {
        children["trap-source"] = trap_source;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    for (auto const & c : view)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SnmpServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contact")
    {
        contact = value;
        contact.value_namespace = name_space;
        contact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetsize")
    {
        packetsize = value;
        packetsize.value_namespace = name_space;
        packetsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-shutdown")
    {
        system_shutdown = value;
        system_shutdown.value_namespace = name_space;
        system_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp-server-list")
    {
        tftp_server_list = value;
        tftp_server_list.value_namespace = name_space;
        tftp_server_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "contact")
    {
        contact.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "packetsize")
    {
        packetsize.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
    if(value_path == "system-shutdown")
    {
        system_shutdown.yfilter = yfilter;
    }
    if(value_path == "tftp-server-list")
    {
        tftp_server_list.yfilter = yfilter;
    }
}

bool Native::SnmpServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "context" || name == "enable" || name == "engineID" || name == "group" || name == "host" || name == "ifindex" || name == "ip" || name == "manager" || name == "source-interface" || name == "trap" || name == "trap-source" || name == "user" || name == "view" || name == "chassis-id" || name == "contact" || name == "location" || name == "packetsize" || name == "queue-length" || name == "system-shutdown" || name == "tftp-server-list")
        return true;
    return false;
}

Native::SnmpServer::Community::Community()
    :
    name{YType::str, "name"},
    access_list_name{YType::str, "access-list-name"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "RO"},
    rw{YType::empty, "RW"},
    view{YType::str, "view"}
{

    yang_name = "community"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Community::~Community()
{
}

bool Native::SnmpServer::Community::has_data() const
{
    return name.is_set
	|| access_list_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set
	|| view.is_set;
}

bool Native::SnmpServer::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter)
	|| ydk::is_set(view.yfilter);
}

std::string Native::SnmpServer::Community::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:community" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());
    if (view.is_set || is_set(view.yfilter)) leaf_name_data.push_back(view.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RO")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RW")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view")
    {
        view = value;
        view.value_namespace = name_space;
        view.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "RO")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "RW")
    {
        rw.yfilter = yfilter;
    }
    if(value_path == "view")
    {
        view.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "access-list-name" || name == "ipv6" || name == "RO" || name == "RW" || name == "view")
        return true;
    return false;
}

Native::SnmpServer::Context::Context()
    :
    name{YType::str, "name"}
{

    yang_name = "context"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Context::~Context()
{
}

bool Native::SnmpServer::Context::has_data() const
{
    return name.is_set;
}

bool Native::SnmpServer::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::SnmpServer::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:context" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::SnmpServer::Enable::Enable()
    :
    enable_choice(std::make_shared<Native::SnmpServer::Enable::EnableChoice>())
{
    enable_choice->parent = this;

    yang_name = "enable"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::~Enable()
{
}

bool Native::SnmpServer::Enable::has_data() const
{
    return (enable_choice !=  nullptr && enable_choice->has_data());
}

bool Native::SnmpServer::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (enable_choice !=  nullptr && enable_choice->has_operation());
}

std::string Native::SnmpServer::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable-choice")
    {
        if(enable_choice == nullptr)
        {
            enable_choice = std::make_shared<Native::SnmpServer::Enable::EnableChoice>();
        }
        return enable_choice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable_choice != nullptr)
    {
        children["enable-choice"] = enable_choice;
    }

    return children;
}

void Native::SnmpServer::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-choice")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::EnableChoice()
    :
    informs{YType::empty, "informs"}
    	,
    traps(nullptr) // presence node
{

    yang_name = "enable-choice"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::~EnableChoice()
{
}

bool Native::SnmpServer::Enable::EnableChoice::has_data() const
{
    return informs.is_set
	|| (traps !=  nullptr && traps->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(informs.yfilter)
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-choice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (informs.is_set || is_set(informs.yfilter)) leaf_name_data.push_back(informs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traps")
    {
        if(traps == nullptr)
        {
            traps = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps>();
        }
        return traps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traps != nullptr)
    {
        children["traps"] = traps;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "informs")
    {
        informs = value;
        informs.value_namespace = name_space;
        informs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "informs")
    {
        informs.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traps" || name == "informs")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Traps()
    :
    aaa_server{YType::empty, "aaa_server"},
    authenticate_fail{YType::empty, "authenticate-fail"},
    bfd{YType::empty, "bfd"},
    bgp{YType::empty, "bgp"},
    bstun{YType::empty, "bstun"},
    c2900{YType::empty, "c2900"},
    casa{YType::empty, "casa"},
    ccme{YType::empty, "ccme"},
    channel{YType::empty, "channel"},
    chassis{YType::empty, "chassis"},
    cluster{YType::empty, "cluster"},
    cnpd{YType::empty, "cnpd"},
    config{YType::empty, "config"},
    config_copy{YType::empty, "config-copy"},
    config_ctid{YType::empty, "config-ctid"},
    copy_config{YType::empty, "copy-config"},
    cpu_threshold{YType::empty, "cpu_threshold"},
    deauthenticate{YType::empty, "deauthenticate"},
    dial{YType::empty, "dial"},
    director{YType::empty, "director"},
    disassociate{YType::empty, "disassociate"},
    dlsw{YType::empty, "dlsw"},
    dnis{YType::empty, "dnis"},
    dot11_qos{YType::empty, "dot11-qos"},
    ds0_busyout{YType::empty, "ds0-busyout"},
    ds1{YType::empty, "ds1"},
    ds1_loopback{YType::empty, "ds1-loopback"},
    ds3{YType::empty, "ds3"},
    eigrp{YType::empty, "eigrp"},
    entity_{YType::empty, "entity"},
    ether_oam{YType::empty, "ether-oam"},
    event_manager{YType::empty, "event-manager"},
    flowmon{YType::empty, "flowmon"},
    fru_ctrl{YType::empty, "fru-ctrl"},
    gatekeeper{YType::empty, "gatekeeper"},
    hsrp{YType::empty, "hsrp"},
    icsudsu{YType::empty, "icsudsu"},
    ima{YType::empty, "ima"},
    ipmobile{YType::empty, "ipmobile"},
    ipmulticast{YType::empty, "ipmulticast"},
    ipsla{YType::empty, "ipsla"},
    isis{YType::empty, "isis"},
    local_auth{YType::empty, "local-auth"},
    module{YType::empty, "module"},
    msdp{YType::empty, "msdp"},
    mvpn{YType::empty, "mvpn"},
    pppoe{YType::empty, "pppoe"},
    rep{YType::empty, "rep"},
    resource_policy{YType::empty, "resource-policy"},
    rf{YType::empty, "rf"},
    rogue_ap{YType::empty, "rogue-ap"},
    rsvp{YType::empty, "rsvp"},
    rtr{YType::empty, "rtr"},
    sonet{YType::empty, "sonet"},
    srp{YType::empty, "srp"},
    srst{YType::empty, "srst"},
    stun{YType::empty, "stun"},
    switch_over{YType::empty, "switch-over"},
    syslog{YType::empty, "syslog"},
    tty{YType::empty, "tty"},
    vlan_mac_limit{YType::empty, "vlan-mac-limit"},
    vlan_membership{YType::empty, "vlan-membership"},
    vlancreate{YType::empty, "vlancreate"},
    vlandelete{YType::empty, "vlandelete"},
    voice{YType::empty, "voice"},
    vrrp{YType::empty, "vrrp"},
    vsimaster{YType::empty, "vsimaster"},
    vtp{YType::empty, "vtp"},
    wlan_wep{YType::empty, "wlan-wep"},
    xgcp{YType::empty, "xgcp"}
    	,
    alarms(nullptr) // presence node
	,atm(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm>())
	,auth_framework(nullptr) // presence node
	,bgp_conf(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf>())
	,bridge(nullptr) // presence node
	,bulkstat(nullptr) // presence node
	,c6kxbar(nullptr) // presence node
	,call_home(nullptr) // presence node
	,cef(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cef>())
	,cpu(nullptr) // presence node
	,csg(nullptr) // presence node
	,dot1x(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X>())
	,dsp(nullptr) // presence node
	,energywise(nullptr) // presence node
	,entity_diag(nullptr) // presence node
	,envmon(nullptr) // presence node
	,errdisable(nullptr) // presence node
	,ethernet(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet>())
	,firewall(nullptr) // presence node
	,flash(nullptr) // presence node
	,flex_links(nullptr) // presence node
	,frame_relay(nullptr) // presence node
	,ike(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike>())
	,ipsec(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec>())
	,isakmp(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp>())
	,isdn(nullptr) // presence node
	,l2tc(nullptr) // presence node
	,l2tun(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun>())
	,license(nullptr) // presence node
	,mac_notification(nullptr) // presence node
	,mac_notification2(nullptr) // presence node
	,memory(nullptr) // presence node
	,mpls(nullptr) // presence node
	,nhrp(nullptr) // presence node
	,ospf(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf>())
	,ospfv3(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3>())
	,pim(nullptr) // presence node
	,plogd(nullptr) // presence node
	,port_security(nullptr) // presence node
	,power_ethernet(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet>())
	,pw(nullptr) // presence node
	,slb(nullptr) // presence node
	,snmp(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Snmp>())
	,stackwise(nullptr) // presence node
	,stpx(nullptr) // presence node
	,transceiver(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver>())
	,trustsec(nullptr) // presence node
	,trustsec_interface(nullptr) // presence node
	,trustsec_policy(nullptr) // presence node
	,trustsec_server(nullptr) // presence node
	,trustsec_sxp(nullptr) // presence node
	,udld(nullptr) // presence node
	,vrfmib(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib>())
	,vstack(nullptr) // presence node
	,vswitch(nullptr) // presence node
	,wireless(nullptr) // presence node
{
    atm->parent = this;
    bgp_conf->parent = this;
    cef->parent = this;
    dot1x->parent = this;
    ethernet->parent = this;
    ike->parent = this;
    ipsec->parent = this;
    isakmp->parent = this;
    l2tun->parent = this;
    ospf->parent = this;
    ospfv3->parent = this;
    power_ethernet->parent = this;
    snmp->parent = this;
    transceiver->parent = this;
    vrfmib->parent = this;

    yang_name = "traps"; yang_parent_name = "enable-choice"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::~Traps()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_data() const
{
    return aaa_server.is_set
	|| authenticate_fail.is_set
	|| bfd.is_set
	|| bgp.is_set
	|| bstun.is_set
	|| c2900.is_set
	|| casa.is_set
	|| ccme.is_set
	|| channel.is_set
	|| chassis.is_set
	|| cluster.is_set
	|| cnpd.is_set
	|| config.is_set
	|| config_copy.is_set
	|| config_ctid.is_set
	|| copy_config.is_set
	|| cpu_threshold.is_set
	|| deauthenticate.is_set
	|| dial.is_set
	|| director.is_set
	|| disassociate.is_set
	|| dlsw.is_set
	|| dnis.is_set
	|| dot11_qos.is_set
	|| ds0_busyout.is_set
	|| ds1.is_set
	|| ds1_loopback.is_set
	|| ds3.is_set
	|| eigrp.is_set
	|| entity_.is_set
	|| ether_oam.is_set
	|| event_manager.is_set
	|| flowmon.is_set
	|| fru_ctrl.is_set
	|| gatekeeper.is_set
	|| hsrp.is_set
	|| icsudsu.is_set
	|| ima.is_set
	|| ipmobile.is_set
	|| ipmulticast.is_set
	|| ipsla.is_set
	|| isis.is_set
	|| local_auth.is_set
	|| module.is_set
	|| msdp.is_set
	|| mvpn.is_set
	|| pppoe.is_set
	|| rep.is_set
	|| resource_policy.is_set
	|| rf.is_set
	|| rogue_ap.is_set
	|| rsvp.is_set
	|| rtr.is_set
	|| sonet.is_set
	|| srp.is_set
	|| srst.is_set
	|| stun.is_set
	|| switch_over.is_set
	|| syslog.is_set
	|| tty.is_set
	|| vlan_mac_limit.is_set
	|| vlan_membership.is_set
	|| vlancreate.is_set
	|| vlandelete.is_set
	|| voice.is_set
	|| vrrp.is_set
	|| vsimaster.is_set
	|| vtp.is_set
	|| wlan_wep.is_set
	|| xgcp.is_set
	|| (alarms !=  nullptr && alarms->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (auth_framework !=  nullptr && auth_framework->has_data())
	|| (bgp_conf !=  nullptr && bgp_conf->has_data())
	|| (bridge !=  nullptr && bridge->has_data())
	|| (bulkstat !=  nullptr && bulkstat->has_data())
	|| (c6kxbar !=  nullptr && c6kxbar->has_data())
	|| (call_home !=  nullptr && call_home->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (cpu !=  nullptr && cpu->has_data())
	|| (csg !=  nullptr && csg->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (dsp !=  nullptr && dsp->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (entity_diag !=  nullptr && entity_diag->has_data())
	|| (envmon !=  nullptr && envmon->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (firewall !=  nullptr && firewall->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (flex_links !=  nullptr && flex_links->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (ike !=  nullptr && ike->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (isdn !=  nullptr && isdn->has_data())
	|| (l2tc !=  nullptr && l2tc->has_data())
	|| (l2tun !=  nullptr && l2tun->has_data())
	|| (license !=  nullptr && license->has_data())
	|| (mac_notification !=  nullptr && mac_notification->has_data())
	|| (mac_notification2 !=  nullptr && mac_notification2->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nhrp !=  nullptr && nhrp->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (plogd !=  nullptr && plogd->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (power_ethernet !=  nullptr && power_ethernet->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (slb !=  nullptr && slb->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (stackwise !=  nullptr && stackwise->has_data())
	|| (stpx !=  nullptr && stpx->has_data())
	|| (transceiver !=  nullptr && transceiver->has_data())
	|| (trustsec !=  nullptr && trustsec->has_data())
	|| (trustsec_interface !=  nullptr && trustsec_interface->has_data())
	|| (trustsec_policy !=  nullptr && trustsec_policy->has_data())
	|| (trustsec_server !=  nullptr && trustsec_server->has_data())
	|| (trustsec_sxp !=  nullptr && trustsec_sxp->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (vrfmib !=  nullptr && vrfmib->has_data())
	|| (vstack !=  nullptr && vstack->has_data())
	|| (vswitch !=  nullptr && vswitch->has_data())
	|| (wireless !=  nullptr && wireless->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_server.yfilter)
	|| ydk::is_set(authenticate_fail.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(bstun.yfilter)
	|| ydk::is_set(c2900.yfilter)
	|| ydk::is_set(casa.yfilter)
	|| ydk::is_set(ccme.yfilter)
	|| ydk::is_set(channel.yfilter)
	|| ydk::is_set(chassis.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| ydk::is_set(cnpd.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(config_copy.yfilter)
	|| ydk::is_set(config_ctid.yfilter)
	|| ydk::is_set(copy_config.yfilter)
	|| ydk::is_set(cpu_threshold.yfilter)
	|| ydk::is_set(deauthenticate.yfilter)
	|| ydk::is_set(dial.yfilter)
	|| ydk::is_set(director.yfilter)
	|| ydk::is_set(disassociate.yfilter)
	|| ydk::is_set(dlsw.yfilter)
	|| ydk::is_set(dnis.yfilter)
	|| ydk::is_set(dot11_qos.yfilter)
	|| ydk::is_set(ds0_busyout.yfilter)
	|| ydk::is_set(ds1.yfilter)
	|| ydk::is_set(ds1_loopback.yfilter)
	|| ydk::is_set(ds3.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(entity_.yfilter)
	|| ydk::is_set(ether_oam.yfilter)
	|| ydk::is_set(event_manager.yfilter)
	|| ydk::is_set(flowmon.yfilter)
	|| ydk::is_set(fru_ctrl.yfilter)
	|| ydk::is_set(gatekeeper.yfilter)
	|| ydk::is_set(hsrp.yfilter)
	|| ydk::is_set(icsudsu.yfilter)
	|| ydk::is_set(ima.yfilter)
	|| ydk::is_set(ipmobile.yfilter)
	|| ydk::is_set(ipmulticast.yfilter)
	|| ydk::is_set(ipsla.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(local_auth.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(msdp.yfilter)
	|| ydk::is_set(mvpn.yfilter)
	|| ydk::is_set(pppoe.yfilter)
	|| ydk::is_set(rep.yfilter)
	|| ydk::is_set(resource_policy.yfilter)
	|| ydk::is_set(rf.yfilter)
	|| ydk::is_set(rogue_ap.yfilter)
	|| ydk::is_set(rsvp.yfilter)
	|| ydk::is_set(rtr.yfilter)
	|| ydk::is_set(sonet.yfilter)
	|| ydk::is_set(srp.yfilter)
	|| ydk::is_set(srst.yfilter)
	|| ydk::is_set(stun.yfilter)
	|| ydk::is_set(switch_over.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(tty.yfilter)
	|| ydk::is_set(vlan_mac_limit.yfilter)
	|| ydk::is_set(vlan_membership.yfilter)
	|| ydk::is_set(vlancreate.yfilter)
	|| ydk::is_set(vlandelete.yfilter)
	|| ydk::is_set(voice.yfilter)
	|| ydk::is_set(vrrp.yfilter)
	|| ydk::is_set(vsimaster.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| ydk::is_set(wlan_wep.yfilter)
	|| ydk::is_set(xgcp.yfilter)
	|| (alarms !=  nullptr && alarms->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (auth_framework !=  nullptr && auth_framework->has_operation())
	|| (bgp_conf !=  nullptr && bgp_conf->has_operation())
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (bulkstat !=  nullptr && bulkstat->has_operation())
	|| (c6kxbar !=  nullptr && c6kxbar->has_operation())
	|| (call_home !=  nullptr && call_home->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (csg !=  nullptr && csg->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (dsp !=  nullptr && dsp->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (entity_diag !=  nullptr && entity_diag->has_operation())
	|| (envmon !=  nullptr && envmon->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (firewall !=  nullptr && firewall->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (flex_links !=  nullptr && flex_links->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (ike !=  nullptr && ike->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (isdn !=  nullptr && isdn->has_operation())
	|| (l2tc !=  nullptr && l2tc->has_operation())
	|| (l2tun !=  nullptr && l2tun->has_operation())
	|| (license !=  nullptr && license->has_operation())
	|| (mac_notification !=  nullptr && mac_notification->has_operation())
	|| (mac_notification2 !=  nullptr && mac_notification2->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nhrp !=  nullptr && nhrp->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (plogd !=  nullptr && plogd->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (power_ethernet !=  nullptr && power_ethernet->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (slb !=  nullptr && slb->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (stackwise !=  nullptr && stackwise->has_operation())
	|| (stpx !=  nullptr && stpx->has_operation())
	|| (transceiver !=  nullptr && transceiver->has_operation())
	|| (trustsec !=  nullptr && trustsec->has_operation())
	|| (trustsec_interface !=  nullptr && trustsec_interface->has_operation())
	|| (trustsec_policy !=  nullptr && trustsec_policy->has_operation())
	|| (trustsec_server !=  nullptr && trustsec_server->has_operation())
	|| (trustsec_sxp !=  nullptr && trustsec_sxp->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (vrfmib !=  nullptr && vrfmib->has_operation())
	|| (vstack !=  nullptr && vstack->has_operation())
	|| (vswitch !=  nullptr && vswitch->has_operation())
	|| (wireless !=  nullptr && wireless->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_server.is_set || is_set(aaa_server.yfilter)) leaf_name_data.push_back(aaa_server.get_name_leafdata());
    if (authenticate_fail.is_set || is_set(authenticate_fail.yfilter)) leaf_name_data.push_back(authenticate_fail.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (bstun.is_set || is_set(bstun.yfilter)) leaf_name_data.push_back(bstun.get_name_leafdata());
    if (c2900.is_set || is_set(c2900.yfilter)) leaf_name_data.push_back(c2900.get_name_leafdata());
    if (casa.is_set || is_set(casa.yfilter)) leaf_name_data.push_back(casa.get_name_leafdata());
    if (ccme.is_set || is_set(ccme.yfilter)) leaf_name_data.push_back(ccme.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (chassis.is_set || is_set(chassis.yfilter)) leaf_name_data.push_back(chassis.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());
    if (cnpd.is_set || is_set(cnpd.yfilter)) leaf_name_data.push_back(cnpd.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (config_copy.is_set || is_set(config_copy.yfilter)) leaf_name_data.push_back(config_copy.get_name_leafdata());
    if (config_ctid.is_set || is_set(config_ctid.yfilter)) leaf_name_data.push_back(config_ctid.get_name_leafdata());
    if (copy_config.is_set || is_set(copy_config.yfilter)) leaf_name_data.push_back(copy_config.get_name_leafdata());
    if (cpu_threshold.is_set || is_set(cpu_threshold.yfilter)) leaf_name_data.push_back(cpu_threshold.get_name_leafdata());
    if (deauthenticate.is_set || is_set(deauthenticate.yfilter)) leaf_name_data.push_back(deauthenticate.get_name_leafdata());
    if (dial.is_set || is_set(dial.yfilter)) leaf_name_data.push_back(dial.get_name_leafdata());
    if (director.is_set || is_set(director.yfilter)) leaf_name_data.push_back(director.get_name_leafdata());
    if (disassociate.is_set || is_set(disassociate.yfilter)) leaf_name_data.push_back(disassociate.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.yfilter)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (dnis.is_set || is_set(dnis.yfilter)) leaf_name_data.push_back(dnis.get_name_leafdata());
    if (dot11_qos.is_set || is_set(dot11_qos.yfilter)) leaf_name_data.push_back(dot11_qos.get_name_leafdata());
    if (ds0_busyout.is_set || is_set(ds0_busyout.yfilter)) leaf_name_data.push_back(ds0_busyout.get_name_leafdata());
    if (ds1.is_set || is_set(ds1.yfilter)) leaf_name_data.push_back(ds1.get_name_leafdata());
    if (ds1_loopback.is_set || is_set(ds1_loopback.yfilter)) leaf_name_data.push_back(ds1_loopback.get_name_leafdata());
    if (ds3.is_set || is_set(ds3.yfilter)) leaf_name_data.push_back(ds3.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (entity_.is_set || is_set(entity_.yfilter)) leaf_name_data.push_back(entity_.get_name_leafdata());
    if (ether_oam.is_set || is_set(ether_oam.yfilter)) leaf_name_data.push_back(ether_oam.get_name_leafdata());
    if (event_manager.is_set || is_set(event_manager.yfilter)) leaf_name_data.push_back(event_manager.get_name_leafdata());
    if (flowmon.is_set || is_set(flowmon.yfilter)) leaf_name_data.push_back(flowmon.get_name_leafdata());
    if (fru_ctrl.is_set || is_set(fru_ctrl.yfilter)) leaf_name_data.push_back(fru_ctrl.get_name_leafdata());
    if (gatekeeper.is_set || is_set(gatekeeper.yfilter)) leaf_name_data.push_back(gatekeeper.get_name_leafdata());
    if (hsrp.is_set || is_set(hsrp.yfilter)) leaf_name_data.push_back(hsrp.get_name_leafdata());
    if (icsudsu.is_set || is_set(icsudsu.yfilter)) leaf_name_data.push_back(icsudsu.get_name_leafdata());
    if (ima.is_set || is_set(ima.yfilter)) leaf_name_data.push_back(ima.get_name_leafdata());
    if (ipmobile.is_set || is_set(ipmobile.yfilter)) leaf_name_data.push_back(ipmobile.get_name_leafdata());
    if (ipmulticast.is_set || is_set(ipmulticast.yfilter)) leaf_name_data.push_back(ipmulticast.get_name_leafdata());
    if (ipsla.is_set || is_set(ipsla.yfilter)) leaf_name_data.push_back(ipsla.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (local_auth.is_set || is_set(local_auth.yfilter)) leaf_name_data.push_back(local_auth.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (msdp.is_set || is_set(msdp.yfilter)) leaf_name_data.push_back(msdp.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.yfilter)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.yfilter)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (rep.is_set || is_set(rep.yfilter)) leaf_name_data.push_back(rep.get_name_leafdata());
    if (resource_policy.is_set || is_set(resource_policy.yfilter)) leaf_name_data.push_back(resource_policy.get_name_leafdata());
    if (rf.is_set || is_set(rf.yfilter)) leaf_name_data.push_back(rf.get_name_leafdata());
    if (rogue_ap.is_set || is_set(rogue_ap.yfilter)) leaf_name_data.push_back(rogue_ap.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.yfilter)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (rtr.is_set || is_set(rtr.yfilter)) leaf_name_data.push_back(rtr.get_name_leafdata());
    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());
    if (srp.is_set || is_set(srp.yfilter)) leaf_name_data.push_back(srp.get_name_leafdata());
    if (srst.is_set || is_set(srst.yfilter)) leaf_name_data.push_back(srst.get_name_leafdata());
    if (stun.is_set || is_set(stun.yfilter)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (switch_over.is_set || is_set(switch_over.yfilter)) leaf_name_data.push_back(switch_over.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (tty.is_set || is_set(tty.yfilter)) leaf_name_data.push_back(tty.get_name_leafdata());
    if (vlan_mac_limit.is_set || is_set(vlan_mac_limit.yfilter)) leaf_name_data.push_back(vlan_mac_limit.get_name_leafdata());
    if (vlan_membership.is_set || is_set(vlan_membership.yfilter)) leaf_name_data.push_back(vlan_membership.get_name_leafdata());
    if (vlancreate.is_set || is_set(vlancreate.yfilter)) leaf_name_data.push_back(vlancreate.get_name_leafdata());
    if (vlandelete.is_set || is_set(vlandelete.yfilter)) leaf_name_data.push_back(vlandelete.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());
    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());
    if (vsimaster.is_set || is_set(vsimaster.yfilter)) leaf_name_data.push_back(vsimaster.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());
    if (wlan_wep.is_set || is_set(wlan_wep.yfilter)) leaf_name_data.push_back(wlan_wep.get_name_leafdata());
    if (xgcp.is_set || is_set(xgcp.yfilter)) leaf_name_data.push_back(xgcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarms")
    {
        if(alarms == nullptr)
        {
            alarms = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Alarms>();
        }
        return alarms;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "auth-framework")
    {
        if(auth_framework == nullptr)
        {
            auth_framework = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework>();
        }
        return auth_framework;
    }

    if(child_yang_name == "bgp-conf")
    {
        if(bgp_conf == nullptr)
        {
            bgp_conf = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf>();
        }
        return bgp_conf;
    }

    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "bulkstat")
    {
        if(bulkstat == nullptr)
        {
            bulkstat = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat>();
        }
        return bulkstat;
    }

    if(child_yang_name == "c6kxbar")
    {
        if(c6kxbar == nullptr)
        {
            c6kxbar = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar>();
        }
        return c6kxbar;
    }

    if(child_yang_name == "call-home")
    {
        if(call_home == nullptr)
        {
            call_home = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::CallHome>();
        }
        return call_home;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "csg")
    {
        if(csg == nullptr)
        {
            csg = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Csg>();
        }
        return csg;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "dsp")
    {
        if(dsp == nullptr)
        {
            dsp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dsp>();
        }
        return dsp;
    }

    if(child_yang_name == "energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "entity-diag")
    {
        if(entity_diag == nullptr)
        {
            entity_diag = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag>();
        }
        return entity_diag;
    }

    if(child_yang_name == "envmon")
    {
        if(envmon == nullptr)
        {
            envmon = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Envmon>();
        }
        return envmon;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "firewall")
    {
        if(firewall == nullptr)
        {
            firewall = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Firewall>();
        }
        return firewall;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Flash>();
        }
        return flash;
    }

    if(child_yang_name == "flex-links")
    {
        if(flex_links == nullptr)
        {
            flex_links = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks>();
        }
        return flex_links;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "ike")
    {
        if(ike == nullptr)
        {
            ike = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike>();
        }
        return ike;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "isdn")
    {
        if(isdn == nullptr)
        {
            isdn = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isdn>();
        }
        return isdn;
    }

    if(child_yang_name == "l2tc")
    {
        if(l2tc == nullptr)
        {
            l2tc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc>();
        }
        return l2tc;
    }

    if(child_yang_name == "l2tun")
    {
        if(l2tun == nullptr)
        {
            l2tun = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun>();
        }
        return l2tun;
    }

    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::License>();
        }
        return license;
    }

    if(child_yang_name == "mac-notification")
    {
        if(mac_notification == nullptr)
        {
            mac_notification = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification>();
        }
        return mac_notification;
    }

    if(child_yang_name == "mac-notification2")
    {
        if(mac_notification2 == nullptr)
        {
            mac_notification2 = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2>();
        }
        return mac_notification2;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "nhrp")
    {
        if(nhrp == nullptr)
        {
            nhrp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp>();
        }
        return nhrp;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "plogd")
    {
        if(plogd == nullptr)
        {
            plogd = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Plogd>();
        }
        return plogd;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "power-ethernet")
    {
        if(power_ethernet == nullptr)
        {
            power_ethernet = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet>();
        }
        return power_ethernet;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "slb")
    {
        if(slb == nullptr)
        {
            slb = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Slb>();
        }
        return slb;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "stackwise")
    {
        if(stackwise == nullptr)
        {
            stackwise = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise>();
        }
        return stackwise;
    }

    if(child_yang_name == "stpx")
    {
        if(stpx == nullptr)
        {
            stpx = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Stpx>();
        }
        return stpx;
    }

    if(child_yang_name == "transceiver")
    {
        if(transceiver == nullptr)
        {
            transceiver = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver>();
        }
        return transceiver;
    }

    if(child_yang_name == "trustsec")
    {
        if(trustsec == nullptr)
        {
            trustsec = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec>();
        }
        return trustsec;
    }

    if(child_yang_name == "trustsec-interface")
    {
        if(trustsec_interface == nullptr)
        {
            trustsec_interface = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface>();
        }
        return trustsec_interface;
    }

    if(child_yang_name == "trustsec-policy")
    {
        if(trustsec_policy == nullptr)
        {
            trustsec_policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy>();
        }
        return trustsec_policy;
    }

    if(child_yang_name == "trustsec-server")
    {
        if(trustsec_server == nullptr)
        {
            trustsec_server = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer>();
        }
        return trustsec_server;
    }

    if(child_yang_name == "trustsec-sxp")
    {
        if(trustsec_sxp == nullptr)
        {
            trustsec_sxp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp>();
        }
        return trustsec_sxp;
    }

    if(child_yang_name == "udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "vrfmib")
    {
        if(vrfmib == nullptr)
        {
            vrfmib = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib>();
        }
        return vrfmib;
    }

    if(child_yang_name == "vstack")
    {
        if(vstack == nullptr)
        {
            vstack = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vstack>();
        }
        return vstack;
    }

    if(child_yang_name == "vswitch")
    {
        if(vswitch == nullptr)
        {
            vswitch = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch>();
        }
        return vswitch;
    }

    if(child_yang_name == "wireless")
    {
        if(wireless == nullptr)
        {
            wireless = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless>();
        }
        return wireless;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarms != nullptr)
    {
        children["alarms"] = alarms;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(auth_framework != nullptr)
    {
        children["auth-framework"] = auth_framework;
    }

    if(bgp_conf != nullptr)
    {
        children["bgp-conf"] = bgp_conf;
    }

    if(bridge != nullptr)
    {
        children["bridge"] = bridge;
    }

    if(bulkstat != nullptr)
    {
        children["bulkstat"] = bulkstat;
    }

    if(c6kxbar != nullptr)
    {
        children["c6kxbar"] = c6kxbar;
    }

    if(call_home != nullptr)
    {
        children["call-home"] = call_home;
    }

    if(cef != nullptr)
    {
        children["cef"] = cef;
    }

    if(cpu != nullptr)
    {
        children["cpu"] = cpu;
    }

    if(csg != nullptr)
    {
        children["csg"] = csg;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(dsp != nullptr)
    {
        children["dsp"] = dsp;
    }

    if(energywise != nullptr)
    {
        children["energywise"] = energywise;
    }

    if(entity_diag != nullptr)
    {
        children["entity-diag"] = entity_diag;
    }

    if(envmon != nullptr)
    {
        children["envmon"] = envmon;
    }

    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(firewall != nullptr)
    {
        children["firewall"] = firewall;
    }

    if(flash != nullptr)
    {
        children["flash"] = flash;
    }

    if(flex_links != nullptr)
    {
        children["flex-links"] = flex_links;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    if(ike != nullptr)
    {
        children["ike"] = ike;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(isdn != nullptr)
    {
        children["isdn"] = isdn;
    }

    if(l2tc != nullptr)
    {
        children["l2tc"] = l2tc;
    }

    if(l2tun != nullptr)
    {
        children["l2tun"] = l2tun;
    }

    if(license != nullptr)
    {
        children["license"] = license;
    }

    if(mac_notification != nullptr)
    {
        children["mac-notification"] = mac_notification;
    }

    if(mac_notification2 != nullptr)
    {
        children["mac-notification2"] = mac_notification2;
    }

    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(nhrp != nullptr)
    {
        children["nhrp"] = nhrp;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(plogd != nullptr)
    {
        children["plogd"] = plogd;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(power_ethernet != nullptr)
    {
        children["power-ethernet"] = power_ethernet;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(slb != nullptr)
    {
        children["slb"] = slb;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(stackwise != nullptr)
    {
        children["stackwise"] = stackwise;
    }

    if(stpx != nullptr)
    {
        children["stpx"] = stpx;
    }

    if(transceiver != nullptr)
    {
        children["transceiver"] = transceiver;
    }

    if(trustsec != nullptr)
    {
        children["trustsec"] = trustsec;
    }

    if(trustsec_interface != nullptr)
    {
        children["trustsec-interface"] = trustsec_interface;
    }

    if(trustsec_policy != nullptr)
    {
        children["trustsec-policy"] = trustsec_policy;
    }

    if(trustsec_server != nullptr)
    {
        children["trustsec-server"] = trustsec_server;
    }

    if(trustsec_sxp != nullptr)
    {
        children["trustsec-sxp"] = trustsec_sxp;
    }

    if(udld != nullptr)
    {
        children["udld"] = udld;
    }

    if(vrfmib != nullptr)
    {
        children["vrfmib"] = vrfmib;
    }

    if(vstack != nullptr)
    {
        children["vstack"] = vstack;
    }

    if(vswitch != nullptr)
    {
        children["vswitch"] = vswitch;
    }

    if(wireless != nullptr)
    {
        children["wireless"] = wireless;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa_server")
    {
        aaa_server = value;
        aaa_server.value_namespace = name_space;
        aaa_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authenticate-fail")
    {
        authenticate_fail = value;
        authenticate_fail.value_namespace = name_space;
        authenticate_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bstun")
    {
        bstun = value;
        bstun.value_namespace = name_space;
        bstun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "c2900")
    {
        c2900 = value;
        c2900.value_namespace = name_space;
        c2900.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casa")
    {
        casa = value;
        casa.value_namespace = name_space;
        casa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccme")
    {
        ccme = value;
        ccme.value_namespace = name_space;
        ccme.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis")
    {
        chassis = value;
        chassis.value_namespace = name_space;
        chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpd")
    {
        cnpd = value;
        cnpd.value_namespace = name_space;
        cnpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-copy")
    {
        config_copy = value;
        config_copy.value_namespace = name_space;
        config_copy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-ctid")
    {
        config_ctid = value;
        config_ctid.value_namespace = name_space;
        config_ctid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copy-config")
    {
        copy_config = value;
        copy_config.value_namespace = name_space;
        copy_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu_threshold")
    {
        cpu_threshold = value;
        cpu_threshold.value_namespace = name_space;
        cpu_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deauthenticate")
    {
        deauthenticate = value;
        deauthenticate.value_namespace = name_space;
        deauthenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dial")
    {
        dial = value;
        dial.value_namespace = name_space;
        dial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "director")
    {
        director = value;
        director.value_namespace = name_space;
        director.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disassociate")
    {
        disassociate = value;
        disassociate.value_namespace = name_space;
        disassociate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
        dlsw.value_namespace = name_space;
        dlsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnis")
    {
        dnis = value;
        dnis.value_namespace = name_space;
        dnis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot11-qos")
    {
        dot11_qos = value;
        dot11_qos.value_namespace = name_space;
        dot11_qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds0-busyout")
    {
        ds0_busyout = value;
        ds0_busyout.value_namespace = name_space;
        ds0_busyout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds1")
    {
        ds1 = value;
        ds1.value_namespace = name_space;
        ds1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds1-loopback")
    {
        ds1_loopback = value;
        ds1_loopback.value_namespace = name_space;
        ds1_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds3")
    {
        ds3 = value;
        ds3.value_namespace = name_space;
        ds3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity")
    {
        entity_ = value;
        entity_.value_namespace = name_space;
        entity_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-oam")
    {
        ether_oam = value;
        ether_oam.value_namespace = name_space;
        ether_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-manager")
    {
        event_manager = value;
        event_manager.value_namespace = name_space;
        event_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowmon")
    {
        flowmon = value;
        flowmon.value_namespace = name_space;
        flowmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl = value;
        fru_ctrl.value_namespace = name_space;
        fru_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gatekeeper")
    {
        gatekeeper = value;
        gatekeeper.value_namespace = name_space;
        gatekeeper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp")
    {
        hsrp = value;
        hsrp.value_namespace = name_space;
        hsrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icsudsu")
    {
        icsudsu = value;
        icsudsu.value_namespace = name_space;
        icsudsu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima")
    {
        ima = value;
        ima.value_namespace = name_space;
        ima.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipmobile")
    {
        ipmobile = value;
        ipmobile.value_namespace = name_space;
        ipmobile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast = value;
        ipmulticast.value_namespace = name_space;
        ipmulticast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsla")
    {
        ipsla = value;
        ipsla.value_namespace = name_space;
        ipsla.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-auth")
    {
        local_auth = value;
        local_auth.value_namespace = name_space;
        local_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdp")
    {
        msdp = value;
        msdp.value_namespace = name_space;
        msdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
        mvpn.value_namespace = name_space;
        mvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
        pppoe.value_namespace = name_space;
        pppoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rep")
    {
        rep = value;
        rep.value_namespace = name_space;
        rep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-policy")
    {
        resource_policy = value;
        resource_policy.value_namespace = name_space;
        resource_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rf")
    {
        rf = value;
        rf.value_namespace = name_space;
        rf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rogue-ap")
    {
        rogue_ap = value;
        rogue_ap.value_namespace = name_space;
        rogue_ap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
        rsvp.value_namespace = name_space;
        rsvp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr")
    {
        rtr = value;
        rtr.value_namespace = name_space;
        rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp")
    {
        srp = value;
        srp.value_namespace = name_space;
        srp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srst")
    {
        srst = value;
        srst.value_namespace = name_space;
        srst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stun")
    {
        stun = value;
        stun.value_namespace = name_space;
        stun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-over")
    {
        switch_over = value;
        switch_over.value_namespace = name_space;
        switch_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tty")
    {
        tty = value;
        tty.value_namespace = name_space;
        tty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-mac-limit")
    {
        vlan_mac_limit = value;
        vlan_mac_limit.value_namespace = name_space;
        vlan_mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-membership")
    {
        vlan_membership = value;
        vlan_membership.value_namespace = name_space;
        vlan_membership.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlancreate")
    {
        vlancreate = value;
        vlancreate.value_namespace = name_space;
        vlancreate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlandelete")
    {
        vlandelete = value;
        vlandelete.value_namespace = name_space;
        vlandelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsimaster")
    {
        vsimaster = value;
        vsimaster.value_namespace = name_space;
        vsimaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlan-wep")
    {
        wlan_wep = value;
        wlan_wep.value_namespace = name_space;
        wlan_wep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgcp")
    {
        xgcp = value;
        xgcp.value_namespace = name_space;
        xgcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa_server")
    {
        aaa_server.yfilter = yfilter;
    }
    if(value_path == "authenticate-fail")
    {
        authenticate_fail.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "bstun")
    {
        bstun.yfilter = yfilter;
    }
    if(value_path == "c2900")
    {
        c2900.yfilter = yfilter;
    }
    if(value_path == "casa")
    {
        casa.yfilter = yfilter;
    }
    if(value_path == "ccme")
    {
        ccme.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
    if(value_path == "chassis")
    {
        chassis.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
    if(value_path == "cnpd")
    {
        cnpd.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "config-copy")
    {
        config_copy.yfilter = yfilter;
    }
    if(value_path == "config-ctid")
    {
        config_ctid.yfilter = yfilter;
    }
    if(value_path == "copy-config")
    {
        copy_config.yfilter = yfilter;
    }
    if(value_path == "cpu_threshold")
    {
        cpu_threshold.yfilter = yfilter;
    }
    if(value_path == "deauthenticate")
    {
        deauthenticate.yfilter = yfilter;
    }
    if(value_path == "dial")
    {
        dial.yfilter = yfilter;
    }
    if(value_path == "director")
    {
        director.yfilter = yfilter;
    }
    if(value_path == "disassociate")
    {
        disassociate.yfilter = yfilter;
    }
    if(value_path == "dlsw")
    {
        dlsw.yfilter = yfilter;
    }
    if(value_path == "dnis")
    {
        dnis.yfilter = yfilter;
    }
    if(value_path == "dot11-qos")
    {
        dot11_qos.yfilter = yfilter;
    }
    if(value_path == "ds0-busyout")
    {
        ds0_busyout.yfilter = yfilter;
    }
    if(value_path == "ds1")
    {
        ds1.yfilter = yfilter;
    }
    if(value_path == "ds1-loopback")
    {
        ds1_loopback.yfilter = yfilter;
    }
    if(value_path == "ds3")
    {
        ds3.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "entity")
    {
        entity_.yfilter = yfilter;
    }
    if(value_path == "ether-oam")
    {
        ether_oam.yfilter = yfilter;
    }
    if(value_path == "event-manager")
    {
        event_manager.yfilter = yfilter;
    }
    if(value_path == "flowmon")
    {
        flowmon.yfilter = yfilter;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl.yfilter = yfilter;
    }
    if(value_path == "gatekeeper")
    {
        gatekeeper.yfilter = yfilter;
    }
    if(value_path == "hsrp")
    {
        hsrp.yfilter = yfilter;
    }
    if(value_path == "icsudsu")
    {
        icsudsu.yfilter = yfilter;
    }
    if(value_path == "ima")
    {
        ima.yfilter = yfilter;
    }
    if(value_path == "ipmobile")
    {
        ipmobile.yfilter = yfilter;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast.yfilter = yfilter;
    }
    if(value_path == "ipsla")
    {
        ipsla.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "local-auth")
    {
        local_auth.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "msdp")
    {
        msdp.yfilter = yfilter;
    }
    if(value_path == "mvpn")
    {
        mvpn.yfilter = yfilter;
    }
    if(value_path == "pppoe")
    {
        pppoe.yfilter = yfilter;
    }
    if(value_path == "rep")
    {
        rep.yfilter = yfilter;
    }
    if(value_path == "resource-policy")
    {
        resource_policy.yfilter = yfilter;
    }
    if(value_path == "rf")
    {
        rf.yfilter = yfilter;
    }
    if(value_path == "rogue-ap")
    {
        rogue_ap.yfilter = yfilter;
    }
    if(value_path == "rsvp")
    {
        rsvp.yfilter = yfilter;
    }
    if(value_path == "rtr")
    {
        rtr.yfilter = yfilter;
    }
    if(value_path == "sonet")
    {
        sonet.yfilter = yfilter;
    }
    if(value_path == "srp")
    {
        srp.yfilter = yfilter;
    }
    if(value_path == "srst")
    {
        srst.yfilter = yfilter;
    }
    if(value_path == "stun")
    {
        stun.yfilter = yfilter;
    }
    if(value_path == "switch-over")
    {
        switch_over.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "tty")
    {
        tty.yfilter = yfilter;
    }
    if(value_path == "vlan-mac-limit")
    {
        vlan_mac_limit.yfilter = yfilter;
    }
    if(value_path == "vlan-membership")
    {
        vlan_membership.yfilter = yfilter;
    }
    if(value_path == "vlancreate")
    {
        vlancreate.yfilter = yfilter;
    }
    if(value_path == "vlandelete")
    {
        vlandelete.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
    if(value_path == "vsimaster")
    {
        vsimaster.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
    if(value_path == "wlan-wep")
    {
        wlan_wep.yfilter = yfilter;
    }
    if(value_path == "xgcp")
    {
        xgcp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarms" || name == "atm" || name == "auth-framework" || name == "bgp-conf" || name == "bridge" || name == "bulkstat" || name == "c6kxbar" || name == "call-home" || name == "cef" || name == "cpu" || name == "csg" || name == "dot1x" || name == "dsp" || name == "energywise" || name == "entity-diag" || name == "envmon" || name == "errdisable" || name == "ethernet" || name == "firewall" || name == "flash" || name == "flex-links" || name == "frame-relay" || name == "ike" || name == "ipsec" || name == "isakmp" || name == "isdn" || name == "l2tc" || name == "l2tun" || name == "license" || name == "mac-notification" || name == "mac-notification2" || name == "memory" || name == "mpls" || name == "nhrp" || name == "ospf" || name == "ospfv3" || name == "pim" || name == "plogd" || name == "port-security" || name == "power-ethernet" || name == "pw" || name == "slb" || name == "snmp" || name == "stackwise" || name == "stpx" || name == "transceiver" || name == "trustsec" || name == "trustsec-interface" || name == "trustsec-policy" || name == "trustsec-server" || name == "trustsec-sxp" || name == "udld" || name == "vrfmib" || name == "vstack" || name == "vswitch" || name == "wireless" || name == "aaa_server" || name == "authenticate-fail" || name == "bfd" || name == "bgp" || name == "bstun" || name == "c2900" || name == "casa" || name == "ccme" || name == "channel" || name == "chassis" || name == "cluster" || name == "cnpd" || name == "config" || name == "config-copy" || name == "config-ctid" || name == "copy-config" || name == "cpu_threshold" || name == "deauthenticate" || name == "dial" || name == "director" || name == "disassociate" || name == "dlsw" || name == "dnis" || name == "dot11-qos" || name == "ds0-busyout" || name == "ds1" || name == "ds1-loopback" || name == "ds3" || name == "eigrp" || name == "entity" || name == "ether-oam" || name == "event-manager" || name == "flowmon" || name == "fru-ctrl" || name == "gatekeeper" || name == "hsrp" || name == "icsudsu" || name == "ima" || name == "ipmobile" || name == "ipmulticast" || name == "ipsla" || name == "isis" || name == "local-auth" || name == "module" || name == "msdp" || name == "mvpn" || name == "pppoe" || name == "rep" || name == "resource-policy" || name == "rf" || name == "rogue-ap" || name == "rsvp" || name == "rtr" || name == "sonet" || name == "srp" || name == "srst" || name == "stun" || name == "switch-over" || name == "syslog" || name == "tty" || name == "vlan-mac-limit" || name == "vlan-membership" || name == "vlancreate" || name == "vlandelete" || name == "voice" || name == "vrrp" || name == "vsimaster" || name == "vtp" || name == "wlan-wep" || name == "xgcp")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::Alarms()
    :
    alarm_type{YType::str, "alarm-type"}
{

    yang_name = "alarms"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::~Alarms()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_data() const
{
    return alarm_type.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_type.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_type.is_set || is_set(alarm_type.yfilter)) leaf_name_data.push_back(alarm_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-type")
    {
        alarm_type = value;
        alarm_type.value_namespace = name_space;
        alarm_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-type")
    {
        alarm_type.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-type")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Atm()
    :
    pvc(nullptr) // presence node
	,subif(nullptr) // presence node
{

    yang_name = "atm"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::~Atm()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_data() const
{
    return (pvc !=  nullptr && pvc->has_data())
	|| (subif !=  nullptr && subif->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_operation() const
{
    return is_set(yfilter)
	|| (pvc !=  nullptr && pvc->has_operation())
	|| (subif !=  nullptr && subif->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvc")
    {
        if(pvc == nullptr)
        {
            pvc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc>();
        }
        return pvc;
    }

    if(child_yang_name == "subif")
    {
        if(subif == nullptr)
        {
            subif = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif>();
        }
        return subif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pvc != nullptr)
    {
        children["pvc"] = pvc;
    }

    if(subif != nullptr)
    {
        children["subif"] = subif;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvc" || name == "subif")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Pvc()
    :
    fail_interval{YType::uint16, "fail-interval"},
    interval{YType::uint16, "interval"}
    	,
    extension(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension>())
{
    extension->parent = this;

    yang_name = "pvc"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::~Pvc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_data() const
{
    return fail_interval.is_set
	|| interval.is_set
	|| (extension !=  nullptr && extension->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fail_interval.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (extension !=  nullptr && extension->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fail_interval.is_set || is_set(fail_interval.yfilter)) leaf_name_data.push_back(fail_interval.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extension")
    {
        if(extension == nullptr)
        {
            extension = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension>();
        }
        return extension;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extension != nullptr)
    {
        children["extension"] = extension;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fail-interval")
    {
        fail_interval = value;
        fail_interval.value_namespace = name_space;
        fail_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fail-interval")
    {
        fail_interval.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extension" || name == "fail-interval" || name == "interval")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Extension()
    :
    down{YType::empty, "down"},
    mibversion{YType::enumeration, "mibversion"},
    up{YType::empty, "up"}
    	,
    oam(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam>())
{
    oam->parent = this;

    yang_name = "extension"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::~Extension()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_data() const
{
    return down.is_set
	|| mibversion.is_set
	|| up.is_set
	|| (oam !=  nullptr && oam->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(mibversion.yfilter)
	|| ydk::is_set(up.yfilter)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (mibversion.is_set || is_set(mibversion.yfilter)) leaf_name_data.push_back(mibversion.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mibversion")
    {
        mibversion = value;
        mibversion.value_namespace = name_space;
        mibversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "mibversion")
    {
        mibversion.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam" || name == "down" || name == "mibversion" || name == "up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Oam()
    :
    failure(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure>())
{
    failure->parent = this;

    yang_name = "oam"; yang_parent_name = "extension"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::~Oam()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_data() const
{
    return (failure !=  nullptr && failure->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/extension/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::Failure()
    :
    loopback{YType::empty, "loopback"}
{

    yang_name = "failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::~Failure()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_data() const
{
    return loopback.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/extension/oam/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loopback")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::Subif()
    :
    count{YType::uint16, "count"},
    interval{YType::uint16, "interval"}
{

    yang_name = "subif"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::~Subif()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::AuthFramework()
    :
    sec_violation{YType::empty, "sec-violation"}
{

    yang_name = "auth-framework"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::~AuthFramework()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_data() const
{
    return sec_violation.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sec_violation.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-framework";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec_violation.is_set || is_set(sec_violation.yfilter)) leaf_name_data.push_back(sec_violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sec-violation")
    {
        sec_violation = value;
        sec_violation.value_namespace = name_space;
        sec_violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sec-violation")
    {
        sec_violation.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec-violation")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::BgpConf()
    :
    cbgp2{YType::empty, "cbgp2"}
{

    yang_name = "bgp-conf"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::~BgpConf()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_data() const
{
    return cbgp2.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgp2.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgp2.is_set || is_set(cbgp2.yfilter)) leaf_name_data.push_back(cbgp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgp2")
    {
        cbgp2 = value;
        cbgp2.value_namespace = name_space;
        cbgp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgp2")
    {
        cbgp2.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgp2")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::Bridge()
    :
    newroot{YType::empty, "newroot"},
    topologychange{YType::empty, "topologychange"}
{

    yang_name = "bridge"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::~Bridge()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_data() const
{
    return newroot.is_set
	|| topologychange.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(newroot.yfilter)
	|| ydk::is_set(topologychange.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (newroot.is_set || is_set(newroot.yfilter)) leaf_name_data.push_back(newroot.get_name_leafdata());
    if (topologychange.is_set || is_set(topologychange.yfilter)) leaf_name_data.push_back(topologychange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "newroot")
    {
        newroot = value;
        newroot.value_namespace = name_space;
        newroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topologychange")
    {
        topologychange = value;
        topologychange.value_namespace = name_space;
        topologychange.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "newroot")
    {
        newroot.yfilter = yfilter;
    }
    if(value_path == "topologychange")
    {
        topologychange.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "newroot" || name == "topologychange")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::Bulkstat()
    :
    collection{YType::empty, "collection"},
    transfer{YType::empty, "transfer"}
{

    yang_name = "bulkstat"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::~Bulkstat()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_data() const
{
    return collection.is_set
	|| transfer.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collection.yfilter)
	|| ydk::is_set(transfer.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulkstat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collection.is_set || is_set(collection.yfilter)) leaf_name_data.push_back(collection.get_name_leafdata());
    if (transfer.is_set || is_set(transfer.yfilter)) leaf_name_data.push_back(transfer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collection")
    {
        collection = value;
        collection.value_namespace = name_space;
        collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transfer")
    {
        transfer = value;
        transfer.value_namespace = name_space;
        transfer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collection")
    {
        collection.yfilter = yfilter;
    }
    if(value_path == "transfer")
    {
        transfer.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collection" || name == "transfer")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::C6Kxbar()
    :
    intbus_crcexcd{YType::empty, "intbus-crcexcd"},
    intbus_crcrcvrd{YType::empty, "intbus-crcrcvrd"},
    swbus{YType::empty, "swbus"}
{

    yang_name = "c6kxbar"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::~C6Kxbar()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::has_data() const
{
    return intbus_crcexcd.is_set
	|| intbus_crcrcvrd.is_set
	|| swbus.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intbus_crcexcd.yfilter)
	|| ydk::is_set(intbus_crcrcvrd.yfilter)
	|| ydk::is_set(swbus.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c6kxbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intbus_crcexcd.is_set || is_set(intbus_crcexcd.yfilter)) leaf_name_data.push_back(intbus_crcexcd.get_name_leafdata());
    if (intbus_crcrcvrd.is_set || is_set(intbus_crcrcvrd.yfilter)) leaf_name_data.push_back(intbus_crcrcvrd.get_name_leafdata());
    if (swbus.is_set || is_set(swbus.yfilter)) leaf_name_data.push_back(swbus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intbus-crcexcd")
    {
        intbus_crcexcd = value;
        intbus_crcexcd.value_namespace = name_space;
        intbus_crcexcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intbus-crcrcvrd")
    {
        intbus_crcrcvrd = value;
        intbus_crcrcvrd.value_namespace = name_space;
        intbus_crcrcvrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swbus")
    {
        swbus = value;
        swbus.value_namespace = name_space;
        swbus.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intbus-crcexcd")
    {
        intbus_crcexcd.yfilter = yfilter;
    }
    if(value_path == "intbus-crcrcvrd")
    {
        intbus_crcrcvrd.yfilter = yfilter;
    }
    if(value_path == "swbus")
    {
        swbus.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intbus-crcexcd" || name == "intbus-crcrcvrd" || name == "swbus")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::CallHome()
    :
    message_send_fail{YType::empty, "message-send-fail"},
    server_fail{YType::empty, "server-fail"}
{

    yang_name = "call-home"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::~CallHome()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_data() const
{
    return message_send_fail.is_set
	|| server_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_send_fail.yfilter)
	|| ydk::is_set(server_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "call-home";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_send_fail.is_set || is_set(message_send_fail.yfilter)) leaf_name_data.push_back(message_send_fail.get_name_leafdata());
    if (server_fail.is_set || is_set(server_fail.yfilter)) leaf_name_data.push_back(server_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-send-fail")
    {
        message_send_fail = value;
        message_send_fail.value_namespace = name_space;
        message_send_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-fail")
    {
        server_fail = value;
        server_fail.value_namespace = name_space;
        server_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-send-fail")
    {
        message_send_fail.yfilter = yfilter;
    }
    if(value_path == "server-fail")
    {
        server_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-send-fail" || name == "server-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cef::Cef()
    :
    inconsistency{YType::empty, "inconsistency"},
    peer_fib_state_change{YType::empty, "peer-fib-state-change"},
    peer_state_change{YType::empty, "peer-state-change"},
    resource_failure{YType::empty, "resource-failure"}
{

    yang_name = "cef"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cef::~Cef()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_data() const
{
    return inconsistency.is_set
	|| peer_fib_state_change.is_set
	|| peer_state_change.is_set
	|| resource_failure.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inconsistency.yfilter)
	|| ydk::is_set(peer_fib_state_change.yfilter)
	|| ydk::is_set(peer_state_change.yfilter)
	|| ydk::is_set(resource_failure.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inconsistency.is_set || is_set(inconsistency.yfilter)) leaf_name_data.push_back(inconsistency.get_name_leafdata());
    if (peer_fib_state_change.is_set || is_set(peer_fib_state_change.yfilter)) leaf_name_data.push_back(peer_fib_state_change.get_name_leafdata());
    if (peer_state_change.is_set || is_set(peer_state_change.yfilter)) leaf_name_data.push_back(peer_state_change.get_name_leafdata());
    if (resource_failure.is_set || is_set(resource_failure.yfilter)) leaf_name_data.push_back(resource_failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inconsistency")
    {
        inconsistency = value;
        inconsistency.value_namespace = name_space;
        inconsistency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-fib-state-change")
    {
        peer_fib_state_change = value;
        peer_fib_state_change.value_namespace = name_space;
        peer_fib_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-state-change")
    {
        peer_state_change = value;
        peer_state_change.value_namespace = name_space;
        peer_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-failure")
    {
        resource_failure = value;
        resource_failure.value_namespace = name_space;
        resource_failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inconsistency")
    {
        inconsistency.yfilter = yfilter;
    }
    if(value_path == "peer-fib-state-change")
    {
        peer_fib_state_change.yfilter = yfilter;
    }
    if(value_path == "peer-state-change")
    {
        peer_state_change.yfilter = yfilter;
    }
    if(value_path == "resource-failure")
    {
        resource_failure.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inconsistency" || name == "peer-fib-state-change" || name == "peer-state-change" || name == "resource-failure")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::Cpu()
    :
    threshold{YType::empty, "threshold"}
{

    yang_name = "cpu"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::~Cpu()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_data() const
{
    return threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Csg::Csg()
    :
    agent{YType::empty, "agent"},
    database{YType::empty, "database"},
    quota_server{YType::empty, "quota-server"}
{

    yang_name = "csg"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Csg::~Csg()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_data() const
{
    return agent.is_set
	|| database.is_set
	|| quota_server.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent.yfilter)
	|| ydk::is_set(database.yfilter)
	|| ydk::is_set(quota_server.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent.is_set || is_set(agent.yfilter)) leaf_name_data.push_back(agent.get_name_leafdata());
    if (database.is_set || is_set(database.yfilter)) leaf_name_data.push_back(database.get_name_leafdata());
    if (quota_server.is_set || is_set(quota_server.yfilter)) leaf_name_data.push_back(quota_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Csg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent")
    {
        agent = value;
        agent.value_namespace = name_space;
        agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database")
    {
        database = value;
        database.value_namespace = name_space;
        database.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quota-server")
    {
        quota_server = value;
        quota_server.value_namespace = name_space;
        quota_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Csg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent")
    {
        agent.yfilter = yfilter;
    }
    if(value_path == "database")
    {
        database.yfilter = yfilter;
    }
    if(value_path == "quota-server")
    {
        quota_server.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent" || name == "database" || name == "quota-server")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::Dot1X()
    :
    auth_fail_vlan{YType::empty, "auth-fail-vlan"},
    guest_vlan{YType::empty, "guest-vlan"},
    no_auth_fail_vlan{YType::empty, "no-auth-fail-vlan"},
    no_guest_vlan{YType::empty, "no-guest-vlan"}
{

    yang_name = "dot1x"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::~Dot1X()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::has_data() const
{
    return auth_fail_vlan.is_set
	|| guest_vlan.is_set
	|| no_auth_fail_vlan.is_set
	|| no_guest_vlan.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_fail_vlan.yfilter)
	|| ydk::is_set(guest_vlan.yfilter)
	|| ydk::is_set(no_auth_fail_vlan.yfilter)
	|| ydk::is_set(no_guest_vlan.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_fail_vlan.is_set || is_set(auth_fail_vlan.yfilter)) leaf_name_data.push_back(auth_fail_vlan.get_name_leafdata());
    if (guest_vlan.is_set || is_set(guest_vlan.yfilter)) leaf_name_data.push_back(guest_vlan.get_name_leafdata());
    if (no_auth_fail_vlan.is_set || is_set(no_auth_fail_vlan.yfilter)) leaf_name_data.push_back(no_auth_fail_vlan.get_name_leafdata());
    if (no_guest_vlan.is_set || is_set(no_guest_vlan.yfilter)) leaf_name_data.push_back(no_guest_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-fail-vlan")
    {
        auth_fail_vlan = value;
        auth_fail_vlan.value_namespace = name_space;
        auth_fail_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guest-vlan")
    {
        guest_vlan = value;
        guest_vlan.value_namespace = name_space;
        guest_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-auth-fail-vlan")
    {
        no_auth_fail_vlan = value;
        no_auth_fail_vlan.value_namespace = name_space;
        no_auth_fail_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-guest-vlan")
    {
        no_guest_vlan = value;
        no_guest_vlan.value_namespace = name_space;
        no_guest_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-fail-vlan")
    {
        auth_fail_vlan.yfilter = yfilter;
    }
    if(value_path == "guest-vlan")
    {
        guest_vlan.yfilter = yfilter;
    }
    if(value_path == "no-auth-fail-vlan")
    {
        no_auth_fail_vlan.yfilter = yfilter;
    }
    if(value_path == "no-guest-vlan")
    {
        no_guest_vlan.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-fail-vlan" || name == "guest-vlan" || name == "no-auth-fail-vlan" || name == "no-guest-vlan")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::Dsp()
    :
    card_status{YType::empty, "card-status"},
    oper_state{YType::empty, "oper-state"}
{

    yang_name = "dsp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::~Dsp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_data() const
{
    return card_status.is_set
	|| oper_state.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_status.yfilter)
	|| ydk::is_set(oper_state.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_status.is_set || is_set(card_status.yfilter)) leaf_name_data.push_back(card_status.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-status")
    {
        card_status = value;
        card_status.value_namespace = name_space;
        card_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-status")
    {
        card_status.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-status" || name == "oper-state")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::Energywise()
    :
    event_occured{YType::empty, "event-occured"},
    level_change{YType::empty, "level-change"},
    neighbor_added{YType::empty, "neighbor-added"},
    neighbor_deleted{YType::empty, "neighbor-deleted"}
{

    yang_name = "energywise"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::~Energywise()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_data() const
{
    return event_occured.is_set
	|| level_change.is_set
	|| neighbor_added.is_set
	|| neighbor_deleted.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_occured.yfilter)
	|| ydk::is_set(level_change.yfilter)
	|| ydk::is_set(neighbor_added.yfilter)
	|| ydk::is_set(neighbor_deleted.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "energywise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_occured.is_set || is_set(event_occured.yfilter)) leaf_name_data.push_back(event_occured.get_name_leafdata());
    if (level_change.is_set || is_set(level_change.yfilter)) leaf_name_data.push_back(level_change.get_name_leafdata());
    if (neighbor_added.is_set || is_set(neighbor_added.yfilter)) leaf_name_data.push_back(neighbor_added.get_name_leafdata());
    if (neighbor_deleted.is_set || is_set(neighbor_deleted.yfilter)) leaf_name_data.push_back(neighbor_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-occured")
    {
        event_occured = value;
        event_occured.value_namespace = name_space;
        event_occured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-change")
    {
        level_change = value;
        level_change.value_namespace = name_space;
        level_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-added")
    {
        neighbor_added = value;
        neighbor_added.value_namespace = name_space;
        neighbor_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-deleted")
    {
        neighbor_deleted = value;
        neighbor_deleted.value_namespace = name_space;
        neighbor_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-occured")
    {
        event_occured.yfilter = yfilter;
    }
    if(value_path == "level-change")
    {
        level_change.yfilter = yfilter;
    }
    if(value_path == "neighbor-added")
    {
        neighbor_added.yfilter = yfilter;
    }
    if(value_path == "neighbor-deleted")
    {
        neighbor_deleted.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-occured" || name == "level-change" || name == "neighbor-added" || name == "neighbor-deleted")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::EntityDiag()
    :
    boot_up_fail{YType::empty, "boot-up-fail"},
    hm_test_recover{YType::empty, "hm-test-recover"},
    hm_thresh_reached{YType::empty, "hm-thresh-reached"},
    scheduled_test_fail{YType::empty, "scheduled-test-fail"}
{

    yang_name = "entity-diag"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::~EntityDiag()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_data() const
{
    return boot_up_fail.is_set
	|| hm_test_recover.is_set
	|| hm_thresh_reached.is_set
	|| scheduled_test_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_up_fail.yfilter)
	|| ydk::is_set(hm_test_recover.yfilter)
	|| ydk::is_set(hm_thresh_reached.yfilter)
	|| ydk::is_set(scheduled_test_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-diag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_up_fail.is_set || is_set(boot_up_fail.yfilter)) leaf_name_data.push_back(boot_up_fail.get_name_leafdata());
    if (hm_test_recover.is_set || is_set(hm_test_recover.yfilter)) leaf_name_data.push_back(hm_test_recover.get_name_leafdata());
    if (hm_thresh_reached.is_set || is_set(hm_thresh_reached.yfilter)) leaf_name_data.push_back(hm_thresh_reached.get_name_leafdata());
    if (scheduled_test_fail.is_set || is_set(scheduled_test_fail.yfilter)) leaf_name_data.push_back(scheduled_test_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-up-fail")
    {
        boot_up_fail = value;
        boot_up_fail.value_namespace = name_space;
        boot_up_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hm-test-recover")
    {
        hm_test_recover = value;
        hm_test_recover.value_namespace = name_space;
        hm_test_recover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hm-thresh-reached")
    {
        hm_thresh_reached = value;
        hm_thresh_reached.value_namespace = name_space;
        hm_thresh_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scheduled-test-fail")
    {
        scheduled_test_fail = value;
        scheduled_test_fail.value_namespace = name_space;
        scheduled_test_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-up-fail")
    {
        boot_up_fail.yfilter = yfilter;
    }
    if(value_path == "hm-test-recover")
    {
        hm_test_recover.yfilter = yfilter;
    }
    if(value_path == "hm-thresh-reached")
    {
        hm_thresh_reached.yfilter = yfilter;
    }
    if(value_path == "scheduled-test-fail")
    {
        scheduled_test_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-up-fail" || name == "hm-test-recover" || name == "hm-thresh-reached" || name == "scheduled-test-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::Envmon()
    :
    fan{YType::empty, "fan"},
    shutdown{YType::empty, "shutdown"},
    status{YType::empty, "status"},
    supply{YType::empty, "supply"},
    temperature{YType::empty, "temperature"}
{

    yang_name = "envmon"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::~Envmon()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_data() const
{
    return fan.is_set
	|| shutdown.is_set
	|| status.is_set
	|| supply.is_set
	|| temperature.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fan.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(supply.yfilter)
	|| ydk::is_set(temperature.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "envmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fan.is_set || is_set(fan.yfilter)) leaf_name_data.push_back(fan.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (supply.is_set || is_set(supply.yfilter)) leaf_name_data.push_back(supply.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.yfilter)) leaf_name_data.push_back(temperature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fan")
    {
        fan = value;
        fan.value_namespace = name_space;
        fan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supply")
    {
        supply = value;
        supply.value_namespace = name_space;
        supply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature")
    {
        temperature = value;
        temperature.value_namespace = name_space;
        temperature.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fan")
    {
        fan.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "supply")
    {
        supply.yfilter = yfilter;
    }
    if(value_path == "temperature")
    {
        temperature.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan" || name == "shutdown" || name == "status" || name == "supply" || name == "temperature")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::Errdisable()
    :
    notification_rate{YType::uint16, "notification-rate"}
{

    yang_name = "errdisable"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::~Errdisable()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_data() const
{
    return notification_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notification_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_rate.is_set || is_set(notification_rate.yfilter)) leaf_name_data.push_back(notification_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-rate")
    {
        notification_rate = value;
        notification_rate.value_namespace = name_space;
        notification_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-rate")
    {
        notification_rate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification-rate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Ethernet()
    :
    cfm(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm>())
	,evc(nullptr) // presence node
{
    cfm->parent = this;

    yang_name = "ethernet"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::~Ethernet()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_data() const
{
    return (cfm !=  nullptr && cfm->has_data())
	|| (evc !=  nullptr && evc->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (evc !=  nullptr && evc->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "evc")
    {
        if(evc == nullptr)
        {
            evc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc>();
        }
        return evc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(evc != nullptr)
    {
        children["evc"] = evc;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "evc")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cfm()
    :
    alarm{YType::empty, "alarm"}
    	,
    cc(nullptr) // presence node
	,crosscheck(nullptr) // presence node
{

    yang_name = "cfm"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::~Cfm()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_data() const
{
    return alarm.is_set
	|| (cc !=  nullptr && cc->has_data())
	|| (crosscheck !=  nullptr && crosscheck->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| (cc !=  nullptr && cc->has_operation())
	|| (crosscheck !=  nullptr && crosscheck->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc")
    {
        if(cc == nullptr)
        {
            cc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc>();
        }
        return cc;
    }

    if(child_yang_name == "crosscheck")
    {
        if(crosscheck == nullptr)
        {
            crosscheck = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck>();
        }
        return crosscheck;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cc != nullptr)
    {
        children["cc"] = cc;
    }

    if(crosscheck != nullptr)
    {
        children["crosscheck"] = crosscheck;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cc" || name == "crosscheck" || name == "alarm")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::Cc()
    :
    config{YType::empty, "config"},
    cross_connect{YType::empty, "cross-connect"},
    loop{YType::empty, "loop"},
    mep_down{YType::empty, "mep-down"},
    mep_up{YType::empty, "mep-up"}
{

    yang_name = "cc"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::~Cc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_data() const
{
    return config.is_set
	|| cross_connect.is_set
	|| loop.is_set
	|| mep_down.is_set
	|| mep_up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(cross_connect.yfilter)
	|| ydk::is_set(loop.yfilter)
	|| ydk::is_set(mep_down.yfilter)
	|| ydk::is_set(mep_up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (cross_connect.is_set || is_set(cross_connect.yfilter)) leaf_name_data.push_back(cross_connect.get_name_leafdata());
    if (loop.is_set || is_set(loop.yfilter)) leaf_name_data.push_back(loop.get_name_leafdata());
    if (mep_down.is_set || is_set(mep_down.yfilter)) leaf_name_data.push_back(mep_down.get_name_leafdata());
    if (mep_up.is_set || is_set(mep_up.yfilter)) leaf_name_data.push_back(mep_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect")
    {
        cross_connect = value;
        cross_connect.value_namespace = name_space;
        cross_connect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop")
    {
        loop = value;
        loop.value_namespace = name_space;
        loop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-down")
    {
        mep_down = value;
        mep_down.value_namespace = name_space;
        mep_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-up")
    {
        mep_up = value;
        mep_up.value_namespace = name_space;
        mep_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "cross-connect")
    {
        cross_connect.yfilter = yfilter;
    }
    if(value_path == "loop")
    {
        loop.yfilter = yfilter;
    }
    if(value_path == "mep-down")
    {
        mep_down.yfilter = yfilter;
    }
    if(value_path == "mep-up")
    {
        mep_up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "cross-connect" || name == "loop" || name == "mep-down" || name == "mep-up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::Crosscheck()
    :
    mep_missing{YType::empty, "mep-missing"},
    mep_unknown{YType::empty, "mep-unknown"},
    service_up{YType::empty, "service-up"}
{

    yang_name = "crosscheck"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::~Crosscheck()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_data() const
{
    return mep_missing.is_set
	|| mep_unknown.is_set
	|| service_up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mep_missing.yfilter)
	|| ydk::is_set(mep_unknown.yfilter)
	|| ydk::is_set(service_up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crosscheck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_missing.is_set || is_set(mep_missing.yfilter)) leaf_name_data.push_back(mep_missing.get_name_leafdata());
    if (mep_unknown.is_set || is_set(mep_unknown.yfilter)) leaf_name_data.push_back(mep_unknown.get_name_leafdata());
    if (service_up.is_set || is_set(service_up.yfilter)) leaf_name_data.push_back(service_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mep-missing")
    {
        mep_missing = value;
        mep_missing.value_namespace = name_space;
        mep_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-unknown")
    {
        mep_unknown = value;
        mep_unknown.value_namespace = name_space;
        mep_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-up")
    {
        service_up = value;
        service_up.value_namespace = name_space;
        service_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mep-missing")
    {
        mep_missing.yfilter = yfilter;
    }
    if(value_path == "mep-unknown")
    {
        mep_unknown.yfilter = yfilter;
    }
    if(value_path == "service-up")
    {
        service_up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mep-missing" || name == "mep-unknown" || name == "service-up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::Evc()
    :
    create{YType::empty, "create"},
    delete_{YType::empty, "delete"},
    status{YType::empty, "status"}
{

    yang_name = "evc"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::~Evc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_data() const
{
    return create.is_set
	|| delete_.is_set
	|| status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "create" || name == "delete" || name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::Firewall()
    :
    serverstatus{YType::empty, "serverstatus"}
{

    yang_name = "firewall"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::~Firewall()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_data() const
{
    return serverstatus.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serverstatus.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serverstatus.is_set || is_set(serverstatus.yfilter)) leaf_name_data.push_back(serverstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serverstatus")
    {
        serverstatus = value;
        serverstatus.value_namespace = name_space;
        serverstatus.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serverstatus")
    {
        serverstatus.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serverstatus")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Flash::Flash()
    :
    insertion{YType::empty, "insertion"},
    removal{YType::empty, "removal"}
{

    yang_name = "flash"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Flash::~Flash()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_data() const
{
    return insertion.is_set
	|| removal.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insertion.yfilter)
	|| ydk::is_set(removal.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insertion.is_set || is_set(insertion.yfilter)) leaf_name_data.push_back(insertion.get_name_leafdata());
    if (removal.is_set || is_set(removal.yfilter)) leaf_name_data.push_back(removal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insertion")
    {
        insertion = value;
        insertion.value_namespace = name_space;
        insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removal")
    {
        removal = value;
        removal.value_namespace = name_space;
        removal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insertion")
    {
        insertion.yfilter = yfilter;
    }
    if(value_path == "removal")
    {
        removal.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insertion" || name == "removal")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::FlexLinks()
    :
    status{YType::empty, "status"}
{

    yang_name = "flex-links"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::~FlexLinks()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_data() const
{
    return status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::FrameRelay()
    :
    multilink(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink>())
	,subif(nullptr) // presence node
{
    multilink->parent = this;

    yang_name = "frame-relay"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::~FrameRelay()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_data() const
{
    return (multilink !=  nullptr && multilink->has_data())
	|| (subif !=  nullptr && subif->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (subif !=  nullptr && subif->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink>();
        }
        return multilink;
    }

    if(child_yang_name == "subif")
    {
        if(subif == nullptr)
        {
            subif = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif>();
        }
        return subif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multilink != nullptr)
    {
        children["multilink"] = multilink;
    }

    if(subif != nullptr)
    {
        children["subif"] = subif;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multilink" || name == "subif")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::Multilink()
    :
    bundle_mismatch{YType::empty, "bundle-mismatch"}
{

    yang_name = "multilink"; yang_parent_name = "frame-relay"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::~Multilink()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_data() const
{
    return bundle_mismatch.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_mismatch.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/frame-relay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_mismatch.is_set || is_set(bundle_mismatch.yfilter)) leaf_name_data.push_back(bundle_mismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-mismatch")
    {
        bundle_mismatch = value;
        bundle_mismatch.value_namespace = name_space;
        bundle_mismatch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-mismatch")
    {
        bundle_mismatch.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-mismatch")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::Subif()
{

    yang_name = "subif"; yang_parent_name = "frame-relay"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::~Subif()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/frame-relay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Ike()
    :
    policy(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy>())
	,tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel>())
{
    policy->parent = this;
    tunnel->parent = this;

    yang_name = "ike"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::~Ike()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ike";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tunnel")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::Policy()
    :
    add{YType::empty, "add"},
    delete_{YType::empty, "delete"}
{

    yang_name = "policy"; yang_parent_name = "ike"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::~Policy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_data() const
{
    return add.is_set
	|| delete_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ike/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "delete")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{

    yang_name = "tunnel"; yang_parent_name = "ike"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_data() const
{
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ike/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Ipsec()
    :
    too_many_sas{YType::empty, "too-many-sas"}
    	,
    cryptomap(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap>())
	,tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel>())
{
    cryptomap->parent = this;
    tunnel->parent = this;

    yang_name = "ipsec"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::~Ipsec()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_data() const
{
    return too_many_sas.is_set
	|| (cryptomap !=  nullptr && cryptomap->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(too_many_sas.yfilter)
	|| (cryptomap !=  nullptr && cryptomap->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (too_many_sas.is_set || is_set(too_many_sas.yfilter)) leaf_name_data.push_back(too_many_sas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cryptomap")
    {
        if(cryptomap == nullptr)
        {
            cryptomap = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap>();
        }
        return cryptomap;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cryptomap != nullptr)
    {
        children["cryptomap"] = cryptomap;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "too-many-sas")
    {
        too_many_sas = value;
        too_many_sas.value_namespace = name_space;
        too_many_sas.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "too-many-sas")
    {
        too_many_sas.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cryptomap" || name == "tunnel" || name == "too-many-sas")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::Cryptomap()
    :
    add{YType::empty, "add"},
    attach{YType::empty, "attach"},
    delete_{YType::empty, "delete"},
    detach{YType::empty, "detach"}
{

    yang_name = "cryptomap"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::~Cryptomap()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_data() const
{
    return add.is_set
	|| attach.is_set
	|| delete_.is_set
	|| detach.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(detach.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cryptomap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (detach.is_set || is_set(detach.yfilter)) leaf_name_data.push_back(detach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detach")
    {
        detach = value;
        detach.value_namespace = name_space;
        detach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
    if(value_path == "detach")
    {
        detach.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "attach" || name == "delete" || name == "detach")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{

    yang_name = "tunnel"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_data() const
{
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Isakmp()
    :
    policy(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy>())
	,tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel>())
{
    policy->parent = this;
    tunnel->parent = this;

    yang_name = "isakmp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::~Isakmp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tunnel")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::Policy()
    :
    add{YType::empty, "add"},
    delete_{YType::empty, "delete"}
{

    yang_name = "policy"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::~Policy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_data() const
{
    return add.is_set
	|| delete_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "delete")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{

    yang_name = "tunnel"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_data() const
{
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::Isdn()
    :
    call_information{YType::empty, "call-information"},
    chan_not_avail{YType::empty, "chan-not-avail"},
    ietf{YType::empty, "ietf"},
    layer2{YType::empty, "layer2"}
{

    yang_name = "isdn"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::~Isdn()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_data() const
{
    return call_information.is_set
	|| chan_not_avail.is_set
	|| ietf.is_set
	|| layer2.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(call_information.yfilter)
	|| ydk::is_set(chan_not_avail.yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(layer2.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_information.is_set || is_set(call_information.yfilter)) leaf_name_data.push_back(call_information.get_name_leafdata());
    if (chan_not_avail.is_set || is_set(chan_not_avail.yfilter)) leaf_name_data.push_back(chan_not_avail.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (layer2.is_set || is_set(layer2.yfilter)) leaf_name_data.push_back(layer2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "call-information")
    {
        call_information = value;
        call_information.value_namespace = name_space;
        call_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chan-not-avail")
    {
        chan_not_avail = value;
        chan_not_avail.value_namespace = name_space;
        chan_not_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer2")
    {
        layer2 = value;
        layer2.value_namespace = name_space;
        layer2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "call-information")
    {
        call_information.yfilter = yfilter;
    }
    if(value_path == "chan-not-avail")
    {
        chan_not_avail.yfilter = yfilter;
    }
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "layer2")
    {
        layer2.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "call-information" || name == "chan-not-avail" || name == "ietf" || name == "layer2")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::L2Tc()
    :
    sys_threshold{YType::empty, "sys-threshold"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "l2tc"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::~L2Tc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::has_data() const
{
    return sys_threshold.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sys_threshold.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sys_threshold.is_set || is_set(sys_threshold.yfilter)) leaf_name_data.push_back(sys_threshold.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sys-threshold")
    {
        sys_threshold = value;
        sys_threshold.value_namespace = name_space;
        sys_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sys-threshold")
    {
        sys_threshold.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys-threshold" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::L2Tun()
    :
    session{YType::empty, "session"}
    	,
    pseudowire(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "l2tun"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::~L2Tun()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::has_data() const
{
    return session.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "session")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{

    yang_name = "pseudowire"; yang_parent_name = "l2tun"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::~Pseudowire()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/l2tun/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::License::License()
    :
    deploy{YType::empty, "deploy"},
    error{YType::empty, "error"},
    usage{YType::empty, "usage"}
{

    yang_name = "license"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::License::~License()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_data() const
{
    return deploy.is_set
	|| error.is_set
	|| usage.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deploy.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(usage.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::License::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deploy.is_set || is_set(deploy.yfilter)) leaf_name_data.push_back(deploy.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deploy")
    {
        deploy = value;
        deploy.value_namespace = name_space;
        deploy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::License::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deploy")
    {
        deploy.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deploy" || name == "error" || name == "usage")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::MacNotification()
    :
    change{YType::empty, "change"},
    move{YType::empty, "move"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "mac-notification"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::~MacNotification()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_data() const
{
    return change.is_set
	|| move.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change.yfilter)
	|| ydk::is_set(move.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.yfilter)) leaf_name_data.push_back(change.get_name_leafdata());
    if (move.is_set || is_set(move.yfilter)) leaf_name_data.push_back(move.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change")
    {
        change = value;
        change.value_namespace = name_space;
        change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "move")
    {
        move = value;
        move.value_namespace = name_space;
        move.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change")
    {
        change.yfilter = yfilter;
    }
    if(value_path == "move")
    {
        move.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "move" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::MacNotification2()
    :
    change{YType::empty, "change"},
    move{YType::empty, "move"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "mac-notification2"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::~MacNotification2()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_data() const
{
    return change.is_set
	|| move.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change.yfilter)
	|| ydk::is_set(move.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-notification2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.yfilter)) leaf_name_data.push_back(change.get_name_leafdata());
    if (move.is_set || is_set(move.yfilter)) leaf_name_data.push_back(move.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change")
    {
        change = value;
        change.value_namespace = name_space;
        change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "move")
    {
        move = value;
        move.value_namespace = name_space;
        move.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change")
    {
        change.yfilter = yfilter;
    }
    if(value_path == "move")
    {
        move.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "move" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Memory::Memory()
    :
    bufferpeak{YType::empty, "bufferpeak"}
{

    yang_name = "memory"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Memory::~Memory()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_data() const
{
    return bufferpeak.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bufferpeak.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bufferpeak.is_set || is_set(bufferpeak.yfilter)) leaf_name_data.push_back(bufferpeak.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferpeak")
    {
        bufferpeak = value;
        bufferpeak.value_namespace = name_space;
        bufferpeak.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferpeak")
    {
        bufferpeak.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferpeak")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Mpls()
    :
    vpn{YType::empty, "vpn"}
    	,
    fast_reroute(nullptr) // presence node
	,ldp(nullptr) // presence node
	,rfc(nullptr) // presence node
	,traffic_eng(nullptr) // presence node
{

    yang_name = "mpls"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::~Mpls()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_data() const
{
    return vpn.is_set
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (rfc !=  nullptr && rfc->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (rfc !=  nullptr && rfc->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "rfc")
    {
        if(rfc == nullptr)
        {
            rfc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc>();
        }
        return rfc;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(rfc != nullptr)
    {
        children["rfc"] = rfc;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute" || name == "ldp" || name == "rfc" || name == "traffic-eng" || name == "vpn")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::FastReroute()
    :
    protected_{YType::empty, "protected"}
{

    yang_name = "fast-reroute"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::~FastReroute()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_data() const
{
    return protected_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::Ldp()
    :
    pv_limit{YType::empty, "pv-limit"},
    session_down{YType::empty, "session-down"},
    session_up{YType::empty, "session-up"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::~Ldp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_data() const
{
    return pv_limit.is_set
	|| session_down.is_set
	|| session_up.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pv_limit.yfilter)
	|| ydk::is_set(session_down.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pv_limit.is_set || is_set(pv_limit.yfilter)) leaf_name_data.push_back(pv_limit.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pv-limit")
    {
        pv_limit = value;
        pv_limit.value_namespace = name_space;
        pv_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pv-limit")
    {
        pv_limit.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pv-limit" || name == "session-down" || name == "session-up" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::Rfc()
    :
    ldp{YType::empty, "ldp"}
{

    yang_name = "rfc"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::~Rfc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_data() const
{
    return ldp.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rfc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp.is_set || is_set(ldp.yfilter)) leaf_name_data.push_back(ldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp")
    {
        ldp = value;
        ldp.value_namespace = name_space;
        ldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp")
    {
        ldp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp")
        return true;
    return false;
}

const Enum::YLeaf Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Enhanced::copy {0, "copy"};
const Enum::YLeaf Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Enhanced::divert {1, "divert"};

const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::ServiceInsertion::ServiceNodeGroup::NodeDiscovery::enable {0, "enable"};

const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::must_secure {1, "must-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::should_secure {2, "should-secure"};

const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::cbqos {0, "cbqos"};
const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::circuit {1, "circuit"};
const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::v3mibs {2, "v3mibs"};

const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::critical {0, "critical"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::informational {1, "informational"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::major {2, "major"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::minor {3, "minor"};

const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion::Y_1 {0, "1"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion::Y_2 {1, "2"};


}
}

