
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_13.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_15.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_14.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-configured"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::~RdConfigured()
{
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/pwr/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Pwr::Summary::RdConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Pwr::Summary::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Pwr::Summary::RdConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::Auto_()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::~Auto_()
{
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::has_data() const
{
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ces()
{

    yang_name = "xconnect-mp2mp-ce2ces"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::XconnectMp2MpCe2Ces::~XconnectMp2MpCe2Ces()
{
}

bool L2Vpnv2::Active::XconnectMp2MpCe2Ces::has_data() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.size(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Active::XconnectMp2MpCe2Ces::has_operation() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.size(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Active::XconnectMp2MpCe2Ces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::XconnectMp2MpCe2Ces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::XconnectMp2MpCe2Ces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::XconnectMp2MpCe2Ces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-mp2mp-ce2ce")
    {
        for(auto const & c : xconnect_mp2mp_ce2ce)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce>();
        c->parent = this;
        xconnect_mp2mp_ce2ce.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::XconnectMp2MpCe2Ces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect_mp2mp_ce2ce)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::XconnectMp2MpCe2Ces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Active::XconnectMp2MpCe2Ces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Active::XconnectMp2MpCe2Ces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-mp2mp-ce2ce")
        return true;
    return false;
}

L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::XconnectMp2MpCe2Ce()
    :
    group_name{YType::str, "group-name"},
    mp2_mp_name{YType::str, "mp2-mp-name"},
    local_ceid{YType::uint32, "local-ceid"},
    remote_ceid{YType::uint32, "remote-ceid"},
    local_customer_edge_id{YType::uint16, "local-customer-edge-id"},
    remote_customer_edge_id{YType::uint16, "remote-customer-edge-id"},
    ce_added{YType::boolean, "ce-added"}
{

    yang_name = "xconnect-mp2mp-ce2ce"; yang_parent_name = "xconnect-mp2mp-ce2ces"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::~XconnectMp2MpCe2Ce()
{
}

bool L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_data() const
{
    return group_name.is_set
	|| mp2_mp_name.is_set
	|| local_ceid.is_set
	|| remote_ceid.is_set
	|| local_customer_edge_id.is_set
	|| remote_customer_edge_id.is_set
	|| ce_added.is_set;
}

bool L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(mp2_mp_name.yfilter)
	|| ydk::is_set(local_ceid.yfilter)
	|| ydk::is_set(remote_ceid.yfilter)
	|| ydk::is_set(local_customer_edge_id.yfilter)
	|| ydk::is_set(remote_customer_edge_id.yfilter)
	|| ydk::is_set(ce_added.yfilter);
}

std::string L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-mp2mp-ce2ces/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (mp2_mp_name.is_set || is_set(mp2_mp_name.yfilter)) leaf_name_data.push_back(mp2_mp_name.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.yfilter)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.yfilter)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (local_customer_edge_id.is_set || is_set(local_customer_edge_id.yfilter)) leaf_name_data.push_back(local_customer_edge_id.get_name_leafdata());
    if (remote_customer_edge_id.is_set || is_set(remote_customer_edge_id.yfilter)) leaf_name_data.push_back(remote_customer_edge_id.get_name_leafdata());
    if (ce_added.is_set || is_set(ce_added.yfilter)) leaf_name_data.push_back(ce_added.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name = value;
        mp2_mp_name.value_namespace = name_space;
        mp2_mp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
        local_ceid.value_namespace = name_space;
        local_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
        remote_ceid.value_namespace = name_space;
        remote_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-customer-edge-id")
    {
        local_customer_edge_id = value;
        local_customer_edge_id.value_namespace = name_space;
        local_customer_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-customer-edge-id")
    {
        remote_customer_edge_id = value;
        remote_customer_edge_id.value_namespace = name_space;
        remote_customer_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ce-added")
    {
        ce_added = value;
        ce_added.value_namespace = name_space;
        ce_added.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name.yfilter = yfilter;
    }
    if(value_path == "local-ceid")
    {
        local_ceid.yfilter = yfilter;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid.yfilter = yfilter;
    }
    if(value_path == "local-customer-edge-id")
    {
        local_customer_edge_id.yfilter = yfilter;
    }
    if(value_path == "remote-customer-edge-id")
    {
        remote_customer_edge_id.yfilter = yfilter;
    }
    if(value_path == "ce-added")
    {
        ce_added.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "mp2-mp-name" || name == "local-ceid" || name == "remote-ceid" || name == "local-customer-edge-id" || name == "remote-customer-edge-id" || name == "ce-added")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnects()
{

    yang_name = "xconnects"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::~Xconnects()
{
}

bool L2Vpnv2::Active::Xconnects::has_data() const
{
    for (std::size_t index=0; index<xconnect.size(); index++)
    {
        if(xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Active::Xconnects::has_operation() const
{
    for (std::size_t index=0; index<xconnect.size(); index++)
    {
        if(xconnect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Active::Xconnects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        for(auto const & c : xconnect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect>();
        c->parent = this;
        xconnect.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Active::Xconnects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Active::Xconnects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Xconnect()
    :
    group_name{YType::str, "group-name"},
    xconnect_name{YType::str, "xconnect-name"},
    group_name_xr{YType::str, "group-name-xr"},
    xconnect_name_xr{YType::str, "xconnect-name-xr"},
    number_of_backup_p_ws{YType::uint32, "number-of-backup-p-ws"},
    state{YType::enumeration, "state"},
    interworking{YType::enumeration, "interworking"},
    diag_mask{YType::uint32, "diag-mask"},
    description{YType::str, "description"},
    is_mp2mp{YType::boolean, "is-mp2mp"}
    	,
    backup(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup>())
	,segment1(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1>())
	,segment2(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment2>())
	,ce2ce(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Ce2Ce>())
{
    backup->parent = this;
    segment1->parent = this;
    segment2->parent = this;
    ce2ce->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnects"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::~Xconnect()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::has_data() const
{
    for (std::size_t index=0; index<backup_segment.size(); index++)
    {
        if(backup_segment[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| xconnect_name.is_set
	|| group_name_xr.is_set
	|| xconnect_name_xr.is_set
	|| number_of_backup_p_ws.is_set
	|| state.is_set
	|| interworking.is_set
	|| diag_mask.is_set
	|| description.is_set
	|| is_mp2mp.is_set
	|| (backup !=  nullptr && backup->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data())
	|| (ce2ce !=  nullptr && ce2ce->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<backup_segment.size(); index++)
    {
        if(backup_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(xconnect_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(xconnect_name_xr.yfilter)
	|| ydk::is_set(number_of_backup_p_ws.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(diag_mask.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(is_mp2mp.yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation())
	|| (ce2ce !=  nullptr && ce2ce->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (xconnect_name.is_set || is_set(xconnect_name.yfilter)) leaf_name_data.push_back(xconnect_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (xconnect_name_xr.is_set || is_set(xconnect_name_xr.yfilter)) leaf_name_data.push_back(xconnect_name_xr.get_name_leafdata());
    if (number_of_backup_p_ws.is_set || is_set(number_of_backup_p_ws.yfilter)) leaf_name_data.push_back(number_of_backup_p_ws.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (diag_mask.is_set || is_set(diag_mask.yfilter)) leaf_name_data.push_back(diag_mask.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (is_mp2mp.is_set || is_set(is_mp2mp.yfilter)) leaf_name_data.push_back(is_mp2mp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment2>();
        }
        return segment2;
    }

    if(child_yang_name == "ce2ce")
    {
        if(ce2ce == nullptr)
        {
            ce2ce = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Ce2Ce>();
        }
        return ce2ce;
    }

    if(child_yang_name == "backup-segment")
    {
        for(auto const & c : backup_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::BackupSegment>();
        c->parent = this;
        backup_segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(segment1 != nullptr)
    {
        children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        children["segment2"] = segment2;
    }

    if(ce2ce != nullptr)
    {
        children["ce2ce"] = ce2ce;
    }

    for (auto const & c : backup_segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name = value;
        xconnect_name.value_namespace = name_space;
        xconnect_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr = value;
        xconnect_name_xr.value_namespace = name_space;
        xconnect_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws = value;
        number_of_backup_p_ws.value_namespace = name_space;
        number_of_backup_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-mask")
    {
        diag_mask = value;
        diag_mask.value_namespace = name_space;
        diag_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp = value;
        is_mp2mp.value_namespace = name_space;
        is_mp2mp.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr.yfilter = yfilter;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "diag-mask")
    {
        diag_mask.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "segment1" || name == "segment2" || name == "ce2ce" || name == "backup-segment" || name == "group-name" || name == "xconnect-name" || name == "group-name-xr" || name == "xconnect-name-xr" || name == "number-of-backup-p-ws" || name == "state" || name == "interworking" || name == "diag-mask" || name == "description" || name == "is-mp2mp")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::Backup()
    :
    segment_type{YType::enumeration, "segment-type"}
    	,
    attachment_circuit(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit>())
	,pseudo_wire(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire>())
{
    attachment_circuit->parent = this;
    pseudo_wire->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::~Backup()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::has_data() const
{
    return segment_type.is_set
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_data())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_operation())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        if(attachment_circuit == nullptr)
        {
            attachment_circuit = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit>();
        }
        return attachment_circuit;
    }

    if(child_yang_name == "pseudo-wire")
    {
        if(pseudo_wire == nullptr)
        {
            pseudo_wire = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire>();
        }
        return pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment_circuit != nullptr)
    {
        children["attachment-circuit"] = attachment_circuit;
    }

    if(pseudo_wire != nullptr)
    {
        children["pseudo-wire"] = pseudo_wire;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit" || name == "pseudo-wire" || name == "segment-type")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::AttachmentCircuit()
    :
    state{YType::enumeration, "state"},
    msti{YType::str, "msti"},
    internal_ms_ti{YType::str, "internal-ms-ti"},
    interface_handle{YType::str, "interface-handle"},
    node_id{YType::str, "node-id"},
    xconnect_id{YType::uint32, "xconnect-id"},
    ms_ti_mismatch{YType::boolean, "ms-ti-mismatch"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    tdm_media_mismatched{YType::boolean, "tdm-media-mismatched"},
    bvi_mac_conflict{YType::boolean, "bvi-mac-conflict"},
    bvi_no_port_up{YType::boolean, "bvi-no-port-up"},
    control_word_mismatched{YType::boolean, "control-word-mismatched"},
    encapsulation_mismatched{YType::boolean, "encapsulation-mismatched"},
    encapsulation_error{YType::str, "encapsulation-error"},
    interworking{YType::enumeration, "interworking"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    msti_mismatch_down{YType::boolean, "msti-mismatch-down"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_group_state{YType::enumeration, "redundancy-group-state"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    is_ac_partially_programmed{YType::boolean, "is-ac-partially-programmed"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"}
    	,
    interface(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface>())
	,statistics(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics>())
	,l2vpn_protection(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection>())
{
    interface->parent = this;
    statistics->parent = this;
    l2vpn_protection->parent = this;

    yang_name = "attachment-circuit"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::has_data() const
{
    return state.is_set
	|| msti.is_set
	|| internal_ms_ti.is_set
	|| interface_handle.is_set
	|| node_id.is_set
	|| xconnect_id.is_set
	|| ms_ti_mismatch.is_set
	|| mtu_mismatched.is_set
	|| tdm_media_mismatched.is_set
	|| bvi_mac_conflict.is_set
	|| bvi_no_port_up.is_set
	|| control_word_mismatched.is_set
	|| encapsulation_mismatched.is_set
	|| encapsulation_error.is_set
	|| interworking.is_set
	|| out_of_memory_state.is_set
	|| msti_mismatch_down.is_set
	|| mac_limit_oper_down.is_set
	|| redundancy_group_id.is_set
	|| redundancy_group_state.is_set
	|| redundancy_object_id.is_set
	|| is_ac_partially_programmed.is_set
	|| evpn_internal_label.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(internal_ms_ti.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(ms_ti_mismatch.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(tdm_media_mismatched.yfilter)
	|| ydk::is_set(bvi_mac_conflict.yfilter)
	|| ydk::is_set(bvi_no_port_up.yfilter)
	|| ydk::is_set(control_word_mismatched.yfilter)
	|| ydk::is_set(encapsulation_mismatched.yfilter)
	|| ydk::is_set(encapsulation_error.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(msti_mismatch_down.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_group_state.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(is_ac_partially_programmed.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (internal_ms_ti.is_set || is_set(internal_ms_ti.yfilter)) leaf_name_data.push_back(internal_ms_ti.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (ms_ti_mismatch.is_set || is_set(ms_ti_mismatch.yfilter)) leaf_name_data.push_back(ms_ti_mismatch.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (tdm_media_mismatched.is_set || is_set(tdm_media_mismatched.yfilter)) leaf_name_data.push_back(tdm_media_mismatched.get_name_leafdata());
    if (bvi_mac_conflict.is_set || is_set(bvi_mac_conflict.yfilter)) leaf_name_data.push_back(bvi_mac_conflict.get_name_leafdata());
    if (bvi_no_port_up.is_set || is_set(bvi_no_port_up.yfilter)) leaf_name_data.push_back(bvi_no_port_up.get_name_leafdata());
    if (control_word_mismatched.is_set || is_set(control_word_mismatched.yfilter)) leaf_name_data.push_back(control_word_mismatched.get_name_leafdata());
    if (encapsulation_mismatched.is_set || is_set(encapsulation_mismatched.yfilter)) leaf_name_data.push_back(encapsulation_mismatched.get_name_leafdata());
    if (encapsulation_error.is_set || is_set(encapsulation_error.yfilter)) leaf_name_data.push_back(encapsulation_error.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (msti_mismatch_down.is_set || is_set(msti_mismatch_down.yfilter)) leaf_name_data.push_back(msti_mismatch_down.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_group_state.is_set || is_set(redundancy_group_state.yfilter)) leaf_name_data.push_back(redundancy_group_state.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (is_ac_partially_programmed.is_set || is_set(is_ac_partially_programmed.yfilter)) leaf_name_data.push_back(is_ac_partially_programmed.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "l2vpn-protection")
    {
        if(l2vpn_protection == nullptr)
        {
            l2vpn_protection = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection>();
        }
        return l2vpn_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(l2vpn_protection != nullptr)
    {
        children["l2vpn-protection"] = l2vpn_protection;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti = value;
        internal_ms_ti.value_namespace = name_space;
        internal_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch = value;
        ms_ti_mismatch.value_namespace = name_space;
        ms_ti_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched = value;
        tdm_media_mismatched.value_namespace = name_space;
        tdm_media_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict = value;
        bvi_mac_conflict.value_namespace = name_space;
        bvi_mac_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up = value;
        bvi_no_port_up.value_namespace = name_space;
        bvi_no_port_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched = value;
        control_word_mismatched.value_namespace = name_space;
        control_word_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched = value;
        encapsulation_mismatched.value_namespace = name_space;
        encapsulation_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error = value;
        encapsulation_error.value_namespace = name_space;
        encapsulation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down = value;
        msti_mismatch_down.value_namespace = name_space;
        msti_mismatch_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state = value;
        redundancy_group_state.value_namespace = name_space;
        redundancy_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed = value;
        is_ac_partially_programmed.value_namespace = name_space;
        is_ac_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched.yfilter = yfilter;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict.yfilter = yfilter;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up.yfilter = yfilter;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "statistics" || name == "l2vpn-protection" || name == "state" || name == "msti" || name == "internal-ms-ti" || name == "interface-handle" || name == "node-id" || name == "xconnect-id" || name == "ms-ti-mismatch" || name == "mtu-mismatched" || name == "tdm-media-mismatched" || name == "bvi-mac-conflict" || name == "bvi-no-port-up" || name == "control-word-mismatched" || name == "encapsulation-mismatched" || name == "encapsulation-error" || name == "interworking" || name == "out-of-memory-state" || name == "msti-mismatch-down" || name == "mac-limit-oper-down" || name == "redundancy-group-id" || name == "redundancy-group-state" || name == "redundancy-object-id" || name == "is-ac-partially-programmed" || name == "evpn-internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Interface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters>())
{
    parameters->parent = this;

    yang_name = "interface"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::~Interface()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_data() const
{
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    ethernet(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>())
	,vlan(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan>())
	,tdm(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm>())
	,atm(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm>())
	,fr(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_data() const
{
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_data() const
{
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/tdm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_data() const
{
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/pseudowire-ether/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/pseudowire-ether/interface-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/pseudowire-iw/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/interface/parameters/pseudowire-iw/interface-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::Statistics()
    :
    impostion_stats(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats>())
	,dispostion_stats(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber>())
{
    impostion_stats->parent = this;
    dispostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::~Statistics()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_data() const
{
    return (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "impostion-stats" || name == "dispostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionStats()
    :
    imposition_stat(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast>())
	,broadcast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>())
{
    imposition_stat->parent = this;
    imposition_mtu_drop->parent = this;
    impostion_tail_drop->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    broadcast->parent = this;
    known_unicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::has_data() const
{
    return (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imposition-stat" || name == "imposition-mtu-drop" || name == "impostion-tail-drop" || name == "l2fsbi-drop" || name == "multicast" || name == "broadcast" || name == "known-unicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::Multicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispostionStats()
    :
    disposition_stat(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>())
	,multicast_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>())
	,unicast_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>())
	,broadcast_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>())
	,dai_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove>())
{
    disposition_stat->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_tail_drop->parent = this;
    multicast_drop->parent = this;
    unicast_drop->parent = this;
    broadcast_drop->parent = this;
    received_drops->parent = this;
    dai_drop->parent = this;
    ipsg_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_data() const
{
    return (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disposition-stat" || name == "disposition-mtu-drop" || name == "disposition-tail-drop" || name == "multicast-drop" || name == "unicast-drop" || name == "broadcast-drop" || name == "received-drops" || name == "dai-drop" || name == "ipsg-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "known-unicast" || name == "mac-move")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::MacMove()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::SequenceNumber()
    :
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::has_data() const
{
    return sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number-sent" || name == "sequence-number-expected" || name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::L2VpnProtection()
    :
    protection_type{YType::enumeration, "protection-type"},
    protection_configured{YType::enumeration, "protection-configured"},
    protection_name{YType::str, "protection-name"},
    protected_name{YType::str, "protected-name"},
    active{YType::boolean, "active"}
{

    yang_name = "l2vpn-protection"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::~L2VpnProtection()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_data() const
{
    return protection_type.is_set
	|| protection_configured.is_set
	|| protection_name.is_set
	|| protected_name.is_set
	|| active.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_configured.yfilter)
	|| ydk::is_set(protection_name.yfilter)
	|| ydk::is_set(protected_name.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/attachment-circuit/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_configured.is_set || is_set(protection_configured.yfilter)) leaf_name_data.push_back(protection_configured.get_name_leafdata());
    if (protection_name.is_set || is_set(protection_name.yfilter)) leaf_name_data.push_back(protection_name.get_name_leafdata());
    if (protected_name.is_set || is_set(protected_name.yfilter)) leaf_name_data.push_back(protected_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-configured")
    {
        protection_configured = value;
        protection_configured.value_namespace = name_space;
        protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-name")
    {
        protection_name = value;
        protection_name.value_namespace = name_space;
        protection_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-name")
    {
        protected_name = value;
        protected_name.value_namespace = name_space;
        protected_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-configured")
    {
        protection_configured.yfilter = yfilter;
    }
    if(value_path == "protection-name")
    {
        protection_name.yfilter = yfilter;
    }
    if(value_path == "protected-name")
    {
        protected_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-type" || name == "protection-configured" || name == "protection-name" || name == "protected-name" || name == "active")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PseudoWire()
    :
    local_source_address{YType::str, "local-source-address"},
    ipv6_local_source_address{YType::str, "ipv6-local-source-address"},
    pseudo_wire_id{YType::uint64, "pseudo-wire-id"},
    is_pwr_type{YType::boolean, "is-pwr-type"},
    is_evpn_vpws_type{YType::boolean, "is-evpn-vpws-type"},
    xconnect_id{YType::uint32, "xconnect-id"},
    state{YType::enumeration, "state"},
    pseudo_wire_state{YType::enumeration, "pseudo-wire-state"},
    protocol{YType::enumeration, "protocol"},
    pw_class_name{YType::str, "pw-class-name"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    interworking{YType::enumeration, "interworking"},
    fe_ctype{YType::enumeration, "fe-ctype"},
    evpn_src_acid{YType::uint32, "evpn-src-acid"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    local_control_word{YType::enumeration, "local-control-word"},
    remote_control_word{YType::enumeration, "remote-control-word"},
    local_pseudo_wire_type{YType::enumeration, "local-pseudo-wire-type"},
    remote_pseudo_wire_type{YType::enumeration, "remote-pseudo-wire-type"},
    imposed_vlan_id{YType::uint32, "imposed-vlan-id"},
    time_created{YType::str, "time-created"},
    time_elapsed_creation{YType::str, "time-elapsed-creation"},
    last_time_status_changed{YType::str, "last-time-status-changed"},
    time_elapsed_status_changed{YType::str, "time-elapsed-status-changed"},
    last_time_status_down{YType::str, "last-time-status-down"},
    time_elapsed_status_down{YType::uint32, "time-elapsed-status-down"},
    shutdown{YType::boolean, "shutdown"},
    pseudo_wire_type_mismatched{YType::boolean, "pseudo-wire-type-mismatched"},
    payload_bytes_mismatched{YType::boolean, "payload-bytes-mismatched"},
    bitrate_mismatched{YType::boolean, "bitrate-mismatched"},
    rtp_mismatched{YType::boolean, "rtp-mismatched"},
    diff_ts_mismatched{YType::boolean, "diff-ts-mismatched"},
    sig_pkts_mismatched{YType::boolean, "sig-pkts-mismatched"},
    cas_mismatched{YType::boolean, "cas-mismatched"},
    payload_type_mismatched{YType::boolean, "payload-type-mismatched"},
    freq_mismatched{YType::boolean, "freq-mismatched"},
    ssrc_mismatched{YType::boolean, "ssrc-mismatched"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    illegal_control_word{YType::boolean, "illegal-control-word"},
    ad_remote_down{YType::boolean, "ad-remote-down"},
    not_supported_qinq{YType::boolean, "not-supported-qinq"},
    local_label_failed{YType::boolean, "local-label-failed"},
    remote_label_failed{YType::boolean, "remote-label-failed"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    backup_pw{YType::boolean, "backup-pw"},
    primary_pw{YType::boolean, "primary-pw"},
    backup_active{YType::boolean, "backup-active"},
    backup_force_active{YType::boolean, "backup-force-active"},
    disable_never{YType::boolean, "disable-never"},
    disable_delay{YType::uint8, "disable-delay"},
    primary_peer_id{YType::str, "primary-peer-id"},
    primary_pseudo_wire_id{YType::uint64, "primary-pseudo-wire-id"},
    number_ma_cwithdraw_message_sent{YType::uint32, "number-ma-cwithdraw-message-sent"},
    num_ma_cwithdraw_msg_received{YType::uint32, "num-ma-cwithdraw-msg-received"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    transport_lsp_down{YType::boolean, "transport-lsp-down"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    pw_status_use{YType::boolean, "pw-status-use"},
    auto_discovery{YType::boolean, "auto-discovery"},
    ad_method{YType::uint32, "ad-method"},
    pwlsd_rewrite_failed{YType::boolean, "pwlsd-rewrite-failed"},
    ldp_label_advertise_failed{YType::boolean, "ldp-label-advertise-failed"},
    is_vfi{YType::boolean, "is-vfi"},
    is_multi_segment_pseudowire{YType::boolean, "is-multi-segment-pseudowire"},
    pw_redundancy_one_way{YType::boolean, "pw-redundancy-one-way"},
    load_balance{YType::enumeration, "load-balance"},
    pw_flow_label_type{YType::enumeration, "pw-flow-label-type"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"},
    is_partially_programmed{YType::boolean, "is-partially-programmed"},
    pw_redundancy_initial_delay{YType::uint8, "pw-redundancy-initial-delay"},
    bridge_pw_type_mismatch{YType::boolean, "bridge-pw-type-mismatch"},
    required_bw{YType::uint32, "required-bw"},
    admited_bw{YType::uint32, "admited-bw"},
    forward_class{YType::uint8, "forward-class"},
    table_policy_name{YType::str, "table-policy-name"}
    	,
    peer_id(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId>())
	,encapsulation_info(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo>())
	,local_interface(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface>())
	,remote_interface(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface>())
	,preferred_path(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath>())
	,local_signalling(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling>())
	,remote_signalling(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling>())
	,statistics(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics>())
	,p2mp_pw(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw>())
{
    peer_id->parent = this;
    encapsulation_info->parent = this;
    local_interface->parent = this;
    remote_interface->parent = this;
    preferred_path->parent = this;
    local_signalling->parent = this;
    remote_signalling->parent = this;
    statistics->parent = this;
    p2mp_pw->parent = this;

    yang_name = "pseudo-wire"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::~PseudoWire()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::has_data() const
{
    return local_source_address.is_set
	|| ipv6_local_source_address.is_set
	|| pseudo_wire_id.is_set
	|| is_pwr_type.is_set
	|| is_evpn_vpws_type.is_set
	|| xconnect_id.is_set
	|| state.is_set
	|| pseudo_wire_state.is_set
	|| protocol.is_set
	|| pw_class_name.is_set
	|| tag_rewrite.is_set
	|| interworking.is_set
	|| fe_ctype.is_set
	|| evpn_src_acid.is_set
	|| sequencing_type.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| local_control_word.is_set
	|| remote_control_word.is_set
	|| local_pseudo_wire_type.is_set
	|| remote_pseudo_wire_type.is_set
	|| imposed_vlan_id.is_set
	|| time_created.is_set
	|| time_elapsed_creation.is_set
	|| last_time_status_changed.is_set
	|| time_elapsed_status_changed.is_set
	|| last_time_status_down.is_set
	|| time_elapsed_status_down.is_set
	|| shutdown.is_set
	|| pseudo_wire_type_mismatched.is_set
	|| payload_bytes_mismatched.is_set
	|| bitrate_mismatched.is_set
	|| rtp_mismatched.is_set
	|| diff_ts_mismatched.is_set
	|| sig_pkts_mismatched.is_set
	|| cas_mismatched.is_set
	|| payload_type_mismatched.is_set
	|| freq_mismatched.is_set
	|| ssrc_mismatched.is_set
	|| mtu_mismatched.is_set
	|| illegal_control_word.is_set
	|| ad_remote_down.is_set
	|| not_supported_qinq.is_set
	|| local_label_failed.is_set
	|| remote_label_failed.is_set
	|| preferred_path_disable_fallback.is_set
	|| backup_pw.is_set
	|| primary_pw.is_set
	|| backup_active.is_set
	|| backup_force_active.is_set
	|| disable_never.is_set
	|| disable_delay.is_set
	|| primary_peer_id.is_set
	|| primary_pseudo_wire_id.is_set
	|| number_ma_cwithdraw_message_sent.is_set
	|| num_ma_cwithdraw_msg_received.is_set
	|| out_of_memory_state.is_set
	|| transport_lsp_down.is_set
	|| mac_limit_oper_down.is_set
	|| pw_status_use.is_set
	|| auto_discovery.is_set
	|| ad_method.is_set
	|| pwlsd_rewrite_failed.is_set
	|| ldp_label_advertise_failed.is_set
	|| is_vfi.is_set
	|| is_multi_segment_pseudowire.is_set
	|| pw_redundancy_one_way.is_set
	|| load_balance.is_set
	|| pw_flow_label_type.is_set
	|| pw_flow_label_type_cfg.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| is_flow_label_static.is_set
	|| is_partially_programmed.is_set
	|| pw_redundancy_initial_delay.is_set
	|| bridge_pw_type_mismatch.is_set
	|| required_bw.is_set
	|| admited_bw.is_set
	|| forward_class.is_set
	|| table_policy_name.is_set
	|| (peer_id !=  nullptr && peer_id->has_data())
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (local_interface !=  nullptr && local_interface->has_data())
	|| (remote_interface !=  nullptr && remote_interface->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (local_signalling !=  nullptr && local_signalling->has_data())
	|| (remote_signalling !=  nullptr && remote_signalling->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_source_address.yfilter)
	|| ydk::is_set(ipv6_local_source_address.yfilter)
	|| ydk::is_set(pseudo_wire_id.yfilter)
	|| ydk::is_set(is_pwr_type.yfilter)
	|| ydk::is_set(is_evpn_vpws_type.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(pseudo_wire_state.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(pw_class_name.yfilter)
	|| ydk::is_set(tag_rewrite.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(evpn_src_acid.yfilter)
	|| ydk::is_set(sequencing_type.yfilter)
	|| ydk::is_set(resync_enabled.yfilter)
	|| ydk::is_set(resync_threshold.yfilter)
	|| ydk::is_set(local_control_word.yfilter)
	|| ydk::is_set(remote_control_word.yfilter)
	|| ydk::is_set(local_pseudo_wire_type.yfilter)
	|| ydk::is_set(remote_pseudo_wire_type.yfilter)
	|| ydk::is_set(imposed_vlan_id.yfilter)
	|| ydk::is_set(time_created.yfilter)
	|| ydk::is_set(time_elapsed_creation.yfilter)
	|| ydk::is_set(last_time_status_changed.yfilter)
	|| ydk::is_set(time_elapsed_status_changed.yfilter)
	|| ydk::is_set(last_time_status_down.yfilter)
	|| ydk::is_set(time_elapsed_status_down.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(pseudo_wire_type_mismatched.yfilter)
	|| ydk::is_set(payload_bytes_mismatched.yfilter)
	|| ydk::is_set(bitrate_mismatched.yfilter)
	|| ydk::is_set(rtp_mismatched.yfilter)
	|| ydk::is_set(diff_ts_mismatched.yfilter)
	|| ydk::is_set(sig_pkts_mismatched.yfilter)
	|| ydk::is_set(cas_mismatched.yfilter)
	|| ydk::is_set(payload_type_mismatched.yfilter)
	|| ydk::is_set(freq_mismatched.yfilter)
	|| ydk::is_set(ssrc_mismatched.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(illegal_control_word.yfilter)
	|| ydk::is_set(ad_remote_down.yfilter)
	|| ydk::is_set(not_supported_qinq.yfilter)
	|| ydk::is_set(local_label_failed.yfilter)
	|| ydk::is_set(remote_label_failed.yfilter)
	|| ydk::is_set(preferred_path_disable_fallback.yfilter)
	|| ydk::is_set(backup_pw.yfilter)
	|| ydk::is_set(primary_pw.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(backup_force_active.yfilter)
	|| ydk::is_set(disable_never.yfilter)
	|| ydk::is_set(disable_delay.yfilter)
	|| ydk::is_set(primary_peer_id.yfilter)
	|| ydk::is_set(primary_pseudo_wire_id.yfilter)
	|| ydk::is_set(number_ma_cwithdraw_message_sent.yfilter)
	|| ydk::is_set(num_ma_cwithdraw_msg_received.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(transport_lsp_down.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(pw_status_use.yfilter)
	|| ydk::is_set(auto_discovery.yfilter)
	|| ydk::is_set(ad_method.yfilter)
	|| ydk::is_set(pwlsd_rewrite_failed.yfilter)
	|| ydk::is_set(ldp_label_advertise_failed.yfilter)
	|| ydk::is_set(is_vfi.yfilter)
	|| ydk::is_set(is_multi_segment_pseudowire.yfilter)
	|| ydk::is_set(pw_redundancy_one_way.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(pw_flow_label_type.yfilter)
	|| ydk::is_set(pw_flow_label_type_cfg.yfilter)
	|| ydk::is_set(pw_flow_label_code17_disabled.yfilter)
	|| ydk::is_set(is_flow_label_static.yfilter)
	|| ydk::is_set(is_partially_programmed.yfilter)
	|| ydk::is_set(pw_redundancy_initial_delay.yfilter)
	|| ydk::is_set(bridge_pw_type_mismatch.yfilter)
	|| ydk::is_set(required_bw.yfilter)
	|| ydk::is_set(admited_bw.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(table_policy_name.yfilter)
	|| (peer_id !=  nullptr && peer_id->has_operation())
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (local_interface !=  nullptr && local_interface->has_operation())
	|| (remote_interface !=  nullptr && remote_interface->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (local_signalling !=  nullptr && local_signalling->has_operation())
	|| (remote_signalling !=  nullptr && remote_signalling->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_source_address.is_set || is_set(local_source_address.yfilter)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (ipv6_local_source_address.is_set || is_set(ipv6_local_source_address.yfilter)) leaf_name_data.push_back(ipv6_local_source_address.get_name_leafdata());
    if (pseudo_wire_id.is_set || is_set(pseudo_wire_id.yfilter)) leaf_name_data.push_back(pseudo_wire_id.get_name_leafdata());
    if (is_pwr_type.is_set || is_set(is_pwr_type.yfilter)) leaf_name_data.push_back(is_pwr_type.get_name_leafdata());
    if (is_evpn_vpws_type.is_set || is_set(is_evpn_vpws_type.yfilter)) leaf_name_data.push_back(is_evpn_vpws_type.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (pseudo_wire_state.is_set || is_set(pseudo_wire_state.yfilter)) leaf_name_data.push_back(pseudo_wire_state.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.yfilter)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.yfilter)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (evpn_src_acid.is_set || is_set(evpn_src_acid.yfilter)) leaf_name_data.push_back(evpn_src_acid.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.yfilter)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.yfilter)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (local_control_word.is_set || is_set(local_control_word.yfilter)) leaf_name_data.push_back(local_control_word.get_name_leafdata());
    if (remote_control_word.is_set || is_set(remote_control_word.yfilter)) leaf_name_data.push_back(remote_control_word.get_name_leafdata());
    if (local_pseudo_wire_type.is_set || is_set(local_pseudo_wire_type.yfilter)) leaf_name_data.push_back(local_pseudo_wire_type.get_name_leafdata());
    if (remote_pseudo_wire_type.is_set || is_set(remote_pseudo_wire_type.yfilter)) leaf_name_data.push_back(remote_pseudo_wire_type.get_name_leafdata());
    if (imposed_vlan_id.is_set || is_set(imposed_vlan_id.yfilter)) leaf_name_data.push_back(imposed_vlan_id.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.yfilter)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (time_elapsed_creation.is_set || is_set(time_elapsed_creation.yfilter)) leaf_name_data.push_back(time_elapsed_creation.get_name_leafdata());
    if (last_time_status_changed.is_set || is_set(last_time_status_changed.yfilter)) leaf_name_data.push_back(last_time_status_changed.get_name_leafdata());
    if (time_elapsed_status_changed.is_set || is_set(time_elapsed_status_changed.yfilter)) leaf_name_data.push_back(time_elapsed_status_changed.get_name_leafdata());
    if (last_time_status_down.is_set || is_set(last_time_status_down.yfilter)) leaf_name_data.push_back(last_time_status_down.get_name_leafdata());
    if (time_elapsed_status_down.is_set || is_set(time_elapsed_status_down.yfilter)) leaf_name_data.push_back(time_elapsed_status_down.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (pseudo_wire_type_mismatched.is_set || is_set(pseudo_wire_type_mismatched.yfilter)) leaf_name_data.push_back(pseudo_wire_type_mismatched.get_name_leafdata());
    if (payload_bytes_mismatched.is_set || is_set(payload_bytes_mismatched.yfilter)) leaf_name_data.push_back(payload_bytes_mismatched.get_name_leafdata());
    if (bitrate_mismatched.is_set || is_set(bitrate_mismatched.yfilter)) leaf_name_data.push_back(bitrate_mismatched.get_name_leafdata());
    if (rtp_mismatched.is_set || is_set(rtp_mismatched.yfilter)) leaf_name_data.push_back(rtp_mismatched.get_name_leafdata());
    if (diff_ts_mismatched.is_set || is_set(diff_ts_mismatched.yfilter)) leaf_name_data.push_back(diff_ts_mismatched.get_name_leafdata());
    if (sig_pkts_mismatched.is_set || is_set(sig_pkts_mismatched.yfilter)) leaf_name_data.push_back(sig_pkts_mismatched.get_name_leafdata());
    if (cas_mismatched.is_set || is_set(cas_mismatched.yfilter)) leaf_name_data.push_back(cas_mismatched.get_name_leafdata());
    if (payload_type_mismatched.is_set || is_set(payload_type_mismatched.yfilter)) leaf_name_data.push_back(payload_type_mismatched.get_name_leafdata());
    if (freq_mismatched.is_set || is_set(freq_mismatched.yfilter)) leaf_name_data.push_back(freq_mismatched.get_name_leafdata());
    if (ssrc_mismatched.is_set || is_set(ssrc_mismatched.yfilter)) leaf_name_data.push_back(ssrc_mismatched.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (illegal_control_word.is_set || is_set(illegal_control_word.yfilter)) leaf_name_data.push_back(illegal_control_word.get_name_leafdata());
    if (ad_remote_down.is_set || is_set(ad_remote_down.yfilter)) leaf_name_data.push_back(ad_remote_down.get_name_leafdata());
    if (not_supported_qinq.is_set || is_set(not_supported_qinq.yfilter)) leaf_name_data.push_back(not_supported_qinq.get_name_leafdata());
    if (local_label_failed.is_set || is_set(local_label_failed.yfilter)) leaf_name_data.push_back(local_label_failed.get_name_leafdata());
    if (remote_label_failed.is_set || is_set(remote_label_failed.yfilter)) leaf_name_data.push_back(remote_label_failed.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.yfilter)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (backup_pw.is_set || is_set(backup_pw.yfilter)) leaf_name_data.push_back(backup_pw.get_name_leafdata());
    if (primary_pw.is_set || is_set(primary_pw.yfilter)) leaf_name_data.push_back(primary_pw.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_force_active.is_set || is_set(backup_force_active.yfilter)) leaf_name_data.push_back(backup_force_active.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.yfilter)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.yfilter)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (primary_peer_id.is_set || is_set(primary_peer_id.yfilter)) leaf_name_data.push_back(primary_peer_id.get_name_leafdata());
    if (primary_pseudo_wire_id.is_set || is_set(primary_pseudo_wire_id.yfilter)) leaf_name_data.push_back(primary_pseudo_wire_id.get_name_leafdata());
    if (number_ma_cwithdraw_message_sent.is_set || is_set(number_ma_cwithdraw_message_sent.yfilter)) leaf_name_data.push_back(number_ma_cwithdraw_message_sent.get_name_leafdata());
    if (num_ma_cwithdraw_msg_received.is_set || is_set(num_ma_cwithdraw_msg_received.yfilter)) leaf_name_data.push_back(num_ma_cwithdraw_msg_received.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (transport_lsp_down.is_set || is_set(transport_lsp_down.yfilter)) leaf_name_data.push_back(transport_lsp_down.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (pw_status_use.is_set || is_set(pw_status_use.yfilter)) leaf_name_data.push_back(pw_status_use.get_name_leafdata());
    if (auto_discovery.is_set || is_set(auto_discovery.yfilter)) leaf_name_data.push_back(auto_discovery.get_name_leafdata());
    if (ad_method.is_set || is_set(ad_method.yfilter)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (pwlsd_rewrite_failed.is_set || is_set(pwlsd_rewrite_failed.yfilter)) leaf_name_data.push_back(pwlsd_rewrite_failed.get_name_leafdata());
    if (ldp_label_advertise_failed.is_set || is_set(ldp_label_advertise_failed.yfilter)) leaf_name_data.push_back(ldp_label_advertise_failed.get_name_leafdata());
    if (is_vfi.is_set || is_set(is_vfi.yfilter)) leaf_name_data.push_back(is_vfi.get_name_leafdata());
    if (is_multi_segment_pseudowire.is_set || is_set(is_multi_segment_pseudowire.yfilter)) leaf_name_data.push_back(is_multi_segment_pseudowire.get_name_leafdata());
    if (pw_redundancy_one_way.is_set || is_set(pw_redundancy_one_way.yfilter)) leaf_name_data.push_back(pw_redundancy_one_way.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (pw_flow_label_type.is_set || is_set(pw_flow_label_type.yfilter)) leaf_name_data.push_back(pw_flow_label_type.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.yfilter)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.yfilter)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.yfilter)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (is_partially_programmed.is_set || is_set(is_partially_programmed.yfilter)) leaf_name_data.push_back(is_partially_programmed.get_name_leafdata());
    if (pw_redundancy_initial_delay.is_set || is_set(pw_redundancy_initial_delay.yfilter)) leaf_name_data.push_back(pw_redundancy_initial_delay.get_name_leafdata());
    if (bridge_pw_type_mismatch.is_set || is_set(bridge_pw_type_mismatch.yfilter)) leaf_name_data.push_back(bridge_pw_type_mismatch.get_name_leafdata());
    if (required_bw.is_set || is_set(required_bw.yfilter)) leaf_name_data.push_back(required_bw.get_name_leafdata());
    if (admited_bw.is_set || is_set(admited_bw.yfilter)) leaf_name_data.push_back(admited_bw.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.yfilter)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-id")
    {
        if(peer_id == nullptr)
        {
            peer_id = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId>();
        }
        return peer_id;
    }

    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info == nullptr)
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo>();
        }
        return encapsulation_info;
    }

    if(child_yang_name == "local-interface")
    {
        if(local_interface == nullptr)
        {
            local_interface = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface>();
        }
        return local_interface;
    }

    if(child_yang_name == "remote-interface")
    {
        if(remote_interface == nullptr)
        {
            remote_interface = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface>();
        }
        return remote_interface;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "local-signalling")
    {
        if(local_signalling == nullptr)
        {
            local_signalling = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling>();
        }
        return local_signalling;
    }

    if(child_yang_name == "remote-signalling")
    {
        if(remote_signalling == nullptr)
        {
            remote_signalling = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling>();
        }
        return remote_signalling;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "p2mp-pw")
    {
        if(p2mp_pw == nullptr)
        {
            p2mp_pw = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw>();
        }
        return p2mp_pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_id != nullptr)
    {
        children["peer-id"] = peer_id;
    }

    if(encapsulation_info != nullptr)
    {
        children["encapsulation-info"] = encapsulation_info;
    }

    if(local_interface != nullptr)
    {
        children["local-interface"] = local_interface;
    }

    if(remote_interface != nullptr)
    {
        children["remote-interface"] = remote_interface;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(local_signalling != nullptr)
    {
        children["local-signalling"] = local_signalling;
    }

    if(remote_signalling != nullptr)
    {
        children["remote-signalling"] = remote_signalling;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(p2mp_pw != nullptr)
    {
        children["p2mp-pw"] = p2mp_pw;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-source-address")
    {
        local_source_address = value;
        local_source_address.value_namespace = name_space;
        local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address = value;
        ipv6_local_source_address.value_namespace = name_space;
        ipv6_local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id = value;
        pseudo_wire_id.value_namespace = name_space;
        pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type = value;
        is_pwr_type.value_namespace = name_space;
        is_pwr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-vpws-type")
    {
        is_evpn_vpws_type = value;
        is_evpn_vpws_type.value_namespace = name_space;
        is_evpn_vpws_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state = value;
        pseudo_wire_state.value_namespace = name_space;
        pseudo_wire_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
        pw_class_name.value_namespace = name_space;
        pw_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
        tag_rewrite.value_namespace = name_space;
        tag_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid = value;
        evpn_src_acid.value_namespace = name_space;
        evpn_src_acid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
        sequencing_type.value_namespace = name_space;
        sequencing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
        resync_enabled.value_namespace = name_space;
        resync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-control-word")
    {
        local_control_word = value;
        local_control_word.value_namespace = name_space;
        local_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word = value;
        remote_control_word.value_namespace = name_space;
        remote_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type = value;
        local_pseudo_wire_type.value_namespace = name_space;
        local_pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type = value;
        remote_pseudo_wire_type.value_namespace = name_space;
        remote_pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id = value;
        imposed_vlan_id.value_namespace = name_space;
        imposed_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-created")
    {
        time_created = value;
        time_created.value_namespace = name_space;
        time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation = value;
        time_elapsed_creation.value_namespace = name_space;
        time_elapsed_creation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed = value;
        last_time_status_changed.value_namespace = name_space;
        last_time_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed = value;
        time_elapsed_status_changed.value_namespace = name_space;
        time_elapsed_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down = value;
        last_time_status_down.value_namespace = name_space;
        last_time_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down = value;
        time_elapsed_status_down.value_namespace = name_space;
        time_elapsed_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched = value;
        pseudo_wire_type_mismatched.value_namespace = name_space;
        pseudo_wire_type_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched = value;
        payload_bytes_mismatched.value_namespace = name_space;
        payload_bytes_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched = value;
        bitrate_mismatched.value_namespace = name_space;
        bitrate_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched = value;
        rtp_mismatched.value_namespace = name_space;
        rtp_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched = value;
        diff_ts_mismatched.value_namespace = name_space;
        diff_ts_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched = value;
        sig_pkts_mismatched.value_namespace = name_space;
        sig_pkts_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched = value;
        cas_mismatched.value_namespace = name_space;
        cas_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched = value;
        payload_type_mismatched.value_namespace = name_space;
        payload_type_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched = value;
        freq_mismatched.value_namespace = name_space;
        freq_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched = value;
        ssrc_mismatched.value_namespace = name_space;
        ssrc_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word = value;
        illegal_control_word.value_namespace = name_space;
        illegal_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down = value;
        ad_remote_down.value_namespace = name_space;
        ad_remote_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq = value;
        not_supported_qinq.value_namespace = name_space;
        not_supported_qinq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed = value;
        local_label_failed.value_namespace = name_space;
        local_label_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed = value;
        remote_label_failed.value_namespace = name_space;
        remote_label_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
        preferred_path_disable_fallback.value_namespace = name_space;
        preferred_path_disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pw")
    {
        backup_pw = value;
        backup_pw.value_namespace = name_space;
        backup_pw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-pw")
    {
        primary_pw = value;
        primary_pw.value_namespace = name_space;
        primary_pw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active = value;
        backup_force_active.value_namespace = name_space;
        backup_force_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
        disable_never.value_namespace = name_space;
        disable_never.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
        disable_delay.value_namespace = name_space;
        disable_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id = value;
        primary_peer_id.value_namespace = name_space;
        primary_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id = value;
        primary_pseudo_wire_id.value_namespace = name_space;
        primary_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent = value;
        number_ma_cwithdraw_message_sent.value_namespace = name_space;
        number_ma_cwithdraw_message_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received = value;
        num_ma_cwithdraw_msg_received.value_namespace = name_space;
        num_ma_cwithdraw_msg_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down = value;
        transport_lsp_down.value_namespace = name_space;
        transport_lsp_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use = value;
        pw_status_use.value_namespace = name_space;
        pw_status_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery = value;
        auto_discovery.value_namespace = name_space;
        auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-method")
    {
        ad_method = value;
        ad_method.value_namespace = name_space;
        ad_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed = value;
        pwlsd_rewrite_failed.value_namespace = name_space;
        pwlsd_rewrite_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed = value;
        ldp_label_advertise_failed.value_namespace = name_space;
        ldp_label_advertise_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vfi")
    {
        is_vfi = value;
        is_vfi.value_namespace = name_space;
        is_vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire = value;
        is_multi_segment_pseudowire.value_namespace = name_space;
        is_multi_segment_pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way = value;
        pw_redundancy_one_way.value_namespace = name_space;
        pw_redundancy_one_way.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type = value;
        pw_flow_label_type.value_namespace = name_space;
        pw_flow_label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
        pw_flow_label_type_cfg.value_namespace = name_space;
        pw_flow_label_type_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
        pw_flow_label_code17_disabled.value_namespace = name_space;
        pw_flow_label_code17_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
        is_flow_label_static.value_namespace = name_space;
        is_flow_label_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed = value;
        is_partially_programmed.value_namespace = name_space;
        is_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay = value;
        pw_redundancy_initial_delay.value_namespace = name_space;
        pw_redundancy_initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch = value;
        bridge_pw_type_mismatch.value_namespace = name_space;
        bridge_pw_type_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-bw")
    {
        required_bw = value;
        required_bw.value_namespace = name_space;
        required_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admited-bw")
    {
        admited_bw = value;
        admited_bw.value_namespace = name_space;
        admited_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
        table_policy_name.value_namespace = name_space;
        table_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-source-address")
    {
        local_source_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type.yfilter = yfilter;
    }
    if(value_path == "is-evpn-vpws-type")
    {
        is_evpn_vpws_type.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name.yfilter = yfilter;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid.yfilter = yfilter;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type.yfilter = yfilter;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled.yfilter = yfilter;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
    if(value_path == "local-control-word")
    {
        local_control_word.yfilter = yfilter;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word.yfilter = yfilter;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id.yfilter = yfilter;
    }
    if(value_path == "time-created")
    {
        time_created.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation.yfilter = yfilter;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed.yfilter = yfilter;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched.yfilter = yfilter;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched.yfilter = yfilter;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched.yfilter = yfilter;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched.yfilter = yfilter;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched.yfilter = yfilter;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched.yfilter = yfilter;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched.yfilter = yfilter;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched.yfilter = yfilter;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched.yfilter = yfilter;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word.yfilter = yfilter;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down.yfilter = yfilter;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq.yfilter = yfilter;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed.yfilter = yfilter;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed.yfilter = yfilter;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback.yfilter = yfilter;
    }
    if(value_path == "backup-pw")
    {
        backup_pw.yfilter = yfilter;
    }
    if(value_path == "primary-pw")
    {
        primary_pw.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active.yfilter = yfilter;
    }
    if(value_path == "disable-never")
    {
        disable_never.yfilter = yfilter;
    }
    if(value_path == "disable-delay")
    {
        disable_delay.yfilter = yfilter;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id.yfilter = yfilter;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent.yfilter = yfilter;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use.yfilter = yfilter;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery.yfilter = yfilter;
    }
    if(value_path == "ad-method")
    {
        ad_method.yfilter = yfilter;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed.yfilter = yfilter;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed.yfilter = yfilter;
    }
    if(value_path == "is-vfi")
    {
        is_vfi.yfilter = yfilter;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire.yfilter = yfilter;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled.yfilter = yfilter;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static.yfilter = yfilter;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay.yfilter = yfilter;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch.yfilter = yfilter;
    }
    if(value_path == "required-bw")
    {
        required_bw.yfilter = yfilter;
    }
    if(value_path == "admited-bw")
    {
        admited_bw.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id" || name == "encapsulation-info" || name == "local-interface" || name == "remote-interface" || name == "preferred-path" || name == "local-signalling" || name == "remote-signalling" || name == "statistics" || name == "p2mp-pw" || name == "local-source-address" || name == "ipv6-local-source-address" || name == "pseudo-wire-id" || name == "is-pwr-type" || name == "is-evpn-vpws-type" || name == "xconnect-id" || name == "state" || name == "pseudo-wire-state" || name == "protocol" || name == "pw-class-name" || name == "tag-rewrite" || name == "interworking" || name == "fe-ctype" || name == "evpn-src-acid" || name == "sequencing-type" || name == "resync-enabled" || name == "resync-threshold" || name == "local-control-word" || name == "remote-control-word" || name == "local-pseudo-wire-type" || name == "remote-pseudo-wire-type" || name == "imposed-vlan-id" || name == "time-created" || name == "time-elapsed-creation" || name == "last-time-status-changed" || name == "time-elapsed-status-changed" || name == "last-time-status-down" || name == "time-elapsed-status-down" || name == "shutdown" || name == "pseudo-wire-type-mismatched" || name == "payload-bytes-mismatched" || name == "bitrate-mismatched" || name == "rtp-mismatched" || name == "diff-ts-mismatched" || name == "sig-pkts-mismatched" || name == "cas-mismatched" || name == "payload-type-mismatched" || name == "freq-mismatched" || name == "ssrc-mismatched" || name == "mtu-mismatched" || name == "illegal-control-word" || name == "ad-remote-down" || name == "not-supported-qinq" || name == "local-label-failed" || name == "remote-label-failed" || name == "preferred-path-disable-fallback" || name == "backup-pw" || name == "primary-pw" || name == "backup-active" || name == "backup-force-active" || name == "disable-never" || name == "disable-delay" || name == "primary-peer-id" || name == "primary-pseudo-wire-id" || name == "number-ma-cwithdraw-message-sent" || name == "num-ma-cwithdraw-msg-received" || name == "out-of-memory-state" || name == "transport-lsp-down" || name == "mac-limit-oper-down" || name == "pw-status-use" || name == "auto-discovery" || name == "ad-method" || name == "pwlsd-rewrite-failed" || name == "ldp-label-advertise-failed" || name == "is-vfi" || name == "is-multi-segment-pseudowire" || name == "pw-redundancy-one-way" || name == "load-balance" || name == "pw-flow-label-type" || name == "pw-flow-label-type-cfg" || name == "pw-flow-label-code17-disabled" || name == "is-flow-label-static" || name == "is-partially-programmed" || name == "pw-redundancy-initial-delay" || name == "bridge-pw-type-mismatch" || name == "required-bw" || name == "admited-bw" || name == "forward-class" || name == "table-policy-name")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::PeerId()
    :
    type{YType::enumeration, "type"},
    ipv4_peer_id{YType::str, "ipv4-peer-id"},
    ipv6_peer_id{YType::str, "ipv6-peer-id"},
    internal_label{YType::uint32, "internal-label"}
{

    yang_name = "peer-id"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::~PeerId()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::has_data() const
{
    return type.is_set
	|| ipv4_peer_id.is_set
	|| ipv6_peer_id.is_set
	|| internal_label.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_peer_id.yfilter)
	|| ydk::is_set(ipv6_peer_id.yfilter)
	|| ydk::is_set(internal_label.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_peer_id.is_set || is_set(ipv4_peer_id.yfilter)) leaf_name_data.push_back(ipv4_peer_id.get_name_leafdata());
    if (ipv6_peer_id.is_set || is_set(ipv6_peer_id.yfilter)) leaf_name_data.push_back(ipv6_peer_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id = value;
        ipv4_peer_id.value_namespace = name_space;
        ipv4_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id = value;
        ipv6_peer_id.value_namespace = name_space;
        ipv6_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-peer-id" || name == "ipv6-peer-id" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    atom(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom>())
	,l2tpv3(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3>())
{
    atom->parent = this;
    l2tpv3->parent = this;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (atom !=  nullptr && atom->has_data())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (atom !=  nullptr && atom->has_operation())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom>();
        }
        return atom;
    }

    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 == nullptr)
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3>();
        }
        return l2tpv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    if(l2tpv3 != nullptr)
    {
        children["l2tpv3"] = l2tpv3;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "l2tpv3" || name == "encapsulation")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::Atom()
    :
    is_pseudowire_headend{YType::boolean, "is-pseudowire-headend"},
    local_label{YType::uint32, "local-label"},
    remote_label{YType::uint32, "remote-label"},
    local_group_id{YType::uint32, "local-group-id"},
    remote_group_id{YType::uint32, "remote-group-id"},
    local_cv_type{YType::uint8, "local-cv-type"},
    local_c_ctype{YType::uint8, "local-c-ctype"},
    remote_cv_type{YType::uint8, "remote-cv-type"},
    remote_c_ctype{YType::uint8, "remote-c-ctype"},
    local_veid{YType::uint32, "local-veid"},
    remote_veid{YType::uint32, "remote-veid"},
    local_ceid{YType::uint32, "local-ceid"},
    remote_ceid{YType::uint32, "remote-ceid"},
    source_address{YType::str, "source-address"},
    remote_source_address{YType::str, "remote-source-address"},
    local_ldp_id{YType::str, "local-ldp-id"},
    remote_ldp_id{YType::str, "remote-ldp-id"},
    saii{YType::str, "saii"},
    taii{YType::str, "taii"},
    is_sai_itype2{YType::boolean, "is-sai-itype2"},
    local_saii_gbl_id{YType::uint32, "local-saii-gbl-id"},
    local_saiiac_id{YType::uint32, "local-saiiac-id"},
    is_tai_itype2{YType::boolean, "is-tai-itype2"},
    local_taii_gbl_id{YType::uint32, "local-taii-gbl-id"},
    local_taiiac_id{YType::uint32, "local-taiiac-id"},
    rem_saii_gbl_id{YType::uint32, "rem-saii-gbl-id"},
    rem_saiiac_id{YType::uint32, "rem-saiiac-id"},
    rem_taii_gbl_id{YType::uint32, "rem-taii-gbl-id"},
    rem_taiiac_id{YType::uint32, "rem-taiiac-id"},
    rem_saii{YType::str, "rem-saii"},
    rem_taii{YType::str, "rem-taii"},
    lsd_rewrite_failed{YType::boolean, "lsd-rewrite-failed"},
    ldp_label_advertisment_failed{YType::boolean, "ldp-label-advertisment-failed"}
    	,
    local_agi(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi>())
	,remote_agi(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi>())
	,multi_segment_pseudowire_stats(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>())
{
    local_agi->parent = this;
    remote_agi->parent = this;
    multi_segment_pseudowire_stats->parent = this;

    yang_name = "atom"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::~Atom()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::has_data() const
{
    return is_pseudowire_headend.is_set
	|| local_label.is_set
	|| remote_label.is_set
	|| local_group_id.is_set
	|| remote_group_id.is_set
	|| local_cv_type.is_set
	|| local_c_ctype.is_set
	|| remote_cv_type.is_set
	|| remote_c_ctype.is_set
	|| local_veid.is_set
	|| remote_veid.is_set
	|| local_ceid.is_set
	|| remote_ceid.is_set
	|| source_address.is_set
	|| remote_source_address.is_set
	|| local_ldp_id.is_set
	|| remote_ldp_id.is_set
	|| saii.is_set
	|| taii.is_set
	|| is_sai_itype2.is_set
	|| local_saii_gbl_id.is_set
	|| local_saiiac_id.is_set
	|| is_tai_itype2.is_set
	|| local_taii_gbl_id.is_set
	|| local_taiiac_id.is_set
	|| rem_saii_gbl_id.is_set
	|| rem_saiiac_id.is_set
	|| rem_taii_gbl_id.is_set
	|| rem_taiiac_id.is_set
	|| rem_saii.is_set
	|| rem_taii.is_set
	|| lsd_rewrite_failed.is_set
	|| ldp_label_advertisment_failed.is_set
	|| (local_agi !=  nullptr && local_agi->has_data())
	|| (remote_agi !=  nullptr && remote_agi->has_data())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_pseudowire_headend.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(local_group_id.yfilter)
	|| ydk::is_set(remote_group_id.yfilter)
	|| ydk::is_set(local_cv_type.yfilter)
	|| ydk::is_set(local_c_ctype.yfilter)
	|| ydk::is_set(remote_cv_type.yfilter)
	|| ydk::is_set(remote_c_ctype.yfilter)
	|| ydk::is_set(local_veid.yfilter)
	|| ydk::is_set(remote_veid.yfilter)
	|| ydk::is_set(local_ceid.yfilter)
	|| ydk::is_set(remote_ceid.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(remote_source_address.yfilter)
	|| ydk::is_set(local_ldp_id.yfilter)
	|| ydk::is_set(remote_ldp_id.yfilter)
	|| ydk::is_set(saii.yfilter)
	|| ydk::is_set(taii.yfilter)
	|| ydk::is_set(is_sai_itype2.yfilter)
	|| ydk::is_set(local_saii_gbl_id.yfilter)
	|| ydk::is_set(local_saiiac_id.yfilter)
	|| ydk::is_set(is_tai_itype2.yfilter)
	|| ydk::is_set(local_taii_gbl_id.yfilter)
	|| ydk::is_set(local_taiiac_id.yfilter)
	|| ydk::is_set(rem_saii_gbl_id.yfilter)
	|| ydk::is_set(rem_saiiac_id.yfilter)
	|| ydk::is_set(rem_taii_gbl_id.yfilter)
	|| ydk::is_set(rem_taiiac_id.yfilter)
	|| ydk::is_set(rem_saii.yfilter)
	|| ydk::is_set(rem_taii.yfilter)
	|| ydk::is_set(lsd_rewrite_failed.yfilter)
	|| ydk::is_set(ldp_label_advertisment_failed.yfilter)
	|| (local_agi !=  nullptr && local_agi->has_operation())
	|| (remote_agi !=  nullptr && remote_agi->has_operation())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pseudowire_headend.is_set || is_set(is_pseudowire_headend.yfilter)) leaf_name_data.push_back(is_pseudowire_headend.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (local_group_id.is_set || is_set(local_group_id.yfilter)) leaf_name_data.push_back(local_group_id.get_name_leafdata());
    if (remote_group_id.is_set || is_set(remote_group_id.yfilter)) leaf_name_data.push_back(remote_group_id.get_name_leafdata());
    if (local_cv_type.is_set || is_set(local_cv_type.yfilter)) leaf_name_data.push_back(local_cv_type.get_name_leafdata());
    if (local_c_ctype.is_set || is_set(local_c_ctype.yfilter)) leaf_name_data.push_back(local_c_ctype.get_name_leafdata());
    if (remote_cv_type.is_set || is_set(remote_cv_type.yfilter)) leaf_name_data.push_back(remote_cv_type.get_name_leafdata());
    if (remote_c_ctype.is_set || is_set(remote_c_ctype.yfilter)) leaf_name_data.push_back(remote_c_ctype.get_name_leafdata());
    if (local_veid.is_set || is_set(local_veid.yfilter)) leaf_name_data.push_back(local_veid.get_name_leafdata());
    if (remote_veid.is_set || is_set(remote_veid.yfilter)) leaf_name_data.push_back(remote_veid.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.yfilter)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.yfilter)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (remote_source_address.is_set || is_set(remote_source_address.yfilter)) leaf_name_data.push_back(remote_source_address.get_name_leafdata());
    if (local_ldp_id.is_set || is_set(local_ldp_id.yfilter)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (remote_ldp_id.is_set || is_set(remote_ldp_id.yfilter)) leaf_name_data.push_back(remote_ldp_id.get_name_leafdata());
    if (saii.is_set || is_set(saii.yfilter)) leaf_name_data.push_back(saii.get_name_leafdata());
    if (taii.is_set || is_set(taii.yfilter)) leaf_name_data.push_back(taii.get_name_leafdata());
    if (is_sai_itype2.is_set || is_set(is_sai_itype2.yfilter)) leaf_name_data.push_back(is_sai_itype2.get_name_leafdata());
    if (local_saii_gbl_id.is_set || is_set(local_saii_gbl_id.yfilter)) leaf_name_data.push_back(local_saii_gbl_id.get_name_leafdata());
    if (local_saiiac_id.is_set || is_set(local_saiiac_id.yfilter)) leaf_name_data.push_back(local_saiiac_id.get_name_leafdata());
    if (is_tai_itype2.is_set || is_set(is_tai_itype2.yfilter)) leaf_name_data.push_back(is_tai_itype2.get_name_leafdata());
    if (local_taii_gbl_id.is_set || is_set(local_taii_gbl_id.yfilter)) leaf_name_data.push_back(local_taii_gbl_id.get_name_leafdata());
    if (local_taiiac_id.is_set || is_set(local_taiiac_id.yfilter)) leaf_name_data.push_back(local_taiiac_id.get_name_leafdata());
    if (rem_saii_gbl_id.is_set || is_set(rem_saii_gbl_id.yfilter)) leaf_name_data.push_back(rem_saii_gbl_id.get_name_leafdata());
    if (rem_saiiac_id.is_set || is_set(rem_saiiac_id.yfilter)) leaf_name_data.push_back(rem_saiiac_id.get_name_leafdata());
    if (rem_taii_gbl_id.is_set || is_set(rem_taii_gbl_id.yfilter)) leaf_name_data.push_back(rem_taii_gbl_id.get_name_leafdata());
    if (rem_taiiac_id.is_set || is_set(rem_taiiac_id.yfilter)) leaf_name_data.push_back(rem_taiiac_id.get_name_leafdata());
    if (rem_saii.is_set || is_set(rem_saii.yfilter)) leaf_name_data.push_back(rem_saii.get_name_leafdata());
    if (rem_taii.is_set || is_set(rem_taii.yfilter)) leaf_name_data.push_back(rem_taii.get_name_leafdata());
    if (lsd_rewrite_failed.is_set || is_set(lsd_rewrite_failed.yfilter)) leaf_name_data.push_back(lsd_rewrite_failed.get_name_leafdata());
    if (ldp_label_advertisment_failed.is_set || is_set(ldp_label_advertisment_failed.yfilter)) leaf_name_data.push_back(ldp_label_advertisment_failed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-agi")
    {
        if(local_agi == nullptr)
        {
            local_agi = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi>();
        }
        return local_agi;
    }

    if(child_yang_name == "remote-agi")
    {
        if(remote_agi == nullptr)
        {
            remote_agi = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi>();
        }
        return remote_agi;
    }

    if(child_yang_name == "multi-segment-pseudowire-stats")
    {
        if(multi_segment_pseudowire_stats == nullptr)
        {
            multi_segment_pseudowire_stats = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>();
        }
        return multi_segment_pseudowire_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_agi != nullptr)
    {
        children["local-agi"] = local_agi;
    }

    if(remote_agi != nullptr)
    {
        children["remote-agi"] = remote_agi;
    }

    if(multi_segment_pseudowire_stats != nullptr)
    {
        children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend = value;
        is_pseudowire_headend.value_namespace = name_space;
        is_pseudowire_headend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-group-id")
    {
        local_group_id = value;
        local_group_id.value_namespace = name_space;
        local_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id = value;
        remote_group_id.value_namespace = name_space;
        remote_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type = value;
        local_cv_type.value_namespace = name_space;
        local_cv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype = value;
        local_c_ctype.value_namespace = name_space;
        local_c_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type = value;
        remote_cv_type.value_namespace = name_space;
        remote_cv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype = value;
        remote_c_ctype.value_namespace = name_space;
        remote_c_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-veid")
    {
        local_veid = value;
        local_veid.value_namespace = name_space;
        local_veid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-veid")
    {
        remote_veid = value;
        remote_veid.value_namespace = name_space;
        remote_veid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
        local_ceid.value_namespace = name_space;
        local_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
        remote_ceid.value_namespace = name_space;
        remote_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address = value;
        remote_source_address.value_namespace = name_space;
        remote_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
        local_ldp_id.value_namespace = name_space;
        local_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id = value;
        remote_ldp_id.value_namespace = name_space;
        remote_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saii")
    {
        saii = value;
        saii.value_namespace = name_space;
        saii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "taii")
    {
        taii = value;
        taii.value_namespace = name_space;
        taii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2 = value;
        is_sai_itype2.value_namespace = name_space;
        is_sai_itype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id = value;
        local_saii_gbl_id.value_namespace = name_space;
        local_saii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id = value;
        local_saiiac_id.value_namespace = name_space;
        local_saiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2 = value;
        is_tai_itype2.value_namespace = name_space;
        is_tai_itype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id = value;
        local_taii_gbl_id.value_namespace = name_space;
        local_taii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id = value;
        local_taiiac_id.value_namespace = name_space;
        local_taiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id = value;
        rem_saii_gbl_id.value_namespace = name_space;
        rem_saii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id = value;
        rem_saiiac_id.value_namespace = name_space;
        rem_saiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id = value;
        rem_taii_gbl_id.value_namespace = name_space;
        rem_taii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id = value;
        rem_taiiac_id.value_namespace = name_space;
        rem_taiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saii")
    {
        rem_saii = value;
        rem_saii.value_namespace = name_space;
        rem_saii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taii")
    {
        rem_taii = value;
        rem_taii.value_namespace = name_space;
        rem_taii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed = value;
        lsd_rewrite_failed.value_namespace = name_space;
        lsd_rewrite_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed = value;
        ldp_label_advertisment_failed.value_namespace = name_space;
        ldp_label_advertisment_failed.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "local-group-id")
    {
        local_group_id.yfilter = yfilter;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id.yfilter = yfilter;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type.yfilter = yfilter;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype.yfilter = yfilter;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type.yfilter = yfilter;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype.yfilter = yfilter;
    }
    if(value_path == "local-veid")
    {
        local_veid.yfilter = yfilter;
    }
    if(value_path == "remote-veid")
    {
        remote_veid.yfilter = yfilter;
    }
    if(value_path == "local-ceid")
    {
        local_ceid.yfilter = yfilter;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address.yfilter = yfilter;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id.yfilter = yfilter;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id.yfilter = yfilter;
    }
    if(value_path == "saii")
    {
        saii.yfilter = yfilter;
    }
    if(value_path == "taii")
    {
        taii.yfilter = yfilter;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2.yfilter = yfilter;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id.yfilter = yfilter;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2.yfilter = yfilter;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id.yfilter = yfilter;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id.yfilter = yfilter;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id.yfilter = yfilter;
    }
    if(value_path == "rem-saii")
    {
        rem_saii.yfilter = yfilter;
    }
    if(value_path == "rem-taii")
    {
        rem_taii.yfilter = yfilter;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed.yfilter = yfilter;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-agi" || name == "remote-agi" || name == "multi-segment-pseudowire-stats" || name == "is-pseudowire-headend" || name == "local-label" || name == "remote-label" || name == "local-group-id" || name == "remote-group-id" || name == "local-cv-type" || name == "local-c-ctype" || name == "remote-cv-type" || name == "remote-c-ctype" || name == "local-veid" || name == "remote-veid" || name == "local-ceid" || name == "remote-ceid" || name == "source-address" || name == "remote-source-address" || name == "local-ldp-id" || name == "remote-ldp-id" || name == "saii" || name == "taii" || name == "is-sai-itype2" || name == "local-saii-gbl-id" || name == "local-saiiac-id" || name == "is-tai-itype2" || name == "local-taii-gbl-id" || name == "local-taiiac-id" || name == "rem-saii-gbl-id" || name == "rem-saiiac-id" || name == "rem-taii-gbl-id" || name == "rem-taiiac-id" || name == "rem-saii" || name == "rem-taii" || name == "lsd-rewrite-failed" || name == "ldp-label-advertisment-failed")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::LocalAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "local-agi"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::~LocalAgi()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-agi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/local-agi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/local-agi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/local-agi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::RemoteAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "remote-agi"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::~RemoteAgi()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-agi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/remote-agi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/remote-agi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/remote-agi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::MultiSegmentPseudowireStats()
    :
    received_packets{YType::uint64, "received-packets"},
    received_bytes{YType::uint64, "received-bytes"}
{

    yang_name = "multi-segment-pseudowire-stats"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::~MultiSegmentPseudowireStats()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_data() const
{
    return received_packets.is_set
	|| received_bytes.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(received_bytes.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-segment-pseudowire-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (received_bytes.is_set || is_set(received_bytes.yfilter)) leaf_name_data.push_back(received_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-bytes")
    {
        received_bytes = value;
        received_bytes.value_namespace = name_space;
        received_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "received-bytes")
    {
        received_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-packets" || name == "received-bytes")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    l2tp_class_name{YType::str, "l2tp-class-name"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    ipv6_source_address{YType::str, "ipv6-source-address"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    tos_mode{YType::enumeration, "tos-mode"},
    tos{YType::uint8, "tos"},
    ttl{YType::uint8, "ttl"},
    local_session_id{YType::uint32, "local-session-id"},
    remote_session_id{YType::uint32, "remote-session-id"},
    local_cookie_size{YType::uint8, "local-cookie-size"},
    remote_cookie_size{YType::uint8, "remote-cookie-size"},
    local_cookie_low_value{YType::uint32, "local-cookie-low-value"},
    remote_cookie_low_value{YType::uint32, "remote-cookie-low-value"},
    local_cookie_high_value{YType::uint32, "local-cookie-high-value"},
    remote_cookie_high_value{YType::uint32, "remote-cookie-high-value"},
    remote_circuit_status_up{YType::boolean, "remote-circuit-status-up"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    local_secondary_cookie_size{YType::uint8, "local-secondary-cookie-size"},
    local_secondary_cookie_low_value{YType::uint32, "local-secondary-cookie-low-value"},
    local_secondary_cookie_high_value{YType::uint32, "local-secondary-cookie-high-value"}
{

    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::has_data() const
{
    return l2tp_class_name.is_set
	|| ipv4_source_address.is_set
	|| ipv6_source_address.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| dont_fragment_bit.is_set
	|| tos_mode.is_set
	|| tos.is_set
	|| ttl.is_set
	|| local_session_id.is_set
	|| remote_session_id.is_set
	|| local_cookie_size.is_set
	|| remote_cookie_size.is_set
	|| local_cookie_low_value.is_set
	|| remote_cookie_low_value.is_set
	|| local_cookie_high_value.is_set
	|| remote_cookie_high_value.is_set
	|| remote_circuit_status_up.is_set
	|| tunnel_state.is_set
	|| local_secondary_cookie_size.is_set
	|| local_secondary_cookie_low_value.is_set
	|| local_secondary_cookie_high_value.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_class_name.yfilter)
	|| ydk::is_set(ipv4_source_address.yfilter)
	|| ydk::is_set(ipv6_source_address.yfilter)
	|| ydk::is_set(path_mtu_enabled.yfilter)
	|| ydk::is_set(path_mtu_max_value.yfilter)
	|| ydk::is_set(dont_fragment_bit.yfilter)
	|| ydk::is_set(tos_mode.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(local_cookie_size.yfilter)
	|| ydk::is_set(remote_cookie_size.yfilter)
	|| ydk::is_set(local_cookie_low_value.yfilter)
	|| ydk::is_set(remote_cookie_low_value.yfilter)
	|| ydk::is_set(local_cookie_high_value.yfilter)
	|| ydk::is_set(remote_cookie_high_value.yfilter)
	|| ydk::is_set(remote_circuit_status_up.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(local_secondary_cookie_size.yfilter)
	|| ydk::is_set(local_secondary_cookie_low_value.yfilter)
	|| ydk::is_set(local_secondary_cookie_high_value.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/encapsulation-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_class_name.is_set || is_set(l2tp_class_name.yfilter)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.yfilter)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (ipv6_source_address.is_set || is_set(ipv6_source_address.yfilter)) leaf_name_data.push_back(ipv6_source_address.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.yfilter)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.yfilter)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.yfilter)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.yfilter)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (local_cookie_size.is_set || is_set(local_cookie_size.yfilter)) leaf_name_data.push_back(local_cookie_size.get_name_leafdata());
    if (remote_cookie_size.is_set || is_set(remote_cookie_size.yfilter)) leaf_name_data.push_back(remote_cookie_size.get_name_leafdata());
    if (local_cookie_low_value.is_set || is_set(local_cookie_low_value.yfilter)) leaf_name_data.push_back(local_cookie_low_value.get_name_leafdata());
    if (remote_cookie_low_value.is_set || is_set(remote_cookie_low_value.yfilter)) leaf_name_data.push_back(remote_cookie_low_value.get_name_leafdata());
    if (local_cookie_high_value.is_set || is_set(local_cookie_high_value.yfilter)) leaf_name_data.push_back(local_cookie_high_value.get_name_leafdata());
    if (remote_cookie_high_value.is_set || is_set(remote_cookie_high_value.yfilter)) leaf_name_data.push_back(remote_cookie_high_value.get_name_leafdata());
    if (remote_circuit_status_up.is_set || is_set(remote_circuit_status_up.yfilter)) leaf_name_data.push_back(remote_circuit_status_up.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (local_secondary_cookie_size.is_set || is_set(local_secondary_cookie_size.yfilter)) leaf_name_data.push_back(local_secondary_cookie_size.get_name_leafdata());
    if (local_secondary_cookie_low_value.is_set || is_set(local_secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(local_secondary_cookie_low_value.get_name_leafdata());
    if (local_secondary_cookie_high_value.is_set || is_set(local_secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(local_secondary_cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
        l2tp_class_name.value_namespace = name_space;
        l2tp_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
        ipv4_source_address.value_namespace = name_space;
        ipv4_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address = value;
        ipv6_source_address.value_namespace = name_space;
        ipv6_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
        path_mtu_enabled.value_namespace = name_space;
        path_mtu_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
        path_mtu_max_value.value_namespace = name_space;
        path_mtu_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
        dont_fragment_bit.value_namespace = name_space;
        dont_fragment_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
        tos_mode.value_namespace = name_space;
        tos_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size = value;
        local_cookie_size.value_namespace = name_space;
        local_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size = value;
        remote_cookie_size.value_namespace = name_space;
        remote_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value = value;
        local_cookie_low_value.value_namespace = name_space;
        local_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value = value;
        remote_cookie_low_value.value_namespace = name_space;
        remote_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value = value;
        local_cookie_high_value.value_namespace = name_space;
        local_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value = value;
        remote_cookie_high_value.value_namespace = name_space;
        remote_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up = value;
        remote_circuit_status_up.value_namespace = name_space;
        remote_circuit_status_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size = value;
        local_secondary_cookie_size.value_namespace = name_space;
        local_secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value = value;
        local_secondary_cookie_low_value.value_namespace = name_space;
        local_secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value = value;
        local_secondary_cookie_high_value.value_namespace = name_space;
        local_secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled.yfilter = yfilter;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value.yfilter = yfilter;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit.yfilter = yfilter;
    }
    if(value_path == "tos-mode")
    {
        tos_mode.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size.yfilter = yfilter;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-class-name" || name == "ipv4-source-address" || name == "ipv6-source-address" || name == "path-mtu-enabled" || name == "path-mtu-max-value" || name == "dont-fragment-bit" || name == "tos-mode" || name == "tos" || name == "ttl" || name == "local-session-id" || name == "remote-session-id" || name == "local-cookie-size" || name == "remote-cookie-size" || name == "local-cookie-low-value" || name == "remote-cookie-low-value" || name == "local-cookie-high-value" || name == "remote-cookie-high-value" || name == "remote-circuit-status-up" || name == "tunnel-state" || name == "local-secondary-cookie-size" || name == "local-secondary-cookie-low-value" || name == "local-secondary-cookie-high-value")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::LocalInterface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "local-interface"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::~LocalInterface()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::has_data() const
{
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    ethernet(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet>())
	,vlan(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan>())
	,tdm(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm>())
	,atm(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm>())
	,fr(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "local-interface"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::has_data() const
{
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::has_data() const
{
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/tdm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::has_data() const
{
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/pseudowire-ether/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/pseudowire-ether/interface-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/pseudowire-iw/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-interface/parameters/pseudowire-iw/interface-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::RemoteInterface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "remote-interface"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::~RemoteInterface()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::has_data() const
{
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    ethernet(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet>())
	,vlan(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan>())
	,tdm(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm>())
	,atm(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm>())
	,fr(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "remote-interface"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::has_data() const
{
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::has_data() const
{
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/tdm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::has_data() const
{
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/pseudowire-ether/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/pseudowire-ether/interface-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/pseudowire-iw/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-interface/parameters/pseudowire-iw/interface-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::PreferredPath()
    :
    option{YType::enumeration, "option"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
    	,
    srte_policy(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy>())
{
    srte_policy->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::has_data() const
{
    return option.is_set
	|| next_hop_ip.is_set
	|| te_tunnel_interface_number.is_set
	|| ip_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set
	|| (srte_policy !=  nullptr && srte_policy->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter)
	|| ydk::is_set(te_tunnel_interface_number.yfilter)
	|| ydk::is_set(ip_tunnel_interface_number.yfilter)
	|| ydk::is_set(tp_tunnel_interface_number.yfilter)
	|| (srte_policy !=  nullptr && srte_policy->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.yfilter)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.yfilter)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.yfilter)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srte-policy")
    {
        if(srte_policy == nullptr)
        {
            srte_policy = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy>();
        }
        return srte_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(srte_policy != nullptr)
    {
        children["srte-policy"] = srte_policy;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
        te_tunnel_interface_number.value_namespace = name_space;
        te_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
        ip_tunnel_interface_number.value_namespace = name_space;
        ip_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
        tp_tunnel_interface_number.value_namespace = name_space;
        tp_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srte-policy" || name == "option" || name == "next-hop-ip" || name == "te-tunnel-interface-number" || name == "ip-tunnel-interface-number" || name == "tp-tunnel-interface-number")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::SrtePolicy()
    :
    policy_name{YType::str, "policy-name"}
{

    yang_name = "srte-policy"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::~SrtePolicy()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::has_data() const
{
    return policy_name.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/preferred-path/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath::SrtePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::LocalSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "local-signalling"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::~LocalSignalling()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_tlv != nullptr)
    {
        children["status-tlv"] = status_tlv;
    }

    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::StatusTlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "status-tlv"; yang_parent_name = "local-signalling"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::has_data() const
{
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::Tlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "tlv"; yang_parent_name = "local-signalling"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::has_data() const
{
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/local-signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::RemoteSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "remote-signalling"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::~RemoteSignalling()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_tlv != nullptr)
    {
        children["status-tlv"] = status_tlv;
    }

    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "status-tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::has_data() const
{
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::Tlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::has_data() const
{
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/remote-signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::Statistics()
    :
    impostion_stats(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats>())
	,dispostion_stats(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber>())
{
    impostion_stats->parent = this;
    dispostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::~Statistics()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::has_data() const
{
    return (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "impostion-stats" || name == "dispostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionStats()
    :
    imposition_stat(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast>())
	,broadcast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast>())
{
    imposition_stat->parent = this;
    imposition_mtu_drop->parent = this;
    impostion_tail_drop->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    broadcast->parent = this;
    known_unicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::has_data() const
{
    return (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imposition-stat" || name == "imposition-mtu-drop" || name == "impostion-tail-drop" || name == "l2fsbi-drop" || name == "multicast" || name == "broadcast" || name == "known-unicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::Multicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispostionStats()
    :
    disposition_stat(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop>())
	,multicast_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop>())
	,unicast_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop>())
	,broadcast_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops>())
	,dai_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats>())
	,known_unicast(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove>())
{
    disposition_stat->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_tail_drop->parent = this;
    multicast_drop->parent = this;
    unicast_drop->parent = this;
    broadcast_drop->parent = this;
    received_drops->parent = this;
    dai_drop->parent = this;
    ipsg_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::has_data() const
{
    return (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disposition-stat" || name == "disposition-mtu-drop" || name == "disposition-tail-drop" || name == "multicast-drop" || name == "unicast-drop" || name == "broadcast-drop" || name == "received-drops" || name == "dai-drop" || name == "ipsg-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "known-unicast" || name == "mac-move")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::MacMove()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::SequenceNumber()
    :
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::has_data() const
{
    return sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number-sent" || name == "sequence-number-expected" || name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::P2MpPw()
    :
    local_available{YType::boolean, "local-available"},
    local_label{YType::uint32, "local-label"},
    local_ptree_type{YType::enumeration, "local-ptree-type"},
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    local_extended_tunnel_id{YType::str, "local-extended-tunnel-id"},
    local_p2mp_id{YType::uint32, "local-p2mp-id"},
    local_flags{YType::uint8, "local-flags"},
    remote_available{YType::boolean, "remote-available"},
    remote_label{YType::uint32, "remote-label"},
    remote_ptree_type{YType::enumeration, "remote-ptree-type"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    remote_extended_tunnel_id{YType::str, "remote-extended-tunnel-id"},
    remote_p2mp_id{YType::uint32, "remote-p2mp-id"},
    remote_flags{YType::uint8, "remote-flags"}
{

    yang_name = "p2mp-pw"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::~P2MpPw()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::has_data() const
{
    return local_available.is_set
	|| local_label.is_set
	|| local_ptree_type.is_set
	|| local_tunnel_id.is_set
	|| local_extended_tunnel_id.is_set
	|| local_p2mp_id.is_set
	|| local_flags.is_set
	|| remote_available.is_set
	|| remote_label.is_set
	|| remote_ptree_type.is_set
	|| remote_tunnel_id.is_set
	|| remote_extended_tunnel_id.is_set
	|| remote_p2mp_id.is_set
	|| remote_flags.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_available.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(local_ptree_type.yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(local_extended_tunnel_id.yfilter)
	|| ydk::is_set(local_p2mp_id.yfilter)
	|| ydk::is_set(local_flags.yfilter)
	|| ydk::is_set(remote_available.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(remote_ptree_type.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(remote_extended_tunnel_id.yfilter)
	|| ydk::is_set(remote_p2mp_id.yfilter)
	|| ydk::is_set(remote_flags.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/backup/pseudo-wire/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_available.is_set || is_set(local_available.yfilter)) leaf_name_data.push_back(local_available.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_ptree_type.is_set || is_set(local_ptree_type.yfilter)) leaf_name_data.push_back(local_ptree_type.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (local_extended_tunnel_id.is_set || is_set(local_extended_tunnel_id.yfilter)) leaf_name_data.push_back(local_extended_tunnel_id.get_name_leafdata());
    if (local_p2mp_id.is_set || is_set(local_p2mp_id.yfilter)) leaf_name_data.push_back(local_p2mp_id.get_name_leafdata());
    if (local_flags.is_set || is_set(local_flags.yfilter)) leaf_name_data.push_back(local_flags.get_name_leafdata());
    if (remote_available.is_set || is_set(remote_available.yfilter)) leaf_name_data.push_back(remote_available.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_ptree_type.is_set || is_set(remote_ptree_type.yfilter)) leaf_name_data.push_back(remote_ptree_type.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (remote_extended_tunnel_id.is_set || is_set(remote_extended_tunnel_id.yfilter)) leaf_name_data.push_back(remote_extended_tunnel_id.get_name_leafdata());
    if (remote_p2mp_id.is_set || is_set(remote_p2mp_id.yfilter)) leaf_name_data.push_back(remote_p2mp_id.get_name_leafdata());
    if (remote_flags.is_set || is_set(remote_flags.yfilter)) leaf_name_data.push_back(remote_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-available")
    {
        local_available = value;
        local_available.value_namespace = name_space;
        local_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type = value;
        local_ptree_type.value_namespace = name_space;
        local_ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id = value;
        local_extended_tunnel_id.value_namespace = name_space;
        local_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id = value;
        local_p2mp_id.value_namespace = name_space;
        local_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-flags")
    {
        local_flags = value;
        local_flags.value_namespace = name_space;
        local_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-available")
    {
        remote_available = value;
        remote_available.value_namespace = name_space;
        remote_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type = value;
        remote_ptree_type.value_namespace = name_space;
        remote_ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id = value;
        remote_extended_tunnel_id.value_namespace = name_space;
        remote_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id = value;
        remote_p2mp_id.value_namespace = name_space;
        remote_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-flags")
    {
        remote_flags = value;
        remote_flags.value_namespace = name_space;
        remote_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-available")
    {
        local_available.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "local-flags")
    {
        local_flags.yfilter = yfilter;
    }
    if(value_path == "remote-available")
    {
        remote_available.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "remote-flags")
    {
        remote_flags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-available" || name == "local-label" || name == "local-ptree-type" || name == "local-tunnel-id" || name == "local-extended-tunnel-id" || name == "local-p2mp-id" || name == "local-flags" || name == "remote-available" || name == "remote-label" || name == "remote-ptree-type" || name == "remote-tunnel-id" || name == "remote-extended-tunnel-id" || name == "remote-p2mp-id" || name == "remote-flags")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::Segment1()
    :
    segment_type{YType::enumeration, "segment-type"}
    	,
    attachment_circuit(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit>())
	,pseudo_wire(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::PseudoWire>())
{
    attachment_circuit->parent = this;
    pseudo_wire->parent = this;

    yang_name = "segment1"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::~Segment1()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::has_data() const
{
    return segment_type.is_set
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_data())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_operation())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        if(attachment_circuit == nullptr)
        {
            attachment_circuit = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit>();
        }
        return attachment_circuit;
    }

    if(child_yang_name == "pseudo-wire")
    {
        if(pseudo_wire == nullptr)
        {
            pseudo_wire = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::PseudoWire>();
        }
        return pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment_circuit != nullptr)
    {
        children["attachment-circuit"] = attachment_circuit;
    }

    if(pseudo_wire != nullptr)
    {
        children["pseudo-wire"] = pseudo_wire;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit" || name == "pseudo-wire" || name == "segment-type")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::AttachmentCircuit()
    :
    state{YType::enumeration, "state"},
    msti{YType::str, "msti"},
    internal_ms_ti{YType::str, "internal-ms-ti"},
    interface_handle{YType::str, "interface-handle"},
    node_id{YType::str, "node-id"},
    xconnect_id{YType::uint32, "xconnect-id"},
    ms_ti_mismatch{YType::boolean, "ms-ti-mismatch"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    tdm_media_mismatched{YType::boolean, "tdm-media-mismatched"},
    bvi_mac_conflict{YType::boolean, "bvi-mac-conflict"},
    bvi_no_port_up{YType::boolean, "bvi-no-port-up"},
    control_word_mismatched{YType::boolean, "control-word-mismatched"},
    encapsulation_mismatched{YType::boolean, "encapsulation-mismatched"},
    encapsulation_error{YType::str, "encapsulation-error"},
    interworking{YType::enumeration, "interworking"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    msti_mismatch_down{YType::boolean, "msti-mismatch-down"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_group_state{YType::enumeration, "redundancy-group-state"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    is_ac_partially_programmed{YType::boolean, "is-ac-partially-programmed"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"}
    	,
    interface(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface>())
	,statistics(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Statistics>())
	,l2vpn_protection(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::L2VpnProtection>())
{
    interface->parent = this;
    statistics->parent = this;
    l2vpn_protection->parent = this;

    yang_name = "attachment-circuit"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::has_data() const
{
    return state.is_set
	|| msti.is_set
	|| internal_ms_ti.is_set
	|| interface_handle.is_set
	|| node_id.is_set
	|| xconnect_id.is_set
	|| ms_ti_mismatch.is_set
	|| mtu_mismatched.is_set
	|| tdm_media_mismatched.is_set
	|| bvi_mac_conflict.is_set
	|| bvi_no_port_up.is_set
	|| control_word_mismatched.is_set
	|| encapsulation_mismatched.is_set
	|| encapsulation_error.is_set
	|| interworking.is_set
	|| out_of_memory_state.is_set
	|| msti_mismatch_down.is_set
	|| mac_limit_oper_down.is_set
	|| redundancy_group_id.is_set
	|| redundancy_group_state.is_set
	|| redundancy_object_id.is_set
	|| is_ac_partially_programmed.is_set
	|| evpn_internal_label.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(internal_ms_ti.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(ms_ti_mismatch.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(tdm_media_mismatched.yfilter)
	|| ydk::is_set(bvi_mac_conflict.yfilter)
	|| ydk::is_set(bvi_no_port_up.yfilter)
	|| ydk::is_set(control_word_mismatched.yfilter)
	|| ydk::is_set(encapsulation_mismatched.yfilter)
	|| ydk::is_set(encapsulation_error.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(msti_mismatch_down.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_group_state.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(is_ac_partially_programmed.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (internal_ms_ti.is_set || is_set(internal_ms_ti.yfilter)) leaf_name_data.push_back(internal_ms_ti.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (ms_ti_mismatch.is_set || is_set(ms_ti_mismatch.yfilter)) leaf_name_data.push_back(ms_ti_mismatch.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (tdm_media_mismatched.is_set || is_set(tdm_media_mismatched.yfilter)) leaf_name_data.push_back(tdm_media_mismatched.get_name_leafdata());
    if (bvi_mac_conflict.is_set || is_set(bvi_mac_conflict.yfilter)) leaf_name_data.push_back(bvi_mac_conflict.get_name_leafdata());
    if (bvi_no_port_up.is_set || is_set(bvi_no_port_up.yfilter)) leaf_name_data.push_back(bvi_no_port_up.get_name_leafdata());
    if (control_word_mismatched.is_set || is_set(control_word_mismatched.yfilter)) leaf_name_data.push_back(control_word_mismatched.get_name_leafdata());
    if (encapsulation_mismatched.is_set || is_set(encapsulation_mismatched.yfilter)) leaf_name_data.push_back(encapsulation_mismatched.get_name_leafdata());
    if (encapsulation_error.is_set || is_set(encapsulation_error.yfilter)) leaf_name_data.push_back(encapsulation_error.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (msti_mismatch_down.is_set || is_set(msti_mismatch_down.yfilter)) leaf_name_data.push_back(msti_mismatch_down.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_group_state.is_set || is_set(redundancy_group_state.yfilter)) leaf_name_data.push_back(redundancy_group_state.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (is_ac_partially_programmed.is_set || is_set(is_ac_partially_programmed.yfilter)) leaf_name_data.push_back(is_ac_partially_programmed.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "l2vpn-protection")
    {
        if(l2vpn_protection == nullptr)
        {
            l2vpn_protection = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::L2VpnProtection>();
        }
        return l2vpn_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(l2vpn_protection != nullptr)
    {
        children["l2vpn-protection"] = l2vpn_protection;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti = value;
        internal_ms_ti.value_namespace = name_space;
        internal_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch = value;
        ms_ti_mismatch.value_namespace = name_space;
        ms_ti_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched = value;
        tdm_media_mismatched.value_namespace = name_space;
        tdm_media_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict = value;
        bvi_mac_conflict.value_namespace = name_space;
        bvi_mac_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up = value;
        bvi_no_port_up.value_namespace = name_space;
        bvi_no_port_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched = value;
        control_word_mismatched.value_namespace = name_space;
        control_word_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched = value;
        encapsulation_mismatched.value_namespace = name_space;
        encapsulation_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error = value;
        encapsulation_error.value_namespace = name_space;
        encapsulation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down = value;
        msti_mismatch_down.value_namespace = name_space;
        msti_mismatch_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state = value;
        redundancy_group_state.value_namespace = name_space;
        redundancy_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed = value;
        is_ac_partially_programmed.value_namespace = name_space;
        is_ac_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched.yfilter = yfilter;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict.yfilter = yfilter;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up.yfilter = yfilter;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "statistics" || name == "l2vpn-protection" || name == "state" || name == "msti" || name == "internal-ms-ti" || name == "interface-handle" || name == "node-id" || name == "xconnect-id" || name == "ms-ti-mismatch" || name == "mtu-mismatched" || name == "tdm-media-mismatched" || name == "bvi-mac-conflict" || name == "bvi-no-port-up" || name == "control-word-mismatched" || name == "encapsulation-mismatched" || name == "encapsulation-error" || name == "interworking" || name == "out-of-memory-state" || name == "msti-mismatch-down" || name == "mac-limit-oper-down" || name == "redundancy-group-id" || name == "redundancy-group-state" || name == "redundancy-object-id" || name == "is-ac-partially-programmed" || name == "evpn-internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Interface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters>())
{
    parameters->parent = this;

    yang_name = "interface"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::~Interface()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::has_data() const
{
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    ethernet(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet>())
	,vlan(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan>())
	,tdm(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm>())
	,atm(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm>())
	,fr(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::has_data() const
{
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_data() const
{
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/tdm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::has_data() const
{
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnects/xconnect/segment1/attachment-circuit/interface/parameters/pseudowire-ether/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::Xconnects::Xconnect::Segment1::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}


}
}

