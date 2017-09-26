
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_cfg {

Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::RpfVectorEnable()
    :
    allow_ebgp{YType::empty, "allow-ebgp"},
    disable_ibgp{YType::empty, "disable-ibgp"},
    enable{YType::empty, "enable"}
{

    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_ebgp.yfilter)
	|| ydk::is_set(disable_ibgp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_ebgp.is_set || is_set(allow_ebgp.yfilter)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.yfilter)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
        allow_ebgp.value_namespace = name_space;
        allow_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
        disable_ibgp.value_namespace = name_space;
        disable_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp.yfilter = yfilter;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-ebgp" || name == "disable-ibgp" || name == "enable")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::SgExpiryTimer()
    :
    access_list_name{YType::str, "access-list-name"},
    interval{YType::uint32, "interval"}
{

    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "interval")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddresses()
{

    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sparse_mode_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sparse-mode-rp-address")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{

    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Ssm::Ssm()
    :
    disable{YType::boolean, "disable"},
    range{YType::str, "range"}
{

    yang_name = "ssm"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Vrfs::Vrf::Ipv6::Ssm::~Ssm()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Vrfs::Vrf::Ipv6::Ssm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "range")
        return true;
    return false;
}


}
}

