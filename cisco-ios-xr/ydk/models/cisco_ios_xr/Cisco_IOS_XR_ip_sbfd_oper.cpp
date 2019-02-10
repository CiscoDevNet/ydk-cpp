
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_sbfd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_sbfd_oper {

Sbfd::Sbfd()
    :
    target_identifier(std::make_shared<Sbfd::TargetIdentifier>())
{
    target_identifier->parent = this;

    yang_name = "sbfd"; yang_parent_name = "Cisco-IOS-XR-ip-sbfd-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Sbfd::~Sbfd()
{
}

bool Sbfd::has_data() const
{
    if (is_presence_container) return true;
    return (target_identifier !=  nullptr && target_identifier->has_data());
}

bool Sbfd::has_operation() const
{
    return is_set(yfilter)
	|| (target_identifier !=  nullptr && target_identifier->has_operation());
}

std::string Sbfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-identifier")
    {
        if(target_identifier == nullptr)
        {
            target_identifier = std::make_shared<Sbfd::TargetIdentifier>();
        }
        return target_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target_identifier != nullptr)
    {
        _children["target-identifier"] = target_identifier;
    }

    return _children;
}

void Sbfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Sbfd::clone_ptr() const
{
    return std::make_shared<Sbfd>();
}

std::string Sbfd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sbfd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sbfd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Sbfd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sbfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-identifier")
        return true;
    return false;
}

Sbfd::TargetIdentifier::TargetIdentifier()
    :
    remote_vrfs(std::make_shared<Sbfd::TargetIdentifier::RemoteVrfs>())
    , local_vrfs(std::make_shared<Sbfd::TargetIdentifier::LocalVrfs>())
{
    remote_vrfs->parent = this;
    local_vrfs->parent = this;

    yang_name = "target-identifier"; yang_parent_name = "sbfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Sbfd::TargetIdentifier::~TargetIdentifier()
{
}

bool Sbfd::TargetIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return (remote_vrfs !=  nullptr && remote_vrfs->has_data())
	|| (local_vrfs !=  nullptr && local_vrfs->has_data());
}

bool Sbfd::TargetIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| (remote_vrfs !=  nullptr && remote_vrfs->has_operation())
	|| (local_vrfs !=  nullptr && local_vrfs->has_operation());
}

std::string Sbfd::TargetIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::TargetIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::TargetIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::TargetIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-vrfs")
    {
        if(remote_vrfs == nullptr)
        {
            remote_vrfs = std::make_shared<Sbfd::TargetIdentifier::RemoteVrfs>();
        }
        return remote_vrfs;
    }

    if(child_yang_name == "local-vrfs")
    {
        if(local_vrfs == nullptr)
        {
            local_vrfs = std::make_shared<Sbfd::TargetIdentifier::LocalVrfs>();
        }
        return local_vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::TargetIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_vrfs != nullptr)
    {
        _children["remote-vrfs"] = remote_vrfs;
    }

    if(local_vrfs != nullptr)
    {
        _children["local-vrfs"] = local_vrfs;
    }

    return _children;
}

void Sbfd::TargetIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::TargetIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::TargetIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-vrfs" || name == "local-vrfs")
        return true;
    return false;
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrfs()
    :
    remote_vrf(this, {"vrf_name"})
{

    yang_name = "remote-vrfs"; yang_parent_name = "target-identifier"; is_top_level_class = false; has_list_ancestor = false; 
}

