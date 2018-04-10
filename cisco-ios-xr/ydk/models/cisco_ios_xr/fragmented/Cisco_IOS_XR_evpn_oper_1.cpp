
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
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
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

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
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
    char count=0;
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
    auto_(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
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
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
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
            auto_ = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
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
    char count=0;
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
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::~Auto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::has_data() const
{
    return router_id.is_set
	|| auto_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
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

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
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
    char count=0;
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
    char count=0;
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
    two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr>())
	,es_import(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "rt-auto"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::~RtAuto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_data() const
{
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
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
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
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
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
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

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::RtAutoStitching()
    :
    rt{YType::enumeration, "rt"}
    	,
    two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr>())
	,es_import(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "rt-auto-stitching"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::~RtAutoStitching()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::has_data() const
{
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
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
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
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
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rt-auto-stitching"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
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

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

Evpn::Standby::EviDetail::EviChildren::EviChildren()
    :
    neighbors(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors>())
	,ethernet_auto_discoveries(std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries>())
	,inclusive_multicasts(std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts>())
	,route_targets(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets>())
	,macs(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs>())
{
    neighbors->parent = this;
    ethernet_auto_discoveries->parent = this;
    inclusive_multicasts->parent = this;
    route_targets->parent = this;
    macs->parent = this;

    yang_name = "evi-children"; yang_parent_name = "evi-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::~EviChildren()
{
}

bool Evpn::Standby::EviDetail::EviChildren::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_data())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data())
	|| (macs !=  nullptr && macs->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_operation())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation())
	|| (macs !=  nullptr && macs->has_operation());
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
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors>();
        }
        return neighbors;
    }

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

    if(child_yang_name == "route-targets")
    {
        if(route_targets == nullptr)
        {
            route_targets = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets>();
        }
        return route_targets;
    }

    if(child_yang_name == "macs")
    {
        if(macs == nullptr)
        {
            macs = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs>();
        }
        return macs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(ethernet_auto_discoveries != nullptr)
    {
        children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
    }

    if(inclusive_multicasts != nullptr)
    {
        children["inclusive-multicasts"] = inclusive_multicasts;
    }

    if(route_targets != nullptr)
    {
        children["route-targets"] = route_targets;
    }

    if(macs != nullptr)
    {
        children["macs"] = macs;
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
    if(name == "neighbors" || name == "ethernet-auto-discoveries" || name == "inclusive-multicasts" || name == "route-targets" || name == "macs")
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
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    neighbor_ip{YType::str, "neighbor-ip"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::~Neighbor()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_data() const
{
    return evi.is_set
	|| neighbor_ip.is_set
	|| evi_xr.is_set
	|| neighbor.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(neighbor_ip.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(neighbor.yfilter);
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
    if (neighbor_ip.is_set || is_set(neighbor_ip.yfilter)) leaf_name_data.push_back(neighbor_ip.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "neighbor-ip")
    {
        neighbor_ip = value;
        neighbor_ip.value_namespace = name_space;
        neighbor_ip.value_namespace_prefix = name_space_prefix;
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
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip")
    {
        neighbor_ip.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi" || name == "neighbor-ip" || name == "evi-xr" || name == "neighbor")
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
    char count=0;
    count = 0;
    for (auto const & c : ethernet_auto_discovery)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    evi{YType::int32, "evi"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_vpnid{YType::uint32, "ethernet-vpnid"},
    type{YType::enumeration, "type"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    local_next_hop{YType::str, "local-next-hop"},
    local_label{YType::uint32, "local-label"},
    is_local_ead{YType::boolean, "is-local-ead"},
    encap{YType::uint8, "encap"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"},
    redundancy_single_flow_active{YType::boolean, "redundancy-single-flow-active"},
    num_paths{YType::uint32, "num-paths"}
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
    return evi.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| ethernet_vpnid.is_set
	|| type.is_set
	|| ethernet_tag_xr.is_set
	|| local_next_hop.is_set
	|| local_label.is_set
	|| is_local_ead.is_set
	|| encap.is_set
	|| redundancy_single_active.is_set
	|| redundancy_single_flow_active.is_set
	|| num_paths.is_set;
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
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(ethernet_vpnid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(local_next_hop.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(is_local_ead.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(redundancy_single_active.yfilter)
	|| ydk::is_set(redundancy_single_flow_active.yfilter)
	|| ydk::is_set(num_paths.yfilter);
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

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_vpnid.is_set || is_set(ethernet_vpnid.yfilter)) leaf_name_data.push_back(ethernet_vpnid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (local_next_hop.is_set || is_set(local_next_hop.yfilter)) leaf_name_data.push_back(local_next_hop.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (is_local_ead.is_set || is_set(is_local_ead.yfilter)) leaf_name_data.push_back(is_local_ead.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.yfilter)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());
    if (redundancy_single_flow_active.is_set || is_set(redundancy_single_flow_active.yfilter)) leaf_name_data.push_back(redundancy_single_flow_active.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.yfilter)) leaf_name_data.push_back(num_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier>();
        c->parent = this;
        ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "path-buffer")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : ethernet_segment_identifier)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ethernet-vpnid")
    {
        ethernet_vpnid = value;
        ethernet_vpnid.value_namespace = name_space;
        ethernet_vpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop = value;
        local_next_hop.value_namespace = name_space;
        local_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead = value;
        is_local_ead.value_namespace = name_space;
        is_local_ead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
        redundancy_single_active.value_namespace = name_space;
        redundancy_single_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active = value;
        redundancy_single_flow_active.value_namespace = name_space;
        redundancy_single_flow_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
        num_paths.value_namespace = name_space;
        num_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
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
    if(value_path == "ethernet-vpnid")
    {
        ethernet_vpnid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active.yfilter = yfilter;
    }
    if(value_path == "num-paths")
    {
        num_paths.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-identifier" || name == "path-buffer" || name == "evi" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-tag" || name == "ethernet-vpnid" || name == "type" || name == "ethernet-tag-xr" || name == "local-next-hop" || name == "local-label" || name == "is-local-ead" || name == "encap" || name == "redundancy-single-active" || name == "redundancy-single-flow-active" || name == "num-paths")
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : inclusive_multicast)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    evi{YType::int32, "evi"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    originating_ip{YType::str, "originating-ip"},
    evi_xr{YType::uint32, "evi-xr"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    originating_ip_xr{YType::str, "originating-ip-xr"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    is_local_entry{YType::boolean, "is-local-entry"},
    is_proxy_entry{YType::boolean, "is-proxy-entry"},
    encap_type{YType::uint8, "encap-type"}
{

    yang_name = "inclusive-multicast"; yang_parent_name = "inclusive-multicasts"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::~InclusiveMulticast()
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_data() const
{
    return evi.is_set
	|| ethernet_tag.is_set
	|| originating_ip.is_set
	|| evi_xr.is_set
	|| ethernet_tag_xr.is_set
	|| originating_ip_xr.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| is_local_entry.is_set
	|| is_proxy_entry.is_set
	|| encap_type.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(originating_ip.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(originating_ip_xr.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(is_local_entry.yfilter)
	|| ydk::is_set(is_proxy_entry.yfilter)
	|| ydk::is_set(encap_type.yfilter);
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

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (originating_ip.is_set || is_set(originating_ip.yfilter)) leaf_name_data.push_back(originating_ip.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (originating_ip_xr.is_set || is_set(originating_ip_xr.yfilter)) leaf_name_data.push_back(originating_ip_xr.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (is_local_entry.is_set || is_set(is_local_entry.yfilter)) leaf_name_data.push_back(is_local_entry.get_name_leafdata());
    if (is_proxy_entry.is_set || is_set(is_proxy_entry.yfilter)) leaf_name_data.push_back(is_proxy_entry.get_name_leafdata());
    if (encap_type.is_set || is_set(encap_type.yfilter)) leaf_name_data.push_back(encap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originating-ip")
    {
        originating_ip = value;
        originating_ip.value_namespace = name_space;
        originating_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
        evi_xr.value_namespace = name_space;
        evi_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr = value;
        originating_ip_xr.value_namespace = name_space;
        originating_ip_xr.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "encap-type")
    {
        encap_type = value;
        encap_type.value_namespace = name_space;
        encap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "originating-ip")
    {
        originating_ip.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "is-local-entry")
    {
        is_local_entry.yfilter = yfilter;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry.yfilter = yfilter;
    }
    if(value_path == "encap-type")
    {
        encap_type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi" || name == "ethernet-tag" || name == "originating-ip" || name == "evi-xr" || name == "ethernet-tag-xr" || name == "originating-ip-xr" || name == "next-hop" || name == "output-label" || name == "is-local-entry" || name == "is-proxy-entry" || name == "encap-type")
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
    char count=0;
    count = 0;
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    evi{YType::int32, "evi"},
    role{YType::enumeration, "role"},
    type{YType::enumeration, "type"},
    format{YType::enumeration, "format"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    bd_name{YType::str, "bd-name"},
    evi_xr{YType::uint32, "evi-xr"},
    route_target_role{YType::enumeration, "route-target-role"},
    route_target_stitching{YType::boolean, "route-target-stitching"}
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
    return evi.is_set
	|| role.is_set
	|| type.is_set
	|| format.is_set
	|| as.is_set
	|| as_index.is_set
	|| addr_index.is_set
	|| address.is_set
	|| bd_name.is_set
	|| evi_xr.is_set
	|| route_target_role.is_set
	|| route_target_stitching.is_set
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(route_target_role.yfilter)
	|| ydk::is_set(route_target_stitching.yfilter)
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

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (route_target_role.is_set || is_set(route_target_role.yfilter)) leaf_name_data.push_back(route_target_role.get_name_leafdata());
    if (route_target_stitching.is_set || is_set(route_target_stitching.yfilter)) leaf_name_data.push_back(route_target_stitching.get_name_leafdata());

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
    char count=0;
    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
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
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "route-target-role")
    {
        route_target_role.yfilter = yfilter;
    }
    if(value_path == "route-target-stitching")
    {
        route_target_stitching.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target" || name == "evi" || name == "role" || name == "type" || name == "format" || name == "as" || name == "as-index" || name == "addr-index" || name == "address" || name == "bd-name" || name == "evi-xr" || name == "route-target-role" || name == "route-target-stitching")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::RouteTarget_()
    :
    rt{YType::enumeration, "rt"}
    	,
    two_byte_as(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>())
	,es_import(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "route-target"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::~RouteTarget_()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_data() const
{
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
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
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
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
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
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

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : mac)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    evi{YType::int32, "evi"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    mac_address{YType::str, "mac-address"},
    ip_address{YType::str, "ip-address"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    mac_address_xr{YType::str, "mac-address-xr"},
    ip_address_xr{YType::str, "ip-address-xr"},
    local_label{YType::uint32, "local-label"},
    num_paths{YType::uint32, "num-paths"},
    is_local_mac{YType::boolean, "is-local-mac"},
    is_proxy_entry{YType::boolean, "is-proxy-entry"},
    is_remote_mac{YType::boolean, "is-remote-mac"},
    soo_nexthop{YType::str, "soo-nexthop"},
    ipnh_address{YType::str, "ipnh-address"},
    esi_port_key{YType::uint16, "esi-port-key"},
    local_encap_type{YType::uint8, "local-encap-type"},
    remote_encap_type{YType::uint8, "remote-encap-type"},
    learned_bridge_port_name{YType::str, "learned-bridge-port-name"},
    local_seq_id{YType::uint32, "local-seq-id"},
    remote_seq_id{YType::uint32, "remote-seq-id"},
    local_l3_label{YType::uint32, "local-l3-label"},
    router_mac_address{YType::str, "router-mac-address"},
    mac_flush_requested{YType::uint16, "mac-flush-requested"},
    mac_flush_received{YType::uint16, "mac-flush-received"},
    internal_label{YType::uint32, "internal-label"},
    resolved{YType::boolean, "resolved"},
    local_is_static{YType::boolean, "local-is-static"},
    remote_is_static{YType::boolean, "remote-is-static"}
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
    for (std::size_t index=0; index<remote_ethernet_segment_identifier.size(); index++)
    {
        if(remote_ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    return evi.is_set
	|| ethernet_tag.is_set
	|| mac_address.is_set
	|| ip_address.is_set
	|| ethernet_tag_xr.is_set
	|| mac_address_xr.is_set
	|| ip_address_xr.is_set
	|| local_label.is_set
	|| num_paths.is_set
	|| is_local_mac.is_set
	|| is_proxy_entry.is_set
	|| is_remote_mac.is_set
	|| soo_nexthop.is_set
	|| ipnh_address.is_set
	|| esi_port_key.is_set
	|| local_encap_type.is_set
	|| remote_encap_type.is_set
	|| learned_bridge_port_name.is_set
	|| local_seq_id.is_set
	|| remote_seq_id.is_set
	|| local_l3_label.is_set
	|| router_mac_address.is_set
	|| mac_flush_requested.is_set
	|| mac_flush_received.is_set
	|| internal_label.is_set
	|| resolved.is_set
	|| local_is_static.is_set
	|| remote_is_static.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_operation() const
{
    for (std::size_t index=0; index<local_ethernet_segment_identifier.size(); index++)
    {
        if(local_ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_ethernet_segment_identifier.size(); index++)
    {
        if(remote_ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(ip_address_xr.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(num_paths.yfilter)
	|| ydk::is_set(is_local_mac.yfilter)
	|| ydk::is_set(is_proxy_entry.yfilter)
	|| ydk::is_set(is_remote_mac.yfilter)
	|| ydk::is_set(soo_nexthop.yfilter)
	|| ydk::is_set(ipnh_address.yfilter)
	|| ydk::is_set(esi_port_key.yfilter)
	|| ydk::is_set(local_encap_type.yfilter)
	|| ydk::is_set(remote_encap_type.yfilter)
	|| ydk::is_set(learned_bridge_port_name.yfilter)
	|| ydk::is_set(local_seq_id.yfilter)
	|| ydk::is_set(remote_seq_id.yfilter)
	|| ydk::is_set(local_l3_label.yfilter)
	|| ydk::is_set(router_mac_address.yfilter)
	|| ydk::is_set(mac_flush_requested.yfilter)
	|| ydk::is_set(mac_flush_received.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(local_is_static.yfilter)
	|| ydk::is_set(remote_is_static.yfilter);
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

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.yfilter)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.yfilter)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (is_local_mac.is_set || is_set(is_local_mac.yfilter)) leaf_name_data.push_back(is_local_mac.get_name_leafdata());
    if (is_proxy_entry.is_set || is_set(is_proxy_entry.yfilter)) leaf_name_data.push_back(is_proxy_entry.get_name_leafdata());
    if (is_remote_mac.is_set || is_set(is_remote_mac.yfilter)) leaf_name_data.push_back(is_remote_mac.get_name_leafdata());
    if (soo_nexthop.is_set || is_set(soo_nexthop.yfilter)) leaf_name_data.push_back(soo_nexthop.get_name_leafdata());
    if (ipnh_address.is_set || is_set(ipnh_address.yfilter)) leaf_name_data.push_back(ipnh_address.get_name_leafdata());
    if (esi_port_key.is_set || is_set(esi_port_key.yfilter)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (local_encap_type.is_set || is_set(local_encap_type.yfilter)) leaf_name_data.push_back(local_encap_type.get_name_leafdata());
    if (remote_encap_type.is_set || is_set(remote_encap_type.yfilter)) leaf_name_data.push_back(remote_encap_type.get_name_leafdata());
    if (learned_bridge_port_name.is_set || is_set(learned_bridge_port_name.yfilter)) leaf_name_data.push_back(learned_bridge_port_name.get_name_leafdata());
    if (local_seq_id.is_set || is_set(local_seq_id.yfilter)) leaf_name_data.push_back(local_seq_id.get_name_leafdata());
    if (remote_seq_id.is_set || is_set(remote_seq_id.yfilter)) leaf_name_data.push_back(remote_seq_id.get_name_leafdata());
    if (local_l3_label.is_set || is_set(local_l3_label.yfilter)) leaf_name_data.push_back(local_l3_label.get_name_leafdata());
    if (router_mac_address.is_set || is_set(router_mac_address.yfilter)) leaf_name_data.push_back(router_mac_address.get_name_leafdata());
    if (mac_flush_requested.is_set || is_set(mac_flush_requested.yfilter)) leaf_name_data.push_back(mac_flush_requested.get_name_leafdata());
    if (mac_flush_received.is_set || is_set(mac_flush_received.yfilter)) leaf_name_data.push_back(mac_flush_received.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (local_is_static.is_set || is_set(local_is_static.yfilter)) leaf_name_data.push_back(local_is_static.get_name_leafdata());
    if (remote_is_static.is_set || is_set(remote_is_static.yfilter)) leaf_name_data.push_back(remote_is_static.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-ethernet-segment-identifier")
    {
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier>();
        c->parent = this;
        local_ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-ethernet-segment-identifier")
    {
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier>();
        c->parent = this;
        remote_ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "path-buffer")
    {
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : local_ethernet_segment_identifier)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : remote_ethernet_segment_identifier)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
        ip_address_xr.value_namespace = name_space;
        ip_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
        num_paths.value_namespace = name_space;
        num_paths.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "soo-nexthop")
    {
        soo_nexthop = value;
        soo_nexthop.value_namespace = name_space;
        soo_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipnh-address")
    {
        ipnh_address = value;
        ipnh_address.value_namespace = name_space;
        ipnh_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
        esi_port_key.value_namespace = name_space;
        esi_port_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type = value;
        local_encap_type.value_namespace = name_space;
        local_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type = value;
        remote_encap_type.value_namespace = name_space;
        remote_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name = value;
        learned_bridge_port_name.value_namespace = name_space;
        learned_bridge_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id = value;
        local_seq_id.value_namespace = name_space;
        local_seq_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id = value;
        remote_seq_id.value_namespace = name_space;
        remote_seq_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-l3-label")
    {
        local_l3_label = value;
        local_l3_label.value_namespace = name_space;
        local_l3_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-mac-address")
    {
        router_mac_address = value;
        router_mac_address.value_namespace = name_space;
        router_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested = value;
        mac_flush_requested.value_namespace = name_space;
        mac_flush_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received = value;
        mac_flush_received.value_namespace = name_space;
        mac_flush_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-is-static")
    {
        local_is_static = value;
        local_is_static.value_namespace = name_space;
        local_is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-is-static")
    {
        remote_is_static = value;
        remote_is_static.value_namespace = name_space;
        remote_is_static.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "num-paths")
    {
        num_paths.yfilter = yfilter;
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
    if(value_path == "soo-nexthop")
    {
        soo_nexthop.yfilter = yfilter;
    }
    if(value_path == "ipnh-address")
    {
        ipnh_address.yfilter = yfilter;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key.yfilter = yfilter;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type.yfilter = yfilter;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type.yfilter = yfilter;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name.yfilter = yfilter;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id.yfilter = yfilter;
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id.yfilter = yfilter;
    }
    if(value_path == "local-l3-label")
    {
        local_l3_label.yfilter = yfilter;
    }
    if(value_path == "router-mac-address")
    {
        router_mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested.yfilter = yfilter;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "local-is-static")
    {
        local_is_static.yfilter = yfilter;
    }
    if(value_path == "remote-is-static")
    {
        remote_is_static.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ethernet-segment-identifier" || name == "remote-ethernet-segment-identifier" || name == "path-buffer" || name == "evi" || name == "ethernet-tag" || name == "mac-address" || name == "ip-address" || name == "ethernet-tag-xr" || name == "mac-address-xr" || name == "ip-address-xr" || name == "local-label" || name == "num-paths" || name == "is-local-mac" || name == "is-proxy-entry" || name == "is-remote-mac" || name == "soo-nexthop" || name == "ipnh-address" || name == "esi-port-key" || name == "local-encap-type" || name == "remote-encap-type" || name == "learned-bridge-port-name" || name == "local-seq-id" || name == "remote-seq-id" || name == "local-l3-label" || name == "router-mac-address" || name == "mac-flush-requested" || name == "mac-flush-received" || name == "internal-label" || name == "resolved" || name == "local-is-static" || name == "remote-is-static")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

Evpn::Standby::InternalLabels::InternalLabels()
{

    yang_name = "internal-labels"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::InternalLabels::~InternalLabels()
{
}

bool Evpn::Standby::InternalLabels::has_data() const
{
    for (std::size_t index=0; index<internal_label.size(); index++)
    {
        if(internal_label[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::InternalLabels::has_operation() const
{
    for (std::size_t index=0; index<internal_label.size(); index++)
    {
        if(internal_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::InternalLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::InternalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-label")
    {
        auto c = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel>();
        c->parent = this;
        internal_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::InternalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : internal_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::Standby::InternalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::InternalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::InternalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-label")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::InternalLabel()
    :
    evi{YType::int32, "evi"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    evi_xr{YType::uint32, "evi-xr"},
    esi{YType::str, "esi"},
    tag{YType::uint32, "tag"},
    internal_label{YType::uint32, "internal-label"},
    encap{YType::uint8, "encap"},
    mac_num_paths{YType::uint32, "mac-num-paths"},
    ead_num_paths{YType::uint32, "ead-num-paths"},
    evi_num_paths{YType::uint32, "evi-num-paths"},
    sum_num_paths{YType::uint32, "sum-num-paths"},
    sum_num_active_paths{YType::uint32, "sum-num-active-paths"},
    resolved{YType::boolean, "resolved"},
    ecmp_disable{YType::boolean, "ecmp-disable"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"},
    redundancy_single_flow_active{YType::boolean, "redundancy-single-flow-active"}
{

    yang_name = "internal-label"; yang_parent_name = "internal-labels"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::InternalLabels::InternalLabel::~InternalLabel()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_data() const
{
    for (std::size_t index=0; index<mac_path_buffer.size(); index++)
    {
        if(mac_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ead_path_buffer.size(); index++)
    {
        if(ead_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evi_path_buffer.size(); index++)
    {
        if(evi_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_path_buffer.size(); index++)
    {
        if(summary_path_buffer[index]->has_data())
            return true;
    }
    return evi.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| evi_xr.is_set
	|| esi.is_set
	|| tag.is_set
	|| internal_label.is_set
	|| encap.is_set
	|| mac_num_paths.is_set
	|| ead_num_paths.is_set
	|| evi_num_paths.is_set
	|| sum_num_paths.is_set
	|| sum_num_active_paths.is_set
	|| resolved.is_set
	|| ecmp_disable.is_set
	|| redundancy_single_active.is_set
	|| redundancy_single_flow_active.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_operation() const
{
    for (std::size_t index=0; index<mac_path_buffer.size(); index++)
    {
        if(mac_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ead_path_buffer.size(); index++)
    {
        if(ead_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evi_path_buffer.size(); index++)
    {
        if(evi_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_path_buffer.size(); index++)
    {
        if(summary_path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(esi.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mac_num_paths.yfilter)
	|| ydk::is_set(ead_num_paths.yfilter)
	|| ydk::is_set(evi_num_paths.yfilter)
	|| ydk::is_set(sum_num_paths.yfilter)
	|| ydk::is_set(sum_num_active_paths.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(ecmp_disable.yfilter)
	|| ydk::is_set(redundancy_single_active.yfilter)
	|| ydk::is_set(redundancy_single_flow_active.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (esi.is_set || is_set(esi.yfilter)) leaf_name_data.push_back(esi.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mac_num_paths.is_set || is_set(mac_num_paths.yfilter)) leaf_name_data.push_back(mac_num_paths.get_name_leafdata());
    if (ead_num_paths.is_set || is_set(ead_num_paths.yfilter)) leaf_name_data.push_back(ead_num_paths.get_name_leafdata());
    if (evi_num_paths.is_set || is_set(evi_num_paths.yfilter)) leaf_name_data.push_back(evi_num_paths.get_name_leafdata());
    if (sum_num_paths.is_set || is_set(sum_num_paths.yfilter)) leaf_name_data.push_back(sum_num_paths.get_name_leafdata());
    if (sum_num_active_paths.is_set || is_set(sum_num_active_paths.yfilter)) leaf_name_data.push_back(sum_num_active_paths.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (ecmp_disable.is_set || is_set(ecmp_disable.yfilter)) leaf_name_data.push_back(ecmp_disable.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.yfilter)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());
    if (redundancy_single_flow_active.is_set || is_set(redundancy_single_flow_active.yfilter)) leaf_name_data.push_back(redundancy_single_flow_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::InternalLabels::InternalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-path-buffer")
    {
        auto c = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer>();
        c->parent = this;
        mac_path_buffer.push_back(c);
        return c;
    }

    if(child_yang_name == "ead-path-buffer")
    {
        auto c = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer>();
        c->parent = this;
        ead_path_buffer.push_back(c);
        return c;
    }

    if(child_yang_name == "evi-path-buffer")
    {
        auto c = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer>();
        c->parent = this;
        evi_path_buffer.push_back(c);
        return c;
    }

    if(child_yang_name == "summary-path-buffer")
    {
        auto c = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer>();
        c->parent = this;
        summary_path_buffer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::InternalLabels::InternalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mac_path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ead_path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : evi_path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : summary_path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::Standby::InternalLabels::InternalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "evi-xr")
    {
        evi_xr = value;
        evi_xr.value_namespace = name_space;
        evi_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi")
    {
        esi = value;
        esi.value_namespace = name_space;
        esi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-num-paths")
    {
        mac_num_paths = value;
        mac_num_paths.value_namespace = name_space;
        mac_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ead-num-paths")
    {
        ead_num_paths = value;
        ead_num_paths.value_namespace = name_space;
        ead_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-num-paths")
    {
        evi_num_paths = value;
        evi_num_paths.value_namespace = name_space;
        evi_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-num-paths")
    {
        sum_num_paths = value;
        sum_num_paths.value_namespace = name_space;
        sum_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-num-active-paths")
    {
        sum_num_active_paths = value;
        sum_num_active_paths.value_namespace = name_space;
        sum_num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmp-disable")
    {
        ecmp_disable = value;
        ecmp_disable.value_namespace = name_space;
        ecmp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
        redundancy_single_active.value_namespace = name_space;
        redundancy_single_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active = value;
        redundancy_single_flow_active.value_namespace = name_space;
        redundancy_single_flow_active.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
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
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "esi")
    {
        esi.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "mac-num-paths")
    {
        mac_num_paths.yfilter = yfilter;
    }
    if(value_path == "ead-num-paths")
    {
        ead_num_paths.yfilter = yfilter;
    }
    if(value_path == "evi-num-paths")
    {
        evi_num_paths.yfilter = yfilter;
    }
    if(value_path == "sum-num-paths")
    {
        sum_num_paths.yfilter = yfilter;
    }
    if(value_path == "sum-num-active-paths")
    {
        sum_num_active_paths.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "ecmp-disable")
    {
        ecmp_disable.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-path-buffer" || name == "ead-path-buffer" || name == "evi-path-buffer" || name == "summary-path-buffer" || name == "evi" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-tag" || name == "evi-xr" || name == "esi" || name == "tag" || name == "internal-label" || name == "encap" || name == "mac-num-paths" || name == "ead-num-paths" || name == "evi-num-paths" || name == "sum-num-paths" || name == "sum-num-active-paths" || name == "resolved" || name == "ecmp-disable" || name == "redundancy-single-active" || name == "redundancy-single-flow-active")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::MacPathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "mac-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::~MacPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::EadPathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "ead-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::~EadPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ead-path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::EviPathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "evi-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::~EviPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::SummaryPathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "summary-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::~SummaryPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegments()
{

    yang_name = "ethernet-segments"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::~EthernetSegments()
{
}

bool Evpn::Standby::EthernetSegments::has_data() const
{
    for (std::size_t index=0; index<ethernet_segment.size(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EthernetSegments::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.size(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EthernetSegments::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment>();
        c->parent = this;
        ethernet_segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ethernet_segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::Standby::EthernetSegments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EthernetSegments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EthernetSegments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegment()
    :
    interface_name{YType::str, "interface-name"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    esi_type{YType::enumeration, "esi-type"},
    esi_system_identifier{YType::str, "esi-system-identifier"},
    esi_port_key{YType::uint32, "esi-port-key"},
    esi_system_priority{YType::uint32, "esi-system-priority"},
    ethernet_segment_name{YType::str, "ethernet-segment-name"},
    ethernet_segment_state{YType::uint32, "ethernet-segment-state"},
    if_handle{YType::str, "if-handle"},
    main_port_role{YType::enumeration, "main-port-role"},
    main_port_mac{YType::str, "main-port-mac"},
    num_up_p_ws{YType::uint32, "num-up-p-ws"},
    route_target{YType::str, "route-target"},
    rt_origin{YType::enumeration, "rt-origin"},
    es_bgp_gates{YType::str, "es-bgp-gates"},
    es_l2fib_gates{YType::str, "es-l2fib-gates"},
    mac_flushing_mode_config{YType::enumeration, "mac-flushing-mode-config"},
    load_balance_mode_config{YType::enumeration, "load-balance-mode-config"},
    load_balance_mode_is_default{YType::boolean, "load-balance-mode-is-default"},
    load_balance_mode_oper{YType::enumeration, "load-balance-mode-oper"},
    force_single_home{YType::boolean, "force-single-home"},
    source_mac_oper{YType::str, "source-mac-oper"},
    source_mac_origin{YType::enumeration, "source-mac-origin"},
    peering_timer{YType::uint32, "peering-timer"},
    peering_timer_left{YType::uint32, "peering-timer-left"},
    recovery_timer{YType::uint32, "recovery-timer"},
    recovery_timer_left{YType::uint32, "recovery-timer-left"},
    carving_timer{YType::uint32, "carving-timer"},
    carving_timer_left{YType::uint32, "carving-timer-left"},
    service_carving_mode{YType::enumeration, "service-carving-mode"},
    primary_services_input{YType::str, "primary-services-input"},
    secondary_services_input{YType::str, "secondary-services-input"},
    forwarder_ports{YType::uint32, "forwarder-ports"},
    permanent_forwarder_ports{YType::uint32, "permanent-forwarder-ports"},
    elected_forwarder_ports{YType::uint32, "elected-forwarder-ports"},
    not_elected_forwarder_ports{YType::uint32, "not-elected-forwarder-ports"},
    not_config_forwarder_ports{YType::uint32, "not-config-forwarder-ports"},
    mp_protected{YType::boolean, "mp-protected"},
    nve_anycast_vtep{YType::boolean, "nve-anycast-vtep"},
    nve_ingress_replication{YType::boolean, "nve-ingress-replication"},
    local_split_horizon_group_label_valid{YType::boolean, "local-split-horizon-group-label-valid"},
    local_split_horizon_group_label{YType::uint32, "local-split-horizon-group-label"}
{

    yang_name = "ethernet-segment"; yang_parent_name = "ethernet-segments"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_data() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<primary_service.size(); index++)
    {
        if(primary_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_service.size(); index++)
    {
        if(secondary_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_i_sidelected_result.size(); index++)
    {
        if(service_carving_i_sidelected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_isid_not_elected_result.size(); index++)
    {
        if(service_carving_isid_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_elected_result.size(); index++)
    {
        if(service_carving_evi_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_not_elected_result.size(); index++)
    {
        if(service_carving_evi_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vpws_permanent_result.size(); index++)
    {
        if(service_carving_vpws_permanent_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.size(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| esi_type.is_set
	|| esi_system_identifier.is_set
	|| esi_port_key.is_set
	|| esi_system_priority.is_set
	|| ethernet_segment_name.is_set
	|| ethernet_segment_state.is_set
	|| if_handle.is_set
	|| main_port_role.is_set
	|| main_port_mac.is_set
	|| num_up_p_ws.is_set
	|| route_target.is_set
	|| rt_origin.is_set
	|| es_bgp_gates.is_set
	|| es_l2fib_gates.is_set
	|| mac_flushing_mode_config.is_set
	|| load_balance_mode_config.is_set
	|| load_balance_mode_is_default.is_set
	|| load_balance_mode_oper.is_set
	|| force_single_home.is_set
	|| source_mac_oper.is_set
	|| source_mac_origin.is_set
	|| peering_timer.is_set
	|| peering_timer_left.is_set
	|| recovery_timer.is_set
	|| recovery_timer_left.is_set
	|| carving_timer.is_set
	|| carving_timer_left.is_set
	|| service_carving_mode.is_set
	|| primary_services_input.is_set
	|| secondary_services_input.is_set
	|| forwarder_ports.is_set
	|| permanent_forwarder_ports.is_set
	|| elected_forwarder_ports.is_set
	|| not_elected_forwarder_ports.is_set
	|| not_config_forwarder_ports.is_set
	|| mp_protected.is_set
	|| nve_anycast_vtep.is_set
	|| nve_ingress_replication.is_set
	|| local_split_horizon_group_label_valid.is_set
	|| local_split_horizon_group_label.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<primary_service.size(); index++)
    {
        if(primary_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_service.size(); index++)
    {
        if(secondary_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_i_sidelected_result.size(); index++)
    {
        if(service_carving_i_sidelected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_isid_not_elected_result.size(); index++)
    {
        if(service_carving_isid_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_elected_result.size(); index++)
    {
        if(service_carving_evi_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_not_elected_result.size(); index++)
    {
        if(service_carving_evi_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vpws_permanent_result.size(); index++)
    {
        if(service_carving_vpws_permanent_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.size(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(esi_type.yfilter)
	|| ydk::is_set(esi_system_identifier.yfilter)
	|| ydk::is_set(esi_port_key.yfilter)
	|| ydk::is_set(esi_system_priority.yfilter)
	|| ydk::is_set(ethernet_segment_name.yfilter)
	|| ydk::is_set(ethernet_segment_state.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(main_port_role.yfilter)
	|| ydk::is_set(main_port_mac.yfilter)
	|| ydk::is_set(num_up_p_ws.yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(rt_origin.yfilter)
	|| ydk::is_set(es_bgp_gates.yfilter)
	|| ydk::is_set(es_l2fib_gates.yfilter)
	|| ydk::is_set(mac_flushing_mode_config.yfilter)
	|| ydk::is_set(load_balance_mode_config.yfilter)
	|| ydk::is_set(load_balance_mode_is_default.yfilter)
	|| ydk::is_set(load_balance_mode_oper.yfilter)
	|| ydk::is_set(force_single_home.yfilter)
	|| ydk::is_set(source_mac_oper.yfilter)
	|| ydk::is_set(source_mac_origin.yfilter)
	|| ydk::is_set(peering_timer.yfilter)
	|| ydk::is_set(peering_timer_left.yfilter)
	|| ydk::is_set(recovery_timer.yfilter)
	|| ydk::is_set(recovery_timer_left.yfilter)
	|| ydk::is_set(carving_timer.yfilter)
	|| ydk::is_set(carving_timer_left.yfilter)
	|| ydk::is_set(service_carving_mode.yfilter)
	|| ydk::is_set(primary_services_input.yfilter)
	|| ydk::is_set(secondary_services_input.yfilter)
	|| ydk::is_set(forwarder_ports.yfilter)
	|| ydk::is_set(permanent_forwarder_ports.yfilter)
	|| ydk::is_set(elected_forwarder_ports.yfilter)
	|| ydk::is_set(not_elected_forwarder_ports.yfilter)
	|| ydk::is_set(not_config_forwarder_ports.yfilter)
	|| ydk::is_set(mp_protected.yfilter)
	|| ydk::is_set(nve_anycast_vtep.yfilter)
	|| ydk::is_set(nve_ingress_replication.yfilter)
	|| ydk::is_set(local_split_horizon_group_label_valid.yfilter)
	|| ydk::is_set(local_split_horizon_group_label.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (esi_type.is_set || is_set(esi_type.yfilter)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (esi_system_identifier.is_set || is_set(esi_system_identifier.yfilter)) leaf_name_data.push_back(esi_system_identifier.get_name_leafdata());
    if (esi_port_key.is_set || is_set(esi_port_key.yfilter)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (esi_system_priority.is_set || is_set(esi_system_priority.yfilter)) leaf_name_data.push_back(esi_system_priority.get_name_leafdata());
    if (ethernet_segment_name.is_set || is_set(ethernet_segment_name.yfilter)) leaf_name_data.push_back(ethernet_segment_name.get_name_leafdata());
    if (ethernet_segment_state.is_set || is_set(ethernet_segment_state.yfilter)) leaf_name_data.push_back(ethernet_segment_state.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (main_port_role.is_set || is_set(main_port_role.yfilter)) leaf_name_data.push_back(main_port_role.get_name_leafdata());
    if (main_port_mac.is_set || is_set(main_port_mac.yfilter)) leaf_name_data.push_back(main_port_mac.get_name_leafdata());
    if (num_up_p_ws.is_set || is_set(num_up_p_ws.yfilter)) leaf_name_data.push_back(num_up_p_ws.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (rt_origin.is_set || is_set(rt_origin.yfilter)) leaf_name_data.push_back(rt_origin.get_name_leafdata());
    if (es_bgp_gates.is_set || is_set(es_bgp_gates.yfilter)) leaf_name_data.push_back(es_bgp_gates.get_name_leafdata());
    if (es_l2fib_gates.is_set || is_set(es_l2fib_gates.yfilter)) leaf_name_data.push_back(es_l2fib_gates.get_name_leafdata());
    if (mac_flushing_mode_config.is_set || is_set(mac_flushing_mode_config.yfilter)) leaf_name_data.push_back(mac_flushing_mode_config.get_name_leafdata());
    if (load_balance_mode_config.is_set || is_set(load_balance_mode_config.yfilter)) leaf_name_data.push_back(load_balance_mode_config.get_name_leafdata());
    if (load_balance_mode_is_default.is_set || is_set(load_balance_mode_is_default.yfilter)) leaf_name_data.push_back(load_balance_mode_is_default.get_name_leafdata());
    if (load_balance_mode_oper.is_set || is_set(load_balance_mode_oper.yfilter)) leaf_name_data.push_back(load_balance_mode_oper.get_name_leafdata());
    if (force_single_home.is_set || is_set(force_single_home.yfilter)) leaf_name_data.push_back(force_single_home.get_name_leafdata());
    if (source_mac_oper.is_set || is_set(source_mac_oper.yfilter)) leaf_name_data.push_back(source_mac_oper.get_name_leafdata());
    if (source_mac_origin.is_set || is_set(source_mac_origin.yfilter)) leaf_name_data.push_back(source_mac_origin.get_name_leafdata());
    if (peering_timer.is_set || is_set(peering_timer.yfilter)) leaf_name_data.push_back(peering_timer.get_name_leafdata());
    if (peering_timer_left.is_set || is_set(peering_timer_left.yfilter)) leaf_name_data.push_back(peering_timer_left.get_name_leafdata());
    if (recovery_timer.is_set || is_set(recovery_timer.yfilter)) leaf_name_data.push_back(recovery_timer.get_name_leafdata());
    if (recovery_timer_left.is_set || is_set(recovery_timer_left.yfilter)) leaf_name_data.push_back(recovery_timer_left.get_name_leafdata());
    if (carving_timer.is_set || is_set(carving_timer.yfilter)) leaf_name_data.push_back(carving_timer.get_name_leafdata());
    if (carving_timer_left.is_set || is_set(carving_timer_left.yfilter)) leaf_name_data.push_back(carving_timer_left.get_name_leafdata());
    if (service_carving_mode.is_set || is_set(service_carving_mode.yfilter)) leaf_name_data.push_back(service_carving_mode.get_name_leafdata());
    if (primary_services_input.is_set || is_set(primary_services_input.yfilter)) leaf_name_data.push_back(primary_services_input.get_name_leafdata());
    if (secondary_services_input.is_set || is_set(secondary_services_input.yfilter)) leaf_name_data.push_back(secondary_services_input.get_name_leafdata());
    if (forwarder_ports.is_set || is_set(forwarder_ports.yfilter)) leaf_name_data.push_back(forwarder_ports.get_name_leafdata());
    if (permanent_forwarder_ports.is_set || is_set(permanent_forwarder_ports.yfilter)) leaf_name_data.push_back(permanent_forwarder_ports.get_name_leafdata());
    if (elected_forwarder_ports.is_set || is_set(elected_forwarder_ports.yfilter)) leaf_name_data.push_back(elected_forwarder_ports.get_name_leafdata());
    if (not_elected_forwarder_ports.is_set || is_set(not_elected_forwarder_ports.yfilter)) leaf_name_data.push_back(not_elected_forwarder_ports.get_name_leafdata());
    if (not_config_forwarder_ports.is_set || is_set(not_config_forwarder_ports.yfilter)) leaf_name_data.push_back(not_config_forwarder_ports.get_name_leafdata());
    if (mp_protected.is_set || is_set(mp_protected.yfilter)) leaf_name_data.push_back(mp_protected.get_name_leafdata());
    if (nve_anycast_vtep.is_set || is_set(nve_anycast_vtep.yfilter)) leaf_name_data.push_back(nve_anycast_vtep.get_name_leafdata());
    if (nve_ingress_replication.is_set || is_set(nve_ingress_replication.yfilter)) leaf_name_data.push_back(nve_ingress_replication.get_name_leafdata());
    if (local_split_horizon_group_label_valid.is_set || is_set(local_split_horizon_group_label_valid.yfilter)) leaf_name_data.push_back(local_split_horizon_group_label_valid.get_name_leafdata());
    if (local_split_horizon_group_label.is_set || is_set(local_split_horizon_group_label.yfilter)) leaf_name_data.push_back(local_split_horizon_group_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier>();
        c->parent = this;
        ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "primary-service")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService>();
        c->parent = this;
        primary_service.push_back(c);
        return c;
    }

    if(child_yang_name == "secondary-service")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService>();
        c->parent = this;
        secondary_service.push_back(c);
        return c;
    }

    if(child_yang_name == "service-carving-i-sidelected-result")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult>();
        c->parent = this;
        service_carving_i_sidelected_result.push_back(c);
        return c;
    }

    if(child_yang_name == "service-carving-isid-not-elected-result")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult>();
        c->parent = this;
        service_carving_isid_not_elected_result.push_back(c);
        return c;
    }

    if(child_yang_name == "service-carving-evi-elected-result")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult>();
        c->parent = this;
        service_carving_evi_elected_result.push_back(c);
        return c;
    }

    if(child_yang_name == "service-carving-evi-not-elected-result")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult>();
        c->parent = this;
        service_carving_evi_not_elected_result.push_back(c);
        return c;
    }

    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    if(child_yang_name == "service-carving-vpws-permanent-result")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult>();
        c->parent = this;
        service_carving_vpws_permanent_result.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel>();
        c->parent = this;
        remote_split_horizon_group_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ethernet_segment_identifier)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : primary_service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : secondary_service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : service_carving_i_sidelected_result)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : service_carving_isid_not_elected_result)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : service_carving_evi_elected_result)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : service_carving_evi_not_elected_result)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : service_carving_vpws_permanent_result)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : remote_split_horizon_group_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "esi-type")
    {
        esi_type = value;
        esi_type.value_namespace = name_space;
        esi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-system-identifier")
    {
        esi_system_identifier = value;
        esi_system_identifier.value_namespace = name_space;
        esi_system_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
        esi_port_key.value_namespace = name_space;
        esi_port_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-system-priority")
    {
        esi_system_priority = value;
        esi_system_priority.value_namespace = name_space;
        esi_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name = value;
        ethernet_segment_name.value_namespace = name_space;
        ethernet_segment_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state = value;
        ethernet_segment_state.value_namespace = name_space;
        ethernet_segment_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-role")
    {
        main_port_role = value;
        main_port_role.value_namespace = name_space;
        main_port_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac = value;
        main_port_mac.value_namespace = name_space;
        main_port_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws = value;
        num_up_p_ws.value_namespace = name_space;
        num_up_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-origin")
    {
        rt_origin = value;
        rt_origin.value_namespace = name_space;
        rt_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates = value;
        es_bgp_gates.value_namespace = name_space;
        es_bgp_gates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates = value;
        es_l2fib_gates.value_namespace = name_space;
        es_l2fib_gates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config = value;
        mac_flushing_mode_config.value_namespace = name_space;
        mac_flushing_mode_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config = value;
        load_balance_mode_config.value_namespace = name_space;
        load_balance_mode_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default = value;
        load_balance_mode_is_default.value_namespace = name_space;
        load_balance_mode_is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper = value;
        load_balance_mode_oper.value_namespace = name_space;
        load_balance_mode_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-single-home")
    {
        force_single_home = value;
        force_single_home.value_namespace = name_space;
        force_single_home.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper = value;
        source_mac_oper.value_namespace = name_space;
        source_mac_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin = value;
        source_mac_origin.value_namespace = name_space;
        source_mac_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-timer")
    {
        peering_timer = value;
        peering_timer.value_namespace = name_space;
        peering_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left = value;
        peering_timer_left.value_namespace = name_space;
        peering_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer = value;
        recovery_timer.value_namespace = name_space;
        recovery_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left = value;
        recovery_timer_left.value_namespace = name_space;
        recovery_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-timer")
    {
        carving_timer = value;
        carving_timer.value_namespace = name_space;
        carving_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-timer-left")
    {
        carving_timer_left = value;
        carving_timer_left.value_namespace = name_space;
        carving_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode = value;
        service_carving_mode.value_namespace = name_space;
        service_carving_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input = value;
        primary_services_input.value_namespace = name_space;
        primary_services_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input = value;
        secondary_services_input.value_namespace = name_space;
        secondary_services_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports = value;
        forwarder_ports.value_namespace = name_space;
        forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent-forwarder-ports")
    {
        permanent_forwarder_ports = value;
        permanent_forwarder_ports.value_namespace = name_space;
        permanent_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elected-forwarder-ports")
    {
        elected_forwarder_ports = value;
        elected_forwarder_ports.value_namespace = name_space;
        elected_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-elected-forwarder-ports")
    {
        not_elected_forwarder_ports = value;
        not_elected_forwarder_ports.value_namespace = name_space;
        not_elected_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-config-forwarder-ports")
    {
        not_config_forwarder_ports = value;
        not_config_forwarder_ports.value_namespace = name_space;
        not_config_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp-protected")
    {
        mp_protected = value;
        mp_protected.value_namespace = name_space;
        mp_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-anycast-vtep")
    {
        nve_anycast_vtep = value;
        nve_anycast_vtep.value_namespace = name_space;
        nve_anycast_vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-ingress-replication")
    {
        nve_ingress_replication = value;
        nve_ingress_replication.value_namespace = name_space;
        nve_ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-split-horizon-group-label-valid")
    {
        local_split_horizon_group_label_valid = value;
        local_split_horizon_group_label_valid.value_namespace = name_space;
        local_split_horizon_group_label_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label = value;
        local_split_horizon_group_label.value_namespace = name_space;
        local_split_horizon_group_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
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
    if(value_path == "esi-type")
    {
        esi_type.yfilter = yfilter;
    }
    if(value_path == "esi-system-identifier")
    {
        esi_system_identifier.yfilter = yfilter;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key.yfilter = yfilter;
    }
    if(value_path == "esi-system-priority")
    {
        esi_system_priority.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "main-port-role")
    {
        main_port_role.yfilter = yfilter;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac.yfilter = yfilter;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "rt-origin")
    {
        rt_origin.yfilter = yfilter;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates.yfilter = yfilter;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates.yfilter = yfilter;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper.yfilter = yfilter;
    }
    if(value_path == "force-single-home")
    {
        force_single_home.yfilter = yfilter;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper.yfilter = yfilter;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin.yfilter = yfilter;
    }
    if(value_path == "peering-timer")
    {
        peering_timer.yfilter = yfilter;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left.yfilter = yfilter;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer.yfilter = yfilter;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left.yfilter = yfilter;
    }
    if(value_path == "carving-timer")
    {
        carving_timer.yfilter = yfilter;
    }
    if(value_path == "carving-timer-left")
    {
        carving_timer_left.yfilter = yfilter;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode.yfilter = yfilter;
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input.yfilter = yfilter;
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input.yfilter = yfilter;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "permanent-forwarder-ports")
    {
        permanent_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "elected-forwarder-ports")
    {
        elected_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "not-elected-forwarder-ports")
    {
        not_elected_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "not-config-forwarder-ports")
    {
        not_config_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "mp-protected")
    {
        mp_protected.yfilter = yfilter;
    }
    if(value_path == "nve-anycast-vtep")
    {
        nve_anycast_vtep.yfilter = yfilter;
    }
    if(value_path == "nve-ingress-replication")
    {
        nve_ingress_replication.yfilter = yfilter;
    }
    if(value_path == "local-split-horizon-group-label-valid")
    {
        local_split_horizon_group_label_valid.yfilter = yfilter;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-identifier" || name == "primary-service" || name == "secondary-service" || name == "service-carving-i-sidelected-result" || name == "service-carving-isid-not-elected-result" || name == "service-carving-evi-elected-result" || name == "service-carving-evi-not-elected-result" || name == "next-hop" || name == "service-carving-vpws-permanent-result" || name == "remote-split-horizon-group-label" || name == "interface-name" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "esi-type" || name == "esi-system-identifier" || name == "esi-port-key" || name == "esi-system-priority" || name == "ethernet-segment-name" || name == "ethernet-segment-state" || name == "if-handle" || name == "main-port-role" || name == "main-port-mac" || name == "num-up-p-ws" || name == "route-target" || name == "rt-origin" || name == "es-bgp-gates" || name == "es-l2fib-gates" || name == "mac-flushing-mode-config" || name == "load-balance-mode-config" || name == "load-balance-mode-is-default" || name == "load-balance-mode-oper" || name == "force-single-home" || name == "source-mac-oper" || name == "source-mac-origin" || name == "peering-timer" || name == "peering-timer-left" || name == "recovery-timer" || name == "recovery-timer-left" || name == "carving-timer" || name == "carving-timer-left" || name == "service-carving-mode" || name == "primary-services-input" || name == "secondary-services-input" || name == "forwarder-ports" || name == "permanent-forwarder-ports" || name == "elected-forwarder-ports" || name == "not-elected-forwarder-ports" || name == "not-config-forwarder-ports" || name == "mp-protected" || name == "nve-anycast-vtep" || name == "nve-ingress-replication" || name == "local-split-horizon-group-label-valid" || name == "local-split-horizon-group-label")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::PrimaryService()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "primary-service"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::~PrimaryService()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::SecondaryService()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "secondary-service"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::~SecondaryService()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::ServiceCarvingISidelectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-i-sidelected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::~ServiceCarvingISidelectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-i-sidelected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::ServiceCarvingIsidNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-isid-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::~ServiceCarvingIsidNotElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-isid-not-elected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::ServiceCarvingEviElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-evi-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::~ServiceCarvingEviElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-evi-elected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::ServiceCarvingEviNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-evi-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::~ServiceCarvingEviNotElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_data() const
{
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-evi-not-elected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::NextHop()
    :
    next_hop{YType::str, "next-hop"}
{

    yang_name = "next-hop"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::~NextHop()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_data() const
{
    return next_hop.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::ServiceCarvingVpwsPermanentResult()
    :
    vpn_id{YType::uint32, "vpn-id"},
    type{YType::enumeration, "type"},
    ethernet_tag{YType::uint32, "ethernet-tag"}
{

    yang_name = "service-carving-vpws-permanent-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::~ServiceCarvingVpwsPermanentResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_data() const
{
    return vpn_id.is_set
	|| type.is_set
	|| ethernet_tag.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vpws-permanent-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id" || name == "type" || name == "ethernet-tag")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    next_hop{YType::str, "next-hop"},
    label{YType::uint32, "label"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_data() const
{
    return next_hop.is_set
	|| label.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "label")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcIds()
{

    yang_name = "ac-ids"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::AcIds::~AcIds()
{
}

bool Evpn::Standby::AcIds::has_data() const
{
    for (std::size_t index=0; index<ac_id.size(); index++)
    {
        if(ac_id[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::AcIds::has_operation() const
{
    for (std::size_t index=0; index<ac_id.size(); index++)
    {
        if(ac_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::AcIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::AcIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac-id")
    {
        auto c = std::make_shared<Evpn::Standby::AcIds::AcId>();
        c->parent = this;
        ac_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::AcIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ac_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::Standby::AcIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::AcIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::AcIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-id")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcId::AcId()
    :
    evi{YType::int32, "evi"},
    ac_id{YType::int32, "ac-id"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"}
{

    yang_name = "ac-id"; yang_parent_name = "ac-ids"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::Standby::AcIds::AcId::~AcId()
{
}

bool Evpn::Standby::AcIds::AcId::has_data() const
{
    return evi.is_set
	|| ac_id.is_set
	|| evi_xr.is_set
	|| neighbor.is_set;
}

bool Evpn::Standby::AcIds::AcId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Evpn::Standby::AcIds::AcId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ac-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::AcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::AcId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::Standby::AcIds::AcId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::AcIds::AcId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::Standby::AcIds::AcId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
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
}

void Evpn::Standby::AcIds::AcId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Evpn::Standby::AcIds::AcId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi" || name == "ac-id" || name == "evi-xr" || name == "neighbor")
        return true;
    return false;
}


}
}

