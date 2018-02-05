
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_smiap_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_smiap_cfg {

Ipv6Virtual::Ipv6Virtual()
    :
    use_as_source_address{YType::empty, "use-as-source-address"}
    	,
    vrfs(std::make_shared<Ipv6Virtual::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "ipv6-virtual"; yang_parent_name = "Cisco-IOS-XR-ipv6-smiap-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Ipv6Virtual::~Ipv6Virtual()
{
}

bool Ipv6Virtual::has_data() const
{
    return use_as_source_address.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv6Virtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_as_source_address.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv6Virtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-smiap-cfg:ipv6-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Virtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_as_source_address.is_set || is_set(use_as_source_address.yfilter)) leaf_name_data.push_back(use_as_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Virtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv6Virtual::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Virtual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv6Virtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-as-source-address")
    {
        use_as_source_address = value;
        use_as_source_address.value_namespace = name_space;
        use_as_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Virtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-as-source-address")
    {
        use_as_source_address.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Ipv6Virtual::clone_ptr() const
{
    return std::make_shared<Ipv6Virtual>();
}

std::string Ipv6Virtual::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Virtual::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Virtual::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6Virtual::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6Virtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "use-as-source-address")
        return true;
    return false;
}

Ipv6Virtual::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "ipv6-virtual"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6Virtual::Vrfs::~Vrfs()
{
}

bool Ipv6Virtual::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Virtual::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Virtual::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-smiap-cfg:ipv6-virtual/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Virtual::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Virtual::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Virtual::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Ipv6Virtual::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Virtual::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Virtual::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Virtual::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Virtual::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv6Virtual::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    address(nullptr) // presence node
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6Virtual::Vrfs::Vrf::~Vrf()
{
}

bool Ipv6Virtual::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv6Virtual::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ipv6Virtual::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-smiap-cfg:ipv6-virtual/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Virtual::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Virtual::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Virtual::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ipv6Virtual::Vrfs::Vrf::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Virtual::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Ipv6Virtual::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Virtual::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv6Virtual::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vrf-name")
        return true;
    return false;
}

Ipv6Virtual::Vrfs::Vrf::Address::Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "address"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Virtual::Vrfs::Vrf::Address::~Address()
{
}

bool Ipv6Virtual::Vrfs::Vrf::Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool Ipv6Virtual::Vrfs::Vrf::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Ipv6Virtual::Vrfs::Vrf::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Virtual::Vrfs::Vrf::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Virtual::Vrfs::Vrf::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Virtual::Vrfs::Vrf::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Virtual::Vrfs::Vrf::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Virtual::Vrfs::Vrf::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Ipv6Virtual::Vrfs::Vrf::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length")
        return true;
    return false;
}


}
}

