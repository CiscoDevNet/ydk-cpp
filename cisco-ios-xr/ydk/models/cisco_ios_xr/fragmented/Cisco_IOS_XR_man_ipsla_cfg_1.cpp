
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_ipsla_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ipsla_cfg {

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemoteIpv4Address()
    :
    remotev4_address{YType::str, "remotev4-address"}
        ,
    remote_port_numbers(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers>())
{
    remote_port_numbers->parent = this;

    yang_name = "remote-ipv4-address"; yang_parent_name = "remote-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::~RemoteIpv4Address()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::has_data() const
{
    if (is_presence_container) return true;
    return remotev4_address.is_set
	|| (remote_port_numbers !=  nullptr && remote_port_numbers->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remotev4_address.yfilter)
	|| (remote_port_numbers !=  nullptr && remote_port_numbers->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipv4-address";
    ADD_KEY_TOKEN(remotev4_address, "remotev4-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remotev4_address.is_set || is_set(remotev4_address.yfilter)) leaf_name_data.push_back(remotev4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port-numbers")
    {
        if(remote_port_numbers == nullptr)
        {
            remote_port_numbers = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers>();
        }
        return remote_port_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_port_numbers != nullptr)
    {
        _children["remote-port-numbers"] = remote_port_numbers;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remotev4-address")
    {
        remotev4_address = value;
        remotev4_address.value_namespace = name_space;
        remotev4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remotev4-address")
    {
        remotev4_address.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port-numbers" || name == "remotev4-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumbers()
    :
    remote_port_number(this, {"remote_port"})
{

    yang_name = "remote-port-numbers"; yang_parent_name = "remote-ipv4-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::~RemotePortNumbers()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_port_number.len(); index++)
    {
        if(remote_port_number[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::has_operation() const
{
    for (std::size_t index=0; index<remote_port_number.len(); index++)
    {
        if(remote_port_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port-number")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber>();
        ent_->parent = this;
        remote_port_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_port_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port-number")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::RemotePortNumber()
    :
    remote_port{YType::uint16, "remote-port"}
        ,
    vrf_names(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames>())
{
    vrf_names->parent = this;

    yang_name = "remote-port-number"; yang_parent_name = "remote-port-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::~RemotePortNumber()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::has_data() const
{
    if (is_presence_container) return true;
    return remote_port.is_set
	|| (vrf_names !=  nullptr && vrf_names->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| (vrf_names !=  nullptr && vrf_names->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port-number";
    ADD_KEY_TOKEN(remote_port, "remote-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames>();
        }
        return vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_names != nullptr)
    {
        _children["vrf-names"] = vrf_names;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-names" || name == "remote-port")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfNames()
    :
    vrf_name(this, {"vrf_name"})
{

    yang_name = "vrf-names"; yang_parent_name = "remote-port-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::~VrfNames()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName>();
        ent_->parent = this;
        vrf_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::VrfName()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf-name"; yang_parent_name = "vrf-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::~VrfName()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Addresses()
    :
    remote_ipv6_address(this, {"remotev6_address"})
{

    yang_name = "remote-ipv6-addresses"; yang_parent_name = "remote-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::~RemoteIpv6Addresses()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_ipv6_address.len(); index++)
    {
        if(remote_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<remote_ipv6_address.len(); index++)
    {
        if(remote_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ipv6-address")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address>();
        ent_->parent = this;
        remote_ipv6_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_ipv6_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ipv6-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemoteIpv6Address()
    :
    remotev6_address{YType::str, "remotev6-address"}
        ,
    remote_port_numbers(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers>())
{
    remote_port_numbers->parent = this;

    yang_name = "remote-ipv6-address"; yang_parent_name = "remote-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::~RemoteIpv6Address()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::has_data() const
{
    if (is_presence_container) return true;
    return remotev6_address.is_set
	|| (remote_port_numbers !=  nullptr && remote_port_numbers->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remotev6_address.yfilter)
	|| (remote_port_numbers !=  nullptr && remote_port_numbers->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipv6-address";
    ADD_KEY_TOKEN(remotev6_address, "remotev6-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remotev6_address.is_set || is_set(remotev6_address.yfilter)) leaf_name_data.push_back(remotev6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port-numbers")
    {
        if(remote_port_numbers == nullptr)
        {
            remote_port_numbers = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers>();
        }
        return remote_port_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_port_numbers != nullptr)
    {
        _children["remote-port-numbers"] = remote_port_numbers;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remotev6-address")
    {
        remotev6_address = value;
        remotev6_address.value_namespace = name_space;
        remotev6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remotev6-address")
    {
        remotev6_address.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port-numbers" || name == "remotev6-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumbers()
    :
    remote_port_number(this, {"remote_port"})
{

    yang_name = "remote-port-numbers"; yang_parent_name = "remote-ipv6-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::~RemotePortNumbers()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_port_number.len(); index++)
    {
        if(remote_port_number[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::has_operation() const
{
    for (std::size_t index=0; index<remote_port_number.len(); index++)
    {
        if(remote_port_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port-number")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber>();
        ent_->parent = this;
        remote_port_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_port_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port-number")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::RemotePortNumber()
    :
    remote_port{YType::uint16, "remote-port"}
        ,
    vrf_names(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames>())
{
    vrf_names->parent = this;

    yang_name = "remote-port-number"; yang_parent_name = "remote-port-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::~RemotePortNumber()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::has_data() const
{
    if (is_presence_container) return true;
    return remote_port.is_set
	|| (vrf_names !=  nullptr && vrf_names->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| (vrf_names !=  nullptr && vrf_names->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port-number";
    ADD_KEY_TOKEN(remote_port, "remote-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames>();
        }
        return vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_names != nullptr)
    {
        _children["vrf-names"] = vrf_names;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-names" || name == "remote-port")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfNames()
    :
    vrf_name(this, {"vrf_name"})
{

    yang_name = "vrf-names"; yang_parent_name = "remote-port-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::~VrfNames()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName>();
        ent_->parent = this;
        vrf_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::VrfName()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf-name"; yang_parent_name = "vrf-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::~VrfName()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Addresses()
    :
    local_ipv4_address(this, {"localv4_address"})
{

    yang_name = "local-ipv4-addresses"; yang_parent_name = "local-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::~LocalIpv4Addresses()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_ipv4_address.len(); index++)
    {
        if(local_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<local_ipv4_address.len(); index++)
    {
        if(local_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-ipv4-address")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address>();
        ent_->parent = this;
        local_ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ipv4-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalIpv4Address()
    :
    localv4_address{YType::str, "localv4-address"}
        ,
    local_port_numbers(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers>())
{
    local_port_numbers->parent = this;

    yang_name = "local-ipv4-address"; yang_parent_name = "local-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::~LocalIpv4Address()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::has_data() const
{
    if (is_presence_container) return true;
    return localv4_address.is_set
	|| (local_port_numbers !=  nullptr && local_port_numbers->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localv4_address.yfilter)
	|| (local_port_numbers !=  nullptr && local_port_numbers->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ipv4-address";
    ADD_KEY_TOKEN(localv4_address, "localv4-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localv4_address.is_set || is_set(localv4_address.yfilter)) leaf_name_data.push_back(localv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port-numbers")
    {
        if(local_port_numbers == nullptr)
        {
            local_port_numbers = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers>();
        }
        return local_port_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_port_numbers != nullptr)
    {
        _children["local-port-numbers"] = local_port_numbers;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localv4-address")
    {
        localv4_address = value;
        localv4_address.value_namespace = name_space;
        localv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localv4-address")
    {
        localv4_address.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port-numbers" || name == "localv4-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumbers()
    :
    local_port_number(this, {"local_port"})
{

    yang_name = "local-port-numbers"; yang_parent_name = "local-ipv4-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::~LocalPortNumbers()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_port_number.len(); index++)
    {
        if(local_port_number[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::has_operation() const
{
    for (std::size_t index=0; index<local_port_number.len(); index++)
    {
        if(local_port_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port-number")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber>();
        ent_->parent = this;
        local_port_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_port_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port-number")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::LocalPortNumber()
    :
    local_port{YType::uint16, "local-port"}
        ,
    remote_ip(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp>())
{
    remote_ip->parent = this;

    yang_name = "local-port-number"; yang_parent_name = "local-port-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::~LocalPortNumber()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::has_data() const
{
    if (is_presence_container) return true;
    return local_port.is_set
	|| (remote_ip !=  nullptr && remote_ip->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| (remote_ip !=  nullptr && remote_ip->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port-number";
    ADD_KEY_TOKEN(local_port, "local-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ip")
    {
        if(remote_ip == nullptr)
        {
            remote_ip = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp>();
        }
        return remote_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_ip != nullptr)
    {
        _children["remote-ip"] = remote_ip;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ip" || name == "local-port")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIp()
    :
    remote_ipv4_addresses(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses>())
    , remote_ipv6_addresses(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses>())
{
    remote_ipv4_addresses->parent = this;
    remote_ipv6_addresses->parent = this;

    yang_name = "remote-ip"; yang_parent_name = "local-port-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::~RemoteIp()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::has_data() const
{
    if (is_presence_container) return true;
    return (remote_ipv4_addresses !=  nullptr && remote_ipv4_addresses->has_data())
	|| (remote_ipv6_addresses !=  nullptr && remote_ipv6_addresses->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::has_operation() const
{
    return is_set(yfilter)
	|| (remote_ipv4_addresses !=  nullptr && remote_ipv4_addresses->has_operation())
	|| (remote_ipv6_addresses !=  nullptr && remote_ipv6_addresses->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ipv4-addresses")
    {
        if(remote_ipv4_addresses == nullptr)
        {
            remote_ipv4_addresses = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses>();
        }
        return remote_ipv4_addresses;
    }

    if(child_yang_name == "remote-ipv6-addresses")
    {
        if(remote_ipv6_addresses == nullptr)
        {
            remote_ipv6_addresses = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses>();
        }
        return remote_ipv6_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_ipv4_addresses != nullptr)
    {
        _children["remote-ipv4-addresses"] = remote_ipv4_addresses;
    }

    if(remote_ipv6_addresses != nullptr)
    {
        _children["remote-ipv6-addresses"] = remote_ipv6_addresses;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ipv4-addresses" || name == "remote-ipv6-addresses")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Addresses()
    :
    remote_ipv4_address(this, {"remotev4_address"})
{

    yang_name = "remote-ipv4-addresses"; yang_parent_name = "remote-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::~RemoteIpv4Addresses()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_ipv4_address.len(); index++)
    {
        if(remote_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<remote_ipv4_address.len(); index++)
    {
        if(remote_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ipv4-address")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address>();
        ent_->parent = this;
        remote_ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ipv4-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemoteIpv4Address()
    :
    remotev4_address{YType::str, "remotev4-address"}
        ,
    remote_port_numbers(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers>())
{
    remote_port_numbers->parent = this;

    yang_name = "remote-ipv4-address"; yang_parent_name = "remote-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::~RemoteIpv4Address()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::has_data() const
{
    if (is_presence_container) return true;
    return remotev4_address.is_set
	|| (remote_port_numbers !=  nullptr && remote_port_numbers->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remotev4_address.yfilter)
	|| (remote_port_numbers !=  nullptr && remote_port_numbers->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipv4-address";
    ADD_KEY_TOKEN(remotev4_address, "remotev4-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remotev4_address.is_set || is_set(remotev4_address.yfilter)) leaf_name_data.push_back(remotev4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port-numbers")
    {
        if(remote_port_numbers == nullptr)
        {
            remote_port_numbers = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers>();
        }
        return remote_port_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_port_numbers != nullptr)
    {
        _children["remote-port-numbers"] = remote_port_numbers;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remotev4-address")
    {
        remotev4_address = value;
        remotev4_address.value_namespace = name_space;
        remotev4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remotev4-address")
    {
        remotev4_address.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port-numbers" || name == "remotev4-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumbers()
    :
    remote_port_number(this, {"remote_port"})
{

    yang_name = "remote-port-numbers"; yang_parent_name = "remote-ipv4-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::~RemotePortNumbers()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_port_number.len(); index++)
    {
        if(remote_port_number[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::has_operation() const
{
    for (std::size_t index=0; index<remote_port_number.len(); index++)
    {
        if(remote_port_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port-number")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber>();
        ent_->parent = this;
        remote_port_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_port_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port-number")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::RemotePortNumber()
    :
    remote_port{YType::uint16, "remote-port"}
        ,
    vrf_names(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames>())
{
    vrf_names->parent = this;

    yang_name = "remote-port-number"; yang_parent_name = "remote-port-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::~RemotePortNumber()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::has_data() const
{
    if (is_presence_container) return true;
    return remote_port.is_set
	|| (vrf_names !=  nullptr && vrf_names->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| (vrf_names !=  nullptr && vrf_names->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port-number";
    ADD_KEY_TOKEN(remote_port, "remote-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames>();
        }
        return vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_names != nullptr)
    {
        _children["vrf-names"] = vrf_names;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-names" || name == "remote-port")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfNames()
    :
    vrf_name(this, {"vrf_name"})
{

    yang_name = "vrf-names"; yang_parent_name = "remote-port-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::~VrfNames()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName>();
        ent_->parent = this;
        vrf_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::VrfName()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf-name"; yang_parent_name = "vrf-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::~VrfName()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Addresses()
    :
    remote_ipv6_address(this, {"remotev6_address"})
{

    yang_name = "remote-ipv6-addresses"; yang_parent_name = "remote-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::~RemoteIpv6Addresses()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_ipv6_address.len(); index++)
    {
        if(remote_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<remote_ipv6_address.len(); index++)
    {
        if(remote_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ipv6-address")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address>();
        ent_->parent = this;
        remote_ipv6_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_ipv6_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ipv6-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemoteIpv6Address()
    :
    remotev6_address{YType::str, "remotev6-address"}
        ,
    remote_port_numbers(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers>())
{
    remote_port_numbers->parent = this;

    yang_name = "remote-ipv6-address"; yang_parent_name = "remote-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::~RemoteIpv6Address()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::has_data() const
{
    if (is_presence_container) return true;
    return remotev6_address.is_set
	|| (remote_port_numbers !=  nullptr && remote_port_numbers->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remotev6_address.yfilter)
	|| (remote_port_numbers !=  nullptr && remote_port_numbers->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipv6-address";
    ADD_KEY_TOKEN(remotev6_address, "remotev6-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remotev6_address.is_set || is_set(remotev6_address.yfilter)) leaf_name_data.push_back(remotev6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port-numbers")
    {
        if(remote_port_numbers == nullptr)
        {
            remote_port_numbers = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers>();
        }
        return remote_port_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_port_numbers != nullptr)
    {
        _children["remote-port-numbers"] = remote_port_numbers;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remotev6-address")
    {
        remotev6_address = value;
        remotev6_address.value_namespace = name_space;
        remotev6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remotev6-address")
    {
        remotev6_address.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port-numbers" || name == "remotev6-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumbers()
    :
    remote_port_number(this, {"remote_port"})
{

    yang_name = "remote-port-numbers"; yang_parent_name = "remote-ipv6-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::~RemotePortNumbers()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_port_number.len(); index++)
    {
        if(remote_port_number[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::has_operation() const
{
    for (std::size_t index=0; index<remote_port_number.len(); index++)
    {
        if(remote_port_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port-number")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber>();
        ent_->parent = this;
        remote_port_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_port_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port-number")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::RemotePortNumber()
    :
    remote_port{YType::uint16, "remote-port"}
        ,
    vrf_names(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames>())
{
    vrf_names->parent = this;

    yang_name = "remote-port-number"; yang_parent_name = "remote-port-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::~RemotePortNumber()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::has_data() const
{
    if (is_presence_container) return true;
    return remote_port.is_set
	|| (vrf_names !=  nullptr && vrf_names->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| (vrf_names !=  nullptr && vrf_names->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port-number";
    ADD_KEY_TOKEN(remote_port, "remote-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames>();
        }
        return vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_names != nullptr)
    {
        _children["vrf-names"] = vrf_names;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-names" || name == "remote-port")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfNames()
    :
    vrf_name(this, {"vrf_name"})
{

    yang_name = "vrf-names"; yang_parent_name = "remote-port-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::~VrfNames()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName>();
        ent_->parent = this;
        vrf_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::VrfName()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf-name"; yang_parent_name = "vrf-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::~VrfName()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Ipsla::MplsDiscovery::MplsDiscovery()
    :
    vpn(std::make_shared<Ipsla::MplsDiscovery::Vpn>())
{
    vpn->parent = this;

    yang_name = "mpls-discovery"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsDiscovery::~MplsDiscovery()
{
}

bool Ipsla::MplsDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return (vpn !=  nullptr && vpn->has_data());
}

bool Ipsla::MplsDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Ipsla::MplsDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Ipsla::MplsDiscovery::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpn != nullptr)
    {
        _children["vpn"] = vpn;
    }

    return _children;
}

void Ipsla::MplsDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn")
        return true;
    return false;
}

Ipsla::MplsDiscovery::Vpn::Vpn()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "vpn"; yang_parent_name = "mpls-discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsDiscovery::Vpn::~Vpn()
{
}

bool Ipsla::MplsDiscovery::Vpn::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Ipsla::MplsDiscovery::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ipsla::MplsDiscovery::Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/mpls-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsDiscovery::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsDiscovery::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsDiscovery::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsDiscovery::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsDiscovery::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsDiscovery::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ipsla::MplsDiscovery::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Ipsla::ServerTwamp::ServerTwamp()
    :
    inactivity_timer{YType::uint32, "inactivity-timer"},
    port{YType::uint16, "port"}
{

    yang_name = "server-twamp"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::ServerTwamp::~ServerTwamp()
{
}

bool Ipsla::ServerTwamp::has_data() const
{
    if (is_presence_container) return true;
    return inactivity_timer.is_set
	|| port.is_set;
}

bool Ipsla::ServerTwamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity_timer.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Ipsla::ServerTwamp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::ServerTwamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-twamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::ServerTwamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity_timer.is_set || is_set(inactivity_timer.yfilter)) leaf_name_data.push_back(inactivity_timer.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::ServerTwamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::ServerTwamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::ServerTwamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity-timer")
    {
        inactivity_timer = value;
        inactivity_timer.value_namespace = name_space;
        inactivity_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::ServerTwamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity-timer")
    {
        inactivity_timer.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Ipsla::ServerTwamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity-timer" || name == "port")
        return true;
    return false;
}


}
}

