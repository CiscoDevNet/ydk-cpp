
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_smiap_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_smiap_cfg {

Ipv4Virtual::Ipv4Virtual()
    :
    use_as_source_address{YType::empty, "use-as-source-address"}
        ,
    vrfs(std::make_shared<Ipv4Virtual::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "ipv4-virtual"; yang_parent_name = "Cisco-IOS-XR-ipv4-smiap-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv4Virtual::~Ipv4Virtual()
{
}

bool Ipv4Virtual::has_data() const
{
    if (is_presence_container) return true;
    return use_as_source_address.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Virtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_as_source_address.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Virtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-smiap-cfg:ipv4-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Virtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_as_source_address.is_set || is_set(use_as_source_address.yfilter)) leaf_name_data.push_back(use_as_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4Virtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Virtual::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4Virtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void Ipv4Virtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-as-source-address")
    {
        use_as_source_address = value;
        use_as_source_address.value_namespace = name_space;
        use_as_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Virtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-as-source-address")
    {
        use_as_source_address.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Ipv4Virtual::clone_ptr() const
{
    return std::make_shared<Ipv4Virtual>();
}

std::string Ipv4Virtual::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Virtual::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Virtual::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv4Virtual::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv4Virtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "use-as-source-address")
        return true;
    return false;
}

Ipv4Virtual::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "ipv4-virtual"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4Virtual::Vrfs::~Vrfs()
{
}

bool Ipv4Virtual::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Virtual::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Virtual::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-smiap-cfg:ipv4-virtual/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Virtual::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Virtual::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4Virtual::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Ipv4Virtual::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4Virtual::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4Virtual::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Virtual::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Virtual::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv4Virtual::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    address(nullptr) // presence node
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4Virtual::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Virtual::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv4Virtual::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ipv4Virtual::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-smiap-cfg:ipv4-virtual/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Virtual::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Virtual::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4Virtual::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ipv4Virtual::Vrfs::Vrf::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4Virtual::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Ipv4Virtual::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Virtual::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Virtual::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Virtual::Vrfs::Vrf::Address::Address()
    :
    address{YType::str, "address"},
    netmask{YType::uint8, "netmask"}
{

    yang_name = "address"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipv4Virtual::Vrfs::Vrf::Address::~Address()
{
}

bool Ipv4Virtual::Vrfs::Vrf::Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| netmask.is_set;
}

bool Ipv4Virtual::Vrfs::Vrf::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter);
}

std::string Ipv4Virtual::Vrfs::Vrf::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Virtual::Vrfs::Vrf::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4Virtual::Vrfs::Vrf::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4Virtual::Vrfs::Vrf::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4Virtual::Vrfs::Vrf::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Virtual::Vrfs::Vrf::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
}

bool Ipv4Virtual::Vrfs::Vrf::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask")
        return true;
    return false;
}


}
}

