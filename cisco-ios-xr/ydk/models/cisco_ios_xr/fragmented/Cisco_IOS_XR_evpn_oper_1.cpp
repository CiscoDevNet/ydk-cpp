
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_evpn_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_evpn_oper {

Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-configured"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::~RdConfigured()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
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

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::~Auto_()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::RtAuto()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rt-auto"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::~RtAuto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
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

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::~EsImport()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::RtAutoStitching()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rt-auto-stitching"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::~RtAutoStitching()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto-stitching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
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

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "rt-auto-stitching"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::~EsImport()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rt-auto-stitching"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rt-auto-stitching"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rt-auto-stitching"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EviChildren()
    :
    ethernet_auto_discoveries(std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries>())
	,inclusive_multicasts(std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts>())
	,macs(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs>())
	,neighbors(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors>())
	,route_targets(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets>())
{
    ethernet_auto_discoveries->parent = this;
    inclusive_multicasts->parent = this;
    macs->parent = this;
    neighbors->parent = this;
    route_targets->parent = this;

    yang_name = "evi-children"; yang_parent_name = "evi-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::~EviChildren()
{
}

bool Evpn::Standby::EviDetail::EviChildren::has_data() const
{
    return (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_data())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_data())
	|| (macs !=  nullptr && macs->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_operation())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_operation())
	|| (macs !=  nullptr && macs->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-children";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-auto-discoveries")
    {
        if(ethernet_auto_discoveries == nullptr)
        {
            ethernet_auto_discoveries = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries>();
        }
        return ethernet_auto_discoveries;
    }

    if(child_yang_name == "inclusive-multicasts")
    {
        if(inclusive_multicasts == nullptr)
        {
            inclusive_multicasts = std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts>();
        }
        return inclusive_multicasts;
    }

    if(child_yang_name == "macs")
    {
        if(macs == nullptr)
        {
            macs = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs>();
        }
        return macs;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets == nullptr)
        {
            route_targets = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets>();
        }
        return route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet_auto_discoveries != nullptr)
    {
        children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
    }

    if(inclusive_multicasts != nullptr)
    {
        children["inclusive-multicasts"] = inclusive_multicasts;
    }

    if(macs != nullptr)
    {
        children["macs"] = macs;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(route_targets != nullptr)
    {
        children["route-targets"] = route_targets;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-auto-discoveries" || name == "inclusive-multicasts" || name == "macs" || name == "neighbors" || name == "route-targets")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscoveries()
{

    yang_name = "ethernet-auto-discoveries"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::~EthernetAutoDiscoveries()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::has_data() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.size(); index++)
    {
        if(ethernet_auto_discovery[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::has_operation() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.size(); index++)
    {
        if(ethernet_auto_discovery[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discoveries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-auto-discovery")
    {
        for(auto const & c : ethernet_auto_discovery)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery>();
        c->parent = this;
        ethernet_auto_discovery.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet_auto_discovery)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-auto-discovery")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetAutoDiscovery()
    :
    encap{YType::uint8, "encap"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    ethernet_vpnid{YType::uint32, "ethernet-vpnid"},
    evi{YType::int32, "evi"},
    is_local_ead{YType::boolean, "is-local-ead"},
    local_label{YType::uint32, "local-label"},
    local_next_hop{YType::str, "local-next-hop"},
    num_paths{YType::uint32, "num-paths"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"},
    type{YType::enumeration, "type"}
{

    yang_name = "ethernet-auto-discovery"; yang_parent_name = "ethernet-auto-discoveries"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::~EthernetAutoDiscovery()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_data() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    return encap.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| ethernet_vpnid.is_set
	|| evi.is_set
	|| is_local_ead.is_set
	|| local_label.is_set
	|| local_next_hop.is_set
	|| num_paths.is_set
	|| redundancy_single_active.is_set
	|| type.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(ethernet_vpnid.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(is_local_ead.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(local_next_hop.yfilter)
	|| ydk::is_set(num_paths.yfilter)
	|| ydk::is_set(redundancy_single_active.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (ethernet_vpnid.is_set || is_set(ethernet_vpnid.yfilter)) leaf_name_data.push_back(ethernet_vpnid.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (is_local_ead.is_set || is_set(is_local_ead.yfilter)) leaf_name_data.push_back(is_local_ead.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_next_hop.is_set || is_set(local_next_hop.yfilter)) leaf_name_data.push_back(local_next_hop.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.yfilter)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.yfilter)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-identifier")
    {
        for(auto const & c : ethernet_segment_identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier>();
        c->parent = this;
        ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "path-buffer")
    {
        for(auto const & c : path_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet_segment_identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_buffer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-vpnid")
    {
        ethernet_vpnid = value;
        ethernet_vpnid.value_namespace = name_space;
        ethernet_vpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead = value;
        is_local_ead.value_namespace = name_space;
        is_local_ead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop = value;
        local_next_hop.value_namespace = name_space;
        local_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
        num_paths.value_namespace = name_space;
        num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
        redundancy_single_active.value_namespace = name_space;
        redundancy_single_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "ethernet-vpnid")
    {
        ethernet_vpnid.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop.yfilter = yfilter;
    }
    if(value_path == "num-paths")
    {
        num_paths.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-identifier" || name == "path-buffer" || name == "encap" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-tag" || name == "ethernet-tag-xr" || name == "ethernet-vpnid" || name == "evi" || name == "is-local-ead" || name == "local-label" || name == "local-next-hop" || name == "num-paths" || name == "redundancy-single-active" || name == "type")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "ethernet-auto-discovery"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/ethernet-auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::PathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "path-buffer"; yang_parent_name = "ethernet-auto-discovery"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::~PathBuffer()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/ethernet-auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticasts()
{

    yang_name = "inclusive-multicasts"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::~InclusiveMulticasts()
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::has_data() const
{
    for (std::size_t index=0; index<inclusive_multicast.size(); index++)
    {
        if(inclusive_multicast[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::has_operation() const
{
    for (std::size_t index=0; index<inclusive_multicast.size(); index++)
    {
        if(inclusive_multicast[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicasts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inclusive-multicast")
    {
        for(auto const & c : inclusive_multicast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast>();
        c->parent = this;
        inclusive_multicast.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inclusive_multicast)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inclusive-multicast")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::InclusiveMulticast()
    :
    encap_type{YType::uint8, "encap-type"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    is_local_entry{YType::boolean, "is-local-entry"},
    is_proxy_entry{YType::boolean, "is-proxy-entry"},
    next_hop{YType::str, "next-hop"},
    originating_ip{YType::str, "originating-ip"},
    originating_ip_xr{YType::str, "originating-ip-xr"},
    output_label{YType::uint32, "output-label"}
{

    yang_name = "inclusive-multicast"; yang_parent_name = "inclusive-multicasts"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::~InclusiveMulticast()
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_data() const
{
    return encap_type.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| is_local_entry.is_set
	|| is_proxy_entry.is_set
	|| next_hop.is_set
	|| originating_ip.is_set
	|| originating_ip_xr.is_set
	|| output_label.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap_type.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(is_local_entry.yfilter)
	|| ydk::is_set(is_proxy_entry.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(originating_ip.yfilter)
	|| ydk::is_set(originating_ip_xr.yfilter)
	|| ydk::is_set(output_label.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/inclusive-multicasts/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap_type.is_set || is_set(encap_type.yfilter)) leaf_name_data.push_back(encap_type.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (is_local_entry.is_set || is_set(is_local_entry.yfilter)) leaf_name_data.push_back(is_local_entry.get_name_leafdata());
    if (is_proxy_entry.is_set || is_set(is_proxy_entry.yfilter)) leaf_name_data.push_back(is_proxy_entry.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (originating_ip.is_set || is_set(originating_ip.yfilter)) leaf_name_data.push_back(originating_ip.get_name_leafdata());
    if (originating_ip_xr.is_set || is_set(originating_ip_xr.yfilter)) leaf_name_data.push_back(originating_ip_xr.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap-type")
    {
        encap_type = value;
        encap_type.value_namespace = name_space;
        encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
        evi_xr.value_namespace = name_space;
        evi_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-entry")
    {
        is_local_entry = value;
        is_local_entry.value_namespace = name_space;
        is_local_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry = value;
        is_proxy_entry.value_namespace = name_space;
        is_proxy_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originating-ip")
    {
        originating_ip = value;
        originating_ip.value_namespace = name_space;
        originating_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr = value;
        originating_ip_xr.value_namespace = name_space;
        originating_ip_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap-type")
    {
        encap_type.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "is-local-entry")
    {
        is_local_entry.yfilter = yfilter;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "originating-ip")
    {
        originating_ip.yfilter = yfilter;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap-type" || name == "ethernet-tag" || name == "ethernet-tag-xr" || name == "evi" || name == "evi-xr" || name == "is-local-entry" || name == "is-proxy-entry" || name == "next-hop" || name == "originating-ip" || name == "originating-ip-xr" || name == "output-label")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Macs()
{

    yang_name = "macs"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::~Macs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::has_data() const
{
    for (std::size_t index=0; index<mac.size(); index++)
    {
        if(mac[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::has_operation() const
{
    for (std::size_t index=0; index<mac.size(); index++)
    {
        if(mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        for(auto const & c : mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac>();
        c->parent = this;
        mac.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::Macs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::Mac()
    :
    esi_port_key{YType::uint16, "esi-port-key"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    evi{YType::int32, "evi"},
    internal_label{YType::uint32, "internal-label"},
    ip_address{YType::str, "ip-address"},
    ip_address_xr{YType::str, "ip-address-xr"},
    ipnh_address{YType::str, "ipnh-address"},
    is_local_mac{YType::boolean, "is-local-mac"},
    is_proxy_entry{YType::boolean, "is-proxy-entry"},
    is_remote_mac{YType::boolean, "is-remote-mac"},
    learned_bridge_port_name{YType::str, "learned-bridge-port-name"},
    local_encap_type{YType::uint8, "local-encap-type"},
    local_is_static{YType::boolean, "local-is-static"},
    local_l3_label{YType::uint32, "local-l3-label"},
    local_label{YType::uint32, "local-label"},
    local_seq_id{YType::uint32, "local-seq-id"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"},
    mac_flush_received{YType::uint16, "mac-flush-received"},
    mac_flush_requested{YType::uint16, "mac-flush-requested"},
    num_paths{YType::uint32, "num-paths"},
    remote_encap_type{YType::uint8, "remote-encap-type"},
    remote_is_static{YType::boolean, "remote-is-static"},
    remote_seq_id{YType::uint32, "remote-seq-id"},
    resolved{YType::boolean, "resolved"},
    router_mac_address{YType::str, "router-mac-address"},
    soo_nexthop{YType::str, "soo-nexthop"}
{

    yang_name = "mac"; yang_parent_name = "macs"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::~Mac()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_data() const
{
    for (std::size_t index=0; index<local_ethernet_segment_identifier.size(); index++)
    {
        if(local_ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_ethernet_segment_identifier.size(); index++)
    {
        if(remote_ethernet_segment_identifier[index]->has_data())
            return true;
    }
    return esi_port_key.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| evi.is_set
	|| internal_label.is_set
	|| ip_address.is_set
	|| ip_address_xr.is_set
	|| ipnh_address.is_set
	|| is_local_mac.is_set
	|| is_proxy_entry.is_set
	|| is_remote_mac.is_set
	|| learned_bridge_port_name.is_set
	|| local_encap_type.is_set
	|| local_is_static.is_set
	|| local_l3_label.is_set
	|| local_label.is_set
	|| local_seq_id.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| mac_flush_received.is_set
	|| mac_flush_requested.is_set
	|| num_paths.is_set
	|| remote_encap_type.is_set
	|| remote_is_static.is_set
	|| remote_seq_id.is_set
	|| resolved.is_set
	|| router_mac_address.is_set
	|| soo_nexthop.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_operation() const
{
    for (std::size_t index=0; index<local_ethernet_segment_identifier.size(); index++)
    {
        if(local_ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_ethernet_segment_identifier.size(); index++)
    {
        if(remote_ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(esi_port_key.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_xr.yfilter)
	|| ydk::is_set(ipnh_address.yfilter)
	|| ydk::is_set(is_local_mac.yfilter)
	|| ydk::is_set(is_proxy_entry.yfilter)
	|| ydk::is_set(is_remote_mac.yfilter)
	|| ydk::is_set(learned_bridge_port_name.yfilter)
	|| ydk::is_set(local_encap_type.yfilter)
	|| ydk::is_set(local_is_static.yfilter)
	|| ydk::is_set(local_l3_label.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(local_seq_id.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(mac_flush_received.yfilter)
	|| ydk::is_set(mac_flush_requested.yfilter)
	|| ydk::is_set(num_paths.yfilter)
	|| ydk::is_set(remote_encap_type.yfilter)
	|| ydk::is_set(remote_is_static.yfilter)
	|| ydk::is_set(remote_seq_id.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(router_mac_address.yfilter)
	|| ydk::is_set(soo_nexthop.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_port_key.is_set || is_set(esi_port_key.yfilter)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.yfilter)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (ipnh_address.is_set || is_set(ipnh_address.yfilter)) leaf_name_data.push_back(ipnh_address.get_name_leafdata());
    if (is_local_mac.is_set || is_set(is_local_mac.yfilter)) leaf_name_data.push_back(is_local_mac.get_name_leafdata());
    if (is_proxy_entry.is_set || is_set(is_proxy_entry.yfilter)) leaf_name_data.push_back(is_proxy_entry.get_name_leafdata());
    if (is_remote_mac.is_set || is_set(is_remote_mac.yfilter)) leaf_name_data.push_back(is_remote_mac.get_name_leafdata());
    if (learned_bridge_port_name.is_set || is_set(learned_bridge_port_name.yfilter)) leaf_name_data.push_back(learned_bridge_port_name.get_name_leafdata());
    if (local_encap_type.is_set || is_set(local_encap_type.yfilter)) leaf_name_data.push_back(local_encap_type.get_name_leafdata());
    if (local_is_static.is_set || is_set(local_is_static.yfilter)) leaf_name_data.push_back(local_is_static.get_name_leafdata());
    if (local_l3_label.is_set || is_set(local_l3_label.yfilter)) leaf_name_data.push_back(local_l3_label.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_seq_id.is_set || is_set(local_seq_id.yfilter)) leaf_name_data.push_back(local_seq_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (mac_flush_received.is_set || is_set(mac_flush_received.yfilter)) leaf_name_data.push_back(mac_flush_received.get_name_leafdata());
    if (mac_flush_requested.is_set || is_set(mac_flush_requested.yfilter)) leaf_name_data.push_back(mac_flush_requested.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.yfilter)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (remote_encap_type.is_set || is_set(remote_encap_type.yfilter)) leaf_name_data.push_back(remote_encap_type.get_name_leafdata());
    if (remote_is_static.is_set || is_set(remote_is_static.yfilter)) leaf_name_data.push_back(remote_is_static.get_name_leafdata());
    if (remote_seq_id.is_set || is_set(remote_seq_id.yfilter)) leaf_name_data.push_back(remote_seq_id.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (router_mac_address.is_set || is_set(router_mac_address.yfilter)) leaf_name_data.push_back(router_mac_address.get_name_leafdata());
    if (soo_nexthop.is_set || is_set(soo_nexthop.yfilter)) leaf_name_data.push_back(soo_nexthop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-ethernet-segment-identifier")
    {
        for(auto const & c : local_ethernet_segment_identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier>();
        c->parent = this;
        local_ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "path-buffer")
    {
        for(auto const & c : path_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-ethernet-segment-identifier")
    {
        for(auto const & c : remote_ethernet_segment_identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier>();
        c->parent = this;
        remote_ethernet_segment_identifier.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_ethernet_segment_identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_buffer)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_ethernet_segment_identifier)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
        esi_port_key.value_namespace = name_space;
        esi_port_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
        ip_address_xr.value_namespace = name_space;
        ip_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipnh-address")
    {
        ipnh_address = value;
        ipnh_address.value_namespace = name_space;
        ipnh_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac = value;
        is_local_mac.value_namespace = name_space;
        is_local_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry = value;
        is_proxy_entry.value_namespace = name_space;
        is_proxy_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac = value;
        is_remote_mac.value_namespace = name_space;
        is_remote_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name = value;
        learned_bridge_port_name.value_namespace = name_space;
        learned_bridge_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type = value;
        local_encap_type.value_namespace = name_space;
        local_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-is-static")
    {
        local_is_static = value;
        local_is_static.value_namespace = name_space;
        local_is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-l3-label")
    {
        local_l3_label = value;
        local_l3_label.value_namespace = name_space;
        local_l3_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id = value;
        local_seq_id.value_namespace = name_space;
        local_seq_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received = value;
        mac_flush_received.value_namespace = name_space;
        mac_flush_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested = value;
        mac_flush_requested.value_namespace = name_space;
        mac_flush_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
        num_paths.value_namespace = name_space;
        num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type = value;
        remote_encap_type.value_namespace = name_space;
        remote_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-is-static")
    {
        remote_is_static = value;
        remote_is_static.value_namespace = name_space;
        remote_is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id = value;
        remote_seq_id.value_namespace = name_space;
        remote_seq_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-mac-address")
    {
        router_mac_address = value;
        router_mac_address.value_namespace = name_space;
        router_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop = value;
        soo_nexthop.value_namespace = name_space;
        soo_nexthop.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esi-port-key")
    {
        esi_port_key.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr.yfilter = yfilter;
    }
    if(value_path == "ipnh-address")
    {
        ipnh_address.yfilter = yfilter;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac.yfilter = yfilter;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry.yfilter = yfilter;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac.yfilter = yfilter;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name.yfilter = yfilter;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type.yfilter = yfilter;
    }
    if(value_path == "local-is-static")
    {
        local_is_static.yfilter = yfilter;
    }
    if(value_path == "local-l3-label")
    {
        local_l3_label.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received.yfilter = yfilter;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested.yfilter = yfilter;
    }
    if(value_path == "num-paths")
    {
        num_paths.yfilter = yfilter;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type.yfilter = yfilter;
    }
    if(value_path == "remote-is-static")
    {
        remote_is_static.yfilter = yfilter;
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "router-mac-address")
    {
        router_mac_address.yfilter = yfilter;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ethernet-segment-identifier" || name == "path-buffer" || name == "remote-ethernet-segment-identifier" || name == "esi-port-key" || name == "ethernet-tag" || name == "ethernet-tag-xr" || name == "evi" || name == "internal-label" || name == "ip-address" || name == "ip-address-xr" || name == "ipnh-address" || name == "is-local-mac" || name == "is-proxy-entry" || name == "is-remote-mac" || name == "learned-bridge-port-name" || name == "local-encap-type" || name == "local-is-static" || name == "local-l3-label" || name == "local-label" || name == "local-seq-id" || name == "mac-address" || name == "mac-address-xr" || name == "mac-flush-received" || name == "mac-flush-requested" || name == "num-paths" || name == "remote-encap-type" || name == "remote-is-static" || name == "remote-seq-id" || name == "resolved" || name == "router-mac-address" || name == "soo-nexthop")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::LocalEthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "local-ethernet-segment-identifier"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::~LocalEthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::PathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "path-buffer"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::~PathBuffer()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::RemoteEthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "remote-ethernet-segment-identifier"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::~RemoteEthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::~Neighbors()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::Neighbor()
    :
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"},
    neighbor_ip{YType::str, "neighbor-ip"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::~Neighbor()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_data() const
{
    return evi.is_set
	|| evi_xr.is_set
	|| neighbor.is_set
	|| neighbor_ip.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(neighbor_ip.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (neighbor_ip.is_set || is_set(neighbor_ip.yfilter)) leaf_name_data.push_back(neighbor_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
        evi_xr.value_namespace = name_space;
        evi_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip")
    {
        neighbor_ip = value;
        neighbor_ip.value_namespace = name_space;
        neighbor_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip")
    {
        neighbor_ip.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi" || name == "evi-xr" || name == "neighbor" || name == "neighbor-ip")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTargets()
{

    yang_name = "route-targets"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::~RouteTargets()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_target)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    bd_name{YType::str, "bd-name"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    route_target_role{YType::enumeration, "route-target-role"},
    route_target_stitching{YType::boolean, "route-target-stitching"},
    type{YType::enumeration, "type"}
    	,
    route_target(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>())
{
    route_target->parent = this;

    yang_name = "route-target"; yang_parent_name = "route-targets"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| bd_name.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| format.is_set
	|| role.is_set
	|| route_target_role.is_set
	|| route_target_stitching.is_set
	|| type.is_set
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(route_target_role.yfilter)
	|| ydk::is_set(route_target_stitching.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (route_target_role.is_set || is_set(route_target_role.yfilter)) leaf_name_data.push_back(route_target_role.get_name_leafdata());
    if (route_target_stitching.is_set || is_set(route_target_stitching.yfilter)) leaf_name_data.push_back(route_target_stitching.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
        evi_xr.value_namespace = name_space;
        evi_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-role")
    {
        route_target_role = value;
        route_target_role.value_namespace = name_space;
        route_target_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-stitching")
    {
        route_target_stitching = value;
        route_target_stitching.value_namespace = name_space;
        route_target_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "route-target-role")
    {
        route_target_role.yfilter = yfilter;
    }
    if(value_path == "route-target-stitching")
    {
        route_target_stitching.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target" || name == "addr-index" || name == "address" || name == "as" || name == "as-index" || name == "bd-name" || name == "evi" || name == "evi-xr" || name == "format" || name == "role" || name == "route-target-role" || name == "route-target-stitching" || name == "type")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::RouteTarget_()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "route-target"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::~RouteTarget_()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
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

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::~EsImport()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::Evis::Evis()
{

    yang_name = "evis"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::Evis::~Evis()
{
}

bool Evpn::Standby::Evis::has_data() const
{
    for (std::size_t index=0; index<evi.size(); index++)
    {
        if(evi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::Evis::has_operation() const
{
    for (std::size_t index=0; index<evi.size(); index++)
    {
        if(evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::Evis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Evis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Evis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::Evis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evi")
    {
        for(auto const & c : evi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::Evis::Evi>();
        c->parent = this;
        evi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::Evis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::Evis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::Evis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::Evis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi")
        return true;
    return false;
}

Evpn::Standby::Evis::Evi::Evi()
    :
    evi{YType::int32, "evi"},
    bd_name{YType::str, "bd-name"},
    evi_xr{YType::uint32, "evi-xr"},
    type{YType::enumeration, "type"}
{

    yang_name = "evi"; yang_parent_name = "evis"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::Evis::Evi::~Evi()
{
}

bool Evpn::Standby::Evis::Evi::has_data() const
{
    return evi.is_set
	|| bd_name.is_set
	|| evi_xr.is_set
	|| type.is_set;
}

bool Evpn::Standby::Evis::Evi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::Evis::Evi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evis/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Evis::Evi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi" <<"[evi='" <<evi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Evis::Evi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::Evis::Evi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::Evis::Evi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::Evis::Evi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
        evi_xr.value_namespace = name_space;
        evi_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Evis::Evi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::Evis::Evi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi" || name == "bd-name" || name == "evi-xr" || name == "type")
        return true;
    return false;
}

Evpn::Standby::Summary::Summary()
    :
    as{YType::uint32, "as"},
    cost_out{YType::boolean, "cost-out"},
    es_entries{YType::uint32, "es-entries"},
    es_global_mac_routes{YType::uint32, "es-global-mac-routes"},
    ev_is{YType::uint32, "ev-is"},
    global_source_mac{YType::str, "global-source-mac"},
    l2rib_throttle{YType::boolean, "l2rib-throttle"},
    labels{YType::uint32, "labels"},
    local_ead_routes{YType::uint32, "local-ead-routes"},
    local_imcast_routes{YType::uint32, "local-imcast-routes"},
    local_ipv4_mac_routes{YType::uint32, "local-ipv4-mac-routes"},
    local_ipv6_mac_routes{YType::uint32, "local-ipv6-mac-routes"},
    local_mac_routes{YType::uint32, "local-mac-routes"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    mac_secure_freeze_time{YType::uint32, "mac-secure-freeze-time"},
    mac_secure_move_count{YType::uint32, "mac-secure-move-count"},
    mac_secure_move_interval{YType::uint32, "mac-secure-move-interval"},
    mac_secure_retry_count{YType::uint32, "mac-secure-retry-count"},
    neighbor_entries{YType::uint32, "neighbor-entries"},
    peering_time{YType::uint32, "peering-time"},
    recovery_time{YType::uint32, "recovery-time"},
    remote_ead_routes{YType::uint32, "remote-ead-routes"},
    remote_imcast_routes{YType::uint32, "remote-imcast-routes"},
    remote_ipv4_mac_routes{YType::uint32, "remote-ipv4-mac-routes"},
    remote_ipv6_mac_routes{YType::uint32, "remote-ipv6-mac-routes"},
    remote_mac_routes{YType::uint32, "remote-mac-routes"},
    remote_soo_mac_routes{YType::uint32, "remote-soo-mac-routes"},
    router_id{YType::str, "router-id"},
    startup_cost_in_time{YType::uint32, "startup-cost-in-time"}
{

    yang_name = "summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::Summary::~Summary()
{
}

bool Evpn::Standby::Summary::has_data() const
{
    return as.is_set
	|| cost_out.is_set
	|| es_entries.is_set
	|| es_global_mac_routes.is_set
	|| ev_is.is_set
	|| global_source_mac.is_set
	|| l2rib_throttle.is_set
	|| labels.is_set
	|| local_ead_routes.is_set
	|| local_imcast_routes.is_set
	|| local_ipv4_mac_routes.is_set
	|| local_ipv6_mac_routes.is_set
	|| local_mac_routes.is_set
	|| logging_df_election_enabled.is_set
	|| mac_secure_freeze_time.is_set
	|| mac_secure_move_count.is_set
	|| mac_secure_move_interval.is_set
	|| mac_secure_retry_count.is_set
	|| neighbor_entries.is_set
	|| peering_time.is_set
	|| recovery_time.is_set
	|| remote_ead_routes.is_set
	|| remote_imcast_routes.is_set
	|| remote_ipv4_mac_routes.is_set
	|| remote_ipv6_mac_routes.is_set
	|| remote_mac_routes.is_set
	|| remote_soo_mac_routes.is_set
	|| router_id.is_set
	|| startup_cost_in_time.is_set;
}

bool Evpn::Standby::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(cost_out.yfilter)
	|| ydk::is_set(es_entries.yfilter)
	|| ydk::is_set(es_global_mac_routes.yfilter)
	|| ydk::is_set(ev_is.yfilter)
	|| ydk::is_set(global_source_mac.yfilter)
	|| ydk::is_set(l2rib_throttle.yfilter)
	|| ydk::is_set(labels.yfilter)
	|| ydk::is_set(local_ead_routes.yfilter)
	|| ydk::is_set(local_imcast_routes.yfilter)
	|| ydk::is_set(local_ipv4_mac_routes.yfilter)
	|| ydk::is_set(local_ipv6_mac_routes.yfilter)
	|| ydk::is_set(local_mac_routes.yfilter)
	|| ydk::is_set(logging_df_election_enabled.yfilter)
	|| ydk::is_set(mac_secure_freeze_time.yfilter)
	|| ydk::is_set(mac_secure_move_count.yfilter)
	|| ydk::is_set(mac_secure_move_interval.yfilter)
	|| ydk::is_set(mac_secure_retry_count.yfilter)
	|| ydk::is_set(neighbor_entries.yfilter)
	|| ydk::is_set(peering_time.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(remote_ead_routes.yfilter)
	|| ydk::is_set(remote_imcast_routes.yfilter)
	|| ydk::is_set(remote_ipv4_mac_routes.yfilter)
	|| ydk::is_set(remote_ipv6_mac_routes.yfilter)
	|| ydk::is_set(remote_mac_routes.yfilter)
	|| ydk::is_set(remote_soo_mac_routes.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(startup_cost_in_time.yfilter);
}

std::string Evpn::Standby::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (cost_out.is_set || is_set(cost_out.yfilter)) leaf_name_data.push_back(cost_out.get_name_leafdata());
    if (es_entries.is_set || is_set(es_entries.yfilter)) leaf_name_data.push_back(es_entries.get_name_leafdata());
    if (es_global_mac_routes.is_set || is_set(es_global_mac_routes.yfilter)) leaf_name_data.push_back(es_global_mac_routes.get_name_leafdata());
    if (ev_is.is_set || is_set(ev_is.yfilter)) leaf_name_data.push_back(ev_is.get_name_leafdata());
    if (global_source_mac.is_set || is_set(global_source_mac.yfilter)) leaf_name_data.push_back(global_source_mac.get_name_leafdata());
    if (l2rib_throttle.is_set || is_set(l2rib_throttle.yfilter)) leaf_name_data.push_back(l2rib_throttle.get_name_leafdata());
    if (labels.is_set || is_set(labels.yfilter)) leaf_name_data.push_back(labels.get_name_leafdata());
    if (local_ead_routes.is_set || is_set(local_ead_routes.yfilter)) leaf_name_data.push_back(local_ead_routes.get_name_leafdata());
    if (local_imcast_routes.is_set || is_set(local_imcast_routes.yfilter)) leaf_name_data.push_back(local_imcast_routes.get_name_leafdata());
    if (local_ipv4_mac_routes.is_set || is_set(local_ipv4_mac_routes.yfilter)) leaf_name_data.push_back(local_ipv4_mac_routes.get_name_leafdata());
    if (local_ipv6_mac_routes.is_set || is_set(local_ipv6_mac_routes.yfilter)) leaf_name_data.push_back(local_ipv6_mac_routes.get_name_leafdata());
    if (local_mac_routes.is_set || is_set(local_mac_routes.yfilter)) leaf_name_data.push_back(local_mac_routes.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.yfilter)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (mac_secure_freeze_time.is_set || is_set(mac_secure_freeze_time.yfilter)) leaf_name_data.push_back(mac_secure_freeze_time.get_name_leafdata());
    if (mac_secure_move_count.is_set || is_set(mac_secure_move_count.yfilter)) leaf_name_data.push_back(mac_secure_move_count.get_name_leafdata());
    if (mac_secure_move_interval.is_set || is_set(mac_secure_move_interval.yfilter)) leaf_name_data.push_back(mac_secure_move_interval.get_name_leafdata());
    if (mac_secure_retry_count.is_set || is_set(mac_secure_retry_count.yfilter)) leaf_name_data.push_back(mac_secure_retry_count.get_name_leafdata());
    if (neighbor_entries.is_set || is_set(neighbor_entries.yfilter)) leaf_name_data.push_back(neighbor_entries.get_name_leafdata());
    if (peering_time.is_set || is_set(peering_time.yfilter)) leaf_name_data.push_back(peering_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (remote_ead_routes.is_set || is_set(remote_ead_routes.yfilter)) leaf_name_data.push_back(remote_ead_routes.get_name_leafdata());
    if (remote_imcast_routes.is_set || is_set(remote_imcast_routes.yfilter)) leaf_name_data.push_back(remote_imcast_routes.get_name_leafdata());
    if (remote_ipv4_mac_routes.is_set || is_set(remote_ipv4_mac_routes.yfilter)) leaf_name_data.push_back(remote_ipv4_mac_routes.get_name_leafdata());
    if (remote_ipv6_mac_routes.is_set || is_set(remote_ipv6_mac_routes.yfilter)) leaf_name_data.push_back(remote_ipv6_mac_routes.get_name_leafdata());
    if (remote_mac_routes.is_set || is_set(remote_mac_routes.yfilter)) leaf_name_data.push_back(remote_mac_routes.get_name_leafdata());
    if (remote_soo_mac_routes.is_set || is_set(remote_soo_mac_routes.yfilter)) leaf_name_data.push_back(remote_soo_mac_routes.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (startup_cost_in_time.is_set || is_set(startup_cost_in_time.yfilter)) leaf_name_data.push_back(startup_cost_in_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-out")
    {
        cost_out = value;
        cost_out.value_namespace = name_space;
        cost_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-entries")
    {
        es_entries = value;
        es_entries.value_namespace = name_space;
        es_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-global-mac-routes")
    {
        es_global_mac_routes = value;
        es_global_mac_routes.value_namespace = name_space;
        es_global_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ev-is")
    {
        ev_is = value;
        ev_is.value_namespace = name_space;
        ev_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-source-mac")
    {
        global_source_mac = value;
        global_source_mac.value_namespace = name_space;
        global_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rib-throttle")
    {
        l2rib_throttle = value;
        l2rib_throttle.value_namespace = name_space;
        l2rib_throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labels")
    {
        labels = value;
        labels.value_namespace = name_space;
        labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ead-routes")
    {
        local_ead_routes = value;
        local_ead_routes.value_namespace = name_space;
        local_ead_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-imcast-routes")
    {
        local_imcast_routes = value;
        local_imcast_routes.value_namespace = name_space;
        local_imcast_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ipv4-mac-routes")
    {
        local_ipv4_mac_routes = value;
        local_ipv4_mac_routes.value_namespace = name_space;
        local_ipv4_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ipv6-mac-routes")
    {
        local_ipv6_mac_routes = value;
        local_ipv6_mac_routes.value_namespace = name_space;
        local_ipv6_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mac-routes")
    {
        local_mac_routes = value;
        local_mac_routes.value_namespace = name_space;
        local_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
        logging_df_election_enabled.value_namespace = name_space;
        logging_df_election_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-freeze-time")
    {
        mac_secure_freeze_time = value;
        mac_secure_freeze_time.value_namespace = name_space;
        mac_secure_freeze_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-move-count")
    {
        mac_secure_move_count = value;
        mac_secure_move_count.value_namespace = name_space;
        mac_secure_move_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-move-interval")
    {
        mac_secure_move_interval = value;
        mac_secure_move_interval.value_namespace = name_space;
        mac_secure_move_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-retry-count")
    {
        mac_secure_retry_count = value;
        mac_secure_retry_count.value_namespace = name_space;
        mac_secure_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-entries")
    {
        neighbor_entries = value;
        neighbor_entries.value_namespace = name_space;
        neighbor_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-time")
    {
        peering_time = value;
        peering_time.value_namespace = name_space;
        peering_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ead-routes")
    {
        remote_ead_routes = value;
        remote_ead_routes.value_namespace = name_space;
        remote_ead_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-imcast-routes")
    {
        remote_imcast_routes = value;
        remote_imcast_routes.value_namespace = name_space;
        remote_imcast_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-mac-routes")
    {
        remote_ipv4_mac_routes = value;
        remote_ipv4_mac_routes.value_namespace = name_space;
        remote_ipv4_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv6-mac-routes")
    {
        remote_ipv6_mac_routes = value;
        remote_ipv6_mac_routes.value_namespace = name_space;
        remote_ipv6_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mac-routes")
    {
        remote_mac_routes = value;
        remote_mac_routes.value_namespace = name_space;
        remote_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-soo-mac-routes")
    {
        remote_soo_mac_routes = value;
        remote_soo_mac_routes.value_namespace = name_space;
        remote_soo_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-cost-in-time")
    {
        startup_cost_in_time = value;
        startup_cost_in_time.value_namespace = name_space;
        startup_cost_in_time.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "cost-out")
    {
        cost_out.yfilter = yfilter;
    }
    if(value_path == "es-entries")
    {
        es_entries.yfilter = yfilter;
    }
    if(value_path == "es-global-mac-routes")
    {
        es_global_mac_routes.yfilter = yfilter;
    }
    if(value_path == "ev-is")
    {
        ev_is.yfilter = yfilter;
    }
    if(value_path == "global-source-mac")
    {
        global_source_mac.yfilter = yfilter;
    }
    if(value_path == "l2rib-throttle")
    {
        l2rib_throttle.yfilter = yfilter;
    }
    if(value_path == "labels")
    {
        labels.yfilter = yfilter;
    }
    if(value_path == "local-ead-routes")
    {
        local_ead_routes.yfilter = yfilter;
    }
    if(value_path == "local-imcast-routes")
    {
        local_imcast_routes.yfilter = yfilter;
    }
    if(value_path == "local-ipv4-mac-routes")
    {
        local_ipv4_mac_routes.yfilter = yfilter;
    }
    if(value_path == "local-ipv6-mac-routes")
    {
        local_ipv6_mac_routes.yfilter = yfilter;
    }
    if(value_path == "local-mac-routes")
    {
        local_mac_routes.yfilter = yfilter;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-freeze-time")
    {
        mac_secure_freeze_time.yfilter = yfilter;
    }
    if(value_path == "mac-secure-move-count")
    {
        mac_secure_move_count.yfilter = yfilter;
    }
    if(value_path == "mac-secure-move-interval")
    {
        mac_secure_move_interval.yfilter = yfilter;
    }
    if(value_path == "mac-secure-retry-count")
    {
        mac_secure_retry_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-entries")
    {
        neighbor_entries.yfilter = yfilter;
    }
    if(value_path == "peering-time")
    {
        peering_time.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "remote-ead-routes")
    {
        remote_ead_routes.yfilter = yfilter;
    }
    if(value_path == "remote-imcast-routes")
    {
        remote_imcast_routes.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-mac-routes")
    {
        remote_ipv4_mac_routes.yfilter = yfilter;
    }
    if(value_path == "remote-ipv6-mac-routes")
    {
        remote_ipv6_mac_routes.yfilter = yfilter;
    }
    if(value_path == "remote-mac-routes")
    {
        remote_mac_routes.yfilter = yfilter;
    }
    if(value_path == "remote-soo-mac-routes")
    {
        remote_soo_mac_routes.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "startup-cost-in-time")
    {
        startup_cost_in_time.yfilter = yfilter;
    }
}

bool Evpn::Standby::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "cost-out" || name == "es-entries" || name == "es-global-mac-routes" || name == "ev-is" || name == "global-source-mac" || name == "l2rib-throttle" || name == "labels" || name == "local-ead-routes" || name == "local-imcast-routes" || name == "local-ipv4-mac-routes" || name == "local-ipv6-mac-routes" || name == "local-mac-routes" || name == "logging-df-election-enabled" || name == "mac-secure-freeze-time" || name == "mac-secure-move-count" || name == "mac-secure-move-interval" || name == "mac-secure-retry-count" || name == "neighbor-entries" || name == "peering-time" || name == "recovery-time" || name == "remote-ead-routes" || name == "remote-imcast-routes" || name == "remote-ipv4-mac-routes" || name == "remote-ipv6-mac-routes" || name == "remote-mac-routes" || name == "remote-soo-mac-routes" || name == "router-id" || name == "startup-cost-in-time")
        return true;
    return false;
}


}
}