Sbfd::TargetIdentifier::RemoteVrfs::~RemoteVrfs()
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_vrf.len(); index++)
    {
        if(remote_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::TargetIdentifier::RemoteVrfs::has_operation() const
{
    for (std::size_t index=0; index<remote_vrf.len(); index++)
    {
        if(remote_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/target-identifier/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::TargetIdentifier::RemoteVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::TargetIdentifier::RemoteVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-vrf")
    {
        auto ent_ = std::make_shared<Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf>();
        ent_->parent = this;
        remote_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::TargetIdentifier::RemoteVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sbfd::TargetIdentifier::RemoteVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::TargetIdentifier::RemoteVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-vrf")
        return true;
    return false;
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteVrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    remote_discriminator(this, {})
{

    yang_name = "remote-vrf"; yang_parent_name = "remote-vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::~RemoteVrf()
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_discriminator.len(); index++)
    {
        if(remote_discriminator[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::has_operation() const
{
    for (std::size_t index=0; index<remote_discriminator.len(); index++)
    {
        if(remote_discriminator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/target-identifier/remote-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-discriminator")
    {
        auto ent_ = std::make_shared<Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator>();
        ent_->parent = this;
        remote_discriminator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_discriminator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-discriminator" || name == "vrf-name")
        return true;
    return false;
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::RemoteDiscriminator()
    :
    vrf_name{YType::str, "vrf-name"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    address{YType::str, "address"},
    tid_type{YType::enumeration, "tid-type"},
    discr{YType::uint32, "discr"},
    vrf_name_xr{YType::str, "vrf-name-xr"},
    status{YType::str, "status"},
    discr_src{YType::str, "discr-src"}
        ,
    ip_address(std::make_shared<Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress>())
{
    ip_address->parent = this;

    yang_name = "remote-discriminator"; yang_parent_name = "remote-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::~RemoteDiscriminator()
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| remote_discriminator.is_set
	|| address.is_set
	|| tid_type.is_set
	|| discr.is_set
	|| vrf_name_xr.is_set
	|| status.is_set
	|| discr_src.is_set
	|| (ip_address !=  nullptr && ip_address->has_data());
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(tid_type.yfilter)
	|| ydk::is_set(discr.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(discr_src.yfilter)
	|| (ip_address !=  nullptr && ip_address->has_operation());
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-discriminator";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (tid_type.is_set || is_set(tid_type.yfilter)) leaf_name_data.push_back(tid_type.get_name_leafdata());
    if (discr.is_set || is_set(discr.yfilter)) leaf_name_data.push_back(discr.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (discr_src.is_set || is_set(discr_src.yfilter)) leaf_name_data.push_back(discr_src.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        if(ip_address == nullptr)
        {
            ip_address = std::make_shared<Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress>();
        }
        return ip_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_address != nullptr)
    {
        _children["ip-address"] = ip_address;
    }

    return _children;
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid-type")
    {
        tid_type = value;
        tid_type.value_namespace = name_space;
        tid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discr")
    {
        discr = value;
        discr.value_namespace = name_space;
        discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discr-src")
    {
        discr_src = value;
        discr_src.value_namespace = name_space;
        discr_src.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "tid-type")
    {
        tid_type.yfilter = yfilter;
    }
    if(value_path == "discr")
    {
        discr.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "discr-src")
    {
        discr_src.yfilter = yfilter;
    }
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "vrf-name" || name == "remote-discriminator" || name == "address" || name == "tid-type" || name == "discr" || name == "vrf-name-xr" || name == "status" || name == "discr-src")
        return true;
    return false;
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::IpAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-address"; yang_parent_name = "remote-discriminator"; is_top_level_class = false; has_list_ancestor = true; 
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::~IpAddress()
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrfs()
    :
    local_vrf(this, {"vrf_name"})
{

    yang_name = "local-vrfs"; yang_parent_name = "target-identifier"; is_top_level_class = false; has_list_ancestor = false; 
}

Sbfd::TargetIdentifier::LocalVrfs::~LocalVrfs()
{
}

bool Sbfd::TargetIdentifier::LocalVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_vrf.len(); index++)
    {
        if(local_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::TargetIdentifier::LocalVrfs::has_operation() const
{
    for (std::size_t index=0; index<local_vrf.len(); index++)
    {
        if(local_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sbfd::TargetIdentifier::LocalVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/target-identifier/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::TargetIdentifier::LocalVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::TargetIdentifier::LocalVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::TargetIdentifier::LocalVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-vrf")
    {
        auto ent_ = std::make_shared<Sbfd::TargetIdentifier::LocalVrfs::LocalVrf>();
        ent_->parent = this;
        local_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::TargetIdentifier::LocalVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sbfd::TargetIdentifier::LocalVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sbfd::TargetIdentifier::LocalVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sbfd::TargetIdentifier::LocalVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-vrf")
        return true;
    return false;
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalVrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    local_discriminator(this, {})
{

    yang_name = "local-vrf"; yang_parent_name = "local-vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::~LocalVrf()
{
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_discriminator.len(); index++)
    {
        if(local_discriminator[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::has_operation() const
{
    for (std::size_t index=0; index<local_discriminator.len(); index++)
    {
        if(local_discriminator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/target-identifier/local-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-discriminator")
    {
        auto ent_ = std::make_shared<Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator>();
        ent_->parent = this;
        local_discriminator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_discriminator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-discriminator" || name == "vrf-name")
        return true;
    return false;
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::LocalDiscriminator()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    vrf_name{YType::str, "vrf-name"},
    discr{YType::uint32, "discr"},
    vrf_name_xr{YType::str, "vrf-name-xr"},
    flags{YType::str, "flags"},
    status{YType::str, "status"},
    discr_src{YType::str, "discr-src"}
{

    yang_name = "local-discriminator"; yang_parent_name = "local-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::~LocalDiscriminator()
{
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::has_data() const
{
    if (is_presence_container) return true;
    return local_discriminator.is_set
	|| vrf_name.is_set
	|| discr.is_set
	|| vrf_name_xr.is_set
	|| flags.is_set
	|| status.is_set
	|| discr_src.is_set;
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(discr.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(discr_src.yfilter);
}

std::string Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-discriminator";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (discr.is_set || is_set(discr.yfilter)) leaf_name_data.push_back(discr.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (discr_src.is_set || is_set(discr_src.yfilter)) leaf_name_data.push_back(discr_src.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discr")
    {
        discr = value;
        discr.value_namespace = name_space;
        discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discr-src")
    {
        discr_src = value;
        discr_src.value_namespace = name_space;
        discr_src.value_namespace_prefix = name_space_prefix;
    }
}

void Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "discr")
    {
        discr.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "discr-src")
    {
        discr_src.yfilter = yfilter;
    }
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-discriminator" || name == "vrf-name" || name == "discr" || name == "vrf-name-xr" || name == "flags" || name == "status" || name == "discr-src")
        return true;
    return false;
}

const Enum::YLeaf SbfdAddressFamily::ipv4 {1, "ipv4"};
const Enum::YLeaf SbfdAddressFamily::ipv6 {2, "ipv6"};

const Enum::YLeaf BfdAfId::bfd_af_id_none {0, "bfd-af-id-none"};
const Enum::YLeaf BfdAfId::bfd_af_id_ipv4 {2, "bfd-af-id-ipv4"};
const Enum::YLeaf BfdAfId::bfd_af_id_ipv6 {10, "bfd-af-id-ipv6"};


}
}

