
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_4.hpp"
#include "Cisco_IOS_XE_native_5.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Bfd::Map::Ipv4::Vrf::DstVrf::DstVrf()
    :
    dst_vrf{YType::str, "dst-vrf"},
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
{

    yang_name = "dst-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::Ipv4::Vrf::DstVrf::~DstVrf()
{
}

bool Native::Bfd::Map::Ipv4::Vrf::DstVrf::has_data() const
{
    return dst_vrf.is_set
	|| a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Bfd::Map::Ipv4::Vrf::DstVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_vrf.yfilter)
	|| ydk::is_set(a_period_b_period_c_period_d_slash_nn.yfilter);
}

std::string Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-vrf" <<"[dst-vrf='" <<dst_vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_vrf.is_set || is_set(dst_vrf.yfilter)) leaf_name_data.push_back(dst_vrf.get_name_leafdata());
    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.yfilter)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv4::Vrf::DstVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf = value;
        dst_vrf.value_namespace = name_space;
        dst_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
        a_period_b_period_c_period_d_slash_nn.value_namespace = name_space;
        a_period_b_period_c_period_d_slash_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv4::Vrf::DstVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf.yfilter = yfilter;
    }
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv4::Vrf::DstVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-vrf" || name == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::Ipv6()
    :
    vrf(std::make_shared<Native::Bfd::Map::Ipv6::Vrf>())
{
    vrf->parent = this;

    yang_name = "ipv6"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::Ipv6::~Ipv6()
{
}

bool Native::Bfd::Map::Ipv6::has_data() const
{
    for (std::size_t index=0; index<dp_ipv6_prefix.size(); index++)
    {
        if(dp_ipv6_prefix[index]->has_data())
            return true;
    }
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<dp_ipv6_prefix.size(); index++)
    {
        if(dp_ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dp-ipv6_prefix")
    {
        for(auto const & c : dp_ipv6_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix>();
        c->parent = this;
        dp_ipv6_prefix.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Bfd::Map::Ipv6::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dp_ipv6_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Bfd::Map::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dp-ipv6_prefix" || name == "vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::DpIpv6Prefix()
    :
    dp_ipv6_prefix{YType::str, "dp-ipv6_prefix"},
    bfd_nm{YType::str, "bfd-nm"}
    	,
    vrf(std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf>())
{
    vrf->parent = this;

    yang_name = "dp-ipv6_prefix"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::~DpIpv6Prefix()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::has_data() const
{
    for (std::size_t index=0; index<src_ipv6_prefix0.size(); index++)
    {
        if(src_ipv6_prefix0[index]->has_data())
            return true;
    }
    return dp_ipv6_prefix.is_set
	|| bfd_nm.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::has_operation() const
{
    for (std::size_t index=0; index<src_ipv6_prefix0.size(); index++)
    {
        if(src_ipv6_prefix0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dp_ipv6_prefix.yfilter)
	|| ydk::is_set(bfd_nm.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dp-ipv6_prefix" <<"[dp-ipv6_prefix='" <<dp_ipv6_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_ipv6_prefix.is_set || is_set(dp_ipv6_prefix.yfilter)) leaf_name_data.push_back(dp_ipv6_prefix.get_name_leafdata());
    if (bfd_nm.is_set || is_set(bfd_nm.yfilter)) leaf_name_data.push_back(bfd_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-ipv6_prefix0")
    {
        for(auto const & c : src_ipv6_prefix0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0>();
        c->parent = this;
        src_ipv6_prefix0.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : src_ipv6_prefix0)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dp-ipv6_prefix")
    {
        dp_ipv6_prefix = value;
        dp_ipv6_prefix.value_namespace = name_space;
        dp_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-nm")
    {
        bfd_nm = value;
        bfd_nm.value_namespace = name_space;
        bfd_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dp-ipv6_prefix")
    {
        dp_ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "bfd-nm")
    {
        bfd_nm.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ipv6_prefix0" || name == "vrf" || name == "dp-ipv6_prefix" || name == "bfd-nm")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::SrcIpv6Prefix0()
    :
    src_ipv6_prefix0{YType::str, "src-ipv6_prefix0"},
    bfd_name{YType::str, "bfd-name"}
{

    yang_name = "src-ipv6_prefix0"; yang_parent_name = "dp-ipv6_prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::~SrcIpv6Prefix0()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::has_data() const
{
    return src_ipv6_prefix0.is_set
	|| bfd_name.is_set;
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_ipv6_prefix0.yfilter)
	|| ydk::is_set(bfd_name.yfilter);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-ipv6_prefix0" <<"[src-ipv6_prefix0='" <<src_ipv6_prefix0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ipv6_prefix0.is_set || is_set(src_ipv6_prefix0.yfilter)) leaf_name_data.push_back(src_ipv6_prefix0.get_name_leafdata());
    if (bfd_name.is_set || is_set(bfd_name.yfilter)) leaf_name_data.push_back(bfd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-ipv6_prefix0")
    {
        src_ipv6_prefix0 = value;
        src_ipv6_prefix0.value_namespace = name_space;
        src_ipv6_prefix0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-name")
    {
        bfd_name = value;
        bfd_name.value_namespace = name_space;
        bfd_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-ipv6_prefix0")
    {
        src_ipv6_prefix0.yfilter = yfilter;
    }
    if(value_path == "bfd-name")
    {
        bfd_name.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ipv6_prefix0" || name == "bfd-name")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "dp-ipv6_prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::has_data() const
{
    for (std::size_t index=0; index<src_vrf.size(); index++)
    {
        if(src_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::has_operation() const
{
    for (std::size_t index=0; index<src_vrf.size(); index++)
    {
        if(src_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-vrf")
    {
        for(auto const & c : src_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf>();
        c->parent = this;
        src_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : src_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::SrcVrf()
    :
    src_vrf{YType::str, "src-vrf"},
    src_ipv6_prefix{YType::str, "src-ipv6_prefix"}
{

    yang_name = "src-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::~SrcVrf()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::has_data() const
{
    return src_vrf.is_set
	|| src_ipv6_prefix.is_set;
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_vrf.yfilter)
	|| ydk::is_set(src_ipv6_prefix.yfilter);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-vrf" <<"[src-vrf='" <<src_vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_vrf.is_set || is_set(src_vrf.yfilter)) leaf_name_data.push_back(src_vrf.get_name_leafdata());
    if (src_ipv6_prefix.is_set || is_set(src_ipv6_prefix.yfilter)) leaf_name_data.push_back(src_ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-vrf")
    {
        src_vrf = value;
        src_vrf.value_namespace = name_space;
        src_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ipv6_prefix")
    {
        src_ipv6_prefix = value;
        src_ipv6_prefix.value_namespace = name_space;
        src_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-vrf")
    {
        src_vrf.yfilter = yfilter;
    }
    if(value_path == "src-ipv6_prefix")
    {
        src_ipv6_prefix.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-vrf" || name == "src-ipv6_prefix")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::Ipv6::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv6::Vrf::has_data() const
{
    for (std::size_t index=0; index<dst_vrf.size(); index++)
    {
        if(dst_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv6::Vrf::has_operation() const
{
    for (std::size_t index=0; index<dst_vrf.size(); index++)
    {
        if(dst_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Bfd::Map::Ipv6::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv6::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-vrf")
    {
        for(auto const & c : dst_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv6::Vrf::DstVrf>();
        c->parent = this;
        dst_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dst_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Bfd::Map::Ipv6::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv6::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv6::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::Vrf::DstVrf::DstVrf()
    :
    dst_vrf{YType::str, "dst-vrf"},
    dst_ipv6_prefix{YType::str, "dst-ipv6_prefix"}
{

    yang_name = "dst-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::Ipv6::Vrf::DstVrf::~DstVrf()
{
}

bool Native::Bfd::Map::Ipv6::Vrf::DstVrf::has_data() const
{
    return dst_vrf.is_set
	|| dst_ipv6_prefix.is_set;
}

bool Native::Bfd::Map::Ipv6::Vrf::DstVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_vrf.yfilter)
	|| ydk::is_set(dst_ipv6_prefix.yfilter);
}

std::string Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-vrf" <<"[dst-vrf='" <<dst_vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_vrf.is_set || is_set(dst_vrf.yfilter)) leaf_name_data.push_back(dst_vrf.get_name_leafdata());
    if (dst_ipv6_prefix.is_set || is_set(dst_ipv6_prefix.yfilter)) leaf_name_data.push_back(dst_ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv6::Vrf::DstVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf = value;
        dst_vrf.value_namespace = name_space;
        dst_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-ipv6_prefix")
    {
        dst_ipv6_prefix = value;
        dst_ipv6_prefix.value_namespace = name_space;
        dst_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv6::Vrf::DstVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf.yfilter = yfilter;
    }
    if(value_path == "dst-ipv6_prefix")
    {
        dst_ipv6_prefix.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv6::Vrf::DstVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-vrf" || name == "dst-ipv6_prefix")
        return true;
    return false;
}

Native::BfdTemplate::BfdTemplate()
    :
    single_hop(std::make_shared<Native::BfdTemplate::SingleHop>())
{
    single_hop->parent = this;

    yang_name = "bfd-template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::~BfdTemplate()
{
}

bool Native::BfdTemplate::has_data() const
{
    return (single_hop !=  nullptr && single_hop->has_data());
}

bool Native::BfdTemplate::has_operation() const
{
    return is_set(yfilter)
	|| (single_hop !=  nullptr && single_hop->has_operation());
}

std::string Native::BfdTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "single-hop")
    {
        if(single_hop == nullptr)
        {
            single_hop = std::make_shared<Native::BfdTemplate::SingleHop>();
        }
        return single_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(single_hop != nullptr)
    {
        children["single-hop"] = single_hop;
    }

    return children;
}

void Native::BfdTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BfdTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BfdTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "single-hop")
        return true;
    return false;
}

Native::BfdTemplate::SingleHop::SingleHop()
    :
    name{YType::str, "name"}
    	,
    interval(std::make_shared<Native::BfdTemplate::SingleHop::Interval>())
{
    interval->parent = this;

    yang_name = "single-hop"; yang_parent_name = "bfd-template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::SingleHop::~SingleHop()
{
}

bool Native::BfdTemplate::SingleHop::has_data() const
{
    return name.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::BfdTemplate::SingleHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::BfdTemplate::SingleHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd-template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::SingleHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:single-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::SingleHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::SingleHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::BfdTemplate::SingleHop::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::SingleHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::BfdTemplate::SingleHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BfdTemplate::SingleHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::BfdTemplate::SingleHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "name")
        return true;
    return false;
}

Native::BfdTemplate::SingleHop::Interval::Interval()
    :
    microseconds(std::make_shared<Native::BfdTemplate::SingleHop::Interval::Microseconds>())
{
    microseconds->parent = this;

    yang_name = "interval"; yang_parent_name = "single-hop"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::SingleHop::Interval::~Interval()
{
}

bool Native::BfdTemplate::SingleHop::Interval::has_data() const
{
    return (microseconds !=  nullptr && microseconds->has_data());
}

bool Native::BfdTemplate::SingleHop::Interval::has_operation() const
{
    return is_set(yfilter)
	|| (microseconds !=  nullptr && microseconds->has_operation());
}

std::string Native::BfdTemplate::SingleHop::Interval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd-template/Cisco-IOS-XE-bfd:single-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::SingleHop::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::SingleHop::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::SingleHop::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microseconds")
    {
        if(microseconds == nullptr)
        {
            microseconds = std::make_shared<Native::BfdTemplate::SingleHop::Interval::Microseconds>();
        }
        return microseconds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::SingleHop::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(microseconds != nullptr)
    {
        children["microseconds"] = microseconds;
    }

    return children;
}

void Native::BfdTemplate::SingleHop::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BfdTemplate::SingleHop::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BfdTemplate::SingleHop::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microseconds")
        return true;
    return false;
}

Native::BfdTemplate::SingleHop::Interval::Microseconds::Microseconds()
    :
    min_rx{YType::uint32, "min-rx"},
    min_tx{YType::uint32, "min-tx"},
    multiplier{YType::uint8, "multiplier"}
{

    yang_name = "microseconds"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::SingleHop::Interval::Microseconds::~Microseconds()
{
}

bool Native::BfdTemplate::SingleHop::Interval::Microseconds::has_data() const
{
    return min_rx.is_set
	|| min_tx.is_set
	|| multiplier.is_set;
}

bool Native::BfdTemplate::SingleHop::Interval::Microseconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_rx.yfilter)
	|| ydk::is_set(min_tx.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Native::BfdTemplate::SingleHop::Interval::Microseconds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd-template/Cisco-IOS-XE-bfd:single-hop/interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::SingleHop::Interval::Microseconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microseconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::SingleHop::Interval::Microseconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_rx.is_set || is_set(min_rx.yfilter)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (min_tx.is_set || is_set(min_tx.yfilter)) leaf_name_data.push_back(min_tx.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::SingleHop::Interval::Microseconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::SingleHop::Interval::Microseconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BfdTemplate::SingleHop::Interval::Microseconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-rx")
    {
        min_rx = value;
        min_rx.value_namespace = name_space;
        min_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tx")
    {
        min_tx = value;
        min_tx.value_namespace = name_space;
        min_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BfdTemplate::SingleHop::Interval::Microseconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-rx")
    {
        min_rx.yfilter = yfilter;
    }
    if(value_path == "min-tx")
    {
        min_tx.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Native::BfdTemplate::SingleHop::Interval::Microseconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-rx" || name == "min-tx" || name == "multiplier")
        return true;
    return false;
}

Native::Boot::Boot()
    :
    enable_break(nullptr) // presence node
	,manual(nullptr) // presence node
	,system(std::make_shared<Native::Boot::System>())
{
    system->parent = this;

    yang_name = "boot"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::~Boot()
{
}

bool Native::Boot::has_data() const
{
    return (enable_break !=  nullptr && enable_break->has_data())
	|| (manual !=  nullptr && manual->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool Native::Boot::has_operation() const
{
    return is_set(yfilter)
	|| (enable_break !=  nullptr && enable_break->has_operation())
	|| (manual !=  nullptr && manual->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string Native::Boot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable-break")
    {
        if(enable_break == nullptr)
        {
            enable_break = std::make_shared<Native::Boot::EnableBreak>();
        }
        return enable_break;
    }

    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Boot::Manual>();
        }
        return manual;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::Boot::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable_break != nullptr)
    {
        children["enable-break"] = enable_break;
    }

    if(manual != nullptr)
    {
        children["manual"] = manual;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void Native::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-break" || name == "manual" || name == "system")
        return true;
    return false;
}

Native::Boot::EnableBreak::EnableBreak()
    :
    switch_{YType::uint8, "switch"}
{

    yang_name = "enable-break"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::EnableBreak::~EnableBreak()
{
}

bool Native::Boot::EnableBreak::has_data() const
{
    return switch_.is_set;
}

bool Native::Boot::EnableBreak::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Boot::EnableBreak::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::EnableBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:enable-break";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::EnableBreak::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::EnableBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::EnableBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::EnableBreak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::EnableBreak::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Boot::EnableBreak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Boot::Manual::Manual()
    :
    switch_{YType::uint8, "switch"}
{

    yang_name = "manual"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::Manual::~Manual()
{
}

bool Native::Boot::Manual::has_data() const
{
    return switch_.is_set;
}

bool Native::Boot::Manual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Boot::Manual::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Boot::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Boot::System::System()
    :
    tftp{YType::str, "tftp"},
    tftp_path{YType::str, "tftp-path"}
    	,
    bootfile(std::make_shared<Native::Boot::System::Bootfile>())
	,flash(std::make_shared<Native::Boot::System::Flash>())
	,switch_(std::make_shared<Native::Boot::System::Switch_>())
{
    bootfile->parent = this;
    flash->parent = this;
    switch_->parent = this;

    yang_name = "system"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::System::~System()
{
}

bool Native::Boot::System::has_data() const
{
    return tftp.is_set
	|| tftp_path.is_set
	|| (bootfile !=  nullptr && bootfile->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (switch_ !=  nullptr && switch_->has_data());
}

bool Native::Boot::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| ydk::is_set(tftp_path.yfilter)
	|| (bootfile !=  nullptr && bootfile->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::Boot::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (tftp_path.is_set || is_set(tftp_path.yfilter)) leaf_name_data.push_back(tftp_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootfile")
    {
        if(bootfile == nullptr)
        {
            bootfile = std::make_shared<Native::Boot::System::Bootfile>();
        }
        return bootfile;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Native::Boot::System::Flash>();
        }
        return flash;
    }

    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Boot::System::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootfile != nullptr)
    {
        children["bootfile"] = bootfile;
    }

    if(flash != nullptr)
    {
        children["flash"] = flash;
    }

    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::Boot::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp-path")
    {
        tftp_path = value;
        tftp_path.value_namespace = name_space;
        tftp_path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
    if(value_path == "tftp-path")
    {
        tftp_path.yfilter = yfilter;
    }
}

bool Native::Boot::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootfile" || name == "flash" || name == "switch" || name == "tftp" || name == "tftp-path")
        return true;
    return false;
}

Native::Boot::System::Bootfile::Bootfile()
{

    yang_name = "bootfile"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::System::Bootfile::~Bootfile()
{
}

bool Native::Boot::System::Bootfile::has_data() const
{
    for (std::size_t index=0; index<filename_list.size(); index++)
    {
        if(filename_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Boot::System::Bootfile::has_operation() const
{
    for (std::size_t index=0; index<filename_list.size(); index++)
    {
        if(filename_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Boot::System::Bootfile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Bootfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootfile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Bootfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::System::Bootfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filename-list")
    {
        for(auto const & c : filename_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Boot::System::Bootfile::FilenameList>();
        c->parent = this;
        filename_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Bootfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filename_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Boot::System::Bootfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::System::Bootfile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::System::Bootfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename-list")
        return true;
    return false;
}

Native::Boot::System::Bootfile::FilenameList::FilenameList()
    :
    filename{YType::str, "filename"}
{

    yang_name = "filename-list"; yang_parent_name = "bootfile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::System::Bootfile::FilenameList::~FilenameList()
{
}

bool Native::Boot::System::Bootfile::FilenameList::has_data() const
{
    return filename.is_set;
}

bool Native::Boot::System::Bootfile::FilenameList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Native::Boot::System::Bootfile::FilenameList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/bootfile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Bootfile::FilenameList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filename-list" <<"[filename='" <<filename <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Bootfile::FilenameList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::System::Bootfile::FilenameList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Bootfile::FilenameList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Bootfile::FilenameList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Bootfile::FilenameList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Native::Boot::System::Bootfile::FilenameList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename")
        return true;
    return false;
}

Native::Boot::System::Flash::Flash()
{

    yang_name = "flash"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::System::Flash::~Flash()
{
}

bool Native::Boot::System::Flash::has_data() const
{
    for (std::size_t index=0; index<flash_list.size(); index++)
    {
        if(flash_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Boot::System::Flash::has_operation() const
{
    for (std::size_t index=0; index<flash_list.size(); index++)
    {
        if(flash_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Boot::System::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::System::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash-list")
    {
        for(auto const & c : flash_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Boot::System::Flash::FlashList>();
        c->parent = this;
        flash_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flash_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Boot::System::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::System::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::System::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash-list")
        return true;
    return false;
}

Native::Boot::System::Flash::FlashList::FlashList()
    :
    flash_leaf{YType::str, "flash-leaf"}
{

    yang_name = "flash-list"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::System::Flash::FlashList::~FlashList()
{
}

bool Native::Boot::System::Flash::FlashList::has_data() const
{
    return flash_leaf.is_set;
}

bool Native::Boot::System::Flash::FlashList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_leaf.yfilter);
}

std::string Native::Boot::System::Flash::FlashList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Flash::FlashList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-list" <<"[flash-leaf='" <<flash_leaf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Flash::FlashList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_leaf.is_set || is_set(flash_leaf.yfilter)) leaf_name_data.push_back(flash_leaf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::System::Flash::FlashList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Flash::FlashList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Flash::FlashList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash-leaf")
    {
        flash_leaf = value;
        flash_leaf.value_namespace = name_space;
        flash_leaf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Flash::FlashList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash-leaf")
    {
        flash_leaf.yfilter = yfilter;
    }
}

bool Native::Boot::System::Flash::FlashList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash-leaf")
        return true;
    return false;
}

Native::Boot::System::Switch_::Switch_()
    :
    all(std::make_shared<Native::Boot::System::Switch_::All>())
{
    all->parent = this;

    yang_name = "switch"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::System::Switch_::~Switch_()
{
}

bool Native::Boot::System::Switch_::has_data() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Boot::System::Switch_::has_operation() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Boot::System::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::System::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Boot::System::Switch_::All>();
        }
        return all;
    }

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
        auto c = std::make_shared<Native::Boot::System::Switch_::SwitchNumber>();
        c->parent = this;
        switch_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : switch_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Boot::System::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::System::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::System::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "switch-number")
        return true;
    return false;
}

Native::Boot::System::Switch_::All::All()
    :
    flash{YType::str, "flash"},
    flash_1{YType::str, "flash-1"},
    tftp{YType::str, "tftp"}
{

    yang_name = "all"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::System::Switch_::All::~All()
{
}

bool Native::Boot::System::Switch_::All::has_data() const
{
    return flash.is_set
	|| flash_1.is_set
	|| tftp.is_set;
}

bool Native::Boot::System::Switch_::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash.yfilter)
	|| ydk::is_set(flash_1.yfilter)
	|| ydk::is_set(tftp.yfilter);
}

std::string Native::Boot::System::Switch_::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/Cisco-IOS-XE-switch:switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Switch_::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Switch_::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash.is_set || is_set(flash.yfilter)) leaf_name_data.push_back(flash.get_name_leafdata());
    if (flash_1.is_set || is_set(flash_1.yfilter)) leaf_name_data.push_back(flash_1.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::System::Switch_::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch_::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Switch_::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash")
    {
        flash = value;
        flash.value_namespace = name_space;
        flash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-1")
    {
        flash_1 = value;
        flash_1.value_namespace = name_space;
        flash_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Switch_::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash")
    {
        flash.yfilter = yfilter;
    }
    if(value_path == "flash-1")
    {
        flash_1.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
}

bool Native::Boot::System::Switch_::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash" || name == "flash-1" || name == "tftp")
        return true;
    return false;
}

Native::Boot::System::Switch_::SwitchNumber::SwitchNumber()
    :
    range{YType::uint8, "range"},
    flash_1_path{YType::str, "flash-1-path"},
    flash_path{YType::str, "flash-path"},
    tftp_path{YType::str, "tftp-path"}
{

    yang_name = "switch-number"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Boot::System::Switch_::SwitchNumber::~SwitchNumber()
{
}

bool Native::Boot::System::Switch_::SwitchNumber::has_data() const
{
    return range.is_set
	|| flash_1_path.is_set
	|| flash_path.is_set
	|| tftp_path.is_set;
}

bool Native::Boot::System::Switch_::SwitchNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(flash_1_path.yfilter)
	|| ydk::is_set(flash_path.yfilter)
	|| ydk::is_set(tftp_path.yfilter);
}

std::string Native::Boot::System::Switch_::SwitchNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/Cisco-IOS-XE-switch:switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Switch_::SwitchNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-number" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Switch_::SwitchNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (flash_1_path.is_set || is_set(flash_1_path.yfilter)) leaf_name_data.push_back(flash_1_path.get_name_leafdata());
    if (flash_path.is_set || is_set(flash_path.yfilter)) leaf_name_data.push_back(flash_path.get_name_leafdata());
    if (tftp_path.is_set || is_set(tftp_path.yfilter)) leaf_name_data.push_back(tftp_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Boot::System::Switch_::SwitchNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch_::SwitchNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Switch_::SwitchNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-1-path")
    {
        flash_1_path = value;
        flash_1_path.value_namespace = name_space;
        flash_1_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-path")
    {
        flash_path = value;
        flash_path.value_namespace = name_space;
        flash_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp-path")
    {
        tftp_path = value;
        tftp_path.value_namespace = name_space;
        tftp_path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Switch_::SwitchNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "flash-1-path")
    {
        flash_1_path.yfilter = yfilter;
    }
    if(value_path == "flash-path")
    {
        flash_path.yfilter = yfilter;
    }
    if(value_path == "tftp-path")
    {
        tftp_path.yfilter = yfilter;
    }
}

bool Native::Boot::System::Switch_::SwitchNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "flash-1-path" || name == "flash-path" || name == "tftp-path")
        return true;
    return false;
}

Native::BridgeDomain::BridgeDomain()
    :
    c_mac(std::make_shared<Native::BridgeDomain::CMac>())
	,otv(std::make_shared<Native::BridgeDomain::Otv>())
	,parameterized(std::make_shared<Native::BridgeDomain::Parameterized>())
{
    c_mac->parent = this;
    otv->parent = this;
    parameterized->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::~BridgeDomain()
{
}

bool Native::BridgeDomain::has_data() const
{
    for (std::size_t index=0; index<brd_id.size(); index++)
    {
        if(brd_id[index]->has_data())
            return true;
    }
    return (c_mac !=  nullptr && c_mac->has_data())
	|| (otv !=  nullptr && otv->has_data())
	|| (parameterized !=  nullptr && parameterized->has_data());
}

bool Native::BridgeDomain::has_operation() const
{
    for (std::size_t index=0; index<brd_id.size(); index++)
    {
        if(brd_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (c_mac !=  nullptr && c_mac->has_operation())
	|| (otv !=  nullptr && otv->has_operation())
	|| (parameterized !=  nullptr && parameterized->has_operation());
}

std::string Native::BridgeDomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brd-id")
    {
        for(auto const & c : brd_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId>();
        c->parent = this;
        brd_id.push_back(c);
        return c;
    }

    if(child_yang_name == "c-mac")
    {
        if(c_mac == nullptr)
        {
            c_mac = std::make_shared<Native::BridgeDomain::CMac>();
        }
        return c_mac;
    }

    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::BridgeDomain::Otv>();
        }
        return otv;
    }

    if(child_yang_name == "parameterized")
    {
        if(parameterized == nullptr)
        {
            parameterized = std::make_shared<Native::BridgeDomain::Parameterized>();
        }
        return parameterized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brd_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(c_mac != nullptr)
    {
        children["c-mac"] = c_mac;
    }

    if(otv != nullptr)
    {
        children["otv"] = otv;
    }

    if(parameterized != nullptr)
    {
        children["parameterized"] = parameterized;
    }

    return children;
}

void Native::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brd-id" || name == "c-mac" || name == "otv" || name == "parameterized")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::BrdId()
    :
    bridge_domain_id{YType::uint16, "bridge-domain-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    ip(std::make_shared<Native::BridgeDomain::BrdId::Ip>())
	,mac(std::make_shared<Native::BridgeDomain::BrdId::Mac>())
	,member(std::make_shared<Native::BridgeDomain::BrdId::Member>())
{
    ip->parent = this;
    mac->parent = this;
    member->parent = this;

    yang_name = "brd-id"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::BrdId::~BrdId()
{
}

bool Native::BridgeDomain::BrdId::has_data() const
{
    return bridge_domain_id.is_set
	|| shutdown.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (member !=  nullptr && member->has_data());
}

bool Native::BridgeDomain::BrdId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::BridgeDomain::BrdId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::BrdId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:brd-id" <<"[bridge-domain-id='" <<bridge_domain_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::BridgeDomain::BrdId::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::BridgeDomain::BrdId::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::BridgeDomain::BrdId::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::BridgeDomain::BrdId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac" || name == "member" || name == "bridge-domain-id" || name == "shutdown")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Ip()
    :
    igmp(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp>())
{
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::~Ip()
{
}

bool Native::BridgeDomain::BrdId::Ip::has_data() const
{
    return (igmp !=  nullptr && igmp->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Igmp()
    :
    snooping(nullptr) // presence node
{

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::~Igmp()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Snooping()
    :
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"},
    static_{YType::str, "static"}
    	,
    check(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking>())
	,mrouter(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter>())
	,querier(nullptr) // presence node
{
    check->parent = this;
    explicit_tracking->parent = this;
    mrouter->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_data() const
{
    return immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| static_.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "mrouter" || name == "querier" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable" || name == "static")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::empty, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::Mrouter()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "mrouter"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::~Mrouter()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_data() const
{
    return interface.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::empty, "address"},
    max_response_time{YType::empty, "max-response-time"},
    query_interval{YType::empty, "query-interval"},
    tcn{YType::empty, "tcn"},
    timer{YType::empty, "timer"},
    version{YType::empty, "version"}
{

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| tcn.is_set
	|| timer.is_set
	|| version.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(tcn.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (tcn.is_set || is_set(tcn.yfilter)) leaf_name_data.push_back(tcn.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn")
    {
        tcn = value;
        tcn.value_namespace = name_space;
        tcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "tcn")
    {
        tcn.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "max-response-time" || name == "query-interval" || name == "tcn" || name == "timer" || name == "version")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Mac()
    :
    aging_time{YType::uint16, "aging-time"},
    learning{YType::empty, "learning"}
    	,
    limit(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit>())
{
    limit->parent = this;

    yang_name = "mac"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::~Mac()
{
}

bool Native::BridgeDomain::BrdId::Mac::has_data() const
{
    return aging_time.is_set
	|| learning.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter)
	|| ydk::is_set(learning.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (learning.is_set || is_set(learning.yfilter)) leaf_name_data.push_back(learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning")
    {
        learning = value;
        learning.value_namespace = name_space;
        learning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
    if(value_path == "learning")
    {
        learning.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "aging-time" || name == "learning")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Limit()
    :
    action(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action>())
	,maximum(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Maximum>())
{
    action->parent = this;
    maximum->parent = this;

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::~Limit()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action>();
        }
        return action;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Action()
    :
    flooding(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding>())
{
    flooding->parent = this;

    yang_name = "action"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::~Action()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_data() const
{
    return (flooding !=  nullptr && flooding->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_operation() const
{
    return is_set(yfilter)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::Flooding()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flooding"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::~Flooding()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_data() const
{
    return disable.is_set;
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Maximum::Maximum()
    :
    addresses{YType::uint32, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Maximum::~Maximum()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::Limit::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::Member()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    service_engine{YType::uint8, "Service-Engine"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    vfi{YType::str, "vfi"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    vni{YType::uint32, "vni"},
    vpn{YType::uint32, "VPN"},
    y_controller{YType::str, "_controller"}
{

    yang_name = "member"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::~Member()
{
}

bool Native::BridgeDomain::BrdId::Member::has_data() const
{
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| service_engine.is_set
	|| sonet_acr.is_set
	|| tunnel_tp.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| vfi.is_set
	|| virtual_tokenring.is_set
	|| vni.is_set
	|| vpn.is_set
	|| y_controller.is_set;
}

bool Native::BridgeDomain::BrdId::Member::has_operation() const
{
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(analysis_module.yfilter)
	|| ydk::is_set(fcpa.yfilter)
	|| ydk::is_set(sbc.yfilter)
	|| ydk::is_set(service_engine.yfilter)
	|| ydk::is_set(sonet_acr.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter)
	|| ydk::is_set(ucse.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(vfi.yfilter)
	|| ydk::is_set(virtual_tokenring.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(y_controller.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.yfilter)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.yfilter)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.yfilter)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.yfilter)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.yfilter)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.yfilter)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.yfilter)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.yfilter)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (y_controller.is_set || is_set(y_controller.yfilter)) leaf_name_data.push_back(y_controller.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACR")
    {
        for(auto const & c : acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR>();
        c->parent = this;
        acr.push_back(c);
        return c;
    }

    if(child_yang_name == "mem-ipv4")
    {
        for(auto const & c : mem_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4>();
        c->parent = this;
        mem_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mem_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : member_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
        analysis_module.value_namespace = name_space;
        analysis_module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
        fcpa.value_namespace = name_space;
        fcpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SBC")
    {
        sbc = value;
        sbc.value_namespace = name_space;
        sbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
        service_engine.value_namespace = name_space;
        service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
        sonet_acr.value_namespace = name_space;
        sonet_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucse")
    {
        ucse = value;
        ucse.value_namespace = name_space;
        ucse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi")
    {
        vfi = value;
        vfi.value_namespace = name_space;
        vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
        virtual_tokenring.value_namespace = name_space;
        virtual_tokenring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VPN")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_controller")
    {
        y_controller = value;
        y_controller.value_namespace = name_space;
        y_controller.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module.yfilter = yfilter;
    }
    if(value_path == "Fcpa")
    {
        fcpa.yfilter = yfilter;
    }
    if(value_path == "SBC")
    {
        sbc.yfilter = yfilter;
    }
    if(value_path == "Service-Engine")
    {
        service_engine.yfilter = yfilter;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
    if(value_path == "ucse")
    {
        ucse.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "vfi")
    {
        vfi.yfilter = yfilter;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "VPN")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "_controller")
    {
        y_controller.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACR" || name == "mem-ipv4" || name == "member-interface" || name == "Analysis-Module" || name == "Fcpa" || name == "SBC" || name == "Service-Engine" || name == "SONET_ACR" || name == "Tunnel-tp" || name == "ucse" || name == "vasileft" || name == "vasiright" || name == "vfi" || name == "Virtual-TokenRing" || name == "vni" || name == "VPN" || name == "_controller")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ACR()
    :
    acr_int{YType::str, "acr-int"}
    	,
    service_instance(std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance>())
{
    service_instance->parent = this;

    yang_name = "ACR"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::~ACR()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_data() const
{
    return acr_int.is_set
	|| (service_instance !=  nullptr && service_instance->has_data());
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr_int.yfilter)
	|| (service_instance !=  nullptr && service_instance->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::ACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACR" <<"[acr-int='" <<acr_int <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr_int.is_set || is_set(acr_int.yfilter)) leaf_name_data.push_back(acr_int.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-instance")
    {
        if(service_instance == nullptr)
        {
            service_instance = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance>();
        }
        return service_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_instance != nullptr)
    {
        children["service-instance"] = service_instance;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr-int")
    {
        acr_int = value;
        acr_int.value_namespace = name_space;
        acr_int.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::ACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr-int")
    {
        acr_int.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-instance" || name == "acr-int")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::ServiceInstance()
{

    yang_name = "service-instance"; yang_parent_name = "ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::~ServiceInstance()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        for(auto const & c : id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::Id()
    :
    id{YType::uint16, "id"},
    split_horizon{YType::empty, "split-horizon"}
{

    yang_name = "id"; yang_parent_name = "service-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::~Id()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_data() const
{
    return id.is_set
	|| split_horizon.is_set;
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(split_horizon.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "split-horizon")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemIpv4()
    :
    mem_ipv4{YType::str, "mem-ipv4"},
    template_{YType::str, "template"}
    	,
    encapsulation(std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "mem-ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::~MemIpv4()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_data() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_data())
            return true;
    }
    return mem_ipv4.is_set
	|| template_.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_operation() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mem_ipv4.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-ipv4" <<"[mem-ipv4='" <<mem_ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_ipv4.is_set || is_set(mem_ipv4.yfilter)) leaf_name_data.push_back(mem_ipv4.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mem-vcid")
    {
        for(auto const & c : mem_vcid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid>();
        c->parent = this;
        mem_vcid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    for (auto const & c : mem_vcid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4 = value;
        mem_ipv4.value_namespace = name_space;
        mem_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mem-vcid" || name == "mem-ipv4" || name == "template")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::MemVcid()
    :
    mem_vcid{YType::uint32, "mem-vcid"}
    	,
    encapsulation(nullptr) // presence node
	,template_(nullptr) // presence node
{

    yang_name = "mem-vcid"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::~MemVcid()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_data() const
{
    return mem_vcid.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mem_vcid.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-vcid" <<"[mem-vcid='" <<mem_vcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "template" || name == "mem-vcid")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::Template_()
    :
    template_{YType::str, "template"}
{

    yang_name = "template"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::~Template_()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::has_data() const
{
    return template_.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::MemberInterface()
    :
    interface{YType::str, "interface"},
    interface_id{YType::str, "interface-id"},
    service_instance{YType::uint32, "service-instance"}
    	,
    split_horizon(std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::~MemberInterface()
{
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_data() const
{
    return interface.is_set
	|| interface_id.is_set
	|| service_instance.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "interface" || name == "interface-id" || name == "service-instance")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::~SplitHorizon()
{
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::BridgeDomain::CMac::CMac()
    :
    aging_time{YType::uint16, "aging-time"}
{

    yang_name = "c-mac"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::CMac::~CMac()
{
}

bool Native::BridgeDomain::CMac::has_data() const
{
    return aging_time.is_set;
}

bool Native::BridgeDomain::CMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter);
}

std::string Native::BridgeDomain::CMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::CMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:c-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::CMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::CMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::CMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::CMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::CMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::CMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging-time")
        return true;
    return false;
}

Native::BridgeDomain::Otv::Otv()
    :
    default_(std::make_shared<Native::BridgeDomain::Otv::Default_>())
{
    default_->parent = this;

    yang_name = "otv"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Otv::~Otv()
{
}

bool Native::BridgeDomain::Otv::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::BridgeDomain::Otv::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::BridgeDomain::Otv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Otv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Otv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Otv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::BridgeDomain::Otv::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Otv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::BridgeDomain::Otv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Otv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Otv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::BridgeDomain::Otv::Default_::Default_()
    :
    age_time{YType::uint16, "age-time"}
{

    yang_name = "default"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Otv::Default_::~Default_()
{
}

bool Native::BridgeDomain::Otv::Default_::has_data() const
{
    return age_time.is_set;
}

bool Native::BridgeDomain::Otv::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age_time.yfilter);
}

std::string Native::BridgeDomain::Otv::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Otv::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Otv::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time.is_set || is_set(age_time.yfilter)) leaf_name_data.push_back(age_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Otv::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Otv::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Otv::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age-time")
    {
        age_time = value;
        age_time.value_namespace = name_space;
        age_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Otv::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age-time")
    {
        age_time.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Otv::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age-time")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Parameterized()
    :
    vlan(nullptr) // presence node
{

    yang_name = "parameterized"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::~Parameterized()
{
}

bool Native::BridgeDomain::Parameterized::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::BridgeDomain::Parameterized::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::BridgeDomain::Parameterized::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:parameterized";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::BridgeDomain::Parameterized::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Vlan()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    ip(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip>())
	,mac(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac>())
	,member(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member>())
{
    ip->parent = this;
    mac->parent = this;
    member->parent = this;

    yang_name = "vlan"; yang_parent_name = "parameterized"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::~Vlan()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::has_data() const
{
    return shutdown.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (member !=  nullptr && member->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac" || name == "member" || name == "shutdown")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Ip()
    :
    igmp(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp>())
{
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::~Ip()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_data() const
{
    return (igmp !=  nullptr && igmp->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Igmp()
    :
    snooping(nullptr) // presence node
{

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::~Igmp()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Snooping()
    :
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"},
    static_{YType::str, "static"}
    	,
    check(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking>())
	,mrouter(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter>())
	,querier(nullptr) // presence node
{
    check->parent = this;
    explicit_tracking->parent = this;
    mrouter->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_data() const
{
    return immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| static_.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "mrouter" || name == "querier" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable" || name == "static")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::empty, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::Mrouter()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "mrouter"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::~Mrouter()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_data() const
{
    return interface.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::empty, "address"},
    max_response_time{YType::empty, "max-response-time"},
    query_interval{YType::empty, "query-interval"},
    tcn{YType::empty, "tcn"},
    timer{YType::empty, "timer"},
    version{YType::empty, "version"}
{

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| tcn.is_set
	|| timer.is_set
	|| version.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(tcn.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (tcn.is_set || is_set(tcn.yfilter)) leaf_name_data.push_back(tcn.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn")
    {
        tcn = value;
        tcn.value_namespace = name_space;
        tcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "tcn")
    {
        tcn.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "max-response-time" || name == "query-interval" || name == "tcn" || name == "timer" || name == "version")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Mac()
    :
    aging_time{YType::uint16, "aging-time"},
    learning{YType::empty, "learning"}
    	,
    limit(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit>())
{
    limit->parent = this;

    yang_name = "mac"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::~Mac()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_data() const
{
    return aging_time.is_set
	|| learning.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter)
	|| ydk::is_set(learning.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (learning.is_set || is_set(learning.yfilter)) leaf_name_data.push_back(learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning")
    {
        learning = value;
        learning.value_namespace = name_space;
        learning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
    if(value_path == "learning")
    {
        learning.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "aging-time" || name == "learning")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Limit()
    :
    action(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action>())
	,maximum(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum>())
{
    action->parent = this;
    maximum->parent = this;

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::~Limit()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action>();
        }
        return action;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Action()
    :
    flooding(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding>())
{
    flooding->parent = this;

    yang_name = "action"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::~Action()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_data() const
{
    return (flooding !=  nullptr && flooding->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_operation() const
{
    return is_set(yfilter)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::Flooding()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flooding"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::~Flooding()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_data() const
{
    return disable.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/action/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::Maximum()
    :
    addresses{YType::uint32, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::~Maximum()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::Member()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    service_engine{YType::uint8, "Service-Engine"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    vfi{YType::str, "vfi"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    vni{YType::uint32, "vni"},
    vpn{YType::uint32, "VPN"},
    y_controller{YType::str, "_controller"}
{

    yang_name = "member"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::~Member()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_data() const
{
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| service_engine.is_set
	|| sonet_acr.is_set
	|| tunnel_tp.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| vfi.is_set
	|| virtual_tokenring.is_set
	|| vni.is_set
	|| vpn.is_set
	|| y_controller.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_operation() const
{
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(analysis_module.yfilter)
	|| ydk::is_set(fcpa.yfilter)
	|| ydk::is_set(sbc.yfilter)
	|| ydk::is_set(service_engine.yfilter)
	|| ydk::is_set(sonet_acr.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter)
	|| ydk::is_set(ucse.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(vfi.yfilter)
	|| ydk::is_set(virtual_tokenring.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(y_controller.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.yfilter)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.yfilter)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.yfilter)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.yfilter)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.yfilter)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.yfilter)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.yfilter)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.yfilter)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (y_controller.is_set || is_set(y_controller.yfilter)) leaf_name_data.push_back(y_controller.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACR")
    {
        for(auto const & c : acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR>();
        c->parent = this;
        acr.push_back(c);
        return c;
    }

    if(child_yang_name == "mem-ipv4")
    {
        for(auto const & c : mem_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4>();
        c->parent = this;
        mem_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mem_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : member_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
        analysis_module.value_namespace = name_space;
        analysis_module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
        fcpa.value_namespace = name_space;
        fcpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SBC")
    {
        sbc = value;
        sbc.value_namespace = name_space;
        sbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
        service_engine.value_namespace = name_space;
        service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
        sonet_acr.value_namespace = name_space;
        sonet_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucse")
    {
        ucse = value;
        ucse.value_namespace = name_space;
        ucse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi")
    {
        vfi = value;
        vfi.value_namespace = name_space;
        vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
        virtual_tokenring.value_namespace = name_space;
        virtual_tokenring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VPN")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_controller")
    {
        y_controller = value;
        y_controller.value_namespace = name_space;
        y_controller.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module.yfilter = yfilter;
    }
    if(value_path == "Fcpa")
    {
        fcpa.yfilter = yfilter;
    }
    if(value_path == "SBC")
    {
        sbc.yfilter = yfilter;
    }
    if(value_path == "Service-Engine")
    {
        service_engine.yfilter = yfilter;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
    if(value_path == "ucse")
    {
        ucse.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "vfi")
    {
        vfi.yfilter = yfilter;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "VPN")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "_controller")
    {
        y_controller.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACR" || name == "mem-ipv4" || name == "member-interface" || name == "Analysis-Module" || name == "Fcpa" || name == "SBC" || name == "Service-Engine" || name == "SONET_ACR" || name == "Tunnel-tp" || name == "ucse" || name == "vasileft" || name == "vasiright" || name == "vfi" || name == "Virtual-TokenRing" || name == "vni" || name == "VPN" || name == "_controller")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ACR()
    :
    acr_int{YType::str, "acr-int"}
    	,
    service_instance(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance>())
{
    service_instance->parent = this;

    yang_name = "ACR"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::~ACR()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_data() const
{
    return acr_int.is_set
	|| (service_instance !=  nullptr && service_instance->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr_int.yfilter)
	|| (service_instance !=  nullptr && service_instance->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACR" <<"[acr-int='" <<acr_int <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr_int.is_set || is_set(acr_int.yfilter)) leaf_name_data.push_back(acr_int.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-instance")
    {
        if(service_instance == nullptr)
        {
            service_instance = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance>();
        }
        return service_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_instance != nullptr)
    {
        children["service-instance"] = service_instance;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr-int")
    {
        acr_int = value;
        acr_int.value_namespace = name_space;
        acr_int.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr-int")
    {
        acr_int.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-instance" || name == "acr-int")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::ServiceInstance()
{

    yang_name = "service-instance"; yang_parent_name = "ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::~ServiceInstance()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        for(auto const & c : id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::Id()
    :
    id{YType::uint16, "id"},
    split_horizon{YType::empty, "split-horizon"}
{

    yang_name = "id"; yang_parent_name = "service-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::~Id()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_data() const
{
    return id.is_set
	|| split_horizon.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(split_horizon.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "split-horizon")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemIpv4()
    :
    mem_ipv4{YType::str, "mem-ipv4"},
    template_{YType::str, "template"}
    	,
    encapsulation(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "mem-ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::~MemIpv4()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_data() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_data())
            return true;
    }
    return mem_ipv4.is_set
	|| template_.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_operation() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mem_ipv4.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-ipv4" <<"[mem-ipv4='" <<mem_ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_ipv4.is_set || is_set(mem_ipv4.yfilter)) leaf_name_data.push_back(mem_ipv4.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mem-vcid")
    {
        for(auto const & c : mem_vcid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid>();
        c->parent = this;
        mem_vcid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    for (auto const & c : mem_vcid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4 = value;
        mem_ipv4.value_namespace = name_space;
        mem_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mem-vcid" || name == "mem-ipv4" || name == "template")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::MemVcid()
    :
    mem_vcid{YType::uint32, "mem-vcid"}
    	,
    encapsulation(nullptr) // presence node
	,template_(nullptr) // presence node
{

    yang_name = "mem-vcid"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::~MemVcid()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_data() const
{
    return mem_vcid.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mem_vcid.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-vcid" <<"[mem-vcid='" <<mem_vcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "template" || name == "mem-vcid")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::Template_()
    :
    template_{YType::str, "template"}
{

    yang_name = "template"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::~Template_()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::has_data() const
{
    return template_.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::MemberInterface()
    :
    interface{YType::str, "interface"},
    interface_id{YType::str, "interface-id"},
    service_instance{YType::uint32, "service-instance"}
    	,
    split_horizon(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::~MemberInterface()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_data() const
{
    return interface.is_set
	|| interface_id.is_set
	|| service_instance.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "interface" || name == "interface-id" || name == "service-instance")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::~SplitHorizon()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::CallHome::CallHome()
    :
    contact_email_addr{YType::str, "Cisco-IOS-XE-call-home:contact-email-addr"}
    	,
    http_proxy(std::make_shared<Native::CallHome::HttpProxy>())
	,source_interface(std::make_shared<Native::CallHome::SourceInterface>())
{
    http_proxy->parent = this;
    source_interface->parent = this;

    yang_name = "call-home"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::~CallHome()
{
}

bool Native::CallHome::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return contact_email_addr.is_set
	|| (http_proxy !=  nullptr && http_proxy->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::CallHome::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(contact_email_addr.yfilter)
	|| (http_proxy !=  nullptr && http_proxy->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::CallHome::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "call-home";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contact_email_addr.is_set || is_set(contact_email_addr.yfilter)) leaf_name_data.push_back(contact_email_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http-proxy")
    {
        if(http_proxy == nullptr)
        {
            http_proxy = std::make_shared<Native::CallHome::HttpProxy>();
        }
        return http_proxy;
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CallHome::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::CallHome::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(http_proxy != nullptr)
    {
        children["http-proxy"] = http_proxy;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::CallHome::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "contact-email-addr")
    {
        contact_email_addr = value;
        contact_email_addr.value_namespace = name_space;
        contact_email_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "contact-email-addr")
    {
        contact_email_addr.yfilter = yfilter;
    }
}

bool Native::CallHome::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http-proxy" || name == "profile" || name == "source-interface" || name == "contact-email-addr")
        return true;
    return false;
}

Native::CallHome::HttpProxy::HttpProxy()
{

    yang_name = "http-proxy"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::HttpProxy::~HttpProxy()
{
}

bool Native::CallHome::HttpProxy::has_data() const
{
    for (std::size_t index=0; index<proxy_servers.size(); index++)
    {
        if(proxy_servers[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CallHome::HttpProxy::has_operation() const
{
    for (std::size_t index=0; index<proxy_servers.size(); index++)
    {
        if(proxy_servers[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CallHome::HttpProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::HttpProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:http-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::HttpProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::HttpProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy-servers")
    {
        for(auto const & c : proxy_servers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CallHome::HttpProxy::ProxyServers>();
        c->parent = this;
        proxy_servers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::HttpProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : proxy_servers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CallHome::HttpProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::HttpProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::HttpProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-servers")
        return true;
    return false;
}

Native::CallHome::HttpProxy::ProxyServers::ProxyServers()
    :
    proxy_server{YType::str, "proxy-server"},
    port{YType::uint16, "port"}
{

    yang_name = "proxy-servers"; yang_parent_name = "http-proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::HttpProxy::ProxyServers::~ProxyServers()
{
}

bool Native::CallHome::HttpProxy::ProxyServers::has_data() const
{
    return proxy_server.is_set
	|| port.is_set;
}

bool Native::CallHome::HttpProxy::ProxyServers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_server.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::CallHome::HttpProxy::ProxyServers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:http-proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::HttpProxy::ProxyServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-servers" <<"[proxy-server='" <<proxy_server <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::HttpProxy::ProxyServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_server.is_set || is_set(proxy_server.yfilter)) leaf_name_data.push_back(proxy_server.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::HttpProxy::ProxyServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::HttpProxy::ProxyServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::HttpProxy::ProxyServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-server")
    {
        proxy_server = value;
        proxy_server.value_namespace = name_space;
        proxy_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::HttpProxy::ProxyServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-server")
    {
        proxy_server.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::CallHome::HttpProxy::ProxyServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-server" || name == "port")
        return true;
    return false;
}

Native::CallHome::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    active{YType::boolean, "active"}
    	,
    destination(std::make_shared<Native::CallHome::Profile::Destination>())
	,subscribe_to_alert_group(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup>())
{
    destination->parent = this;
    subscribe_to_alert_group->parent = this;

    yang_name = "profile"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::Profile::~Profile()
{
}

bool Native::CallHome::Profile::has_data() const
{
    return profile_name.is_set
	|| active.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (subscribe_to_alert_group !=  nullptr && subscribe_to_alert_group->has_data());
}

bool Native::CallHome::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (subscribe_to_alert_group !=  nullptr && subscribe_to_alert_group->has_operation());
}

std::string Native::CallHome::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:profile" <<"[profile-name='" <<profile_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::CallHome::Profile::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "subscribe-to-alert-group")
    {
        if(subscribe_to_alert_group == nullptr)
        {
            subscribe_to_alert_group = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup>();
        }
        return subscribe_to_alert_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(subscribe_to_alert_group != nullptr)
    {
        children["subscribe-to-alert-group"] = subscribe_to_alert_group;
    }

    return children;
}

void Native::CallHome::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "subscribe-to-alert-group" || name == "profile-name" || name == "active")
        return true;
    return false;
}

Native::CallHome::Profile::Destination::Destination()
    :
    transport_method{YType::enumeration, "transport-method"}
    	,
    address(std::make_shared<Native::CallHome::Profile::Destination::Address>())
{
    address->parent = this;

    yang_name = "destination"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::Destination::~Destination()
{
}

bool Native::CallHome::Profile::Destination::has_data() const
{
    return transport_method.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::CallHome::Profile::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_method.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::CallHome::Profile::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_method.is_set || is_set(transport_method.yfilter)) leaf_name_data.push_back(transport_method.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::CallHome::Profile::Destination::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::CallHome::Profile::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-method")
    {
        transport_method = value;
        transport_method.value_namespace = name_space;
        transport_method.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-method")
    {
        transport_method.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "transport-method")
        return true;
    return false;
}

Native::CallHome::Profile::Destination::Address::Address()
    :
    email{YType::str, "email"},
    http{YType::str, "http"}
{

    yang_name = "address"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::Destination::Address::~Address()
{
}

bool Native::CallHome::Profile::Destination::Address::has_data() const
{
    return email.is_set
	|| http.is_set;
}

bool Native::CallHome::Profile::Destination::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(http.yfilter);
}

std::string Native::CallHome::Profile::Destination::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::Destination::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::Destination::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::Destination::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::Destination::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::Destination::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::Destination::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "email" || name == "http")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::SubscribeToAlertGroup()
    :
    configuration(nullptr) // presence node
	,diagnostic(nullptr) // presence node
	,environment(nullptr) // presence node
	,inventory(nullptr) // presence node
	,syslog(nullptr) // presence node
{

    yang_name = "subscribe-to-alert-group"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::~SubscribeToAlertGroup()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_data() const
{
    return (configuration !=  nullptr && configuration->has_data())
	|| (diagnostic !=  nullptr && diagnostic->has_data())
	|| (environment !=  nullptr && environment->has_data())
	|| (inventory !=  nullptr && inventory->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_operation() const
{
    return is_set(yfilter)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (diagnostic !=  nullptr && diagnostic->has_operation())
	|| (environment !=  nullptr && environment->has_operation())
	|| (inventory !=  nullptr && inventory->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscribe-to-alert-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "diagnostic")
    {
        if(diagnostic == nullptr)
        {
            diagnostic = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic>();
        }
        return diagnostic;
    }

    if(child_yang_name == "environment")
    {
        if(environment == nullptr)
        {
            environment = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Environment>();
        }
        return environment;
    }

    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory>();
        }
        return inventory;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(diagnostic != nullptr)
    {
        children["diagnostic"] = diagnostic;
    }

    if(environment != nullptr)
    {
        children["environment"] = environment;
    }

    if(inventory != nullptr)
    {
        children["inventory"] = inventory;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration" || name == "diagnostic" || name == "environment" || name == "inventory" || name == "syslog")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Configuration()
    :
    periodic(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic>())
{
    periodic->parent = this;

    yang_name = "configuration"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::~Configuration()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::has_data() const
{
    return (periodic !=  nullptr && periodic->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Periodic()
    :
    daily(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily>())
	,monthly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly>())
	,weekly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly>())
{
    daily->parent = this;
    monthly->parent = this;
    weekly->parent = this;

    yang_name = "periodic"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::~Periodic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (monthly !=  nullptr && monthly->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "monthly")
    {
        if(monthly == nullptr)
        {
            monthly = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly>();
        }
        return monthly;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::Daily()
    :
    begin_time{YType::str, "begin-time"}
{

    yang_name = "daily"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::~Daily()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::has_data() const
{
    return begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::Monthly()
    :
    begin_time{YType::str, "begin-time"},
    date{YType::uint8, "date"}
{

    yang_name = "monthly"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::~Monthly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_data() const
{
    return begin_time.is_set
	|| date.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter)
	|| ydk::is_set(date.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time" || name == "date")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::Weekly()
    :
    begin_time{YType::str, "begin-time"},
    day{YType::enumeration, "day"}
{

    yang_name = "weekly"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::~Weekly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_data() const
{
    return begin_time.is_set
	|| day.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter)
	|| ydk::is_set(day.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time" || name == "day")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Diagnostic()
    :
    severity{YType::enumeration, "severity"}
{

    yang_name = "diagnostic"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::~Diagnostic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::has_data() const
{
    return severity.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagnostic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Environment()
    :
    severity{YType::enumeration, "severity"}
{

    yang_name = "environment"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Environment::~Environment()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Environment::has_data() const
{
    return severity.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Environment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Inventory()
    :
    periodic(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic>())
{
    periodic->parent = this;

    yang_name = "inventory"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::~Inventory()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::has_data() const
{
    return (periodic !=  nullptr && periodic->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::has_operation() const
{
    return is_set(yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Periodic()
    :
    daily(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily>())
	,monthly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly>())
	,weekly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly>())
{
    daily->parent = this;
    monthly->parent = this;
    weekly->parent = this;

    yang_name = "periodic"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::~Periodic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (monthly !=  nullptr && monthly->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "monthly")
    {
        if(monthly == nullptr)
        {
            monthly = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly>();
        }
        return monthly;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::Daily()
    :
    begin_time{YType::str, "begin-time"}
{

    yang_name = "daily"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::~Daily()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::has_data() const
{
    return begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::Monthly()
    :
    begin_time{YType::str, "begin-time"},
    date{YType::uint8, "date"}
{

    yang_name = "monthly"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::~Monthly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_data() const
{
    return begin_time.is_set
	|| date.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter)
	|| ydk::is_set(date.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time" || name == "date")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::Weekly()
    :
    begin_time{YType::str, "begin-time"},
    day{YType::enumeration, "day"}
{

    yang_name = "weekly"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::~Weekly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_data() const
{
    return begin_time.is_set
	|| day.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter)
	|| ydk::is_set(day.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time" || name == "day")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Syslog()
{

    yang_name = "syslog"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::~Syslog()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::has_data() const
{
    for (std::size_t index=0; index<severity.size(); index++)
    {
        if(severity[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::has_operation() const
{
    for (std::size_t index=0; index<severity.size(); index++)
    {
        if(severity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "severity")
    {
        for(auto const & c : severity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity>();
        c->parent = this;
        severity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : severity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Severity()
    :
    value_{YType::enumeration, "value"},
    pattern{YType::str, "pattern"}
{

    yang_name = "severity"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::~Severity()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::has_data() const
{
    return value_.is_set
	|| pattern.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(pattern.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "severity" <<"[value='" <<value_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "pattern")
        return true;
    return false;
}

Native::CallHome::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::CallHome::SourceInterface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::CallHome::SourceInterface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::CallHome::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::CallHome::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::SourceInterface::~SourceInterface()
{
}

bool Native::CallHome::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::CallHome::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::CallHome::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::CallHome::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::CallHome::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::CallHome::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::CallHome::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::CallHome::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::CallHome::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::CallHome::SourceInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::CallHome::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::CallHome::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::CallHome::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::CallHome::SourceInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::CallHome::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::CallHome::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::CallHome::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::CallHome::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::CallHome::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::CallHome::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::CallHome::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CallHome::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::CallHome::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::CallHome::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::CallHome::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Card::Card()
    :
    bay{YType::uint32, "bay"},
    slot{YType::uint32, "slot"},
    type{YType::enumeration, "type"}
{

    yang_name = "card"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Card::~Card()
{
}

bool Native::Card::has_data() const
{
    return bay.is_set
	|| slot.is_set
	|| type.is_set;
}

bool Native::Card::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bay.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Card::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-card:card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bay.is_set || is_set(bay.yfilter)) leaf_name_data.push_back(bay.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bay")
    {
        bay = value;
        bay.value_namespace = name_space;
        bay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bay")
    {
        bay.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bay" || name == "slot" || name == "type")
        return true;
    return false;
}

Native::Cdp::Cdp()
    :
    run{YType::empty, "Cisco-IOS-XE-cdp:run"}
{

    yang_name = "cdp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cdp::~Cdp()
{
}

bool Native::Cdp::has_data() const
{
    return run.is_set;
}

bool Native::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Cdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "run")
        return true;
    return false;
}

Native::Cef::Cef()
    :
    table(std::make_shared<Native::Cef::Table>())
{
    table->parent = this;

    yang_name = "cef"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::~Cef()
{
}

bool Native::Cef::has_data() const
{
    return (table !=  nullptr && table->has_data());
}

bool Native::Cef::has_operation() const
{
    return is_set(yfilter)
	|| (table !=  nullptr && table->has_operation());
}

std::string Native::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table")
    {
        if(table == nullptr)
        {
            table = std::make_shared<Native::Cef::Table>();
        }
        return table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(table != nullptr)
    {
        children["table"] = table;
    }

    return children;
}

void Native::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Cef::Table::Table()
    :
    rate_monitor_period{YType::uint8, "rate-monitor-period"}
    	,
    consistency_check(std::make_shared<Native::Cef::Table::ConsistencyCheck>())
	,download(std::make_shared<Native::Cef::Table::Download>())
	,output_chain(std::make_shared<Native::Cef::Table::OutputChain>())
{
    consistency_check->parent = this;
    download->parent = this;
    output_chain->parent = this;

    yang_name = "table"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::~Table()
{
}

bool Native::Cef::Table::has_data() const
{
    return rate_monitor_period.is_set
	|| (consistency_check !=  nullptr && consistency_check->has_data())
	|| (download !=  nullptr && download->has_data())
	|| (output_chain !=  nullptr && output_chain->has_data());
}

bool Native::Cef::Table::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_monitor_period.yfilter)
	|| (consistency_check !=  nullptr && consistency_check->has_operation())
	|| (download !=  nullptr && download->has_operation())
	|| (output_chain !=  nullptr && output_chain->has_operation());
}

std::string Native::Cef::Table::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_monitor_period.is_set || is_set(rate_monitor_period.yfilter)) leaf_name_data.push_back(rate_monitor_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consistency-check")
    {
        if(consistency_check == nullptr)
        {
            consistency_check = std::make_shared<Native::Cef::Table::ConsistencyCheck>();
        }
        return consistency_check;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Cef::Table::Download>();
        }
        return download;
    }

    if(child_yang_name == "output-chain")
    {
        if(output_chain == nullptr)
        {
            output_chain = std::make_shared<Native::Cef::Table::OutputChain>();
        }
        return output_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(consistency_check != nullptr)
    {
        children["consistency-check"] = consistency_check;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    if(output_chain != nullptr)
    {
        children["output-chain"] = output_chain;
    }

    return children;
}

void Native::Cef::Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-monitor-period")
    {
        rate_monitor_period = value;
        rate_monitor_period.value_namespace = name_space;
        rate_monitor_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-monitor-period")
    {
        rate_monitor_period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consistency-check" || name == "download" || name == "output-chain" || name == "rate-monitor-period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::ConsistencyCheck()
    :
    ipv4(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4>())
	,ipv6(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "consistency-check"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::~ConsistencyCheck()
{
}

bool Native::Cef::Table::ConsistencyCheck::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::get_children() const
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

void Native::Cef::Table::ConsistencyCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Ipv4()
    :
    data_checking{YType::empty, "data-checking"},
    error_message{YType::empty, "error-message"}
    	,
    auto_repair(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair>())
	,type(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type>())
{
    auto_repair->parent = this;
    type->parent = this;

    yang_name = "ipv4"; yang_parent_name = "consistency-check"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::~Ipv4()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_data() const
{
    return data_checking.is_set
	|| error_message.is_set
	|| (auto_repair !=  nullptr && auto_repair->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_checking.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_checking.is_set || is_set(data_checking.yfilter)) leaf_name_data.push_back(data_checking.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-checking")
    {
        data_checking = value;
        data_checking.value_namespace = name_space;
        data_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-checking")
    {
        data_checking.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "type" || name == "data-checking" || name == "error-message")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::AutoRepair()
    :
    delay{YType::uint16, "delay"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "auto-repair"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::~AutoRepair()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_data() const
{
    return delay.is_set
	|| holddown.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "holddown")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::Type()
    :
    lc_detect{YType::empty, "lc-detect"}
    	,
    scan_ios_rib(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib>())
	,scan_lc_rp(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp>())
	,scan_rib_ios(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos>())
	,scan_rp_lc(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc>())
{
    scan_ios_rib->parent = this;
    scan_lc_rp->parent = this;
    scan_rib_ios->parent = this;
    scan_rp_lc->parent = this;

    yang_name = "type"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::~Type()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_data() const
{
    return lc_detect.is_set
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_data())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_data())
	|| (scan_rib_ios !=  nullptr && scan_rib_ios->has_data())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lc_detect.yfilter)
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_operation())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_operation())
	|| (scan_rib_ios !=  nullptr && scan_rib_ios->has_operation())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lc_detect.is_set || is_set(lc_detect.yfilter)) leaf_name_data.push_back(lc_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-ios-rib")
    {
        if(scan_ios_rib == nullptr)
        {
            scan_ios_rib = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib>();
        }
        return scan_ios_rib;
    }

    if(child_yang_name == "scan-lc-rp")
    {
        if(scan_lc_rp == nullptr)
        {
            scan_lc_rp = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp>();
        }
        return scan_lc_rp;
    }

    if(child_yang_name == "scan-rib-ios")
    {
        if(scan_rib_ios == nullptr)
        {
            scan_rib_ios = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos>();
        }
        return scan_rib_ios;
    }

    if(child_yang_name == "scan-rp-lc")
    {
        if(scan_rp_lc == nullptr)
        {
            scan_rp_lc = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc>();
        }
        return scan_rp_lc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_ios_rib != nullptr)
    {
        children["scan-ios-rib"] = scan_ios_rib;
    }

    if(scan_lc_rp != nullptr)
    {
        children["scan-lc-rp"] = scan_lc_rp;
    }

    if(scan_rib_ios != nullptr)
    {
        children["scan-rib-ios"] = scan_rib_ios;
    }

    if(scan_rp_lc != nullptr)
    {
        children["scan-rp-lc"] = scan_rp_lc;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lc-detect")
    {
        lc_detect = value;
        lc_detect.value_namespace = name_space;
        lc_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lc-detect")
    {
        lc_detect.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-ios-rib" || name == "scan-lc-rp" || name == "scan-rib-ios" || name == "scan-rp-lc" || name == "lc-detect")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanIosRib()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-ios-rib"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::~ScanIosRib()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-ios-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-ios-rib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-ios-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanLcRp()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-lc-rp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::~ScanLcRp()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-lc-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-lc-rp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-lc-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanRibIos()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rib-ios"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::~ScanRibIos()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rib-ios";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rib-ios"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-rib-ios/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanRpLc()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rp-lc"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::~ScanRpLc()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rp-lc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rp-lc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-rp-lc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Ipv6()
    :
    data_checking{YType::empty, "data-checking"},
    error_message{YType::empty, "error-message"}
    	,
    auto_repair(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair>())
	,type(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type>())
{
    auto_repair->parent = this;
    type->parent = this;

    yang_name = "ipv6"; yang_parent_name = "consistency-check"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::~Ipv6()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_data() const
{
    return data_checking.is_set
	|| error_message.is_set
	|| (auto_repair !=  nullptr && auto_repair->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_checking.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_checking.is_set || is_set(data_checking.yfilter)) leaf_name_data.push_back(data_checking.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-checking")
    {
        data_checking = value;
        data_checking.value_namespace = name_space;
        data_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-checking")
    {
        data_checking.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "type" || name == "data-checking" || name == "error-message")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::AutoRepair()
    :
    delay{YType::uint16, "delay"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "auto-repair"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::~AutoRepair()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_data() const
{
    return delay.is_set
	|| holddown.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "holddown")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::Type()
    :
    lc_detect{YType::empty, "lc-detect"}
    	,
    scan_ios_rib(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib>())
	,scan_lc_rp(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp>())
	,scan_rp_lc(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc>())
{
    scan_ios_rib->parent = this;
    scan_lc_rp->parent = this;
    scan_rp_lc->parent = this;

    yang_name = "type"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::~Type()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_data() const
{
    return lc_detect.is_set
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_data())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_data())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lc_detect.yfilter)
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_operation())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_operation())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lc_detect.is_set || is_set(lc_detect.yfilter)) leaf_name_data.push_back(lc_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-ios-rib")
    {
        if(scan_ios_rib == nullptr)
        {
            scan_ios_rib = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib>();
        }
        return scan_ios_rib;
    }

    if(child_yang_name == "scan-lc-rp")
    {
        if(scan_lc_rp == nullptr)
        {
            scan_lc_rp = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp>();
        }
        return scan_lc_rp;
    }

    if(child_yang_name == "scan-rp-lc")
    {
        if(scan_rp_lc == nullptr)
        {
            scan_rp_lc = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc>();
        }
        return scan_rp_lc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_ios_rib != nullptr)
    {
        children["scan-ios-rib"] = scan_ios_rib;
    }

    if(scan_lc_rp != nullptr)
    {
        children["scan-lc-rp"] = scan_lc_rp;
    }

    if(scan_rp_lc != nullptr)
    {
        children["scan-rp-lc"] = scan_rp_lc;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lc-detect")
    {
        lc_detect = value;
        lc_detect.value_namespace = name_space;
        lc_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lc-detect")
    {
        lc_detect.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-ios-rib" || name == "scan-lc-rp" || name == "scan-rp-lc" || name == "lc-detect")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanIosRib()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-ios-rib"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::~ScanIosRib()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-ios-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-ios-rib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-ios-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanLcRp()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-lc-rp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::~ScanLcRp()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-lc-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-lc-rp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-lc-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanRpLc()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rp-lc"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::~ScanRpLc()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rp-lc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rp-lc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-rp-lc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::Download::Download()
    :
    catch_all(std::make_shared<Native::Cef::Table::Download::CatchAll>())
	,connected_route(std::make_shared<Native::Cef::Table::Download::ConnectedRoute>())
	,default_route(std::make_shared<Native::Cef::Table::Download::DefaultRoute>())
	,receive_route(std::make_shared<Native::Cef::Table::Download::ReceiveRoute>())
	,recursive_dependents(std::make_shared<Native::Cef::Table::Download::RecursiveDependents>())
	,route_in_vrf(std::make_shared<Native::Cef::Table::Download::RouteInVrf>())
{
    catch_all->parent = this;
    connected_route->parent = this;
    default_route->parent = this;
    receive_route->parent = this;
    recursive_dependents->parent = this;
    route_in_vrf->parent = this;

    yang_name = "download"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::~Download()
{
}

bool Native::Cef::Table::Download::has_data() const
{
    return (catch_all !=  nullptr && catch_all->has_data())
	|| (connected_route !=  nullptr && connected_route->has_data())
	|| (default_route !=  nullptr && default_route->has_data())
	|| (receive_route !=  nullptr && receive_route->has_data())
	|| (recursive_dependents !=  nullptr && recursive_dependents->has_data())
	|| (route_in_vrf !=  nullptr && route_in_vrf->has_data());
}

bool Native::Cef::Table::Download::has_operation() const
{
    return is_set(yfilter)
	|| (catch_all !=  nullptr && catch_all->has_operation())
	|| (connected_route !=  nullptr && connected_route->has_operation())
	|| (default_route !=  nullptr && default_route->has_operation())
	|| (receive_route !=  nullptr && receive_route->has_operation())
	|| (recursive_dependents !=  nullptr && recursive_dependents->has_operation())
	|| (route_in_vrf !=  nullptr && route_in_vrf->has_operation());
}

std::string Native::Cef::Table::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catch-all")
    {
        if(catch_all == nullptr)
        {
            catch_all = std::make_shared<Native::Cef::Table::Download::CatchAll>();
        }
        return catch_all;
    }

    if(child_yang_name == "connected-route")
    {
        if(connected_route == nullptr)
        {
            connected_route = std::make_shared<Native::Cef::Table::Download::ConnectedRoute>();
        }
        return connected_route;
    }

    if(child_yang_name == "default-route")
    {
        if(default_route == nullptr)
        {
            default_route = std::make_shared<Native::Cef::Table::Download::DefaultRoute>();
        }
        return default_route;
    }

    if(child_yang_name == "receive-route")
    {
        if(receive_route == nullptr)
        {
            receive_route = std::make_shared<Native::Cef::Table::Download::ReceiveRoute>();
        }
        return receive_route;
    }

    if(child_yang_name == "recursive-dependents")
    {
        if(recursive_dependents == nullptr)
        {
            recursive_dependents = std::make_shared<Native::Cef::Table::Download::RecursiveDependents>();
        }
        return recursive_dependents;
    }

    if(child_yang_name == "route-in-vrf")
    {
        if(route_in_vrf == nullptr)
        {
            route_in_vrf = std::make_shared<Native::Cef::Table::Download::RouteInVrf>();
        }
        return route_in_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(catch_all != nullptr)
    {
        children["catch-all"] = catch_all;
    }

    if(connected_route != nullptr)
    {
        children["connected-route"] = connected_route;
    }

    if(default_route != nullptr)
    {
        children["default-route"] = default_route;
    }

    if(receive_route != nullptr)
    {
        children["receive-route"] = receive_route;
    }

    if(recursive_dependents != nullptr)
    {
        children["recursive-dependents"] = recursive_dependents;
    }

    if(route_in_vrf != nullptr)
    {
        children["route-in-vrf"] = route_in_vrf;
    }

    return children;
}

void Native::Cef::Table::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catch-all" || name == "connected-route" || name == "default-route" || name == "receive-route" || name == "recursive-dependents" || name == "route-in-vrf")
        return true;
    return false;
}

Native::Cef::Table::Download::CatchAll::CatchAll()
    :
    priority(std::make_shared<Native::Cef::Table::Download::CatchAll::Priority>())
{
    priority->parent = this;

    yang_name = "catch-all"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::CatchAll::~CatchAll()
{
}

bool Native::Cef::Table::Download::CatchAll::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::CatchAll::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::CatchAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::CatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catch-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::CatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::CatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::CatchAll::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::CatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::CatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::CatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::CatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::CatchAll::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "catch-all"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::CatchAll::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::CatchAll::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/catch-all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::CatchAll::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::CatchAll::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::CatchAll::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::CatchAll::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::CatchAll::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::CatchAll::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::ConnectedRoute::ConnectedRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::ConnectedRoute::Priority>())
{
    priority->parent = this;

    yang_name = "connected-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ConnectedRoute::~ConnectedRoute()
{
}

bool Native::Cef::Table::Download::ConnectedRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::ConnectedRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::ConnectedRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::ConnectedRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::ConnectedRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ConnectedRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::ConnectedRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/connected-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ConnectedRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ConnectedRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ConnectedRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ConnectedRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::ConnectedRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::ConnectedRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::DefaultRoute::DefaultRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::DefaultRoute::Priority>())
{
    priority->parent = this;

    yang_name = "default-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::DefaultRoute::~DefaultRoute()
{
}

bool Native::Cef::Table::Download::DefaultRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::DefaultRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::DefaultRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::DefaultRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::DefaultRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::DefaultRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::DefaultRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::DefaultRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::DefaultRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::DefaultRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::DefaultRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::DefaultRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "default-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::DefaultRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::DefaultRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/default-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::DefaultRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::DefaultRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::DefaultRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::DefaultRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::DefaultRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::DefaultRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::ReceiveRoute::ReceiveRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::ReceiveRoute::Priority>())
{
    priority->parent = this;

    yang_name = "receive-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ReceiveRoute::~ReceiveRoute()
{
}

bool Native::Cef::Table::Download::ReceiveRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::ReceiveRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::ReceiveRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ReceiveRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ReceiveRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ReceiveRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::ReceiveRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ReceiveRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::ReceiveRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::ReceiveRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::ReceiveRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::ReceiveRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "receive-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ReceiveRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::ReceiveRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/receive-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ReceiveRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ReceiveRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ReceiveRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ReceiveRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::ReceiveRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::ReceiveRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::RecursiveDependents::RecursiveDependents()
    :
    priority(std::make_shared<Native::Cef::Table::Download::RecursiveDependents::Priority>())
{
    priority->parent = this;

    yang_name = "recursive-dependents"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RecursiveDependents::~RecursiveDependents()
{
}

bool Native::Cef::Table::Download::RecursiveDependents::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::RecursiveDependents::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::RecursiveDependents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RecursiveDependents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive-dependents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RecursiveDependents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RecursiveDependents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::RecursiveDependents::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RecursiveDependents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::RecursiveDependents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::RecursiveDependents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::RecursiveDependents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::RecursiveDependents::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "recursive-dependents"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RecursiveDependents::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::RecursiveDependents::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/recursive-dependents/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RecursiveDependents::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RecursiveDependents::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RecursiveDependents::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RecursiveDependents::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::RecursiveDependents::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::RecursiveDependents::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::RouteInVrf::RouteInVrf()
    :
    priority(std::make_shared<Native::Cef::Table::Download::RouteInVrf::Priority>())
{
    priority->parent = this;

    yang_name = "route-in-vrf"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RouteInVrf::~RouteInVrf()
{
}

bool Native::Cef::Table::Download::RouteInVrf::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::RouteInVrf::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::RouteInVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RouteInVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-in-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RouteInVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RouteInVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::RouteInVrf::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RouteInVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::RouteInVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::RouteInVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::RouteInVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::RouteInVrf::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "route-in-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RouteInVrf::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::RouteInVrf::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/route-in-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RouteInVrf::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RouteInVrf::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RouteInVrf::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RouteInVrf::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::RouteInVrf::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::RouteInVrf::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::OutputChain()
    :
    build(std::make_shared<Native::Cef::Table::OutputChain::Build>())
{
    build->parent = this;

    yang_name = "output-chain"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::~OutputChain()
{
}

bool Native::Cef::Table::OutputChain::has_data() const
{
    return (build !=  nullptr && build->has_data());
}

bool Native::Cef::Table::OutputChain::has_operation() const
{
    return is_set(yfilter)
	|| (build !=  nullptr && build->has_operation());
}

std::string Native::Cef::Table::OutputChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "build")
    {
        if(build == nullptr)
        {
            build = std::make_shared<Native::Cef::Table::OutputChain::Build>();
        }
        return build;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(build != nullptr)
    {
        children["build"] = build;
    }

    return children;
}

void Native::Cef::Table::OutputChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::OutputChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::OutputChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "build")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Build()
    :
    favor(std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>())
	,indirection(std::make_shared<Native::Cef::Table::OutputChain::Build::Indirection>())
	,inplace_modify(std::make_shared<Native::Cef::Table::OutputChain::Build::InplaceModify>())
{
    favor->parent = this;
    indirection->parent = this;
    inplace_modify->parent = this;

    yang_name = "build"; yang_parent_name = "output-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::Build::~Build()
{
}

bool Native::Cef::Table::OutputChain::Build::has_data() const
{
    return (favor !=  nullptr && favor->has_data())
	|| (indirection !=  nullptr && indirection->has_data())
	|| (inplace_modify !=  nullptr && inplace_modify->has_data());
}

bool Native::Cef::Table::OutputChain::Build::has_operation() const
{
    return is_set(yfilter)
	|| (favor !=  nullptr && favor->has_operation())
	|| (indirection !=  nullptr && indirection->has_operation())
	|| (inplace_modify !=  nullptr && inplace_modify->has_operation());
}

std::string Native::Cef::Table::OutputChain::Build::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "build";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "favor")
    {
        if(favor == nullptr)
        {
            favor = std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>();
        }
        return favor;
    }

    if(child_yang_name == "indirection")
    {
        if(indirection == nullptr)
        {
            indirection = std::make_shared<Native::Cef::Table::OutputChain::Build::Indirection>();
        }
        return indirection;
    }

    if(child_yang_name == "inplace-modify")
    {
        if(inplace_modify == nullptr)
        {
            inplace_modify = std::make_shared<Native::Cef::Table::OutputChain::Build::InplaceModify>();
        }
        return inplace_modify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(favor != nullptr)
    {
        children["favor"] = favor;
    }

    if(indirection != nullptr)
    {
        children["indirection"] = indirection;
    }

    if(inplace_modify != nullptr)
    {
        children["inplace-modify"] = inplace_modify;
    }

    return children;
}

void Native::Cef::Table::OutputChain::Build::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::OutputChain::Build::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::OutputChain::Build::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "favor" || name == "indirection" || name == "inplace-modify")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Favor::Favor()
    :
    convergence_speed{YType::empty, "convergence-speed"},
    memory_utilization{YType::empty, "memory-utilization"}
{

    yang_name = "favor"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::Build::Favor::~Favor()
{
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_data() const
{
    return convergence_speed.is_set
	|| memory_utilization.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(convergence_speed.yfilter)
	|| ydk::is_set(memory_utilization.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "favor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::Favor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergence_speed.is_set || is_set(convergence_speed.yfilter)) leaf_name_data.push_back(convergence_speed.get_name_leafdata());
    if (memory_utilization.is_set || is_set(memory_utilization.yfilter)) leaf_name_data.push_back(memory_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::Favor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::Favor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::OutputChain::Build::Favor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed = value;
        convergence_speed.value_namespace = name_space;
        convergence_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization = value;
        memory_utilization.value_namespace = name_space;
        memory_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::Favor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed.yfilter = yfilter;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-speed" || name == "memory-utilization")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Indirection::Indirection()
    :
    ipv4_to_mpls{YType::empty, "ipv4-to-mpls"},
    ipv6_to_mpls{YType::empty, "ipv6-to-mpls"},
    mpls_end_of_stack{YType::empty, "mpls-end-of-stack"},
    mpls_non_end_of_stack{YType::empty, "mpls-non-end-of-stack"},
    non_recursive_prefix{YType::empty, "non-recursive-prefix"},
    recursive_prefix{YType::empty, "recursive-prefix"}
{

    yang_name = "indirection"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::Build::Indirection::~Indirection()
{
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_data() const
{
    return ipv4_to_mpls.is_set
	|| ipv6_to_mpls.is_set
	|| mpls_end_of_stack.is_set
	|| mpls_non_end_of_stack.is_set
	|| non_recursive_prefix.is_set
	|| recursive_prefix.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_to_mpls.yfilter)
	|| ydk::is_set(ipv6_to_mpls.yfilter)
	|| ydk::is_set(mpls_end_of_stack.yfilter)
	|| ydk::is_set(mpls_non_end_of_stack.yfilter)
	|| ydk::is_set(non_recursive_prefix.yfilter)
	|| ydk::is_set(recursive_prefix.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::Indirection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::Indirection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::Indirection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_to_mpls.is_set || is_set(ipv4_to_mpls.yfilter)) leaf_name_data.push_back(ipv4_to_mpls.get_name_leafdata());
    if (ipv6_to_mpls.is_set || is_set(ipv6_to_mpls.yfilter)) leaf_name_data.push_back(ipv6_to_mpls.get_name_leafdata());
    if (mpls_end_of_stack.is_set || is_set(mpls_end_of_stack.yfilter)) leaf_name_data.push_back(mpls_end_of_stack.get_name_leafdata());
    if (mpls_non_end_of_stack.is_set || is_set(mpls_non_end_of_stack.yfilter)) leaf_name_data.push_back(mpls_non_end_of_stack.get_name_leafdata());
    if (non_recursive_prefix.is_set || is_set(non_recursive_prefix.yfilter)) leaf_name_data.push_back(non_recursive_prefix.get_name_leafdata());
    if (recursive_prefix.is_set || is_set(recursive_prefix.yfilter)) leaf_name_data.push_back(recursive_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::Indirection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::Indirection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::OutputChain::Build::Indirection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-to-mpls")
    {
        ipv4_to_mpls = value;
        ipv4_to_mpls.value_namespace = name_space;
        ipv4_to_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-to-mpls")
    {
        ipv6_to_mpls = value;
        ipv6_to_mpls.value_namespace = name_space;
        ipv6_to_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-end-of-stack")
    {
        mpls_end_of_stack = value;
        mpls_end_of_stack.value_namespace = name_space;
        mpls_end_of_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-non-end-of-stack")
    {
        mpls_non_end_of_stack = value;
        mpls_non_end_of_stack.value_namespace = name_space;
        mpls_non_end_of_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive-prefix")
    {
        non_recursive_prefix = value;
        non_recursive_prefix.value_namespace = name_space;
        non_recursive_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-prefix")
    {
        recursive_prefix = value;
        recursive_prefix.value_namespace = name_space;
        recursive_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::Indirection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-to-mpls")
    {
        ipv4_to_mpls.yfilter = yfilter;
    }
    if(value_path == "ipv6-to-mpls")
    {
        ipv6_to_mpls.yfilter = yfilter;
    }
    if(value_path == "mpls-end-of-stack")
    {
        mpls_end_of_stack.yfilter = yfilter;
    }
    if(value_path == "mpls-non-end-of-stack")
    {
        mpls_non_end_of_stack.yfilter = yfilter;
    }
    if(value_path == "non-recursive-prefix")
    {
        non_recursive_prefix.yfilter = yfilter;
    }
    if(value_path == "recursive-prefix")
    {
        recursive_prefix.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-to-mpls" || name == "ipv6-to-mpls" || name == "mpls-end-of-stack" || name == "mpls-non-end-of-stack" || name == "non-recursive-prefix" || name == "recursive-prefix")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::InplaceModify::InplaceModify()
    :
    load_sharing{YType::empty, "load-sharing"},
    push_counter{YType::empty, "push-counter"}
{

    yang_name = "inplace-modify"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::Build::InplaceModify::~InplaceModify()
{
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_data() const
{
    return load_sharing.is_set
	|| push_counter.is_set;
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_sharing.yfilter)
	|| ydk::is_set(push_counter.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::InplaceModify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::InplaceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inplace-modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::InplaceModify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());
    if (push_counter.is_set || is_set(push_counter.yfilter)) leaf_name_data.push_back(push_counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::InplaceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::InplaceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::OutputChain::Build::InplaceModify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-sharing")
    {
        load_sharing = value;
        load_sharing.value_namespace = name_space;
        load_sharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-counter")
    {
        push_counter = value;
        push_counter.value_namespace = name_space;
        push_counter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::InplaceModify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-sharing")
    {
        load_sharing.yfilter = yfilter;
    }
    if(value_path == "push-counter")
    {
        push_counter.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-sharing" || name == "push-counter")
        return true;
    return false;
}

Native::CiscoIOSXENativeTemplate::CiscoIOSXENativeTemplate()
{

    yang_name = "Cisco-IOS-XE-native_template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXENativeTemplate::~CiscoIOSXENativeTemplate()
{
}

bool Native::CiscoIOSXENativeTemplate::has_data() const
{
    for (std::size_t index=0; index<template_details.size(); index++)
    {
        if(template_details[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXENativeTemplate::has_operation() const
{
    for (std::size_t index=0; index<template_details.size(); index++)
    {
        if(template_details[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXENativeTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXENativeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native_template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXENativeTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXENativeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template_details")
    {
        for(auto const & c : template_details)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails>();
        c->parent = this;
        template_details.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXENativeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_details)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXENativeTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXENativeTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXENativeTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template_details")
        return true;
    return false;
}

Native::CiscoIOSXENativeTemplate::TemplateDetails::TemplateDetails()
    :
    template_name{YType::str, "template_name"}
    	,
    ethernet(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "template_details"; yang_parent_name = "Cisco-IOS-XE-native_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXENativeTemplate::TemplateDetails::~TemplateDetails()
{
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::has_data() const
{
    return template_name.is_set
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::CiscoIOSXENativeTemplate::TemplateDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-native_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXENativeTemplate::TemplateDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-template:template_details" <<"[template_name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXENativeTemplate::TemplateDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXENativeTemplate::TemplateDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXENativeTemplate::TemplateDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::CiscoIOSXENativeTemplate::TemplateDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template_name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXENativeTemplate::TemplateDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template_name")
    {
        template_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "template_name")
        return true;
    return false;
}

Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Ethernet()
    :
    oam(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam>())
{
    oam->parent = this;

    yang_name = "ethernet"; yang_parent_name = "template_details"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::~Ethernet()
{
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::has_data() const
{
    return (oam !=  nullptr && oam->has_data());
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    return children;
}

void Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam")
        return true;
    return false;
}

Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::Oam()
    :
    link_monitor(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor>())
	,remote_failure(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::RemoteFailure>())
{
    link_monitor->parent = this;
    remote_failure->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::~Oam()
{
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::has_data() const
{
    return (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data());
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::has_operation() const
{
    return is_set(yfilter)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation());
}

std::string Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_monitor != nullptr)
    {
        children["link-monitor"] = link_monitor;
    }

    if(remote_failure != nullptr)
    {
        children["remote-failure"] = remote_failure;
    }

    return children;
}

void Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitor" || name == "remote-failure")
        return true;
    return false;
}

Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    window{YType::uint16, "window"}
    	,
    frame(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame>())
	,frame_period(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod>())
	,frame_seconds(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds>())
	,high_threshold(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold>())
	,receive_crc(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
	,symbol_period(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
	,transmit_crc(std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc>())
{
    frame->parent = this;
    frame_period->parent = this;
    frame_seconds->parent = this;
    high_threshold->parent = this;
    receive_crc->parent = this;
    symbol_period->parent = this;
    transmit_crc->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::has_data() const
{
    return window.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data())
	|| (transmit_crc !=  nullptr && transmit_crc->has_data());
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (receive_crc !=  nullptr && receive_crc->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation())
	|| (transmit_crc !=  nullptr && transmit_crc->has_operation());
}

std::string Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    if(child_yang_name == "transmit-crc")
    {
        if(transmit_crc == nullptr)
        {
            transmit_crc = std::make_shared<Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc>();
        }
        return transmit_crc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(high_threshold != nullptr)
    {
        children["high-threshold"] = high_threshold;
    }

    if(receive_crc != nullptr)
    {
        children["receive-crc"] = receive_crc;
    }

    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    if(transmit_crc != nullptr)
    {
        children["transmit-crc"] = transmit_crc;
    }

    return children;
}

void Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "high-threshold" || name == "receive-crc" || name == "symbol-period" || name == "transmit-crc" || name == "window")
        return true;
    return false;
}

const Enum::YLeaf Native::CallHome::Profile::Destination::TransportMethod::http {0, "http"};
const Enum::YLeaf Native::CallHome::Profile::Destination::TransportMethod::email {1, "email"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::major {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::warning {9, "warning"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::major {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::warning {9, "warning"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::major {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::warning {9, "warning"};

const Enum::YLeaf Native::Card::Type::t1 {0, "t1"};
const Enum::YLeaf Native::Card::Type::e1 {1, "e1"};


}
}

