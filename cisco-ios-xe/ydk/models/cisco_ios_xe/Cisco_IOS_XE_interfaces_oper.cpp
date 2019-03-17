
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_interfaces_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_interfaces_oper {

Interfaces::Interfaces()
    :
    interface(this, {"name"})
{

    yang_name = "interfaces"; yang_parent_name = "Cisco-IOS-XE-interfaces-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Interfaces::~Interfaces()
{
}

bool Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces-oper:interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Interfaces::clone_ptr() const
{
    return std::make_shared<Interfaces>();
}

std::string Interfaces::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Interfaces::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Interfaces::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Interfaces::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    interface_type{YType::enumeration, "interface-type"},
    admin_status{YType::enumeration, "admin-status"},
    oper_status{YType::enumeration, "oper-status"},
    last_change{YType::str, "last-change"},
    if_index{YType::int32, "if-index"},
    phys_address{YType::str, "phys-address"},
    higher_layer_if{YType::str, "higher-layer-if"},
    lower_layer_if{YType::str, "lower-layer-if"},
    speed{YType::uint64, "speed"},
    vrf{YType::str, "vrf"},
    ipv4{YType::str, "ipv4"},
    ipv4_subnet_mask{YType::str, "ipv4-subnet-mask"},
    description{YType::str, "description"},
    mtu{YType::uint32, "mtu"},
    input_security_acl{YType::str, "input-security-acl"},
    output_security_acl{YType::str, "output-security-acl"},
    bia_address{YType::str, "bia-address"},
    ipv6_addrs{YType::str, "ipv6-addrs"},
    ipv4_tcp_adjust_mss{YType::uint16, "ipv4-tcp-adjust-mss"},
    ipv6_tcp_adjust_mss{YType::uint16, "ipv6-tcp-adjust-mss"},
    intf_class_unspecified{YType::boolean, "intf-class-unspecified"}
        ,
    statistics(std::make_shared<Interfaces::Interface::Statistics>())
    , diffserv_info(this, {"direction", "policy_name"})
    , v4_protocol_stats(std::make_shared<Interfaces::Interface::V4ProtocolStats>())
    , v6_protocol_stats(std::make_shared<Interfaces::Interface::V6ProtocolStats>())
    , lag_aggregate_state(this, {"aggregate_id"})
    , ether_state(std::make_shared<Interfaces::Interface::EtherState>())
    , ether_stats(std::make_shared<Interfaces::Interface::EtherStats>())
    , serial_state(std::make_shared<Interfaces::Interface::SerialState>())
    , serial_stats(std::make_shared<Interfaces::Interface::SerialStats>())
{
    statistics->parent = this;
    v4_protocol_stats->parent = this;
    v6_protocol_stats->parent = this;
    ether_state->parent = this;
    ether_stats->parent = this;
    serial_state->parent = this;
    serial_stats->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Interfaces::Interface::~Interface()
{
}

bool Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffserv_info.len(); index++)
    {
        if(diffserv_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lag_aggregate_state.len(); index++)
    {
        if(lag_aggregate_state[index]->has_data())
            return true;
    }
    for (auto const & leaf : higher_layer_if.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lower_layer_if.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_addrs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| interface_type.is_set
	|| admin_status.is_set
	|| oper_status.is_set
	|| last_change.is_set
	|| if_index.is_set
	|| phys_address.is_set
	|| speed.is_set
	|| vrf.is_set
	|| ipv4.is_set
	|| ipv4_subnet_mask.is_set
	|| description.is_set
	|| mtu.is_set
	|| input_security_acl.is_set
	|| output_security_acl.is_set
	|| bia_address.is_set
	|| ipv4_tcp_adjust_mss.is_set
	|| ipv6_tcp_adjust_mss.is_set
	|| intf_class_unspecified.is_set
	|| (statistics !=  nullptr && statistics->has_data())
	|| (v4_protocol_stats !=  nullptr && v4_protocol_stats->has_data())
	|| (v6_protocol_stats !=  nullptr && v6_protocol_stats->has_data())
	|| (ether_state !=  nullptr && ether_state->has_data())
	|| (ether_stats !=  nullptr && ether_stats->has_data())
	|| (serial_state !=  nullptr && serial_state->has_data())
	|| (serial_stats !=  nullptr && serial_stats->has_data());
}

bool Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<diffserv_info.len(); index++)
    {
        if(diffserv_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lag_aggregate_state.len(); index++)
    {
        if(lag_aggregate_state[index]->has_operation())
            return true;
    }
    for (auto const & leaf : higher_layer_if.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lower_layer_if.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_addrs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(last_change.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(phys_address.yfilter)
	|| ydk::is_set(higher_layer_if.yfilter)
	|| ydk::is_set(lower_layer_if.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv4_subnet_mask.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(input_security_acl.yfilter)
	|| ydk::is_set(output_security_acl.yfilter)
	|| ydk::is_set(bia_address.yfilter)
	|| ydk::is_set(ipv6_addrs.yfilter)
	|| ydk::is_set(ipv4_tcp_adjust_mss.yfilter)
	|| ydk::is_set(ipv6_tcp_adjust_mss.yfilter)
	|| ydk::is_set(intf_class_unspecified.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (v4_protocol_stats !=  nullptr && v4_protocol_stats->has_operation())
	|| (v6_protocol_stats !=  nullptr && v6_protocol_stats->has_operation())
	|| (ether_state !=  nullptr && ether_state->has_operation())
	|| (ether_stats !=  nullptr && ether_stats->has_operation())
	|| (serial_state !=  nullptr && serial_state->has_operation())
	|| (serial_stats !=  nullptr && serial_stats->has_operation());
}

std::string Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces-oper:interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.yfilter)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (phys_address.is_set || is_set(phys_address.yfilter)) leaf_name_data.push_back(phys_address.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv4_subnet_mask.is_set || is_set(ipv4_subnet_mask.yfilter)) leaf_name_data.push_back(ipv4_subnet_mask.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (input_security_acl.is_set || is_set(input_security_acl.yfilter)) leaf_name_data.push_back(input_security_acl.get_name_leafdata());
    if (output_security_acl.is_set || is_set(output_security_acl.yfilter)) leaf_name_data.push_back(output_security_acl.get_name_leafdata());
    if (bia_address.is_set || is_set(bia_address.yfilter)) leaf_name_data.push_back(bia_address.get_name_leafdata());
    if (ipv4_tcp_adjust_mss.is_set || is_set(ipv4_tcp_adjust_mss.yfilter)) leaf_name_data.push_back(ipv4_tcp_adjust_mss.get_name_leafdata());
    if (ipv6_tcp_adjust_mss.is_set || is_set(ipv6_tcp_adjust_mss.yfilter)) leaf_name_data.push_back(ipv6_tcp_adjust_mss.get_name_leafdata());
    if (intf_class_unspecified.is_set || is_set(intf_class_unspecified.yfilter)) leaf_name_data.push_back(intf_class_unspecified.get_name_leafdata());

    auto higher_layer_if_name_datas = higher_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), higher_layer_if_name_datas.begin(), higher_layer_if_name_datas.end());
    auto lower_layer_if_name_datas = lower_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lower_layer_if_name_datas.begin(), lower_layer_if_name_datas.end());
    auto ipv6_addrs_name_datas = ipv6_addrs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_addrs_name_datas.begin(), ipv6_addrs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Interfaces::Interface::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "diffserv-info")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo>();
        ent_->parent = this;
        diffserv_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v4-protocol-stats")
    {
        if(v4_protocol_stats == nullptr)
        {
            v4_protocol_stats = std::make_shared<Interfaces::Interface::V4ProtocolStats>();
        }
        return v4_protocol_stats;
    }

    if(child_yang_name == "v6-protocol-stats")
    {
        if(v6_protocol_stats == nullptr)
        {
            v6_protocol_stats = std::make_shared<Interfaces::Interface::V6ProtocolStats>();
        }
        return v6_protocol_stats;
    }

    if(child_yang_name == "lag-aggregate-state")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::LagAggregateState>();
        ent_->parent = this;
        lag_aggregate_state.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ether-state")
    {
        if(ether_state == nullptr)
        {
            ether_state = std::make_shared<Interfaces::Interface::EtherState>();
        }
        return ether_state;
    }

    if(child_yang_name == "ether-stats")
    {
        if(ether_stats == nullptr)
        {
            ether_stats = std::make_shared<Interfaces::Interface::EtherStats>();
        }
        return ether_stats;
    }

    if(child_yang_name == "serial-state")
    {
        if(serial_state == nullptr)
        {
            serial_state = std::make_shared<Interfaces::Interface::SerialState>();
        }
        return serial_state;
    }

    if(child_yang_name == "serial-stats")
    {
        if(serial_stats == nullptr)
        {
            serial_stats = std::make_shared<Interfaces::Interface::SerialStats>();
        }
        return serial_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : diffserv_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(v4_protocol_stats != nullptr)
    {
        _children["v4-protocol-stats"] = v4_protocol_stats;
    }

    if(v6_protocol_stats != nullptr)
    {
        _children["v6-protocol-stats"] = v6_protocol_stats;
    }

    count_ = 0;
    for (auto ent_ : lag_aggregate_state.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ether_state != nullptr)
    {
        _children["ether-state"] = ether_state;
    }

    if(ether_stats != nullptr)
    {
        _children["ether-stats"] = ether_stats;
    }

    if(serial_state != nullptr)
    {
        _children["serial-state"] = serial_state;
    }

    if(serial_stats != nullptr)
    {
        _children["serial-stats"] = serial_stats;
    }

    return _children;
}

void Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-change")
    {
        last_change = value;
        last_change.value_namespace = name_space;
        last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-address")
    {
        phys_address = value;
        phys_address.value_namespace = name_space;
        phys_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-layer-if")
    {
        higher_layer_if.append(value);
    }
    if(value_path == "lower-layer-if")
    {
        lower_layer_if.append(value);
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-subnet-mask")
    {
        ipv4_subnet_mask = value;
        ipv4_subnet_mask.value_namespace = name_space;
        ipv4_subnet_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-security-acl")
    {
        input_security_acl = value;
        input_security_acl.value_namespace = name_space;
        input_security_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-security-acl")
    {
        output_security_acl = value;
        output_security_acl.value_namespace = name_space;
        output_security_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bia-address")
    {
        bia_address = value;
        bia_address.value_namespace = name_space;
        bia_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addrs")
    {
        ipv6_addrs.append(value);
    }
    if(value_path == "ipv4-tcp-adjust-mss")
    {
        ipv4_tcp_adjust_mss = value;
        ipv4_tcp_adjust_mss.value_namespace = name_space;
        ipv4_tcp_adjust_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-tcp-adjust-mss")
    {
        ipv6_tcp_adjust_mss = value;
        ipv6_tcp_adjust_mss.value_namespace = name_space;
        ipv6_tcp_adjust_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf-class-unspecified")
    {
        intf_class_unspecified = value;
        intf_class_unspecified.value_namespace = name_space;
        intf_class_unspecified.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "last-change")
    {
        last_change.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "phys-address")
    {
        phys_address.yfilter = yfilter;
    }
    if(value_path == "higher-layer-if")
    {
        higher_layer_if.yfilter = yfilter;
    }
    if(value_path == "lower-layer-if")
    {
        lower_layer_if.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv4-subnet-mask")
    {
        ipv4_subnet_mask.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "input-security-acl")
    {
        input_security_acl.yfilter = yfilter;
    }
    if(value_path == "output-security-acl")
    {
        output_security_acl.yfilter = yfilter;
    }
    if(value_path == "bia-address")
    {
        bia_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-addrs")
    {
        ipv6_addrs.yfilter = yfilter;
    }
    if(value_path == "ipv4-tcp-adjust-mss")
    {
        ipv4_tcp_adjust_mss.yfilter = yfilter;
    }
    if(value_path == "ipv6-tcp-adjust-mss")
    {
        ipv6_tcp_adjust_mss.yfilter = yfilter;
    }
    if(value_path == "intf-class-unspecified")
    {
        intf_class_unspecified.yfilter = yfilter;
    }
}

bool Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "diffserv-info" || name == "v4-protocol-stats" || name == "v6-protocol-stats" || name == "lag-aggregate-state" || name == "ether-state" || name == "ether-stats" || name == "serial-state" || name == "serial-stats" || name == "name" || name == "interface-type" || name == "admin-status" || name == "oper-status" || name == "last-change" || name == "if-index" || name == "phys-address" || name == "higher-layer-if" || name == "lower-layer-if" || name == "speed" || name == "vrf" || name == "ipv4" || name == "ipv4-subnet-mask" || name == "description" || name == "mtu" || name == "input-security-acl" || name == "output-security-acl" || name == "bia-address" || name == "ipv6-addrs" || name == "ipv4-tcp-adjust-mss" || name == "ipv6-tcp-adjust-mss" || name == "intf-class-unspecified")
        return true;
    return false;
}

Interfaces::Interface::Statistics::Statistics()
    :
    discontinuity_time{YType::str, "discontinuity-time"},
    in_octets{YType::uint64, "in-octets"},
    in_unicast_pkts{YType::uint64, "in-unicast-pkts"},
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_discards{YType::uint32, "in-discards"},
    in_errors{YType::uint32, "in-errors"},
    in_unknown_protos{YType::uint32, "in-unknown-protos"},
    out_octets{YType::uint32, "out-octets"},
    out_unicast_pkts{YType::uint64, "out-unicast-pkts"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_discards{YType::uint64, "out-discards"},
    out_errors{YType::uint64, "out-errors"},
    rx_pps{YType::uint64, "rx-pps"},
    rx_kbps{YType::uint64, "rx-kbps"},
    tx_pps{YType::uint64, "tx-pps"},
    tx_kbps{YType::uint64, "tx-kbps"},
    num_flaps{YType::uint64, "num-flaps"},
    in_crc_errors{YType::uint64, "in-crc-errors"}
{

    yang_name = "statistics"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::Statistics::~Statistics()
{
}

bool Interfaces::Interface::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return discontinuity_time.is_set
	|| in_octets.is_set
	|| in_unicast_pkts.is_set
	|| in_broadcast_pkts.is_set
	|| in_multicast_pkts.is_set
	|| in_discards.is_set
	|| in_errors.is_set
	|| in_unknown_protos.is_set
	|| out_octets.is_set
	|| out_unicast_pkts.is_set
	|| out_broadcast_pkts.is_set
	|| out_multicast_pkts.is_set
	|| out_discards.is_set
	|| out_errors.is_set
	|| rx_pps.is_set
	|| rx_kbps.is_set
	|| tx_pps.is_set
	|| tx_kbps.is_set
	|| num_flaps.is_set
	|| in_crc_errors.is_set;
}

bool Interfaces::Interface::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discontinuity_time.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(in_unicast_pkts.yfilter)
	|| ydk::is_set(in_broadcast_pkts.yfilter)
	|| ydk::is_set(in_multicast_pkts.yfilter)
	|| ydk::is_set(in_discards.yfilter)
	|| ydk::is_set(in_errors.yfilter)
	|| ydk::is_set(in_unknown_protos.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_unicast_pkts.yfilter)
	|| ydk::is_set(out_broadcast_pkts.yfilter)
	|| ydk::is_set(out_multicast_pkts.yfilter)
	|| ydk::is_set(out_discards.yfilter)
	|| ydk::is_set(out_errors.yfilter)
	|| ydk::is_set(rx_pps.yfilter)
	|| ydk::is_set(rx_kbps.yfilter)
	|| ydk::is_set(tx_pps.yfilter)
	|| ydk::is_set(tx_kbps.yfilter)
	|| ydk::is_set(num_flaps.yfilter)
	|| ydk::is_set(in_crc_errors.yfilter);
}

std::string Interfaces::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discontinuity_time.is_set || is_set(discontinuity_time.yfilter)) leaf_name_data.push_back(discontinuity_time.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.yfilter)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.yfilter)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.yfilter)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.yfilter)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.yfilter)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.yfilter)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.yfilter)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.yfilter)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.yfilter)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.yfilter)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.yfilter)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (rx_pps.is_set || is_set(rx_pps.yfilter)) leaf_name_data.push_back(rx_pps.get_name_leafdata());
    if (rx_kbps.is_set || is_set(rx_kbps.yfilter)) leaf_name_data.push_back(rx_kbps.get_name_leafdata());
    if (tx_pps.is_set || is_set(tx_pps.yfilter)) leaf_name_data.push_back(tx_pps.get_name_leafdata());
    if (tx_kbps.is_set || is_set(tx_kbps.yfilter)) leaf_name_data.push_back(tx_kbps.get_name_leafdata());
    if (num_flaps.is_set || is_set(num_flaps.yfilter)) leaf_name_data.push_back(num_flaps.get_name_leafdata());
    if (in_crc_errors.is_set || is_set(in_crc_errors.yfilter)) leaf_name_data.push_back(in_crc_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time = value;
        discontinuity_time.value_namespace = name_space;
        discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
        in_unicast_pkts.value_namespace = name_space;
        in_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
        in_broadcast_pkts.value_namespace = name_space;
        in_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
        in_multicast_pkts.value_namespace = name_space;
        in_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
        in_discards.value_namespace = name_space;
        in_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
        in_errors.value_namespace = name_space;
        in_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
        in_unknown_protos.value_namespace = name_space;
        in_unknown_protos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
        out_unicast_pkts.value_namespace = name_space;
        out_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
        out_broadcast_pkts.value_namespace = name_space;
        out_broadcast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
        out_multicast_pkts.value_namespace = name_space;
        out_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-discards")
    {
        out_discards = value;
        out_discards.value_namespace = name_space;
        out_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
        out_errors.value_namespace = name_space;
        out_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-pps")
    {
        rx_pps = value;
        rx_pps.value_namespace = name_space;
        rx_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-kbps")
    {
        rx_kbps = value;
        rx_kbps.value_namespace = name_space;
        rx_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pps")
    {
        tx_pps = value;
        tx_pps.value_namespace = name_space;
        tx_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-kbps")
    {
        tx_kbps = value;
        tx_kbps.value_namespace = name_space;
        tx_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-flaps")
    {
        num_flaps = value;
        num_flaps.value_namespace = name_space;
        num_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-crc-errors")
    {
        in_crc_errors = value;
        in_crc_errors.value_namespace = name_space;
        in_crc_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-discards")
    {
        in_discards.yfilter = yfilter;
    }
    if(value_path == "in-errors")
    {
        in_errors.yfilter = yfilter;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-discards")
    {
        out_discards.yfilter = yfilter;
    }
    if(value_path == "out-errors")
    {
        out_errors.yfilter = yfilter;
    }
    if(value_path == "rx-pps")
    {
        rx_pps.yfilter = yfilter;
    }
    if(value_path == "rx-kbps")
    {
        rx_kbps.yfilter = yfilter;
    }
    if(value_path == "tx-pps")
    {
        tx_pps.yfilter = yfilter;
    }
    if(value_path == "tx-kbps")
    {
        tx_kbps.yfilter = yfilter;
    }
    if(value_path == "num-flaps")
    {
        num_flaps.yfilter = yfilter;
    }
    if(value_path == "in-crc-errors")
    {
        in_crc_errors.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discontinuity-time" || name == "in-octets" || name == "in-unicast-pkts" || name == "in-broadcast-pkts" || name == "in-multicast-pkts" || name == "in-discards" || name == "in-errors" || name == "in-unknown-protos" || name == "out-octets" || name == "out-unicast-pkts" || name == "out-broadcast-pkts" || name == "out-multicast-pkts" || name == "out-discards" || name == "out-errors" || name == "rx-pps" || name == "rx-kbps" || name == "tx-pps" || name == "tx-kbps" || name == "num-flaps" || name == "in-crc-errors")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservInfo()
    :
    direction{YType::enumeration, "direction"},
    policy_name{YType::str, "policy-name"}
        ,
    diffserv_target_classifier_stats(this, {"classifier_entry_name", "parent_path"})
    , priority_oper_list(this, {"priority_level"})
{

    yang_name = "diffserv-info"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::~DiffservInfo()
{
}

bool Interfaces::Interface::DiffservInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffserv_target_classifier_stats.len(); index++)
    {
        if(diffserv_target_classifier_stats[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority_oper_list.len(); index++)
    {
        if(priority_oper_list[index]->has_data())
            return true;
    }
    return direction.is_set
	|| policy_name.is_set;
}

bool Interfaces::Interface::DiffservInfo::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_classifier_stats.len(); index++)
    {
        if(diffserv_target_classifier_stats[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority_oper_list.len(); index++)
    {
        if(priority_oper_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-info";
    ADD_KEY_TOKEN(direction, "direction");
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-classifier-stats")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats>();
        ent_->parent = this;
        diffserv_target_classifier_stats.append(ent_);
        return ent_;
    }

    if(child_yang_name == "priority-oper-list")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList>();
        ent_->parent = this;
        priority_oper_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffserv_target_classifier_stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : priority_oper_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Interfaces::Interface::DiffservInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-classifier-stats" || name == "priority-oper-list" || name == "direction" || name == "policy-name")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::DiffservTargetClassifierStats()
    :
    classifier_entry_name{YType::str, "classifier-entry-name"},
    parent_path{YType::str, "parent-path"}
        ,
    classifier_entry_stats(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats>())
    , meter_stats(this, {"meter_id"})
    , queuing_stats(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats>())
    , subclass_list(this, {"match_type"})
    , marking_stats(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats>())
{
    classifier_entry_stats->parent = this;
    queuing_stats->parent = this;
    marking_stats->parent = this;

    yang_name = "diffserv-target-classifier-stats"; yang_parent_name = "diffserv-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::~DiffservTargetClassifierStats()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<meter_stats.len(); index++)
    {
        if(meter_stats[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<subclass_list.len(); index++)
    {
        if(subclass_list[index]->has_data())
            return true;
    }
    return classifier_entry_name.is_set
	|| parent_path.is_set
	|| (classifier_entry_stats !=  nullptr && classifier_entry_stats->has_data())
	|| (queuing_stats !=  nullptr && queuing_stats->has_data())
	|| (marking_stats !=  nullptr && marking_stats->has_data());
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::has_operation() const
{
    for (std::size_t index=0; index<meter_stats.len(); index++)
    {
        if(meter_stats[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<subclass_list.len(); index++)
    {
        if(subclass_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter)
	|| ydk::is_set(parent_path.yfilter)
	|| (classifier_entry_stats !=  nullptr && classifier_entry_stats->has_operation())
	|| (queuing_stats !=  nullptr && queuing_stats->has_operation())
	|| (marking_stats !=  nullptr && marking_stats->has_operation());
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-target-classifier-stats";
    ADD_KEY_TOKEN(classifier_entry_name, "classifier-entry-name");
    ADD_KEY_TOKEN(parent_path, "parent-path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (parent_path.is_set || is_set(parent_path.yfilter)) leaf_name_data.push_back(parent_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classifier-entry-stats")
    {
        if(classifier_entry_stats == nullptr)
        {
            classifier_entry_stats = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats>();
        }
        return classifier_entry_stats;
    }

    if(child_yang_name == "meter-stats")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats>();
        ent_->parent = this;
        meter_stats.append(ent_);
        return ent_;
    }

    if(child_yang_name == "queuing-stats")
    {
        if(queuing_stats == nullptr)
        {
            queuing_stats = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats>();
        }
        return queuing_stats;
    }

    if(child_yang_name == "subclass-list")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList>();
        ent_->parent = this;
        subclass_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "marking-stats")
    {
        if(marking_stats == nullptr)
        {
            marking_stats = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats>();
        }
        return marking_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classifier_entry_stats != nullptr)
    {
        _children["classifier-entry-stats"] = classifier_entry_stats;
    }

    count_ = 0;
    for (auto ent_ : meter_stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(queuing_stats != nullptr)
    {
        _children["queuing-stats"] = queuing_stats;
    }

    count_ = 0;
    for (auto ent_ : subclass_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(marking_stats != nullptr)
    {
        _children["marking-stats"] = marking_stats;
    }

    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
        classifier_entry_name.value_namespace = name_space;
        classifier_entry_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-path")
    {
        parent_path = value;
        parent_path.value_namespace = name_space;
        parent_path.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name.yfilter = yfilter;
    }
    if(value_path == "parent-path")
    {
        parent_path.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-entry-stats" || name == "meter-stats" || name == "queuing-stats" || name == "subclass-list" || name == "marking-stats" || name == "classifier-entry-name" || name == "parent-path")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::ClassifierEntryStats()
    :
    classified_pkts{YType::uint64, "classified-pkts"},
    classified_bytes{YType::uint64, "classified-bytes"},
    classified_rate{YType::uint64, "classified-rate"}
{

    yang_name = "classifier-entry-stats"; yang_parent_name = "diffserv-target-classifier-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::~ClassifierEntryStats()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::has_data() const
{
    if (is_presence_container) return true;
    return classified_pkts.is_set
	|| classified_bytes.is_set
	|| classified_rate.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classified_pkts.yfilter)
	|| ydk::is_set(classified_bytes.yfilter)
	|| ydk::is_set(classified_rate.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classified_pkts.is_set || is_set(classified_pkts.yfilter)) leaf_name_data.push_back(classified_pkts.get_name_leafdata());
    if (classified_bytes.is_set || is_set(classified_bytes.yfilter)) leaf_name_data.push_back(classified_bytes.get_name_leafdata());
    if (classified_rate.is_set || is_set(classified_rate.yfilter)) leaf_name_data.push_back(classified_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classified-pkts")
    {
        classified_pkts = value;
        classified_pkts.value_namespace = name_space;
        classified_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classified-bytes")
    {
        classified_bytes = value;
        classified_bytes.value_namespace = name_space;
        classified_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classified-rate")
    {
        classified_rate = value;
        classified_rate.value_namespace = name_space;
        classified_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classified-pkts")
    {
        classified_pkts.yfilter = yfilter;
    }
    if(value_path == "classified-bytes")
    {
        classified_bytes.yfilter = yfilter;
    }
    if(value_path == "classified-rate")
    {
        classified_rate.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::ClassifierEntryStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classified-pkts" || name == "classified-bytes" || name == "classified-rate")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::MeterStats()
    :
    meter_id{YType::uint16, "meter-id"},
    meter_succeed_pkts{YType::uint64, "meter-succeed-pkts"},
    meter_succeed_bytes{YType::uint64, "meter-succeed-bytes"},
    meter_failed_pkts{YType::uint64, "meter-failed-pkts"},
    meter_failed_bytes{YType::uint64, "meter-failed-bytes"}
{

    yang_name = "meter-stats"; yang_parent_name = "diffserv-target-classifier-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::~MeterStats()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::has_data() const
{
    if (is_presence_container) return true;
    return meter_id.is_set
	|| meter_succeed_pkts.is_set
	|| meter_succeed_bytes.is_set
	|| meter_failed_pkts.is_set
	|| meter_failed_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(meter_id.yfilter)
	|| ydk::is_set(meter_succeed_pkts.yfilter)
	|| ydk::is_set(meter_succeed_bytes.yfilter)
	|| ydk::is_set(meter_failed_pkts.yfilter)
	|| ydk::is_set(meter_failed_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meter-stats";
    ADD_KEY_TOKEN(meter_id, "meter-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_id.is_set || is_set(meter_id.yfilter)) leaf_name_data.push_back(meter_id.get_name_leafdata());
    if (meter_succeed_pkts.is_set || is_set(meter_succeed_pkts.yfilter)) leaf_name_data.push_back(meter_succeed_pkts.get_name_leafdata());
    if (meter_succeed_bytes.is_set || is_set(meter_succeed_bytes.yfilter)) leaf_name_data.push_back(meter_succeed_bytes.get_name_leafdata());
    if (meter_failed_pkts.is_set || is_set(meter_failed_pkts.yfilter)) leaf_name_data.push_back(meter_failed_pkts.get_name_leafdata());
    if (meter_failed_bytes.is_set || is_set(meter_failed_bytes.yfilter)) leaf_name_data.push_back(meter_failed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "meter-id")
    {
        meter_id = value;
        meter_id.value_namespace = name_space;
        meter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts = value;
        meter_succeed_pkts.value_namespace = name_space;
        meter_succeed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes = value;
        meter_succeed_bytes.value_namespace = name_space;
        meter_succeed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts = value;
        meter_failed_pkts.value_namespace = name_space;
        meter_failed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes = value;
        meter_failed_bytes.value_namespace = name_space;
        meter_failed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "meter-id")
    {
        meter_id.yfilter = yfilter;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts.yfilter = yfilter;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes.yfilter = yfilter;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts.yfilter = yfilter;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MeterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meter-id" || name == "meter-succeed-pkts" || name == "meter-succeed-bytes" || name == "meter-failed-pkts" || name == "meter-failed-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::QueuingStats()
    :
    output_pkts{YType::uint64, "output-pkts"},
    output_bytes{YType::uint64, "output-bytes"},
    queue_size_pkts{YType::uint64, "queue-size-pkts"},
    queue_size_bytes{YType::uint64, "queue-size-bytes"},
    drop_pkts{YType::uint64, "drop-pkts"},
    drop_bytes{YType::uint64, "drop-bytes"}
        ,
    wred_stats(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats>())
    , cac_stats(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats>())
{
    wred_stats->parent = this;
    cac_stats->parent = this;

    yang_name = "queuing-stats"; yang_parent_name = "diffserv-target-classifier-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::~QueuingStats()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::has_data() const
{
    if (is_presence_container) return true;
    return output_pkts.is_set
	|| output_bytes.is_set
	|| queue_size_pkts.is_set
	|| queue_size_bytes.is_set
	|| drop_pkts.is_set
	|| drop_bytes.is_set
	|| (wred_stats !=  nullptr && wred_stats->has_data())
	|| (cac_stats !=  nullptr && cac_stats->has_data());
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output_pkts.yfilter)
	|| ydk::is_set(output_bytes.yfilter)
	|| ydk::is_set(queue_size_pkts.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(drop_pkts.yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| (wred_stats !=  nullptr && wred_stats->has_operation())
	|| (cac_stats !=  nullptr && cac_stats->has_operation());
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_pkts.is_set || is_set(output_pkts.yfilter)) leaf_name_data.push_back(output_pkts.get_name_leafdata());
    if (output_bytes.is_set || is_set(output_bytes.yfilter)) leaf_name_data.push_back(output_bytes.get_name_leafdata());
    if (queue_size_pkts.is_set || is_set(queue_size_pkts.yfilter)) leaf_name_data.push_back(queue_size_pkts.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (drop_pkts.is_set || is_set(drop_pkts.yfilter)) leaf_name_data.push_back(drop_pkts.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-stats")
    {
        if(wred_stats == nullptr)
        {
            wred_stats = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats>();
        }
        return wred_stats;
    }

    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats>();
        }
        return cac_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wred_stats != nullptr)
    {
        _children["wred-stats"] = wred_stats;
    }

    if(cac_stats != nullptr)
    {
        _children["cac-stats"] = cac_stats;
    }

    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output-pkts")
    {
        output_pkts = value;
        output_pkts.value_namespace = name_space;
        output_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bytes")
    {
        output_bytes = value;
        output_bytes.value_namespace = name_space;
        output_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts = value;
        queue_size_pkts.value_namespace = name_space;
        queue_size_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts = value;
        drop_pkts.value_namespace = name_space;
        drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output-pkts")
    {
        output_pkts.yfilter = yfilter;
    }
    if(value_path == "output-bytes")
    {
        output_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts.yfilter = yfilter;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-stats" || name == "cac-stats" || name == "output-pkts" || name == "output-bytes" || name == "queue-size-pkts" || name == "queue-size-bytes" || name == "drop-pkts" || name == "drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::WredStats()
    :
    early_drop_pkts{YType::uint64, "early-drop-pkts"},
    early_drop_bytes{YType::uint64, "early-drop-bytes"},
    mean_queue_depth{YType::uint16, "mean-queue-depth"},
    transmitted_pkts{YType::uint64, "transmitted-pkts"},
    transmitted_bytes{YType::uint64, "transmitted-bytes"},
    tail_drop_pkts{YType::uint64, "tail-drop-pkts"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    drop_pkts_flow{YType::uint64, "drop-pkts-flow"},
    drop_pkts_no_buffer{YType::uint64, "drop-pkts-no-buffer"},
    queue_peak_size_pkts{YType::uint64, "queue-peak-size-pkts"},
    queue_peak_size_bytes{YType::uint64, "queue-peak-size-bytes"},
    bandwidth_exceed_drops{YType::uint64, "bandwidth-exceed-drops"}
{

    yang_name = "wred-stats"; yang_parent_name = "queuing-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::~WredStats()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::has_data() const
{
    if (is_presence_container) return true;
    return early_drop_pkts.is_set
	|| early_drop_bytes.is_set
	|| mean_queue_depth.is_set
	|| transmitted_pkts.is_set
	|| transmitted_bytes.is_set
	|| tail_drop_pkts.is_set
	|| tail_drop_bytes.is_set
	|| drop_pkts_flow.is_set
	|| drop_pkts_no_buffer.is_set
	|| queue_peak_size_pkts.is_set
	|| queue_peak_size_bytes.is_set
	|| bandwidth_exceed_drops.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(early_drop_pkts.yfilter)
	|| ydk::is_set(early_drop_bytes.yfilter)
	|| ydk::is_set(mean_queue_depth.yfilter)
	|| ydk::is_set(transmitted_pkts.yfilter)
	|| ydk::is_set(transmitted_bytes.yfilter)
	|| ydk::is_set(tail_drop_pkts.yfilter)
	|| ydk::is_set(tail_drop_bytes.yfilter)
	|| ydk::is_set(drop_pkts_flow.yfilter)
	|| ydk::is_set(drop_pkts_no_buffer.yfilter)
	|| ydk::is_set(queue_peak_size_pkts.yfilter)
	|| ydk::is_set(queue_peak_size_bytes.yfilter)
	|| ydk::is_set(bandwidth_exceed_drops.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (early_drop_pkts.is_set || is_set(early_drop_pkts.yfilter)) leaf_name_data.push_back(early_drop_pkts.get_name_leafdata());
    if (early_drop_bytes.is_set || is_set(early_drop_bytes.yfilter)) leaf_name_data.push_back(early_drop_bytes.get_name_leafdata());
    if (mean_queue_depth.is_set || is_set(mean_queue_depth.yfilter)) leaf_name_data.push_back(mean_queue_depth.get_name_leafdata());
    if (transmitted_pkts.is_set || is_set(transmitted_pkts.yfilter)) leaf_name_data.push_back(transmitted_pkts.get_name_leafdata());
    if (transmitted_bytes.is_set || is_set(transmitted_bytes.yfilter)) leaf_name_data.push_back(transmitted_bytes.get_name_leafdata());
    if (tail_drop_pkts.is_set || is_set(tail_drop_pkts.yfilter)) leaf_name_data.push_back(tail_drop_pkts.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.yfilter)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (drop_pkts_flow.is_set || is_set(drop_pkts_flow.yfilter)) leaf_name_data.push_back(drop_pkts_flow.get_name_leafdata());
    if (drop_pkts_no_buffer.is_set || is_set(drop_pkts_no_buffer.yfilter)) leaf_name_data.push_back(drop_pkts_no_buffer.get_name_leafdata());
    if (queue_peak_size_pkts.is_set || is_set(queue_peak_size_pkts.yfilter)) leaf_name_data.push_back(queue_peak_size_pkts.get_name_leafdata());
    if (queue_peak_size_bytes.is_set || is_set(queue_peak_size_bytes.yfilter)) leaf_name_data.push_back(queue_peak_size_bytes.get_name_leafdata());
    if (bandwidth_exceed_drops.is_set || is_set(bandwidth_exceed_drops.yfilter)) leaf_name_data.push_back(bandwidth_exceed_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts = value;
        early_drop_pkts.value_namespace = name_space;
        early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes = value;
        early_drop_bytes.value_namespace = name_space;
        early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mean-queue-depth")
    {
        mean_queue_depth = value;
        mean_queue_depth.value_namespace = name_space;
        mean_queue_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-pkts")
    {
        transmitted_pkts = value;
        transmitted_pkts.value_namespace = name_space;
        transmitted_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-bytes")
    {
        transmitted_bytes = value;
        transmitted_bytes.value_namespace = name_space;
        transmitted_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drop-pkts")
    {
        tail_drop_pkts = value;
        tail_drop_pkts.value_namespace = name_space;
        tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
        tail_drop_bytes.value_namespace = name_space;
        tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts-flow")
    {
        drop_pkts_flow = value;
        drop_pkts_flow.value_namespace = name_space;
        drop_pkts_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts-no-buffer")
    {
        drop_pkts_no_buffer = value;
        drop_pkts_no_buffer.value_namespace = name_space;
        drop_pkts_no_buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-peak-size-pkts")
    {
        queue_peak_size_pkts = value;
        queue_peak_size_pkts.value_namespace = name_space;
        queue_peak_size_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-peak-size-bytes")
    {
        queue_peak_size_bytes = value;
        queue_peak_size_bytes.value_namespace = name_space;
        queue_peak_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-exceed-drops")
    {
        bandwidth_exceed_drops = value;
        bandwidth_exceed_drops.value_namespace = name_space;
        bandwidth_exceed_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "mean-queue-depth")
    {
        mean_queue_depth.yfilter = yfilter;
    }
    if(value_path == "transmitted-pkts")
    {
        transmitted_pkts.yfilter = yfilter;
    }
    if(value_path == "transmitted-bytes")
    {
        transmitted_bytes.yfilter = yfilter;
    }
    if(value_path == "tail-drop-pkts")
    {
        tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-pkts-flow")
    {
        drop_pkts_flow.yfilter = yfilter;
    }
    if(value_path == "drop-pkts-no-buffer")
    {
        drop_pkts_no_buffer.yfilter = yfilter;
    }
    if(value_path == "queue-peak-size-pkts")
    {
        queue_peak_size_pkts.yfilter = yfilter;
    }
    if(value_path == "queue-peak-size-bytes")
    {
        queue_peak_size_bytes.yfilter = yfilter;
    }
    if(value_path == "bandwidth-exceed-drops")
    {
        bandwidth_exceed_drops.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::WredStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "early-drop-pkts" || name == "early-drop-bytes" || name == "mean-queue-depth" || name == "transmitted-pkts" || name == "transmitted-bytes" || name == "tail-drop-pkts" || name == "tail-drop-bytes" || name == "drop-pkts-flow" || name == "drop-pkts-no-buffer" || name == "queue-peak-size-pkts" || name == "queue-peak-size-bytes" || name == "bandwidth-exceed-drops")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::CacStats()
    :
    num_admitted_flows{YType::uint32, "num-admitted-flows"},
    num_non_admitted_flows{YType::uint32, "num-non-admitted-flows"}
{

    yang_name = "cac-stats"; yang_parent_name = "queuing-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::~CacStats()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::has_data() const
{
    if (is_presence_container) return true;
    return num_admitted_flows.is_set
	|| num_non_admitted_flows.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_admitted_flows.yfilter)
	|| ydk::is_set(num_non_admitted_flows.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_admitted_flows.is_set || is_set(num_admitted_flows.yfilter)) leaf_name_data.push_back(num_admitted_flows.get_name_leafdata());
    if (num_non_admitted_flows.is_set || is_set(num_non_admitted_flows.yfilter)) leaf_name_data.push_back(num_non_admitted_flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-admitted-flows")
    {
        num_admitted_flows = value;
        num_admitted_flows.value_namespace = name_space;
        num_admitted_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-non-admitted-flows")
    {
        num_non_admitted_flows = value;
        num_non_admitted_flows.value_namespace = name_space;
        num_non_admitted_flows.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-admitted-flows")
    {
        num_admitted_flows.yfilter = yfilter;
    }
    if(value_path == "num-non-admitted-flows")
    {
        num_non_admitted_flows.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::QueuingStats::CacStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-admitted-flows" || name == "num-non-admitted-flows")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::SubclassList()
    :
    match_type{YType::enumeration, "match-type"}
        ,
    cos_counters(this, {"cos_min", "cos_max"})
    , cos_default(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault>())
    , dscp_counters(this, {"dscp_min", "dscp_max"})
    , dscp_default(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault>())
    , discard_class_counters(this, {"disc_class_min", "disc_class_max"})
    , disc_class_default(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault>())
    , precedence_counters(this, {"prec_min", "prec_max"})
    , prec_default(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault>())
    , mpls_exp_counters(this, {"exp_min", "exp_max"})
    , mpls_exp_default(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault>())
    , dei_counters(this, {"dei_min", "dei_max"})
    , dei_counts_default(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault>())
    , clp_counters(this, {"clp_val"})
    , clp_default(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault>())
{
    cos_default->parent = this;
    dscp_default->parent = this;
    disc_class_default->parent = this;
    prec_default->parent = this;
    mpls_exp_default->parent = this;
    dei_counts_default->parent = this;
    clp_default->parent = this;

    yang_name = "subclass-list"; yang_parent_name = "diffserv-target-classifier-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::~SubclassList()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cos_counters.len(); index++)
    {
        if(cos_counters[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dscp_counters.len(); index++)
    {
        if(dscp_counters[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<discard_class_counters.len(); index++)
    {
        if(discard_class_counters[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<precedence_counters.len(); index++)
    {
        if(precedence_counters[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_exp_counters.len(); index++)
    {
        if(mpls_exp_counters[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dei_counters.len(); index++)
    {
        if(dei_counters[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<clp_counters.len(); index++)
    {
        if(clp_counters[index]->has_data())
            return true;
    }
    return match_type.is_set
	|| (cos_default !=  nullptr && cos_default->has_data())
	|| (dscp_default !=  nullptr && dscp_default->has_data())
	|| (disc_class_default !=  nullptr && disc_class_default->has_data())
	|| (prec_default !=  nullptr && prec_default->has_data())
	|| (mpls_exp_default !=  nullptr && mpls_exp_default->has_data())
	|| (dei_counts_default !=  nullptr && dei_counts_default->has_data())
	|| (clp_default !=  nullptr && clp_default->has_data());
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::has_operation() const
{
    for (std::size_t index=0; index<cos_counters.len(); index++)
    {
        if(cos_counters[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dscp_counters.len(); index++)
    {
        if(dscp_counters[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<discard_class_counters.len(); index++)
    {
        if(discard_class_counters[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<precedence_counters.len(); index++)
    {
        if(precedence_counters[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_exp_counters.len(); index++)
    {
        if(mpls_exp_counters[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dei_counters.len(); index++)
    {
        if(dei_counters[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<clp_counters.len(); index++)
    {
        if(clp_counters[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(match_type.yfilter)
	|| (cos_default !=  nullptr && cos_default->has_operation())
	|| (dscp_default !=  nullptr && dscp_default->has_operation())
	|| (disc_class_default !=  nullptr && disc_class_default->has_operation())
	|| (prec_default !=  nullptr && prec_default->has_operation())
	|| (mpls_exp_default !=  nullptr && mpls_exp_default->has_operation())
	|| (dei_counts_default !=  nullptr && dei_counts_default->has_operation())
	|| (clp_default !=  nullptr && clp_default->has_operation());
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subclass-list";
    ADD_KEY_TOKEN(match_type, "match-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-counters")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters>();
        ent_->parent = this;
        cos_counters.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cos-default")
    {
        if(cos_default == nullptr)
        {
            cos_default = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault>();
        }
        return cos_default;
    }

    if(child_yang_name == "dscp-counters")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters>();
        ent_->parent = this;
        dscp_counters.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dscp-default")
    {
        if(dscp_default == nullptr)
        {
            dscp_default = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault>();
        }
        return dscp_default;
    }

    if(child_yang_name == "discard-class-counters")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters>();
        ent_->parent = this;
        discard_class_counters.append(ent_);
        return ent_;
    }

    if(child_yang_name == "disc-class-default")
    {
        if(disc_class_default == nullptr)
        {
            disc_class_default = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault>();
        }
        return disc_class_default;
    }

    if(child_yang_name == "precedence-counters")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters>();
        ent_->parent = this;
        precedence_counters.append(ent_);
        return ent_;
    }

    if(child_yang_name == "prec-default")
    {
        if(prec_default == nullptr)
        {
            prec_default = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault>();
        }
        return prec_default;
    }

    if(child_yang_name == "mpls-exp-counters")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters>();
        ent_->parent = this;
        mpls_exp_counters.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls-exp-default")
    {
        if(mpls_exp_default == nullptr)
        {
            mpls_exp_default = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault>();
        }
        return mpls_exp_default;
    }

    if(child_yang_name == "dei-counters")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters>();
        ent_->parent = this;
        dei_counters.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dei-counts-default")
    {
        if(dei_counts_default == nullptr)
        {
            dei_counts_default = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault>();
        }
        return dei_counts_default;
    }

    if(child_yang_name == "clp-counters")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters>();
        ent_->parent = this;
        clp_counters.append(ent_);
        return ent_;
    }

    if(child_yang_name == "clp-default")
    {
        if(clp_default == nullptr)
        {
            clp_default = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault>();
        }
        return clp_default;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cos_counters.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(cos_default != nullptr)
    {
        _children["cos-default"] = cos_default;
    }

    count_ = 0;
    for (auto ent_ : dscp_counters.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(dscp_default != nullptr)
    {
        _children["dscp-default"] = dscp_default;
    }

    count_ = 0;
    for (auto ent_ : discard_class_counters.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(disc_class_default != nullptr)
    {
        _children["disc-class-default"] = disc_class_default;
    }

    count_ = 0;
    for (auto ent_ : precedence_counters.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(prec_default != nullptr)
    {
        _children["prec-default"] = prec_default;
    }

    count_ = 0;
    for (auto ent_ : mpls_exp_counters.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mpls_exp_default != nullptr)
    {
        _children["mpls-exp-default"] = mpls_exp_default;
    }

    count_ = 0;
    for (auto ent_ : dei_counters.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(dei_counts_default != nullptr)
    {
        _children["dei-counts-default"] = dei_counts_default;
    }

    count_ = 0;
    for (auto ent_ : clp_counters.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(clp_default != nullptr)
    {
        _children["clp-default"] = clp_default;
    }

    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-counters" || name == "cos-default" || name == "dscp-counters" || name == "dscp-default" || name == "discard-class-counters" || name == "disc-class-default" || name == "precedence-counters" || name == "prec-default" || name == "mpls-exp-counters" || name == "mpls-exp-default" || name == "dei-counters" || name == "dei-counts-default" || name == "clp-counters" || name == "clp-default" || name == "match-type")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::CosCounters()
    :
    cos_min{YType::uint32, "cos-min"},
    cos_max{YType::uint32, "cos-max"},
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "cos-counters"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::~CosCounters()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::has_data() const
{
    if (is_presence_container) return true;
    return cos_min.is_set
	|| cos_max.is_set
	|| wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_min.yfilter)
	|| ydk::is_set(cos_max.yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-counters";
    ADD_KEY_TOKEN(cos_min, "cos-min");
    ADD_KEY_TOKEN(cos_max, "cos-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_min.is_set || is_set(cos_min.yfilter)) leaf_name_data.push_back(cos_min.get_name_leafdata());
    if (cos_max.is_set || is_set(cos_max.yfilter)) leaf_name_data.push_back(cos_max.get_name_leafdata());
    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-min")
    {
        cos_min = value;
        cos_min.value_namespace = name_space;
        cos_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-max")
    {
        cos_max = value;
        cos_max.value_namespace = name_space;
        cos_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-min")
    {
        cos_min.yfilter = yfilter;
    }
    if(value_path == "cos-max")
    {
        cos_max.yfilter = yfilter;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-min" || name == "cos-max" || name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::CosDefault()
    :
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "cos-default"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::~CosDefault()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::has_data() const
{
    if (is_presence_container) return true;
    return wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::CosDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::DscpCounters()
    :
    dscp_min{YType::uint32, "dscp-min"},
    dscp_max{YType::uint32, "dscp-max"},
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "dscp-counters"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::~DscpCounters()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::has_data() const
{
    if (is_presence_container) return true;
    return dscp_min.is_set
	|| dscp_max.is_set
	|| wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_min.yfilter)
	|| ydk::is_set(dscp_max.yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-counters";
    ADD_KEY_TOKEN(dscp_min, "dscp-min");
    ADD_KEY_TOKEN(dscp_max, "dscp-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_min.is_set || is_set(dscp_min.yfilter)) leaf_name_data.push_back(dscp_min.get_name_leafdata());
    if (dscp_max.is_set || is_set(dscp_max.yfilter)) leaf_name_data.push_back(dscp_max.get_name_leafdata());
    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-min")
    {
        dscp_min = value;
        dscp_min.value_namespace = name_space;
        dscp_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-max")
    {
        dscp_max = value;
        dscp_max.value_namespace = name_space;
        dscp_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-min")
    {
        dscp_min.yfilter = yfilter;
    }
    if(value_path == "dscp-max")
    {
        dscp_max.yfilter = yfilter;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-min" || name == "dscp-max" || name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::DscpDefault()
    :
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "dscp-default"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::~DscpDefault()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::has_data() const
{
    if (is_presence_container) return true;
    return wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DscpDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::DiscardClassCounters()
    :
    disc_class_min{YType::uint32, "disc-class-min"},
    disc_class_max{YType::uint32, "disc-class-max"},
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "discard-class-counters"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::~DiscardClassCounters()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::has_data() const
{
    if (is_presence_container) return true;
    return disc_class_min.is_set
	|| disc_class_max.is_set
	|| wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disc_class_min.yfilter)
	|| ydk::is_set(disc_class_max.yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class-counters";
    ADD_KEY_TOKEN(disc_class_min, "disc-class-min");
    ADD_KEY_TOKEN(disc_class_max, "disc-class-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disc_class_min.is_set || is_set(disc_class_min.yfilter)) leaf_name_data.push_back(disc_class_min.get_name_leafdata());
    if (disc_class_max.is_set || is_set(disc_class_max.yfilter)) leaf_name_data.push_back(disc_class_max.get_name_leafdata());
    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disc-class-min")
    {
        disc_class_min = value;
        disc_class_min.value_namespace = name_space;
        disc_class_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disc-class-max")
    {
        disc_class_max = value;
        disc_class_max.value_namespace = name_space;
        disc_class_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disc-class-min")
    {
        disc_class_min.yfilter = yfilter;
    }
    if(value_path == "disc-class-max")
    {
        disc_class_max.yfilter = yfilter;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscardClassCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disc-class-min" || name == "disc-class-max" || name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::DiscClassDefault()
    :
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "disc-class-default"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::~DiscClassDefault()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::has_data() const
{
    if (is_presence_container) return true;
    return wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disc-class-default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DiscClassDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::PrecedenceCounters()
    :
    prec_min{YType::uint32, "prec-min"},
    prec_max{YType::uint32, "prec-max"},
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "precedence-counters"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::~PrecedenceCounters()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::has_data() const
{
    if (is_presence_container) return true;
    return prec_min.is_set
	|| prec_max.is_set
	|| wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec_min.yfilter)
	|| ydk::is_set(prec_max.yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence-counters";
    ADD_KEY_TOKEN(prec_min, "prec-min");
    ADD_KEY_TOKEN(prec_max, "prec-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec_min.is_set || is_set(prec_min.yfilter)) leaf_name_data.push_back(prec_min.get_name_leafdata());
    if (prec_max.is_set || is_set(prec_max.yfilter)) leaf_name_data.push_back(prec_max.get_name_leafdata());
    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec-min")
    {
        prec_min = value;
        prec_min.value_namespace = name_space;
        prec_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec-max")
    {
        prec_max = value;
        prec_max.value_namespace = name_space;
        prec_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec-min")
    {
        prec_min.yfilter = yfilter;
    }
    if(value_path == "prec-max")
    {
        prec_max.yfilter = yfilter;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecedenceCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec-min" || name == "prec-max" || name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::PrecDefault()
    :
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "prec-default"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::~PrecDefault()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::has_data() const
{
    if (is_presence_container) return true;
    return wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec-default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::PrecDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::MplsExpCounters()
    :
    exp_min{YType::uint32, "exp-min"},
    exp_max{YType::uint32, "exp-max"},
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "mpls-exp-counters"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::~MplsExpCounters()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::has_data() const
{
    if (is_presence_container) return true;
    return exp_min.is_set
	|| exp_max.is_set
	|| wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_min.yfilter)
	|| ydk::is_set(exp_max.yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-counters";
    ADD_KEY_TOKEN(exp_min, "exp-min");
    ADD_KEY_TOKEN(exp_max, "exp-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_min.is_set || is_set(exp_min.yfilter)) leaf_name_data.push_back(exp_min.get_name_leafdata());
    if (exp_max.is_set || is_set(exp_max.yfilter)) leaf_name_data.push_back(exp_max.get_name_leafdata());
    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-min")
    {
        exp_min = value;
        exp_min.value_namespace = name_space;
        exp_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-max")
    {
        exp_max = value;
        exp_max.value_namespace = name_space;
        exp_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-min")
    {
        exp_min.yfilter = yfilter;
    }
    if(value_path == "exp-max")
    {
        exp_max.yfilter = yfilter;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-min" || name == "exp-max" || name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::MplsExpDefault()
    :
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "mpls-exp-default"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::~MplsExpDefault()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::has_data() const
{
    if (is_presence_container) return true;
    return wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::MplsExpDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::DeiCounters()
    :
    dei_min{YType::uint32, "dei-min"},
    dei_max{YType::uint32, "dei-max"},
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "dei-counters"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::~DeiCounters()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::has_data() const
{
    if (is_presence_container) return true;
    return dei_min.is_set
	|| dei_max.is_set
	|| wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dei_min.yfilter)
	|| ydk::is_set(dei_max.yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei-counters";
    ADD_KEY_TOKEN(dei_min, "dei-min");
    ADD_KEY_TOKEN(dei_max, "dei-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dei_min.is_set || is_set(dei_min.yfilter)) leaf_name_data.push_back(dei_min.get_name_leafdata());
    if (dei_max.is_set || is_set(dei_max.yfilter)) leaf_name_data.push_back(dei_max.get_name_leafdata());
    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dei-min")
    {
        dei_min = value;
        dei_min.value_namespace = name_space;
        dei_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei-max")
    {
        dei_max = value;
        dei_max.value_namespace = name_space;
        dei_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dei-min")
    {
        dei_min.yfilter = yfilter;
    }
    if(value_path == "dei-max")
    {
        dei_max.yfilter = yfilter;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dei-min" || name == "dei-max" || name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::DeiCountsDefault()
    :
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "dei-counts-default"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::~DeiCountsDefault()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::has_data() const
{
    if (is_presence_container) return true;
    return wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei-counts-default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::DeiCountsDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::ClpCounters()
    :
    clp_val{YType::uint32, "clp-val"},
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "clp-counters"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::~ClpCounters()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::has_data() const
{
    if (is_presence_container) return true;
    return clp_val.is_set
	|| wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clp_val.yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clp-counters";
    ADD_KEY_TOKEN(clp_val, "clp-val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clp_val.is_set || is_set(clp_val.yfilter)) leaf_name_data.push_back(clp_val.get_name_leafdata());
    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clp-val")
    {
        clp_val = value;
        clp_val.value_namespace = name_space;
        clp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clp-val")
    {
        clp_val.yfilter = yfilter;
    }
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clp-val" || name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::ClpDefault()
    :
    wred_tx_pkts{YType::uint64, "wred-tx-pkts"},
    wred_tx_bytes{YType::uint64, "wred-tx-bytes"},
    wred_tail_drop_pkts{YType::uint64, "wred-tail-drop-pkts"},
    wred_tail_drop_bytes{YType::uint64, "wred-tail-drop-bytes"},
    wred_early_drop_pkts{YType::uint64, "wred-early-drop-pkts"},
    wred_early_drop_bytes{YType::uint64, "wred-early-drop-bytes"}
{

    yang_name = "clp-default"; yang_parent_name = "subclass-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::~ClpDefault()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::has_data() const
{
    if (is_presence_container) return true;
    return wred_tx_pkts.is_set
	|| wred_tx_bytes.is_set
	|| wred_tail_drop_pkts.is_set
	|| wred_tail_drop_bytes.is_set
	|| wred_early_drop_pkts.is_set
	|| wred_early_drop_bytes.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_tx_pkts.yfilter)
	|| ydk::is_set(wred_tx_bytes.yfilter)
	|| ydk::is_set(wred_tail_drop_pkts.yfilter)
	|| ydk::is_set(wred_tail_drop_bytes.yfilter)
	|| ydk::is_set(wred_early_drop_pkts.yfilter)
	|| ydk::is_set(wred_early_drop_bytes.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clp-default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_tx_pkts.is_set || is_set(wred_tx_pkts.yfilter)) leaf_name_data.push_back(wred_tx_pkts.get_name_leafdata());
    if (wred_tx_bytes.is_set || is_set(wred_tx_bytes.yfilter)) leaf_name_data.push_back(wred_tx_bytes.get_name_leafdata());
    if (wred_tail_drop_pkts.is_set || is_set(wred_tail_drop_pkts.yfilter)) leaf_name_data.push_back(wred_tail_drop_pkts.get_name_leafdata());
    if (wred_tail_drop_bytes.is_set || is_set(wred_tail_drop_bytes.yfilter)) leaf_name_data.push_back(wred_tail_drop_bytes.get_name_leafdata());
    if (wred_early_drop_pkts.is_set || is_set(wred_early_drop_pkts.yfilter)) leaf_name_data.push_back(wred_early_drop_pkts.get_name_leafdata());
    if (wred_early_drop_bytes.is_set || is_set(wred_early_drop_bytes.yfilter)) leaf_name_data.push_back(wred_early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts = value;
        wred_tx_pkts.value_namespace = name_space;
        wred_tx_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes = value;
        wred_tx_bytes.value_namespace = name_space;
        wred_tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts = value;
        wred_tail_drop_pkts.value_namespace = name_space;
        wred_tail_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes = value;
        wred_tail_drop_bytes.value_namespace = name_space;
        wred_tail_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts = value;
        wred_early_drop_pkts.value_namespace = name_space;
        wred_early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes = value;
        wred_early_drop_bytes.value_namespace = name_space;
        wred_early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-tx-pkts")
    {
        wred_tx_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tx-bytes")
    {
        wred_tx_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-pkts")
    {
        wred_tail_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-tail-drop-bytes")
    {
        wred_tail_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-pkts")
    {
        wred_early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "wred-early-drop-bytes")
    {
        wred_early_drop_bytes.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::SubclassList::ClpDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-tx-pkts" || name == "wred-tx-bytes" || name == "wred-tail-drop-pkts" || name == "wred-tail-drop-bytes" || name == "wred-early-drop-pkts" || name == "wred-early-drop-bytes")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingStats()
    :
    marking_dscp_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal>())
    , marking_dscp_tunnel_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal>())
    , marking_cos_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal>())
    , marking_cos_inner_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal>())
    , marking_discard_class_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal>())
    , marking_qos_grp_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal>())
    , marking_prec_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal>())
    , marking_prec_tunnel_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal>())
    , marking_mpls_exp_imp_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal>())
    , marking_mpls_exp_top_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal>())
    , marking_fr_de_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal>())
    , marking_fr_fecn_becn_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal>())
    , marking_atm_clp_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal>())
    , marking_vlan_inner_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal>())
    , marking_dei_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal>())
    , marking_dei_imp_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal>())
    , marking_srp_priority_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal>())
    , marking_wlan_user_priority_stats_val(std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal>())
{
    marking_dscp_stats_val->parent = this;
    marking_dscp_tunnel_stats_val->parent = this;
    marking_cos_stats_val->parent = this;
    marking_cos_inner_stats_val->parent = this;
    marking_discard_class_stats_val->parent = this;
    marking_qos_grp_stats_val->parent = this;
    marking_prec_stats_val->parent = this;
    marking_prec_tunnel_stats_val->parent = this;
    marking_mpls_exp_imp_stats_val->parent = this;
    marking_mpls_exp_top_stats_val->parent = this;
    marking_fr_de_stats_val->parent = this;
    marking_fr_fecn_becn_stats_val->parent = this;
    marking_atm_clp_stats_val->parent = this;
    marking_vlan_inner_stats_val->parent = this;
    marking_dei_stats_val->parent = this;
    marking_dei_imp_stats_val->parent = this;
    marking_srp_priority_stats_val->parent = this;
    marking_wlan_user_priority_stats_val->parent = this;

    yang_name = "marking-stats"; yang_parent_name = "diffserv-target-classifier-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::~MarkingStats()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::has_data() const
{
    if (is_presence_container) return true;
    return (marking_dscp_stats_val !=  nullptr && marking_dscp_stats_val->has_data())
	|| (marking_dscp_tunnel_stats_val !=  nullptr && marking_dscp_tunnel_stats_val->has_data())
	|| (marking_cos_stats_val !=  nullptr && marking_cos_stats_val->has_data())
	|| (marking_cos_inner_stats_val !=  nullptr && marking_cos_inner_stats_val->has_data())
	|| (marking_discard_class_stats_val !=  nullptr && marking_discard_class_stats_val->has_data())
	|| (marking_qos_grp_stats_val !=  nullptr && marking_qos_grp_stats_val->has_data())
	|| (marking_prec_stats_val !=  nullptr && marking_prec_stats_val->has_data())
	|| (marking_prec_tunnel_stats_val !=  nullptr && marking_prec_tunnel_stats_val->has_data())
	|| (marking_mpls_exp_imp_stats_val !=  nullptr && marking_mpls_exp_imp_stats_val->has_data())
	|| (marking_mpls_exp_top_stats_val !=  nullptr && marking_mpls_exp_top_stats_val->has_data())
	|| (marking_fr_de_stats_val !=  nullptr && marking_fr_de_stats_val->has_data())
	|| (marking_fr_fecn_becn_stats_val !=  nullptr && marking_fr_fecn_becn_stats_val->has_data())
	|| (marking_atm_clp_stats_val !=  nullptr && marking_atm_clp_stats_val->has_data())
	|| (marking_vlan_inner_stats_val !=  nullptr && marking_vlan_inner_stats_val->has_data())
	|| (marking_dei_stats_val !=  nullptr && marking_dei_stats_val->has_data())
	|| (marking_dei_imp_stats_val !=  nullptr && marking_dei_imp_stats_val->has_data())
	|| (marking_srp_priority_stats_val !=  nullptr && marking_srp_priority_stats_val->has_data())
	|| (marking_wlan_user_priority_stats_val !=  nullptr && marking_wlan_user_priority_stats_val->has_data());
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::has_operation() const
{
    return is_set(yfilter)
	|| (marking_dscp_stats_val !=  nullptr && marking_dscp_stats_val->has_operation())
	|| (marking_dscp_tunnel_stats_val !=  nullptr && marking_dscp_tunnel_stats_val->has_operation())
	|| (marking_cos_stats_val !=  nullptr && marking_cos_stats_val->has_operation())
	|| (marking_cos_inner_stats_val !=  nullptr && marking_cos_inner_stats_val->has_operation())
	|| (marking_discard_class_stats_val !=  nullptr && marking_discard_class_stats_val->has_operation())
	|| (marking_qos_grp_stats_val !=  nullptr && marking_qos_grp_stats_val->has_operation())
	|| (marking_prec_stats_val !=  nullptr && marking_prec_stats_val->has_operation())
	|| (marking_prec_tunnel_stats_val !=  nullptr && marking_prec_tunnel_stats_val->has_operation())
	|| (marking_mpls_exp_imp_stats_val !=  nullptr && marking_mpls_exp_imp_stats_val->has_operation())
	|| (marking_mpls_exp_top_stats_val !=  nullptr && marking_mpls_exp_top_stats_val->has_operation())
	|| (marking_fr_de_stats_val !=  nullptr && marking_fr_de_stats_val->has_operation())
	|| (marking_fr_fecn_becn_stats_val !=  nullptr && marking_fr_fecn_becn_stats_val->has_operation())
	|| (marking_atm_clp_stats_val !=  nullptr && marking_atm_clp_stats_val->has_operation())
	|| (marking_vlan_inner_stats_val !=  nullptr && marking_vlan_inner_stats_val->has_operation())
	|| (marking_dei_stats_val !=  nullptr && marking_dei_stats_val->has_operation())
	|| (marking_dei_imp_stats_val !=  nullptr && marking_dei_imp_stats_val->has_operation())
	|| (marking_srp_priority_stats_val !=  nullptr && marking_srp_priority_stats_val->has_operation())
	|| (marking_wlan_user_priority_stats_val !=  nullptr && marking_wlan_user_priority_stats_val->has_operation());
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "marking-dscp-stats-val")
    {
        if(marking_dscp_stats_val == nullptr)
        {
            marking_dscp_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal>();
        }
        return marking_dscp_stats_val;
    }

    if(child_yang_name == "marking-dscp-tunnel-stats-val")
    {
        if(marking_dscp_tunnel_stats_val == nullptr)
        {
            marking_dscp_tunnel_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal>();
        }
        return marking_dscp_tunnel_stats_val;
    }

    if(child_yang_name == "marking-cos-stats-val")
    {
        if(marking_cos_stats_val == nullptr)
        {
            marking_cos_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal>();
        }
        return marking_cos_stats_val;
    }

    if(child_yang_name == "marking-cos-inner-stats-val")
    {
        if(marking_cos_inner_stats_val == nullptr)
        {
            marking_cos_inner_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal>();
        }
        return marking_cos_inner_stats_val;
    }

    if(child_yang_name == "marking-discard-class-stats-val")
    {
        if(marking_discard_class_stats_val == nullptr)
        {
            marking_discard_class_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal>();
        }
        return marking_discard_class_stats_val;
    }

    if(child_yang_name == "marking-qos-grp-stats-val")
    {
        if(marking_qos_grp_stats_val == nullptr)
        {
            marking_qos_grp_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal>();
        }
        return marking_qos_grp_stats_val;
    }

    if(child_yang_name == "marking-prec-stats-val")
    {
        if(marking_prec_stats_val == nullptr)
        {
            marking_prec_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal>();
        }
        return marking_prec_stats_val;
    }

    if(child_yang_name == "marking-prec-tunnel-stats-val")
    {
        if(marking_prec_tunnel_stats_val == nullptr)
        {
            marking_prec_tunnel_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal>();
        }
        return marking_prec_tunnel_stats_val;
    }

    if(child_yang_name == "marking-mpls-exp-imp-stats-val")
    {
        if(marking_mpls_exp_imp_stats_val == nullptr)
        {
            marking_mpls_exp_imp_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal>();
        }
        return marking_mpls_exp_imp_stats_val;
    }

    if(child_yang_name == "marking-mpls-exp-top-stats-val")
    {
        if(marking_mpls_exp_top_stats_val == nullptr)
        {
            marking_mpls_exp_top_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal>();
        }
        return marking_mpls_exp_top_stats_val;
    }

    if(child_yang_name == "marking-fr-de-stats-val")
    {
        if(marking_fr_de_stats_val == nullptr)
        {
            marking_fr_de_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal>();
        }
        return marking_fr_de_stats_val;
    }

    if(child_yang_name == "marking-fr-fecn-becn-stats-val")
    {
        if(marking_fr_fecn_becn_stats_val == nullptr)
        {
            marking_fr_fecn_becn_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal>();
        }
        return marking_fr_fecn_becn_stats_val;
    }

    if(child_yang_name == "marking-atm-clp-stats-val")
    {
        if(marking_atm_clp_stats_val == nullptr)
        {
            marking_atm_clp_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal>();
        }
        return marking_atm_clp_stats_val;
    }

    if(child_yang_name == "marking-vlan-inner-stats-val")
    {
        if(marking_vlan_inner_stats_val == nullptr)
        {
            marking_vlan_inner_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal>();
        }
        return marking_vlan_inner_stats_val;
    }

    if(child_yang_name == "marking-dei-stats-val")
    {
        if(marking_dei_stats_val == nullptr)
        {
            marking_dei_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal>();
        }
        return marking_dei_stats_val;
    }

    if(child_yang_name == "marking-dei-imp-stats-val")
    {
        if(marking_dei_imp_stats_val == nullptr)
        {
            marking_dei_imp_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal>();
        }
        return marking_dei_imp_stats_val;
    }

    if(child_yang_name == "marking-srp-priority-stats-val")
    {
        if(marking_srp_priority_stats_val == nullptr)
        {
            marking_srp_priority_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal>();
        }
        return marking_srp_priority_stats_val;
    }

    if(child_yang_name == "marking-wlan-user-priority-stats-val")
    {
        if(marking_wlan_user_priority_stats_val == nullptr)
        {
            marking_wlan_user_priority_stats_val = std::make_shared<Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal>();
        }
        return marking_wlan_user_priority_stats_val;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(marking_dscp_stats_val != nullptr)
    {
        _children["marking-dscp-stats-val"] = marking_dscp_stats_val;
    }

    if(marking_dscp_tunnel_stats_val != nullptr)
    {
        _children["marking-dscp-tunnel-stats-val"] = marking_dscp_tunnel_stats_val;
    }

    if(marking_cos_stats_val != nullptr)
    {
        _children["marking-cos-stats-val"] = marking_cos_stats_val;
    }

    if(marking_cos_inner_stats_val != nullptr)
    {
        _children["marking-cos-inner-stats-val"] = marking_cos_inner_stats_val;
    }

    if(marking_discard_class_stats_val != nullptr)
    {
        _children["marking-discard-class-stats-val"] = marking_discard_class_stats_val;
    }

    if(marking_qos_grp_stats_val != nullptr)
    {
        _children["marking-qos-grp-stats-val"] = marking_qos_grp_stats_val;
    }

    if(marking_prec_stats_val != nullptr)
    {
        _children["marking-prec-stats-val"] = marking_prec_stats_val;
    }

    if(marking_prec_tunnel_stats_val != nullptr)
    {
        _children["marking-prec-tunnel-stats-val"] = marking_prec_tunnel_stats_val;
    }

    if(marking_mpls_exp_imp_stats_val != nullptr)
    {
        _children["marking-mpls-exp-imp-stats-val"] = marking_mpls_exp_imp_stats_val;
    }

    if(marking_mpls_exp_top_stats_val != nullptr)
    {
        _children["marking-mpls-exp-top-stats-val"] = marking_mpls_exp_top_stats_val;
    }

    if(marking_fr_de_stats_val != nullptr)
    {
        _children["marking-fr-de-stats-val"] = marking_fr_de_stats_val;
    }

    if(marking_fr_fecn_becn_stats_val != nullptr)
    {
        _children["marking-fr-fecn-becn-stats-val"] = marking_fr_fecn_becn_stats_val;
    }

    if(marking_atm_clp_stats_val != nullptr)
    {
        _children["marking-atm-clp-stats-val"] = marking_atm_clp_stats_val;
    }

    if(marking_vlan_inner_stats_val != nullptr)
    {
        _children["marking-vlan-inner-stats-val"] = marking_vlan_inner_stats_val;
    }

    if(marking_dei_stats_val != nullptr)
    {
        _children["marking-dei-stats-val"] = marking_dei_stats_val;
    }

    if(marking_dei_imp_stats_val != nullptr)
    {
        _children["marking-dei-imp-stats-val"] = marking_dei_imp_stats_val;
    }

    if(marking_srp_priority_stats_val != nullptr)
    {
        _children["marking-srp-priority-stats-val"] = marking_srp_priority_stats_val;
    }

    if(marking_wlan_user_priority_stats_val != nullptr)
    {
        _children["marking-wlan-user-priority-stats-val"] = marking_wlan_user_priority_stats_val;
    }

    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "marking-dscp-stats-val" || name == "marking-dscp-tunnel-stats-val" || name == "marking-cos-stats-val" || name == "marking-cos-inner-stats-val" || name == "marking-discard-class-stats-val" || name == "marking-qos-grp-stats-val" || name == "marking-prec-stats-val" || name == "marking-prec-tunnel-stats-val" || name == "marking-mpls-exp-imp-stats-val" || name == "marking-mpls-exp-top-stats-val" || name == "marking-fr-de-stats-val" || name == "marking-fr-fecn-becn-stats-val" || name == "marking-atm-clp-stats-val" || name == "marking-vlan-inner-stats-val" || name == "marking-dei-stats-val" || name == "marking-dei-imp-stats-val" || name == "marking-srp-priority-stats-val" || name == "marking-wlan-user-priority-stats-val")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::MarkingDscpStatsVal()
    :
    dscp{YType::uint32, "dscp"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-dscp-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::~MarkingDscpStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-dscp-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::MarkingDscpTunnelStatsVal()
    :
    dscp_val{YType::uint32, "dscp-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-dscp-tunnel-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::~MarkingDscpTunnelStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return dscp_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-dscp-tunnel-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDscpTunnelStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::MarkingCosStatsVal()
    :
    cos_val{YType::uint32, "cos-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-cos-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::~MarkingCosStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return cos_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-cos-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_val.is_set || is_set(cos_val.yfilter)) leaf_name_data.push_back(cos_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-val")
    {
        cos_val = value;
        cos_val.value_namespace = name_space;
        cos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-val")
    {
        cos_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::MarkingCosInnerStatsVal()
    :
    cos_inner_val{YType::uint32, "cos-inner-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-cos-inner-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::~MarkingCosInnerStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return cos_inner_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_inner_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-cos-inner-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_inner_val.is_set || is_set(cos_inner_val.yfilter)) leaf_name_data.push_back(cos_inner_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-inner-val")
    {
        cos_inner_val = value;
        cos_inner_val.value_namespace = name_space;
        cos_inner_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-inner-val")
    {
        cos_inner_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingCosInnerStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-inner-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::MarkingDiscardClassStatsVal()
    :
    disc_class_val{YType::uint32, "disc-class-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-discard-class-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::~MarkingDiscardClassStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return disc_class_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disc_class_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-discard-class-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disc_class_val.is_set || is_set(disc_class_val.yfilter)) leaf_name_data.push_back(disc_class_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disc-class-val")
    {
        disc_class_val = value;
        disc_class_val.value_namespace = name_space;
        disc_class_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disc-class-val")
    {
        disc_class_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDiscardClassStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disc-class-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::MarkingQosGrpStatsVal()
    :
    qos_grp_val{YType::uint32, "qos-grp-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-qos-grp-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::~MarkingQosGrpStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return qos_grp_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_grp_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-qos-grp-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_grp_val.is_set || is_set(qos_grp_val.yfilter)) leaf_name_data.push_back(qos_grp_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-grp-val")
    {
        qos_grp_val = value;
        qos_grp_val.value_namespace = name_space;
        qos_grp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-grp-val")
    {
        qos_grp_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingQosGrpStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-grp-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::MarkingPrecStatsVal()
    :
    prec_val{YType::uint32, "prec-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-prec-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::~MarkingPrecStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return prec_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-prec-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec_val.is_set || is_set(prec_val.yfilter)) leaf_name_data.push_back(prec_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec-val")
    {
        prec_val = value;
        prec_val.value_namespace = name_space;
        prec_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec-val")
    {
        prec_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::MarkingPrecTunnelStatsVal()
    :
    prec_val{YType::uint32, "prec-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-prec-tunnel-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::~MarkingPrecTunnelStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return prec_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-prec-tunnel-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec_val.is_set || is_set(prec_val.yfilter)) leaf_name_data.push_back(prec_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec-val")
    {
        prec_val = value;
        prec_val.value_namespace = name_space;
        prec_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec-val")
    {
        prec_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingPrecTunnelStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::MarkingMplsExpImpStatsVal()
    :
    mpls_exp_imp_val{YType::uint32, "mpls-exp-imp-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-mpls-exp-imp-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::~MarkingMplsExpImpStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return mpls_exp_imp_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_exp_imp_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-mpls-exp-imp-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_exp_imp_val.is_set || is_set(mpls_exp_imp_val.yfilter)) leaf_name_data.push_back(mpls_exp_imp_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-exp-imp-val")
    {
        mpls_exp_imp_val = value;
        mpls_exp_imp_val.value_namespace = name_space;
        mpls_exp_imp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-exp-imp-val")
    {
        mpls_exp_imp_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpImpStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-exp-imp-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::MarkingMplsExpTopStatsVal()
    :
    mpls_exp_top_val{YType::uint32, "mpls-exp-top-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-mpls-exp-top-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::~MarkingMplsExpTopStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return mpls_exp_top_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_exp_top_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-mpls-exp-top-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_exp_top_val.is_set || is_set(mpls_exp_top_val.yfilter)) leaf_name_data.push_back(mpls_exp_top_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-exp-top-val")
    {
        mpls_exp_top_val = value;
        mpls_exp_top_val.value_namespace = name_space;
        mpls_exp_top_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-exp-top-val")
    {
        mpls_exp_top_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingMplsExpTopStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-exp-top-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::MarkingFrDeStatsVal()
    :
    fr_de{YType::boolean, "fr-de"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-fr-de-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::~MarkingFrDeStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return fr_de.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-fr-de-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrDeStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-de" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::MarkingFrFecnBecnStatsVal()
    :
    fecn_becn_val{YType::uint32, "fecn-becn-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-fr-fecn-becn-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::~MarkingFrFecnBecnStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return fecn_becn_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fecn_becn_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-fr-fecn-becn-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fecn_becn_val.is_set || is_set(fecn_becn_val.yfilter)) leaf_name_data.push_back(fecn_becn_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecn-becn-val")
    {
        fecn_becn_val = value;
        fecn_becn_val.value_namespace = name_space;
        fecn_becn_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecn-becn-val")
    {
        fecn_becn_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingFrFecnBecnStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecn-becn-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::MarkingAtmClpStatsVal()
    :
    atm_clp_val{YType::uint8, "atm-clp-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-atm-clp-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::~MarkingAtmClpStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return atm_clp_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_clp_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-atm-clp-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp_val.is_set || is_set(atm_clp_val.yfilter)) leaf_name_data.push_back(atm_clp_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-clp-val")
    {
        atm_clp_val = value;
        atm_clp_val.value_namespace = name_space;
        atm_clp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-clp-val")
    {
        atm_clp_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingAtmClpStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-clp-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::MarkingVlanInnerStatsVal()
    :
    vlan_inner_val{YType::uint32, "vlan-inner-val"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-vlan-inner-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::~MarkingVlanInnerStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return vlan_inner_val.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_inner_val.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-vlan-inner-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_inner_val.is_set || is_set(vlan_inner_val.yfilter)) leaf_name_data.push_back(vlan_inner_val.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-inner-val")
    {
        vlan_inner_val = value;
        vlan_inner_val.value_namespace = name_space;
        vlan_inner_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-inner-val")
    {
        vlan_inner_val.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingVlanInnerStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-inner-val" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::MarkingDeiStatsVal()
    :
    dei_imp_value{YType::uint32, "dei-imp-value"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-dei-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::~MarkingDeiStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return dei_imp_value.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dei_imp_value.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-dei-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dei_imp_value.is_set || is_set(dei_imp_value.yfilter)) leaf_name_data.push_back(dei_imp_value.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dei-imp-value")
    {
        dei_imp_value = value;
        dei_imp_value.value_namespace = name_space;
        dei_imp_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dei-imp-value")
    {
        dei_imp_value.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dei-imp-value" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::MarkingDeiImpStatsVal()
    :
    dei_imp_value{YType::uint32, "dei-imp-value"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-dei-imp-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::~MarkingDeiImpStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return dei_imp_value.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dei_imp_value.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-dei-imp-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dei_imp_value.is_set || is_set(dei_imp_value.yfilter)) leaf_name_data.push_back(dei_imp_value.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dei-imp-value")
    {
        dei_imp_value = value;
        dei_imp_value.value_namespace = name_space;
        dei_imp_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dei-imp-value")
    {
        dei_imp_value.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingDeiImpStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dei-imp-value" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::MarkingSrpPriorityStatsVal()
    :
    srp_priority_value{YType::uint8, "srp-priority-value"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-srp-priority-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::~MarkingSrpPriorityStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return srp_priority_value.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srp_priority_value.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-srp-priority-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srp_priority_value.is_set || is_set(srp_priority_value.yfilter)) leaf_name_data.push_back(srp_priority_value.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srp-priority-value")
    {
        srp_priority_value = value;
        srp_priority_value.value_namespace = name_space;
        srp_priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srp-priority-value")
    {
        srp_priority_value.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingSrpPriorityStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srp-priority-value" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::MarkingWlanUserPriorityStatsVal()
    :
    wlan_user_priority_value{YType::uint8, "wlan-user-priority-value"},
    marked_pkts{YType::uint64, "marked-pkts"}
{

    yang_name = "marking-wlan-user-priority-stats-val"; yang_parent_name = "marking-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::~MarkingWlanUserPriorityStatsVal()
{
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::has_data() const
{
    if (is_presence_container) return true;
    return wlan_user_priority_value.is_set
	|| marked_pkts.is_set;
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wlan_user_priority_value.yfilter)
	|| ydk::is_set(marked_pkts.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking-wlan-user-priority-stats-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wlan_user_priority_value.is_set || is_set(wlan_user_priority_value.yfilter)) leaf_name_data.push_back(wlan_user_priority_value.get_name_leafdata());
    if (marked_pkts.is_set || is_set(marked_pkts.yfilter)) leaf_name_data.push_back(marked_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wlan-user-priority-value")
    {
        wlan_user_priority_value = value;
        wlan_user_priority_value.value_namespace = name_space;
        wlan_user_priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts = value;
        marked_pkts.value_namespace = name_space;
        marked_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wlan-user-priority-value")
    {
        wlan_user_priority_value.yfilter = yfilter;
    }
    if(value_path == "marked-pkts")
    {
        marked_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::DiffservTargetClassifierStats::MarkingStats::MarkingWlanUserPriorityStatsVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wlan-user-priority-value" || name == "marked-pkts")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::PriorityOperList::PriorityOperList()
    :
    priority_level{YType::uint16, "priority-level"}
        ,
    agg_priority_stats(std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats>())
    , qlimit_default_thresh(std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh>())
    , qlimit_cos_thresh_list(this, {"cos_min", "cos_max"})
    , qlimit_disc_class_thresh_list(this, {"disc_class_min", "disc_class_max"})
    , qlimit_qos_grp_thresh_list(this, {"qos_group_min", "qos_group_max"})
    , qlimit_mpls_exp_thresh_list(this, {"exp_min", "exp_max"})
    , qlimit_dscp_thresh_list(this, {"dscp_min", "dscp_max"})
{
    agg_priority_stats->parent = this;
    qlimit_default_thresh->parent = this;

    yang_name = "priority-oper-list"; yang_parent_name = "diffserv-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::PriorityOperList::~PriorityOperList()
{
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qlimit_cos_thresh_list.len(); index++)
    {
        if(qlimit_cos_thresh_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<qlimit_disc_class_thresh_list.len(); index++)
    {
        if(qlimit_disc_class_thresh_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<qlimit_qos_grp_thresh_list.len(); index++)
    {
        if(qlimit_qos_grp_thresh_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<qlimit_mpls_exp_thresh_list.len(); index++)
    {
        if(qlimit_mpls_exp_thresh_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<qlimit_dscp_thresh_list.len(); index++)
    {
        if(qlimit_dscp_thresh_list[index]->has_data())
            return true;
    }
    return priority_level.is_set
	|| (agg_priority_stats !=  nullptr && agg_priority_stats->has_data())
	|| (qlimit_default_thresh !=  nullptr && qlimit_default_thresh->has_data());
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::has_operation() const
{
    for (std::size_t index=0; index<qlimit_cos_thresh_list.len(); index++)
    {
        if(qlimit_cos_thresh_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<qlimit_disc_class_thresh_list.len(); index++)
    {
        if(qlimit_disc_class_thresh_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<qlimit_qos_grp_thresh_list.len(); index++)
    {
        if(qlimit_qos_grp_thresh_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<qlimit_mpls_exp_thresh_list.len(); index++)
    {
        if(qlimit_mpls_exp_thresh_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<qlimit_dscp_thresh_list.len(); index++)
    {
        if(qlimit_dscp_thresh_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| (agg_priority_stats !=  nullptr && agg_priority_stats->has_operation())
	|| (qlimit_default_thresh !=  nullptr && qlimit_default_thresh->has_operation());
}

std::string Interfaces::Interface::DiffservInfo::PriorityOperList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-oper-list";
    ADD_KEY_TOKEN(priority_level, "priority-level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::PriorityOperList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::PriorityOperList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agg-priority-stats")
    {
        if(agg_priority_stats == nullptr)
        {
            agg_priority_stats = std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats>();
        }
        return agg_priority_stats;
    }

    if(child_yang_name == "qlimit-default-thresh")
    {
        if(qlimit_default_thresh == nullptr)
        {
            qlimit_default_thresh = std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh>();
        }
        return qlimit_default_thresh;
    }

    if(child_yang_name == "qlimit-cos-thresh-list")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList>();
        ent_->parent = this;
        qlimit_cos_thresh_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "qlimit-disc-class-thresh-list")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList>();
        ent_->parent = this;
        qlimit_disc_class_thresh_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "qlimit-qos-grp-thresh-list")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList>();
        ent_->parent = this;
        qlimit_qos_grp_thresh_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "qlimit-mpls-exp-thresh-list")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList>();
        ent_->parent = this;
        qlimit_mpls_exp_thresh_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "qlimit-dscp-thresh-list")
    {
        auto ent_ = std::make_shared<Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList>();
        ent_->parent = this;
        qlimit_dscp_thresh_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::PriorityOperList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(agg_priority_stats != nullptr)
    {
        _children["agg-priority-stats"] = agg_priority_stats;
    }

    if(qlimit_default_thresh != nullptr)
    {
        _children["qlimit-default-thresh"] = qlimit_default_thresh;
    }

    count_ = 0;
    for (auto ent_ : qlimit_cos_thresh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : qlimit_disc_class_thresh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : qlimit_qos_grp_thresh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : qlimit_mpls_exp_thresh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : qlimit_dscp_thresh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agg-priority-stats" || name == "qlimit-default-thresh" || name == "qlimit-cos-thresh-list" || name == "qlimit-disc-class-thresh-list" || name == "qlimit-qos-grp-thresh-list" || name == "qlimit-mpls-exp-thresh-list" || name == "qlimit-dscp-thresh-list" || name == "priority-level")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::AggPriorityStats()
    :
    output_pkts{YType::uint64, "output-pkts"},
    output_bytes{YType::uint64, "output-bytes"},
    queue_size_pkts{YType::uint64, "queue-size-pkts"},
    queue_size_bytes{YType::uint64, "queue-size-bytes"},
    drop_pkts{YType::uint64, "drop-pkts"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_pkts_flow{YType::uint64, "drop-pkts-flow"},
    drop_pkts_no_buffer{YType::uint64, "drop-pkts-no-buffer"}
{

    yang_name = "agg-priority-stats"; yang_parent_name = "priority-oper-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::~AggPriorityStats()
{
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::has_data() const
{
    if (is_presence_container) return true;
    return output_pkts.is_set
	|| output_bytes.is_set
	|| queue_size_pkts.is_set
	|| queue_size_bytes.is_set
	|| drop_pkts.is_set
	|| drop_bytes.is_set
	|| drop_pkts_flow.is_set
	|| drop_pkts_no_buffer.is_set;
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output_pkts.yfilter)
	|| ydk::is_set(output_bytes.yfilter)
	|| ydk::is_set(queue_size_pkts.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(drop_pkts.yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| ydk::is_set(drop_pkts_flow.yfilter)
	|| ydk::is_set(drop_pkts_no_buffer.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agg-priority-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_pkts.is_set || is_set(output_pkts.yfilter)) leaf_name_data.push_back(output_pkts.get_name_leafdata());
    if (output_bytes.is_set || is_set(output_bytes.yfilter)) leaf_name_data.push_back(output_bytes.get_name_leafdata());
    if (queue_size_pkts.is_set || is_set(queue_size_pkts.yfilter)) leaf_name_data.push_back(queue_size_pkts.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (drop_pkts.is_set || is_set(drop_pkts.yfilter)) leaf_name_data.push_back(drop_pkts.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_pkts_flow.is_set || is_set(drop_pkts_flow.yfilter)) leaf_name_data.push_back(drop_pkts_flow.get_name_leafdata());
    if (drop_pkts_no_buffer.is_set || is_set(drop_pkts_no_buffer.yfilter)) leaf_name_data.push_back(drop_pkts_no_buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output-pkts")
    {
        output_pkts = value;
        output_pkts.value_namespace = name_space;
        output_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bytes")
    {
        output_bytes = value;
        output_bytes.value_namespace = name_space;
        output_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts = value;
        queue_size_pkts.value_namespace = name_space;
        queue_size_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts = value;
        drop_pkts.value_namespace = name_space;
        drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts-flow")
    {
        drop_pkts_flow = value;
        drop_pkts_flow.value_namespace = name_space;
        drop_pkts_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts-no-buffer")
    {
        drop_pkts_no_buffer = value;
        drop_pkts_no_buffer.value_namespace = name_space;
        drop_pkts_no_buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output-pkts")
    {
        output_pkts.yfilter = yfilter;
    }
    if(value_path == "output-bytes")
    {
        output_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts.yfilter = yfilter;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-pkts-flow")
    {
        drop_pkts_flow.yfilter = yfilter;
    }
    if(value_path == "drop-pkts-no-buffer")
    {
        drop_pkts_no_buffer.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::AggPriorityStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-pkts" || name == "output-bytes" || name == "queue-size-pkts" || name == "queue-size-bytes" || name == "drop-pkts" || name == "drop-bytes" || name == "drop-pkts-flow" || name == "drop-pkts-no-buffer")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::QlimitDefaultThresh()
    :
    bytes{YType::uint64, "bytes"},
    thresh_size_metric{YType::uint32, "thresh-size-metric"},
    unit_val{YType::enumeration, "unit-val"},
    threshold_interval{YType::uint64, "threshold-interval"},
    thresh_interval_metric{YType::uint32, "thresh-interval-metric"},
    interval_unit_val{YType::enumeration, "interval-unit-val"}
{

    yang_name = "qlimit-default-thresh"; yang_parent_name = "priority-oper-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::~QlimitDefaultThresh()
{
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::has_data() const
{
    if (is_presence_container) return true;
    return bytes.is_set
	|| thresh_size_metric.is_set
	|| unit_val.is_set
	|| threshold_interval.is_set
	|| thresh_interval_metric.is_set
	|| interval_unit_val.is_set;
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(thresh_size_metric.yfilter)
	|| ydk::is_set(unit_val.yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(thresh_interval_metric.yfilter)
	|| ydk::is_set(interval_unit_val.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit-default-thresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (thresh_size_metric.is_set || is_set(thresh_size_metric.yfilter)) leaf_name_data.push_back(thresh_size_metric.get_name_leafdata());
    if (unit_val.is_set || is_set(unit_val.yfilter)) leaf_name_data.push_back(unit_val.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (thresh_interval_metric.is_set || is_set(thresh_interval_metric.yfilter)) leaf_name_data.push_back(thresh_interval_metric.get_name_leafdata());
    if (interval_unit_val.is_set || is_set(interval_unit_val.yfilter)) leaf_name_data.push_back(interval_unit_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric = value;
        thresh_size_metric.value_namespace = name_space;
        thresh_size_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit-val")
    {
        unit_val = value;
        unit_val.value_namespace = name_space;
        unit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric = value;
        thresh_interval_metric.value_namespace = name_space;
        thresh_interval_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val = value;
        interval_unit_val.value_namespace = name_space;
        interval_unit_val.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric.yfilter = yfilter;
    }
    if(value_path == "unit-val")
    {
        unit_val.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric.yfilter = yfilter;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDefaultThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "thresh-size-metric" || name == "unit-val" || name == "threshold-interval" || name == "thresh-interval-metric" || name == "interval-unit-val")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::QlimitCosThreshList()
    :
    cos_min{YType::uint32, "cos-min"},
    cos_max{YType::uint32, "cos-max"},
    bytes{YType::uint64, "bytes"},
    thresh_size_metric{YType::uint32, "thresh-size-metric"},
    unit_val{YType::enumeration, "unit-val"},
    threshold_interval{YType::uint64, "threshold-interval"},
    thresh_interval_metric{YType::uint32, "thresh-interval-metric"},
    interval_unit_val{YType::enumeration, "interval-unit-val"}
{

    yang_name = "qlimit-cos-thresh-list"; yang_parent_name = "priority-oper-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::~QlimitCosThreshList()
{
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::has_data() const
{
    if (is_presence_container) return true;
    return cos_min.is_set
	|| cos_max.is_set
	|| bytes.is_set
	|| thresh_size_metric.is_set
	|| unit_val.is_set
	|| threshold_interval.is_set
	|| thresh_interval_metric.is_set
	|| interval_unit_val.is_set;
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_min.yfilter)
	|| ydk::is_set(cos_max.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(thresh_size_metric.yfilter)
	|| ydk::is_set(unit_val.yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(thresh_interval_metric.yfilter)
	|| ydk::is_set(interval_unit_val.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit-cos-thresh-list";
    ADD_KEY_TOKEN(cos_min, "cos-min");
    ADD_KEY_TOKEN(cos_max, "cos-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_min.is_set || is_set(cos_min.yfilter)) leaf_name_data.push_back(cos_min.get_name_leafdata());
    if (cos_max.is_set || is_set(cos_max.yfilter)) leaf_name_data.push_back(cos_max.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (thresh_size_metric.is_set || is_set(thresh_size_metric.yfilter)) leaf_name_data.push_back(thresh_size_metric.get_name_leafdata());
    if (unit_val.is_set || is_set(unit_val.yfilter)) leaf_name_data.push_back(unit_val.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (thresh_interval_metric.is_set || is_set(thresh_interval_metric.yfilter)) leaf_name_data.push_back(thresh_interval_metric.get_name_leafdata());
    if (interval_unit_val.is_set || is_set(interval_unit_val.yfilter)) leaf_name_data.push_back(interval_unit_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-min")
    {
        cos_min = value;
        cos_min.value_namespace = name_space;
        cos_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-max")
    {
        cos_max = value;
        cos_max.value_namespace = name_space;
        cos_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric = value;
        thresh_size_metric.value_namespace = name_space;
        thresh_size_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit-val")
    {
        unit_val = value;
        unit_val.value_namespace = name_space;
        unit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric = value;
        thresh_interval_metric.value_namespace = name_space;
        thresh_interval_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val = value;
        interval_unit_val.value_namespace = name_space;
        interval_unit_val.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-min")
    {
        cos_min.yfilter = yfilter;
    }
    if(value_path == "cos-max")
    {
        cos_max.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric.yfilter = yfilter;
    }
    if(value_path == "unit-val")
    {
        unit_val.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric.yfilter = yfilter;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitCosThreshList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-min" || name == "cos-max" || name == "bytes" || name == "thresh-size-metric" || name == "unit-val" || name == "threshold-interval" || name == "thresh-interval-metric" || name == "interval-unit-val")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::QlimitDiscClassThreshList()
    :
    disc_class_min{YType::uint32, "disc-class-min"},
    disc_class_max{YType::uint32, "disc-class-max"},
    bytes{YType::uint64, "bytes"},
    thresh_size_metric{YType::uint32, "thresh-size-metric"},
    unit_val{YType::enumeration, "unit-val"},
    threshold_interval{YType::uint64, "threshold-interval"},
    thresh_interval_metric{YType::uint32, "thresh-interval-metric"},
    interval_unit_val{YType::enumeration, "interval-unit-val"}
{

    yang_name = "qlimit-disc-class-thresh-list"; yang_parent_name = "priority-oper-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::~QlimitDiscClassThreshList()
{
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::has_data() const
{
    if (is_presence_container) return true;
    return disc_class_min.is_set
	|| disc_class_max.is_set
	|| bytes.is_set
	|| thresh_size_metric.is_set
	|| unit_val.is_set
	|| threshold_interval.is_set
	|| thresh_interval_metric.is_set
	|| interval_unit_val.is_set;
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disc_class_min.yfilter)
	|| ydk::is_set(disc_class_max.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(thresh_size_metric.yfilter)
	|| ydk::is_set(unit_val.yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(thresh_interval_metric.yfilter)
	|| ydk::is_set(interval_unit_val.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit-disc-class-thresh-list";
    ADD_KEY_TOKEN(disc_class_min, "disc-class-min");
    ADD_KEY_TOKEN(disc_class_max, "disc-class-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disc_class_min.is_set || is_set(disc_class_min.yfilter)) leaf_name_data.push_back(disc_class_min.get_name_leafdata());
    if (disc_class_max.is_set || is_set(disc_class_max.yfilter)) leaf_name_data.push_back(disc_class_max.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (thresh_size_metric.is_set || is_set(thresh_size_metric.yfilter)) leaf_name_data.push_back(thresh_size_metric.get_name_leafdata());
    if (unit_val.is_set || is_set(unit_val.yfilter)) leaf_name_data.push_back(unit_val.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (thresh_interval_metric.is_set || is_set(thresh_interval_metric.yfilter)) leaf_name_data.push_back(thresh_interval_metric.get_name_leafdata());
    if (interval_unit_val.is_set || is_set(interval_unit_val.yfilter)) leaf_name_data.push_back(interval_unit_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disc-class-min")
    {
        disc_class_min = value;
        disc_class_min.value_namespace = name_space;
        disc_class_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disc-class-max")
    {
        disc_class_max = value;
        disc_class_max.value_namespace = name_space;
        disc_class_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric = value;
        thresh_size_metric.value_namespace = name_space;
        thresh_size_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit-val")
    {
        unit_val = value;
        unit_val.value_namespace = name_space;
        unit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric = value;
        thresh_interval_metric.value_namespace = name_space;
        thresh_interval_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val = value;
        interval_unit_val.value_namespace = name_space;
        interval_unit_val.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disc-class-min")
    {
        disc_class_min.yfilter = yfilter;
    }
    if(value_path == "disc-class-max")
    {
        disc_class_max.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric.yfilter = yfilter;
    }
    if(value_path == "unit-val")
    {
        unit_val.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric.yfilter = yfilter;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDiscClassThreshList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disc-class-min" || name == "disc-class-max" || name == "bytes" || name == "thresh-size-metric" || name == "unit-val" || name == "threshold-interval" || name == "thresh-interval-metric" || name == "interval-unit-val")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::QlimitQosGrpThreshList()
    :
    qos_group_min{YType::uint32, "qos-group-min"},
    qos_group_max{YType::uint32, "qos-group-max"},
    bytes{YType::uint64, "bytes"},
    thresh_size_metric{YType::uint32, "thresh-size-metric"},
    unit_val{YType::enumeration, "unit-val"},
    threshold_interval{YType::uint64, "threshold-interval"},
    thresh_interval_metric{YType::uint32, "thresh-interval-metric"},
    interval_unit_val{YType::enumeration, "interval-unit-val"}
{

    yang_name = "qlimit-qos-grp-thresh-list"; yang_parent_name = "priority-oper-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::~QlimitQosGrpThreshList()
{
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::has_data() const
{
    if (is_presence_container) return true;
    return qos_group_min.is_set
	|| qos_group_max.is_set
	|| bytes.is_set
	|| thresh_size_metric.is_set
	|| unit_val.is_set
	|| threshold_interval.is_set
	|| thresh_interval_metric.is_set
	|| interval_unit_val.is_set;
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_group_min.yfilter)
	|| ydk::is_set(qos_group_max.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(thresh_size_metric.yfilter)
	|| ydk::is_set(unit_val.yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(thresh_interval_metric.yfilter)
	|| ydk::is_set(interval_unit_val.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit-qos-grp-thresh-list";
    ADD_KEY_TOKEN(qos_group_min, "qos-group-min");
    ADD_KEY_TOKEN(qos_group_max, "qos-group-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_group_min.is_set || is_set(qos_group_min.yfilter)) leaf_name_data.push_back(qos_group_min.get_name_leafdata());
    if (qos_group_max.is_set || is_set(qos_group_max.yfilter)) leaf_name_data.push_back(qos_group_max.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (thresh_size_metric.is_set || is_set(thresh_size_metric.yfilter)) leaf_name_data.push_back(thresh_size_metric.get_name_leafdata());
    if (unit_val.is_set || is_set(unit_val.yfilter)) leaf_name_data.push_back(unit_val.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (thresh_interval_metric.is_set || is_set(thresh_interval_metric.yfilter)) leaf_name_data.push_back(thresh_interval_metric.get_name_leafdata());
    if (interval_unit_val.is_set || is_set(interval_unit_val.yfilter)) leaf_name_data.push_back(interval_unit_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-group-min")
    {
        qos_group_min = value;
        qos_group_min.value_namespace = name_space;
        qos_group_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group-max")
    {
        qos_group_max = value;
        qos_group_max.value_namespace = name_space;
        qos_group_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric = value;
        thresh_size_metric.value_namespace = name_space;
        thresh_size_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit-val")
    {
        unit_val = value;
        unit_val.value_namespace = name_space;
        unit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric = value;
        thresh_interval_metric.value_namespace = name_space;
        thresh_interval_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val = value;
        interval_unit_val.value_namespace = name_space;
        interval_unit_val.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-group-min")
    {
        qos_group_min.yfilter = yfilter;
    }
    if(value_path == "qos-group-max")
    {
        qos_group_max.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric.yfilter = yfilter;
    }
    if(value_path == "unit-val")
    {
        unit_val.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric.yfilter = yfilter;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitQosGrpThreshList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-group-min" || name == "qos-group-max" || name == "bytes" || name == "thresh-size-metric" || name == "unit-val" || name == "threshold-interval" || name == "thresh-interval-metric" || name == "interval-unit-val")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::QlimitMplsExpThreshList()
    :
    exp_min{YType::uint32, "exp-min"},
    exp_max{YType::uint32, "exp-max"},
    bytes{YType::uint64, "bytes"},
    thresh_size_metric{YType::uint32, "thresh-size-metric"},
    unit_val{YType::enumeration, "unit-val"},
    threshold_interval{YType::uint64, "threshold-interval"},
    thresh_interval_metric{YType::uint32, "thresh-interval-metric"},
    interval_unit_val{YType::enumeration, "interval-unit-val"}
{

    yang_name = "qlimit-mpls-exp-thresh-list"; yang_parent_name = "priority-oper-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::~QlimitMplsExpThreshList()
{
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::has_data() const
{
    if (is_presence_container) return true;
    return exp_min.is_set
	|| exp_max.is_set
	|| bytes.is_set
	|| thresh_size_metric.is_set
	|| unit_val.is_set
	|| threshold_interval.is_set
	|| thresh_interval_metric.is_set
	|| interval_unit_val.is_set;
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_min.yfilter)
	|| ydk::is_set(exp_max.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(thresh_size_metric.yfilter)
	|| ydk::is_set(unit_val.yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(thresh_interval_metric.yfilter)
	|| ydk::is_set(interval_unit_val.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit-mpls-exp-thresh-list";
    ADD_KEY_TOKEN(exp_min, "exp-min");
    ADD_KEY_TOKEN(exp_max, "exp-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_min.is_set || is_set(exp_min.yfilter)) leaf_name_data.push_back(exp_min.get_name_leafdata());
    if (exp_max.is_set || is_set(exp_max.yfilter)) leaf_name_data.push_back(exp_max.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (thresh_size_metric.is_set || is_set(thresh_size_metric.yfilter)) leaf_name_data.push_back(thresh_size_metric.get_name_leafdata());
    if (unit_val.is_set || is_set(unit_val.yfilter)) leaf_name_data.push_back(unit_val.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (thresh_interval_metric.is_set || is_set(thresh_interval_metric.yfilter)) leaf_name_data.push_back(thresh_interval_metric.get_name_leafdata());
    if (interval_unit_val.is_set || is_set(interval_unit_val.yfilter)) leaf_name_data.push_back(interval_unit_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-min")
    {
        exp_min = value;
        exp_min.value_namespace = name_space;
        exp_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-max")
    {
        exp_max = value;
        exp_max.value_namespace = name_space;
        exp_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric = value;
        thresh_size_metric.value_namespace = name_space;
        thresh_size_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit-val")
    {
        unit_val = value;
        unit_val.value_namespace = name_space;
        unit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric = value;
        thresh_interval_metric.value_namespace = name_space;
        thresh_interval_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val = value;
        interval_unit_val.value_namespace = name_space;
        interval_unit_val.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-min")
    {
        exp_min.yfilter = yfilter;
    }
    if(value_path == "exp-max")
    {
        exp_max.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric.yfilter = yfilter;
    }
    if(value_path == "unit-val")
    {
        unit_val.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric.yfilter = yfilter;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitMplsExpThreshList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-min" || name == "exp-max" || name == "bytes" || name == "thresh-size-metric" || name == "unit-val" || name == "threshold-interval" || name == "thresh-interval-metric" || name == "interval-unit-val")
        return true;
    return false;
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::QlimitDscpThreshList()
    :
    dscp_min{YType::uint32, "dscp-min"},
    dscp_max{YType::uint32, "dscp-max"},
    bytes{YType::uint64, "bytes"},
    thresh_size_metric{YType::uint32, "thresh-size-metric"},
    unit_val{YType::enumeration, "unit-val"},
    threshold_interval{YType::uint64, "threshold-interval"},
    thresh_interval_metric{YType::uint32, "thresh-interval-metric"},
    interval_unit_val{YType::enumeration, "interval-unit-val"}
{

    yang_name = "qlimit-dscp-thresh-list"; yang_parent_name = "priority-oper-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::~QlimitDscpThreshList()
{
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::has_data() const
{
    if (is_presence_container) return true;
    return dscp_min.is_set
	|| dscp_max.is_set
	|| bytes.is_set
	|| thresh_size_metric.is_set
	|| unit_val.is_set
	|| threshold_interval.is_set
	|| thresh_interval_metric.is_set
	|| interval_unit_val.is_set;
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_min.yfilter)
	|| ydk::is_set(dscp_max.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(thresh_size_metric.yfilter)
	|| ydk::is_set(unit_val.yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(thresh_interval_metric.yfilter)
	|| ydk::is_set(interval_unit_val.yfilter);
}

std::string Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit-dscp-thresh-list";
    ADD_KEY_TOKEN(dscp_min, "dscp-min");
    ADD_KEY_TOKEN(dscp_max, "dscp-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_min.is_set || is_set(dscp_min.yfilter)) leaf_name_data.push_back(dscp_min.get_name_leafdata());
    if (dscp_max.is_set || is_set(dscp_max.yfilter)) leaf_name_data.push_back(dscp_max.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (thresh_size_metric.is_set || is_set(thresh_size_metric.yfilter)) leaf_name_data.push_back(thresh_size_metric.get_name_leafdata());
    if (unit_val.is_set || is_set(unit_val.yfilter)) leaf_name_data.push_back(unit_val.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (thresh_interval_metric.is_set || is_set(thresh_interval_metric.yfilter)) leaf_name_data.push_back(thresh_interval_metric.get_name_leafdata());
    if (interval_unit_val.is_set || is_set(interval_unit_val.yfilter)) leaf_name_data.push_back(interval_unit_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-min")
    {
        dscp_min = value;
        dscp_min.value_namespace = name_space;
        dscp_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-max")
    {
        dscp_max = value;
        dscp_max.value_namespace = name_space;
        dscp_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric = value;
        thresh_size_metric.value_namespace = name_space;
        thresh_size_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit-val")
    {
        unit_val = value;
        unit_val.value_namespace = name_space;
        unit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric = value;
        thresh_interval_metric.value_namespace = name_space;
        thresh_interval_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val = value;
        interval_unit_val.value_namespace = name_space;
        interval_unit_val.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-min")
    {
        dscp_min.yfilter = yfilter;
    }
    if(value_path == "dscp-max")
    {
        dscp_max.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "thresh-size-metric")
    {
        thresh_size_metric.yfilter = yfilter;
    }
    if(value_path == "unit-val")
    {
        unit_val.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "thresh-interval-metric")
    {
        thresh_interval_metric.yfilter = yfilter;
    }
    if(value_path == "interval-unit-val")
    {
        interval_unit_val.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservInfo::PriorityOperList::QlimitDscpThreshList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-min" || name == "dscp-max" || name == "bytes" || name == "thresh-size-metric" || name == "unit-val" || name == "threshold-interval" || name == "thresh-interval-metric" || name == "interval-unit-val")
        return true;
    return false;
}

Interfaces::Interface::V4ProtocolStats::V4ProtocolStats()
    :
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_error_pkts{YType::uint64, "in-error-pkts"},
    in_forwarded_pkts{YType::uint64, "in-forwarded-pkts"},
    in_forwarded_octets{YType::uint64, "in-forwarded-octets"},
    in_discarded_pkts{YType::uint64, "in-discarded-pkts"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_error_pkts{YType::uint64, "out-error-pkts"},
    out_forwarded_pkts{YType::uint64, "out-forwarded-pkts"},
    out_forwarded_octets{YType::uint64, "out-forwarded-octets"},
    out_discarded_pkts{YType::uint64, "out-discarded-pkts"}
{

    yang_name = "v4-protocol-stats"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::V4ProtocolStats::~V4ProtocolStats()
{
}

bool Interfaces::Interface::V4ProtocolStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts.is_set
	|| in_octets.is_set
	|| in_error_pkts.is_set
	|| in_forwarded_pkts.is_set
	|| in_forwarded_octets.is_set
	|| in_discarded_pkts.is_set
	|| out_pkts.is_set
	|| out_octets.is_set
	|| out_error_pkts.is_set
	|| out_forwarded_pkts.is_set
	|| out_forwarded_octets.is_set
	|| out_discarded_pkts.is_set;
}

bool Interfaces::Interface::V4ProtocolStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(in_error_pkts.yfilter)
	|| ydk::is_set(in_forwarded_pkts.yfilter)
	|| ydk::is_set(in_forwarded_octets.yfilter)
	|| ydk::is_set(in_discarded_pkts.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_error_pkts.yfilter)
	|| ydk::is_set(out_forwarded_pkts.yfilter)
	|| ydk::is_set(out_forwarded_octets.yfilter)
	|| ydk::is_set(out_discarded_pkts.yfilter);
}

std::string Interfaces::Interface::V4ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-protocol-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::V4ProtocolStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_error_pkts.is_set || is_set(in_error_pkts.yfilter)) leaf_name_data.push_back(in_error_pkts.get_name_leafdata());
    if (in_forwarded_pkts.is_set || is_set(in_forwarded_pkts.yfilter)) leaf_name_data.push_back(in_forwarded_pkts.get_name_leafdata());
    if (in_forwarded_octets.is_set || is_set(in_forwarded_octets.yfilter)) leaf_name_data.push_back(in_forwarded_octets.get_name_leafdata());
    if (in_discarded_pkts.is_set || is_set(in_discarded_pkts.yfilter)) leaf_name_data.push_back(in_discarded_pkts.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_error_pkts.is_set || is_set(out_error_pkts.yfilter)) leaf_name_data.push_back(out_error_pkts.get_name_leafdata());
    if (out_forwarded_pkts.is_set || is_set(out_forwarded_pkts.yfilter)) leaf_name_data.push_back(out_forwarded_pkts.get_name_leafdata());
    if (out_forwarded_octets.is_set || is_set(out_forwarded_octets.yfilter)) leaf_name_data.push_back(out_forwarded_octets.get_name_leafdata());
    if (out_discarded_pkts.is_set || is_set(out_discarded_pkts.yfilter)) leaf_name_data.push_back(out_discarded_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::V4ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::V4ProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::V4ProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-error-pkts")
    {
        in_error_pkts = value;
        in_error_pkts.value_namespace = name_space;
        in_error_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-forwarded-pkts")
    {
        in_forwarded_pkts = value;
        in_forwarded_pkts.value_namespace = name_space;
        in_forwarded_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-forwarded-octets")
    {
        in_forwarded_octets = value;
        in_forwarded_octets.value_namespace = name_space;
        in_forwarded_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-discarded-pkts")
    {
        in_discarded_pkts = value;
        in_discarded_pkts.value_namespace = name_space;
        in_discarded_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-error-pkts")
    {
        out_error_pkts = value;
        out_error_pkts.value_namespace = name_space;
        out_error_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-forwarded-pkts")
    {
        out_forwarded_pkts = value;
        out_forwarded_pkts.value_namespace = name_space;
        out_forwarded_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-forwarded-octets")
    {
        out_forwarded_octets = value;
        out_forwarded_octets.value_namespace = name_space;
        out_forwarded_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-discarded-pkts")
    {
        out_discarded_pkts = value;
        out_discarded_pkts.value_namespace = name_space;
        out_discarded_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::V4ProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "in-error-pkts")
    {
        in_error_pkts.yfilter = yfilter;
    }
    if(value_path == "in-forwarded-pkts")
    {
        in_forwarded_pkts.yfilter = yfilter;
    }
    if(value_path == "in-forwarded-octets")
    {
        in_forwarded_octets.yfilter = yfilter;
    }
    if(value_path == "in-discarded-pkts")
    {
        in_discarded_pkts.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-error-pkts")
    {
        out_error_pkts.yfilter = yfilter;
    }
    if(value_path == "out-forwarded-pkts")
    {
        out_forwarded_pkts.yfilter = yfilter;
    }
    if(value_path == "out-forwarded-octets")
    {
        out_forwarded_octets.yfilter = yfilter;
    }
    if(value_path == "out-discarded-pkts")
    {
        out_discarded_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::V4ProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts" || name == "in-octets" || name == "in-error-pkts" || name == "in-forwarded-pkts" || name == "in-forwarded-octets" || name == "in-discarded-pkts" || name == "out-pkts" || name == "out-octets" || name == "out-error-pkts" || name == "out-forwarded-pkts" || name == "out-forwarded-octets" || name == "out-discarded-pkts")
        return true;
    return false;
}

Interfaces::Interface::V6ProtocolStats::V6ProtocolStats()
    :
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_error_pkts{YType::uint64, "in-error-pkts"},
    in_forwarded_pkts{YType::uint64, "in-forwarded-pkts"},
    in_forwarded_octets{YType::uint64, "in-forwarded-octets"},
    in_discarded_pkts{YType::uint64, "in-discarded-pkts"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_error_pkts{YType::uint64, "out-error-pkts"},
    out_forwarded_pkts{YType::uint64, "out-forwarded-pkts"},
    out_forwarded_octets{YType::uint64, "out-forwarded-octets"},
    out_discarded_pkts{YType::uint64, "out-discarded-pkts"}
{

    yang_name = "v6-protocol-stats"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::V6ProtocolStats::~V6ProtocolStats()
{
}

bool Interfaces::Interface::V6ProtocolStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts.is_set
	|| in_octets.is_set
	|| in_error_pkts.is_set
	|| in_forwarded_pkts.is_set
	|| in_forwarded_octets.is_set
	|| in_discarded_pkts.is_set
	|| out_pkts.is_set
	|| out_octets.is_set
	|| out_error_pkts.is_set
	|| out_forwarded_pkts.is_set
	|| out_forwarded_octets.is_set
	|| out_discarded_pkts.is_set;
}

bool Interfaces::Interface::V6ProtocolStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(in_error_pkts.yfilter)
	|| ydk::is_set(in_forwarded_pkts.yfilter)
	|| ydk::is_set(in_forwarded_octets.yfilter)
	|| ydk::is_set(in_discarded_pkts.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_error_pkts.yfilter)
	|| ydk::is_set(out_forwarded_pkts.yfilter)
	|| ydk::is_set(out_forwarded_octets.yfilter)
	|| ydk::is_set(out_discarded_pkts.yfilter);
}

std::string Interfaces::Interface::V6ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-protocol-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::V6ProtocolStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_error_pkts.is_set || is_set(in_error_pkts.yfilter)) leaf_name_data.push_back(in_error_pkts.get_name_leafdata());
    if (in_forwarded_pkts.is_set || is_set(in_forwarded_pkts.yfilter)) leaf_name_data.push_back(in_forwarded_pkts.get_name_leafdata());
    if (in_forwarded_octets.is_set || is_set(in_forwarded_octets.yfilter)) leaf_name_data.push_back(in_forwarded_octets.get_name_leafdata());
    if (in_discarded_pkts.is_set || is_set(in_discarded_pkts.yfilter)) leaf_name_data.push_back(in_discarded_pkts.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_error_pkts.is_set || is_set(out_error_pkts.yfilter)) leaf_name_data.push_back(out_error_pkts.get_name_leafdata());
    if (out_forwarded_pkts.is_set || is_set(out_forwarded_pkts.yfilter)) leaf_name_data.push_back(out_forwarded_pkts.get_name_leafdata());
    if (out_forwarded_octets.is_set || is_set(out_forwarded_octets.yfilter)) leaf_name_data.push_back(out_forwarded_octets.get_name_leafdata());
    if (out_discarded_pkts.is_set || is_set(out_discarded_pkts.yfilter)) leaf_name_data.push_back(out_discarded_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::V6ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::V6ProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::V6ProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-error-pkts")
    {
        in_error_pkts = value;
        in_error_pkts.value_namespace = name_space;
        in_error_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-forwarded-pkts")
    {
        in_forwarded_pkts = value;
        in_forwarded_pkts.value_namespace = name_space;
        in_forwarded_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-forwarded-octets")
    {
        in_forwarded_octets = value;
        in_forwarded_octets.value_namespace = name_space;
        in_forwarded_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-discarded-pkts")
    {
        in_discarded_pkts = value;
        in_discarded_pkts.value_namespace = name_space;
        in_discarded_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-error-pkts")
    {
        out_error_pkts = value;
        out_error_pkts.value_namespace = name_space;
        out_error_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-forwarded-pkts")
    {
        out_forwarded_pkts = value;
        out_forwarded_pkts.value_namespace = name_space;
        out_forwarded_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-forwarded-octets")
    {
        out_forwarded_octets = value;
        out_forwarded_octets.value_namespace = name_space;
        out_forwarded_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-discarded-pkts")
    {
        out_discarded_pkts = value;
        out_discarded_pkts.value_namespace = name_space;
        out_discarded_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::V6ProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "in-error-pkts")
    {
        in_error_pkts.yfilter = yfilter;
    }
    if(value_path == "in-forwarded-pkts")
    {
        in_forwarded_pkts.yfilter = yfilter;
    }
    if(value_path == "in-forwarded-octets")
    {
        in_forwarded_octets.yfilter = yfilter;
    }
    if(value_path == "in-discarded-pkts")
    {
        in_discarded_pkts.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-error-pkts")
    {
        out_error_pkts.yfilter = yfilter;
    }
    if(value_path == "out-forwarded-pkts")
    {
        out_forwarded_pkts.yfilter = yfilter;
    }
    if(value_path == "out-forwarded-octets")
    {
        out_forwarded_octets.yfilter = yfilter;
    }
    if(value_path == "out-discarded-pkts")
    {
        out_discarded_pkts.yfilter = yfilter;
    }
}

bool Interfaces::Interface::V6ProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts" || name == "in-octets" || name == "in-error-pkts" || name == "in-forwarded-pkts" || name == "in-forwarded-octets" || name == "in-discarded-pkts" || name == "out-pkts" || name == "out-octets" || name == "out-error-pkts" || name == "out-forwarded-pkts" || name == "out-forwarded-octets" || name == "out-discarded-pkts")
        return true;
    return false;
}

Interfaces::Interface::LagAggregateState::LagAggregateState()
    :
    aggregate_id{YType::str, "aggregate-id"},
    lag_type{YType::enumeration, "lag-type"},
    min_links{YType::uint16, "min-links"},
    lag_speed{YType::uint32, "lag-speed"},
    members{YType::str, "members"}
{

    yang_name = "lag-aggregate-state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::LagAggregateState::~LagAggregateState()
{
}

bool Interfaces::Interface::LagAggregateState::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : members.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aggregate_id.is_set
	|| lag_type.is_set
	|| min_links.is_set
	|| lag_speed.is_set;
}

bool Interfaces::Interface::LagAggregateState::has_operation() const
{
    for (auto const & leaf : members.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggregate_id.yfilter)
	|| ydk::is_set(lag_type.yfilter)
	|| ydk::is_set(min_links.yfilter)
	|| ydk::is_set(lag_speed.yfilter)
	|| ydk::is_set(members.yfilter);
}

std::string Interfaces::Interface::LagAggregateState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lag-aggregate-state";
    ADD_KEY_TOKEN(aggregate_id, "aggregate-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::LagAggregateState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_id.is_set || is_set(aggregate_id.yfilter)) leaf_name_data.push_back(aggregate_id.get_name_leafdata());
    if (lag_type.is_set || is_set(lag_type.yfilter)) leaf_name_data.push_back(lag_type.get_name_leafdata());
    if (min_links.is_set || is_set(min_links.yfilter)) leaf_name_data.push_back(min_links.get_name_leafdata());
    if (lag_speed.is_set || is_set(lag_speed.yfilter)) leaf_name_data.push_back(lag_speed.get_name_leafdata());

    auto members_name_datas = members.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), members_name_datas.begin(), members_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::LagAggregateState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::LagAggregateState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::LagAggregateState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-id")
    {
        aggregate_id = value;
        aggregate_id.value_namespace = name_space;
        aggregate_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lag-type")
    {
        lag_type = value;
        lag_type.value_namespace = name_space;
        lag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-links")
    {
        min_links = value;
        min_links.value_namespace = name_space;
        min_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lag-speed")
    {
        lag_speed = value;
        lag_speed.value_namespace = name_space;
        lag_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "members")
    {
        members.append(value);
    }
}

void Interfaces::Interface::LagAggregateState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-id")
    {
        aggregate_id.yfilter = yfilter;
    }
    if(value_path == "lag-type")
    {
        lag_type.yfilter = yfilter;
    }
    if(value_path == "min-links")
    {
        min_links.yfilter = yfilter;
    }
    if(value_path == "lag-speed")
    {
        lag_speed.yfilter = yfilter;
    }
    if(value_path == "members")
    {
        members.yfilter = yfilter;
    }
}

bool Interfaces::Interface::LagAggregateState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-id" || name == "lag-type" || name == "min-links" || name == "lag-speed" || name == "members")
        return true;
    return false;
}

Interfaces::Interface::EtherState::EtherState()
    :
    negotiated_duplex_mode{YType::enumeration, "negotiated-duplex-mode"},
    negotiated_port_speed{YType::enumeration, "negotiated-port-speed"},
    auto_negotiate{YType::boolean, "auto-negotiate"},
    enable_flow_control{YType::boolean, "enable-flow-control"}
{

    yang_name = "ether-state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::EtherState::~EtherState()
{
}

bool Interfaces::Interface::EtherState::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_duplex_mode.is_set
	|| negotiated_port_speed.is_set
	|| auto_negotiate.is_set
	|| enable_flow_control.is_set;
}

bool Interfaces::Interface::EtherState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_duplex_mode.yfilter)
	|| ydk::is_set(negotiated_port_speed.yfilter)
	|| ydk::is_set(auto_negotiate.yfilter)
	|| ydk::is_set(enable_flow_control.yfilter);
}

std::string Interfaces::Interface::EtherState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::EtherState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_duplex_mode.is_set || is_set(negotiated_duplex_mode.yfilter)) leaf_name_data.push_back(negotiated_duplex_mode.get_name_leafdata());
    if (negotiated_port_speed.is_set || is_set(negotiated_port_speed.yfilter)) leaf_name_data.push_back(negotiated_port_speed.get_name_leafdata());
    if (auto_negotiate.is_set || is_set(auto_negotiate.yfilter)) leaf_name_data.push_back(auto_negotiate.get_name_leafdata());
    if (enable_flow_control.is_set || is_set(enable_flow_control.yfilter)) leaf_name_data.push_back(enable_flow_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::EtherState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::EtherState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::EtherState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-duplex-mode")
    {
        negotiated_duplex_mode = value;
        negotiated_duplex_mode.value_namespace = name_space;
        negotiated_duplex_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-port-speed")
    {
        negotiated_port_speed = value;
        negotiated_port_speed.value_namespace = name_space;
        negotiated_port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-negotiate")
    {
        auto_negotiate = value;
        auto_negotiate.value_namespace = name_space;
        auto_negotiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-flow-control")
    {
        enable_flow_control = value;
        enable_flow_control.value_namespace = name_space;
        enable_flow_control.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::EtherState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-duplex-mode")
    {
        negotiated_duplex_mode.yfilter = yfilter;
    }
    if(value_path == "negotiated-port-speed")
    {
        negotiated_port_speed.yfilter = yfilter;
    }
    if(value_path == "auto-negotiate")
    {
        auto_negotiate.yfilter = yfilter;
    }
    if(value_path == "enable-flow-control")
    {
        enable_flow_control.yfilter = yfilter;
    }
}

bool Interfaces::Interface::EtherState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-duplex-mode" || name == "negotiated-port-speed" || name == "auto-negotiate" || name == "enable-flow-control")
        return true;
    return false;
}

Interfaces::Interface::EtherStats::EtherStats()
    :
    in_mac_control_frames{YType::uint64, "in-mac-control-frames"},
    in_mac_pause_frames{YType::uint64, "in-mac-pause-frames"},
    in_oversize_frames{YType::uint64, "in-oversize-frames"},
    in_jabber_frames{YType::uint64, "in-jabber-frames"},
    in_fragment_frames{YType::uint64, "in-fragment-frames"},
    in_8021q_frames{YType::uint64, "in-8021q-frames"},
    out_mac_control_frames{YType::uint64, "out-mac-control-frames"},
    out_mac_pause_frames{YType::uint64, "out-mac-pause-frames"},
    out_8021q_frames{YType::uint64, "out-8021q-frames"}
{

    yang_name = "ether-stats"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::EtherStats::~EtherStats()
{
}

bool Interfaces::Interface::EtherStats::has_data() const
{
    if (is_presence_container) return true;
    return in_mac_control_frames.is_set
	|| in_mac_pause_frames.is_set
	|| in_oversize_frames.is_set
	|| in_jabber_frames.is_set
	|| in_fragment_frames.is_set
	|| in_8021q_frames.is_set
	|| out_mac_control_frames.is_set
	|| out_mac_pause_frames.is_set
	|| out_8021q_frames.is_set;
}

bool Interfaces::Interface::EtherStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_mac_control_frames.yfilter)
	|| ydk::is_set(in_mac_pause_frames.yfilter)
	|| ydk::is_set(in_oversize_frames.yfilter)
	|| ydk::is_set(in_jabber_frames.yfilter)
	|| ydk::is_set(in_fragment_frames.yfilter)
	|| ydk::is_set(in_8021q_frames.yfilter)
	|| ydk::is_set(out_mac_control_frames.yfilter)
	|| ydk::is_set(out_mac_pause_frames.yfilter)
	|| ydk::is_set(out_8021q_frames.yfilter);
}

std::string Interfaces::Interface::EtherStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::EtherStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_mac_control_frames.is_set || is_set(in_mac_control_frames.yfilter)) leaf_name_data.push_back(in_mac_control_frames.get_name_leafdata());
    if (in_mac_pause_frames.is_set || is_set(in_mac_pause_frames.yfilter)) leaf_name_data.push_back(in_mac_pause_frames.get_name_leafdata());
    if (in_oversize_frames.is_set || is_set(in_oversize_frames.yfilter)) leaf_name_data.push_back(in_oversize_frames.get_name_leafdata());
    if (in_jabber_frames.is_set || is_set(in_jabber_frames.yfilter)) leaf_name_data.push_back(in_jabber_frames.get_name_leafdata());
    if (in_fragment_frames.is_set || is_set(in_fragment_frames.yfilter)) leaf_name_data.push_back(in_fragment_frames.get_name_leafdata());
    if (in_8021q_frames.is_set || is_set(in_8021q_frames.yfilter)) leaf_name_data.push_back(in_8021q_frames.get_name_leafdata());
    if (out_mac_control_frames.is_set || is_set(out_mac_control_frames.yfilter)) leaf_name_data.push_back(out_mac_control_frames.get_name_leafdata());
    if (out_mac_pause_frames.is_set || is_set(out_mac_pause_frames.yfilter)) leaf_name_data.push_back(out_mac_pause_frames.get_name_leafdata());
    if (out_8021q_frames.is_set || is_set(out_8021q_frames.yfilter)) leaf_name_data.push_back(out_8021q_frames.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::EtherStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::EtherStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::EtherStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-mac-control-frames")
    {
        in_mac_control_frames = value;
        in_mac_control_frames.value_namespace = name_space;
        in_mac_control_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac-pause-frames")
    {
        in_mac_pause_frames = value;
        in_mac_pause_frames.value_namespace = name_space;
        in_mac_pause_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-oversize-frames")
    {
        in_oversize_frames = value;
        in_oversize_frames.value_namespace = name_space;
        in_oversize_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-jabber-frames")
    {
        in_jabber_frames = value;
        in_jabber_frames.value_namespace = name_space;
        in_jabber_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-fragment-frames")
    {
        in_fragment_frames = value;
        in_fragment_frames.value_namespace = name_space;
        in_fragment_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-8021q-frames")
    {
        in_8021q_frames = value;
        in_8021q_frames.value_namespace = name_space;
        in_8021q_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac-control-frames")
    {
        out_mac_control_frames = value;
        out_mac_control_frames.value_namespace = name_space;
        out_mac_control_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac-pause-frames")
    {
        out_mac_pause_frames = value;
        out_mac_pause_frames.value_namespace = name_space;
        out_mac_pause_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-8021q-frames")
    {
        out_8021q_frames = value;
        out_8021q_frames.value_namespace = name_space;
        out_8021q_frames.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::EtherStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-mac-control-frames")
    {
        in_mac_control_frames.yfilter = yfilter;
    }
    if(value_path == "in-mac-pause-frames")
    {
        in_mac_pause_frames.yfilter = yfilter;
    }
    if(value_path == "in-oversize-frames")
    {
        in_oversize_frames.yfilter = yfilter;
    }
    if(value_path == "in-jabber-frames")
    {
        in_jabber_frames.yfilter = yfilter;
    }
    if(value_path == "in-fragment-frames")
    {
        in_fragment_frames.yfilter = yfilter;
    }
    if(value_path == "in-8021q-frames")
    {
        in_8021q_frames.yfilter = yfilter;
    }
    if(value_path == "out-mac-control-frames")
    {
        out_mac_control_frames.yfilter = yfilter;
    }
    if(value_path == "out-mac-pause-frames")
    {
        out_mac_pause_frames.yfilter = yfilter;
    }
    if(value_path == "out-8021q-frames")
    {
        out_8021q_frames.yfilter = yfilter;
    }
}

bool Interfaces::Interface::EtherStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-mac-control-frames" || name == "in-mac-pause-frames" || name == "in-oversize-frames" || name == "in-jabber-frames" || name == "in-fragment-frames" || name == "in-8021q-frames" || name == "out-mac-control-frames" || name == "out-mac-pause-frames" || name == "out-8021q-frames")
        return true;
    return false;
}

Interfaces::Interface::SerialState::SerialState()
    :
    crc_type{YType::enumeration, "crc-type"},
    loopback{YType::enumeration, "loopback"},
    keeplive{YType::uint32, "keeplive"},
    timeslot{YType::uint32, "timeslot"},
    subrate{YType::enumeration, "subrate"}
{

    yang_name = "serial-state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::SerialState::~SerialState()
{
}

bool Interfaces::Interface::SerialState::has_data() const
{
    if (is_presence_container) return true;
    return crc_type.is_set
	|| loopback.is_set
	|| keeplive.is_set
	|| timeslot.is_set
	|| subrate.is_set;
}

bool Interfaces::Interface::SerialState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_type.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(keeplive.yfilter)
	|| ydk::is_set(timeslot.yfilter)
	|| ydk::is_set(subrate.yfilter);
}

std::string Interfaces::Interface::SerialState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::SerialState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_type.is_set || is_set(crc_type.yfilter)) leaf_name_data.push_back(crc_type.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (keeplive.is_set || is_set(keeplive.yfilter)) leaf_name_data.push_back(keeplive.get_name_leafdata());
    if (timeslot.is_set || is_set(timeslot.yfilter)) leaf_name_data.push_back(timeslot.get_name_leafdata());
    if (subrate.is_set || is_set(subrate.yfilter)) leaf_name_data.push_back(subrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::SerialState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::SerialState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::SerialState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-type")
    {
        crc_type = value;
        crc_type.value_namespace = name_space;
        crc_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keeplive")
    {
        keeplive = value;
        keeplive.value_namespace = name_space;
        keeplive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot")
    {
        timeslot = value;
        timeslot.value_namespace = name_space;
        timeslot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subrate")
    {
        subrate = value;
        subrate.value_namespace = name_space;
        subrate.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::SerialState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-type")
    {
        crc_type.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "keeplive")
    {
        keeplive.yfilter = yfilter;
    }
    if(value_path == "timeslot")
    {
        timeslot.yfilter = yfilter;
    }
    if(value_path == "subrate")
    {
        subrate.yfilter = yfilter;
    }
}

bool Interfaces::Interface::SerialState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-type" || name == "loopback" || name == "keeplive" || name == "timeslot" || name == "subrate")
        return true;
    return false;
}

Interfaces::Interface::SerialStats::SerialStats()
    :
    in_abort_clock_error{YType::uint32, "in-abort-clock-error"}
{

    yang_name = "serial-stats"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Interfaces::Interface::SerialStats::~SerialStats()
{
}

bool Interfaces::Interface::SerialStats::has_data() const
{
    if (is_presence_container) return true;
    return in_abort_clock_error.is_set;
}

bool Interfaces::Interface::SerialStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_abort_clock_error.yfilter);
}

std::string Interfaces::Interface::SerialStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Interfaces::Interface::SerialStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_abort_clock_error.is_set || is_set(in_abort_clock_error.yfilter)) leaf_name_data.push_back(in_abort_clock_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Interfaces::Interface::SerialStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Interfaces::Interface::SerialStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Interfaces::Interface::SerialStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-abort-clock-error")
    {
        in_abort_clock_error = value;
        in_abort_clock_error.value_namespace = name_space;
        in_abort_clock_error.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::SerialStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-abort-clock-error")
    {
        in_abort_clock_error.yfilter = yfilter;
    }
}

bool Interfaces::Interface::SerialStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-abort-clock-error")
        return true;
    return false;
}

const Enum::YLeaf QosMatchType::qos_match_dscp {0, "qos-match-dscp"};
const Enum::YLeaf QosMatchType::qos_match_src_ip {1, "qos-match-src-ip"};
const Enum::YLeaf QosMatchType::qos_match_dst_ip {2, "qos-match-dst-ip"};
const Enum::YLeaf QosMatchType::qos_match_src_port {3, "qos-match-src-port"};
const Enum::YLeaf QosMatchType::qos_match_dst_port {4, "qos-match-dst-port"};
const Enum::YLeaf QosMatchType::qos_match_proto {5, "qos-match-proto"};

const Enum::YLeaf EtherDuplex::full_duplex {0, "full-duplex"};
const Enum::YLeaf EtherDuplex::half_duplex {1, "half-duplex"};
const Enum::YLeaf EtherDuplex::auto_duplex {2, "auto-duplex"};
const Enum::YLeaf EtherDuplex::unknown_duplex {3, "unknown-duplex"};

const Enum::YLeaf SerialCrc::serial_crc32 {0, "serial-crc32"};
const Enum::YLeaf SerialCrc::serial_crc16 {1, "serial-crc16"};

const Enum::YLeaf ThreshUnit::thresh_units_default {0, "thresh-units-default"};
const Enum::YLeaf ThreshUnit::thresh_units_bytes {1, "thresh-units-bytes"};
const Enum::YLeaf ThreshUnit::thresh_units_sec {2, "thresh-units-sec"};
const Enum::YLeaf ThreshUnit::thresh_units_packets {3, "thresh-units-packets"};
const Enum::YLeaf ThreshUnit::thresh_units_cells {4, "thresh-units-cells"};
const Enum::YLeaf ThreshUnit::thresh_units_percent {5, "thresh-units-percent"};

const Enum::YLeaf T1e1LoopbackMode::t1e1_no_loopback {0, "t1e1-no-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_cli_local_loopback {1, "t1e1-cli-local-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_line_cli_local_loopback {2, "t1e1-line-cli-local-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_payload_cli_local_loopback {3, "t1e1-payload-cli-local-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_local_line_loopback {4, "t1e1-local-line-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_local_payload_loopback {5, "t1e1-local-payload-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_local_ansi_fdl_remote_loopback {6, "t1e1-local-ansi-fdl-remote-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_line_att_fdl_remote_loopback {7, "t1e1-line-att-fdl-remote-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_payload_ansi_fdl_remote_loopback {8, "t1e1-payload-ansi-fdl-remote-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_payload_att_fdl_remote_loopback {9, "t1e1-payload-att-fdl-remote-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_line_iboc_remote_loopback {10, "t1e1-line-iboc-remote-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_line_ansi_fdl_local_loopback {11, "t1e1-line-ansi-fdl-local-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_line_att_fdl_local_loopback {12, "t1e1-line-att-fdl-local-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_payload_ansi_fdl_local_loopback {13, "t1e1-payload-ansi-fdl-local-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_payload_att_fdl_local_loopback {14, "t1e1-payload-att-fdl-local-loopback"};
const Enum::YLeaf T1e1LoopbackMode::t1e1_line_iboc_local_loopback {15, "t1e1-line-iboc-local-loopback"};

const Enum::YLeaf IntfState::if_state_unknown {0, "if-state-unknown"};
const Enum::YLeaf IntfState::if_state_up {1, "if-state-up"};
const Enum::YLeaf IntfState::if_state_down {2, "if-state-down"};
const Enum::YLeaf IntfState::if_state_test {3, "if-state-test"};

const Enum::YLeaf OperState::if_oper_state_invalid {0, "if-oper-state-invalid"};
const Enum::YLeaf OperState::if_oper_state_ready {1, "if-oper-state-ready"};
const Enum::YLeaf OperState::if_oper_state_no_pass {2, "if-oper-state-no-pass"};
const Enum::YLeaf OperState::if_oper_state_test {3, "if-oper-state-test"};
const Enum::YLeaf OperState::if_oper_state_unknown {4, "if-oper-state-unknown"};
const Enum::YLeaf OperState::if_oper_state_dormant {5, "if-oper-state-dormant"};
const Enum::YLeaf OperState::if_oper_state_not_present {6, "if-oper-state-not-present"};
const Enum::YLeaf OperState::if_oper_state_lower_layer_down {7, "if-oper-state-lower-layer-down"};

const Enum::YLeaf AggregationType::lag_off {0, "lag-off"};
const Enum::YLeaf AggregationType::lag_auto {1, "lag-auto"};
const Enum::YLeaf AggregationType::lag_active {2, "lag-active"};
const Enum::YLeaf AggregationType::lag_passive {3, "lag-passive"};

const Enum::YLeaf SubrateSpeed::dsx1_subrate_56kbps {0, "dsx1-subrate-56kbps"};
const Enum::YLeaf SubrateSpeed::dsx1_subrate_64kbps {1, "dsx1-subrate-64kbps"};

const Enum::YLeaf IetfIntfType::iana_iftype_other {1, "iana-iftype-other"};
const Enum::YLeaf IetfIntfType::iana_iftype_regular1822 {2, "iana-iftype-regular1822"};
const Enum::YLeaf IetfIntfType::iana_iftype_hdh1822 {3, "iana-iftype-hdh1822"};
const Enum::YLeaf IetfIntfType::iana_iftype_ddnx25 {4, "iana-iftype-ddnx25"};
const Enum::YLeaf IetfIntfType::iana_iftype_rfc877x25 {5, "iana-iftype-rfc877x25"};
const Enum::YLeaf IetfIntfType::iana_iftype_ethernet_csmacd {6, "iana-iftype-ethernet-csmacd"};
const Enum::YLeaf IetfIntfType::iana_iftype_iso88023_csmacd {7, "iana-iftype-iso88023-csmacd"};
const Enum::YLeaf IetfIntfType::iana_iftype_iso88024_tokenbus {8, "iana-iftype-iso88024-tokenbus"};
const Enum::YLeaf IetfIntfType::iana_iftype_iso88025_tokenring {9, "iana-iftype-iso88025-tokenring"};
const Enum::YLeaf IetfIntfType::iana_iftype_iso88026_man {10, "iana-iftype-iso88026-man"};
const Enum::YLeaf IetfIntfType::iana_iftype_starlan {11, "iana-iftype-starlan"};
const Enum::YLeaf IetfIntfType::iana_iftype_proteon10mbit {12, "iana-iftype-proteon10mbit"};
const Enum::YLeaf IetfIntfType::iana_iftype_proteon80mbit {13, "iana-iftype-proteon80mbit"};
const Enum::YLeaf IetfIntfType::iana_iftype_hyperchannel {14, "iana-iftype-hyperchannel"};
const Enum::YLeaf IetfIntfType::iana_iftype_fddi {15, "iana-iftype-fddi"};
const Enum::YLeaf IetfIntfType::iana_iftype_lapb {16, "iana-iftype-lapb"};
const Enum::YLeaf IetfIntfType::iana_iftype_sdlc {17, "iana-iftype-sdlc"};
const Enum::YLeaf IetfIntfType::iana_iftype_ds1 {18, "iana-iftype-ds1"};
const Enum::YLeaf IetfIntfType::iana_iftype_e1 {19, "iana-iftype-e1"};
const Enum::YLeaf IetfIntfType::iana_iftype_basicisdn {20, "iana-iftype-basicisdn"};
const Enum::YLeaf IetfIntfType::iana_iftype_primaryisdn {21, "iana-iftype-primaryisdn"};
const Enum::YLeaf IetfIntfType::iana_iftype_prop_p2p_serial {22, "iana-iftype-prop-p2p-serial"};
const Enum::YLeaf IetfIntfType::iana_iftype_ppp {23, "iana-iftype-ppp"};
const Enum::YLeaf IetfIntfType::iana_iftype_sw_loopback {24, "iana-iftype-sw-loopback"};
const Enum::YLeaf IetfIntfType::iana_iftype_eon {25, "iana-iftype-eon"};
const Enum::YLeaf IetfIntfType::iana_iftype_ethernet3mbit {26, "iana-iftype-ethernet3mbit"};
const Enum::YLeaf IetfIntfType::iana_iftype_nsip {27, "iana-iftype-nsip"};
const Enum::YLeaf IetfIntfType::iana_iftype_slip {28, "iana-iftype-slip"};
const Enum::YLeaf IetfIntfType::iana_iftype_ultra {29, "iana-iftype-ultra"};
const Enum::YLeaf IetfIntfType::iana_iftype_ds3 {30, "iana-iftype-ds3"};
const Enum::YLeaf IetfIntfType::iana_iftype_sip {31, "iana-iftype-sip"};
const Enum::YLeaf IetfIntfType::iana_iftype_framerelay {32, "iana-iftype-framerelay"};
const Enum::YLeaf IetfIntfType::iana_iftype_rs232 {33, "iana-iftype-rs232"};
const Enum::YLeaf IetfIntfType::iana_iftype_para {34, "iana-iftype-para"};
const Enum::YLeaf IetfIntfType::iana_iftype_arcnet {35, "iana-iftype-arcnet"};
const Enum::YLeaf IetfIntfType::iana_iftype_arcnetplus {36, "iana-iftype-arcnetplus"};
const Enum::YLeaf IetfIntfType::iana_iftype_atm {37, "iana-iftype-atm"};
const Enum::YLeaf IetfIntfType::iana_iftype_miox25 {38, "iana-iftype-miox25"};
const Enum::YLeaf IetfIntfType::iana_iftype_sonet {39, "iana-iftype-sonet"};
const Enum::YLeaf IetfIntfType::iana_iftype_x25ple {40, "iana-iftype-x25ple"};
const Enum::YLeaf IetfIntfType::iana_iftype_iso88022_llc {41, "iana-iftype-iso88022-llc"};
const Enum::YLeaf IetfIntfType::iana_iftype_localtalk {42, "iana-iftype-localtalk"};
const Enum::YLeaf IetfIntfType::iana_iftype_smdsdxi {43, "iana-iftype-smdsdxi"};
const Enum::YLeaf IetfIntfType::iana_iftype_framerelay_service {44, "iana-iftype-framerelay-service"};
const Enum::YLeaf IetfIntfType::iana_iftype_v35 {45, "iana-iftype-v35"};
const Enum::YLeaf IetfIntfType::iana_iftype_hssi {46, "iana-iftype-hssi"};
const Enum::YLeaf IetfIntfType::iana_iftype_hippi {47, "iana-iftype-hippi"};
const Enum::YLeaf IetfIntfType::iana_iftype_modem {48, "iana-iftype-modem"};
const Enum::YLeaf IetfIntfType::iana_iftype_aal5 {49, "iana-iftype-aal5"};
const Enum::YLeaf IetfIntfType::iana_iftype_sonetpath {50, "iana-iftype-sonetpath"};
const Enum::YLeaf IetfIntfType::iana_iftype_sonetvt {51, "iana-iftype-sonetvt"};
const Enum::YLeaf IetfIntfType::iana_iftype_smdsicip {52, "iana-iftype-smdsicip"};
const Enum::YLeaf IetfIntfType::iana_iftype_propvirtual {53, "iana-iftype-propvirtual"};
const Enum::YLeaf IetfIntfType::iana_iftype_propmultiplexor {54, "iana-iftype-propmultiplexor"};
const Enum::YLeaf IetfIntfType::iana_iftype_ieee80212 {55, "iana-iftype-ieee80212"};
const Enum::YLeaf IetfIntfType::iana_iftype_fiberchannel {56, "iana-iftype-fiberchannel"};
const Enum::YLeaf IetfIntfType::iana_iftype_hippi_interface {57, "iana-iftype-hippi-interface"};
const Enum::YLeaf IetfIntfType::iana_iftype_framerelay_interconnect {58, "iana-iftype-framerelay-interconnect"};
const Enum::YLeaf IetfIntfType::iana_iftype_aflane8023 {59, "iana-iftype-aflane8023"};
const Enum::YLeaf IetfIntfType::iana_iftype_aflane8025 {60, "iana-iftype-aflane8025"};
const Enum::YLeaf IetfIntfType::iana_iftype_cctemul {61, "iana-iftype-cctemul"};
const Enum::YLeaf IetfIntfType::iana_iftype_fastether {62, "iana-iftype-fastether"};
const Enum::YLeaf IetfIntfType::iana_iftype_isdn {63, "iana-iftype-isdn"};
const Enum::YLeaf IetfIntfType::iana_iftype_v11 {64, "iana-iftype-v11"};
const Enum::YLeaf IetfIntfType::iana_iftype_v36 {65, "iana-iftype-v36"};
const Enum::YLeaf IetfIntfType::iana_iftype_g703at64k {66, "iana-iftype-g703at64k"};
const Enum::YLeaf IetfIntfType::iana_iftype_g703at2mb {67, "iana-iftype-g703at2mb"};
const Enum::YLeaf IetfIntfType::iana_iftype_qllc {68, "iana-iftype-qllc"};
const Enum::YLeaf IetfIntfType::iana_iftype_fastetherfx {69, "iana-iftype-fastetherfx"};
const Enum::YLeaf IetfIntfType::iana_iftype_channel {70, "iana-iftype-channel"};
const Enum::YLeaf IetfIntfType::iana_iftype_ieee80211 {71, "iana-iftype-ieee80211"};
const Enum::YLeaf IetfIntfType::iana_iftype_ibm370parchan {72, "iana-iftype-ibm370parchan"};
const Enum::YLeaf IetfIntfType::iana_iftype_escon {73, "iana-iftype-escon"};
const Enum::YLeaf IetfIntfType::iana_iftype_dlsw {74, "iana-iftype-dlsw"};
const Enum::YLeaf IetfIntfType::iana_iftype_isdns {75, "iana-iftype-isdns"};
const Enum::YLeaf IetfIntfType::iana_iftype_isdnu {76, "iana-iftype-isdnu"};
const Enum::YLeaf IetfIntfType::iana_iftype_lapd {77, "iana-iftype-lapd"};
const Enum::YLeaf IetfIntfType::iana_iftype_ipswitch {78, "iana-iftype-ipswitch"};
const Enum::YLeaf IetfIntfType::iana_iftype_rsrb {79, "iana-iftype-rsrb"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmlogical {80, "iana-iftype-atmlogical"};
const Enum::YLeaf IetfIntfType::iana_iftype_ds0 {81, "iana-iftype-ds0"};
const Enum::YLeaf IetfIntfType::iana_iftype_ds0bundle {82, "iana-iftype-ds0bundle"};
const Enum::YLeaf IetfIntfType::iana_iftype_bsc {83, "iana-iftype-bsc"};
const Enum::YLeaf IetfIntfType::iana_iftype_async {84, "iana-iftype-async"};
const Enum::YLeaf IetfIntfType::iana_iftype_cnr {85, "iana-iftype-cnr"};
const Enum::YLeaf IetfIntfType::iana_iftype_iso88025_dtr {86, "iana-iftype-iso88025-dtr"};
const Enum::YLeaf IetfIntfType::iana_iftype_eplrs {87, "iana-iftype-eplrs"};
const Enum::YLeaf IetfIntfType::iana_iftype_arap {88, "iana-iftype-arap"};
const Enum::YLeaf IetfIntfType::iana_iftype_propcnls {89, "iana-iftype-propcnls"};
const Enum::YLeaf IetfIntfType::iana_iftype_hostpad {90, "iana-iftype-hostpad"};
const Enum::YLeaf IetfIntfType::iana_iftype_termpad {91, "iana-iftype-termpad"};
const Enum::YLeaf IetfIntfType::iana_iftype_framerelay_mpi {92, "iana-iftype-framerelay-mpi"};
const Enum::YLeaf IetfIntfType::iana_iftype_x213 {93, "iana-iftype-x213"};
const Enum::YLeaf IetfIntfType::iana_iftype_adsl {94, "iana-iftype-adsl"};
const Enum::YLeaf IetfIntfType::iana_iftype_radsl {95, "iana-iftype-radsl"};
const Enum::YLeaf IetfIntfType::iana_iftype_sdsl {96, "iana-iftype-sdsl"};
const Enum::YLeaf IetfIntfType::iana_iftype_vdsl {97, "iana-iftype-vdsl"};
const Enum::YLeaf IetfIntfType::iana_iftype_iso88025_crfpint {98, "iana-iftype-iso88025-crfpint"};
const Enum::YLeaf IetfIntfType::iana_iftype_myrinet {99, "iana-iftype-myrinet"};
const Enum::YLeaf IetfIntfType::iana_iftype_voiceem {100, "iana-iftype-voiceem"};
const Enum::YLeaf IetfIntfType::iana_iftype_voicefxo {101, "iana-iftype-voicefxo"};
const Enum::YLeaf IetfIntfType::iana_iftype_voicefxs {102, "iana-iftype-voicefxs"};
const Enum::YLeaf IetfIntfType::iana_iftype_voiceencap {103, "iana-iftype-voiceencap"};
const Enum::YLeaf IetfIntfType::iana_iftype_voip {104, "iana-iftype-voip"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmdxi {105, "iana-iftype-atmdxi"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmfuni {106, "iana-iftype-atmfuni"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmima {107, "iana-iftype-atmima"};
const Enum::YLeaf IetfIntfType::iana_iftype_ppp_multilinkbundle {108, "iana-iftype-ppp-multilinkbundle"};
const Enum::YLeaf IetfIntfType::iana_iftype_ipovercdlc {109, "iana-iftype-ipovercdlc"};
const Enum::YLeaf IetfIntfType::iana_iftype_ipoverclaw {110, "iana-iftype-ipoverclaw"};
const Enum::YLeaf IetfIntfType::iana_iftype_stack2stack {111, "iana-iftype-stack2stack"};
const Enum::YLeaf IetfIntfType::iana_iftype_virtualipaddress {112, "iana-iftype-virtualipaddress"};
const Enum::YLeaf IetfIntfType::iana_iftype_mpc {113, "iana-iftype-mpc"};
const Enum::YLeaf IetfIntfType::iana_iftype_ipoveratm {114, "iana-iftype-ipoveratm"};
const Enum::YLeaf IetfIntfType::iana_iftype_iso88025_fiber {115, "iana-iftype-iso88025-fiber"};
const Enum::YLeaf IetfIntfType::iana_iftype_tdlc {116, "iana-iftype-tdlc"};
const Enum::YLeaf IetfIntfType::iana_iftype_gige {117, "iana-iftype-gige"};
const Enum::YLeaf IetfIntfType::iana_iftype_hdlc {118, "iana-iftype-hdlc"};
const Enum::YLeaf IetfIntfType::iana_iftype_lapf {119, "iana-iftype-lapf"};
const Enum::YLeaf IetfIntfType::iana_iftype_v37 {120, "iana-iftype-v37"};
const Enum::YLeaf IetfIntfType::iana_iftype_x25mlp {121, "iana-iftype-x25mlp"};
const Enum::YLeaf IetfIntfType::iana_iftype_x25huntgroup {122, "iana-iftype-x25huntgroup"};
const Enum::YLeaf IetfIntfType::iana_iftype_transphdlc {123, "iana-iftype-transphdlc"};
const Enum::YLeaf IetfIntfType::iana_iftype_interleave {124, "iana-iftype-interleave"};
const Enum::YLeaf IetfIntfType::iana_iftype_fast {125, "iana-iftype-fast"};
const Enum::YLeaf IetfIntfType::iana_iftype_ip {126, "iana-iftype-ip"};
const Enum::YLeaf IetfIntfType::iana_iftype_docs_cable_maclayer {127, "iana-iftype-docs-cable-maclayer"};
const Enum::YLeaf IetfIntfType::iana_iftype_docs_cable_downstream {128, "iana-iftype-docs-cable-downstream"};
const Enum::YLeaf IetfIntfType::iana_iftype_docs_cable_upstream {129, "iana-iftype-docs-cable-upstream"};
const Enum::YLeaf IetfIntfType::iana_iftype_a12mppswitch {130, "iana-iftype-a12mppswitch"};
const Enum::YLeaf IetfIntfType::iana_iftype_tunnel {131, "iana-iftype-tunnel"};
const Enum::YLeaf IetfIntfType::iana_iftype_coffee {132, "iana-iftype-coffee"};
const Enum::YLeaf IetfIntfType::iana_iftype_ces {133, "iana-iftype-ces"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmsubinterface {134, "iana-iftype-atmsubinterface"};
const Enum::YLeaf IetfIntfType::iana_iftype_l2vlan {135, "iana-iftype-l2vlan"};
const Enum::YLeaf IetfIntfType::iana_iftype_l3ipvlan {136, "iana-iftype-l3ipvlan"};
const Enum::YLeaf IetfIntfType::iana_iftype_l3ipxvlan {137, "iana-iftype-l3ipxvlan"};
const Enum::YLeaf IetfIntfType::iana_iftype_digital_powerline {138, "iana-iftype-digital-powerline"};
const Enum::YLeaf IetfIntfType::iana_iftype_media_mailoverip {139, "iana-iftype-media-mailoverip"};
const Enum::YLeaf IetfIntfType::iana_iftype_dtm {140, "iana-iftype-dtm"};
const Enum::YLeaf IetfIntfType::iana_iftype_dcn {141, "iana-iftype-dcn"};
const Enum::YLeaf IetfIntfType::iana_iftype_ipforward {142, "iana-iftype-ipforward"};
const Enum::YLeaf IetfIntfType::iana_iftype_msdsl {143, "iana-iftype-msdsl"};
const Enum::YLeaf IetfIntfType::iana_iftype_ieee1394 {144, "iana-iftype-ieee1394"};
const Enum::YLeaf IetfIntfType::iana_iftype_gsn {145, "iana-iftype-gsn"};
const Enum::YLeaf IetfIntfType::iana_iftype_dvbrcc_maclayer {146, "iana-iftype-dvbrcc-maclayer"};
const Enum::YLeaf IetfIntfType::iana_iftype_dvbrcc_downstream {147, "iana-iftype-dvbrcc-downstream"};
const Enum::YLeaf IetfIntfType::iana_iftype_dvbrcc_upstream {148, "iana-iftype-dvbrcc-upstream"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmvirtual {149, "iana-iftype-atmvirtual"};
const Enum::YLeaf IetfIntfType::iana_iftype_mplstunnel {150, "iana-iftype-mplstunnel"};
const Enum::YLeaf IetfIntfType::iana_iftype_srp {151, "iana-iftype-srp"};
const Enum::YLeaf IetfIntfType::iana_iftype_voiceoveratm {152, "iana-iftype-voiceoveratm"};
const Enum::YLeaf IetfIntfType::iana_iftype_voiceoverframerelay {153, "iana-iftype-voiceoverframerelay"};
const Enum::YLeaf IetfIntfType::iana_iftype_idsl {154, "iana-iftype-idsl"};
const Enum::YLeaf IetfIntfType::iana_iftype_compositelink {155, "iana-iftype-compositelink"};
const Enum::YLeaf IetfIntfType::iana_iftype_ss7siglink {156, "iana-iftype-ss7siglink"};
const Enum::YLeaf IetfIntfType::iana_iftype_propwireless_p2p {157, "iana-iftype-propwireless-p2p"};
const Enum::YLeaf IetfIntfType::iana_iftype_frforward {158, "iana-iftype-frforward"};
const Enum::YLeaf IetfIntfType::iana_iftype_rfc1483 {159, "iana-iftype-rfc1483"};
const Enum::YLeaf IetfIntfType::iana_iftype_usb {160, "iana-iftype-usb"};
const Enum::YLeaf IetfIntfType::iana_iftype_ieee8023_adlag {161, "iana-iftype-ieee8023-adlag"};
const Enum::YLeaf IetfIntfType::iana_iftype_bgppolicy_accounting {162, "iana-iftype-bgppolicy-accounting"};
const Enum::YLeaf IetfIntfType::iana_iftype_frf16mfrbundle {163, "iana-iftype-frf16mfrbundle"};
const Enum::YLeaf IetfIntfType::iana_iftype_h323gatekeeper {164, "iana-iftype-h323gatekeeper"};
const Enum::YLeaf IetfIntfType::iana_iftype_h323proxy {165, "iana-iftype-h323proxy"};
const Enum::YLeaf IetfIntfType::iana_iftype_mpls {166, "iana-iftype-mpls"};
const Enum::YLeaf IetfIntfType::iana_iftype_mfsiglink {167, "iana-iftype-mfsiglink"};
const Enum::YLeaf IetfIntfType::iana_iftype_hdsl2 {168, "iana-iftype-hdsl2"};
const Enum::YLeaf IetfIntfType::iana_iftype_shdsl {169, "iana-iftype-shdsl"};
const Enum::YLeaf IetfIntfType::iana_iftype_ds1fdl {170, "iana-iftype-ds1fdl"};
const Enum::YLeaf IetfIntfType::iana_iftype_pos {171, "iana-iftype-pos"};
const Enum::YLeaf IetfIntfType::iana_iftype_dvbasiin {172, "iana-iftype-dvbasiin"};
const Enum::YLeaf IetfIntfType::iana_iftype_dvbasiout {173, "iana-iftype-dvbasiout"};
const Enum::YLeaf IetfIntfType::iana_iftype_plc {174, "iana-iftype-plc"};
const Enum::YLeaf IetfIntfType::iana_iftype_nfas {175, "iana-iftype-nfas"};
const Enum::YLeaf IetfIntfType::iana_iftype_tr008 {176, "iana-iftype-tr008"};
const Enum::YLeaf IetfIntfType::iana_iftype_gr303rdt {177, "iana-iftype-gr303rdt"};
const Enum::YLeaf IetfIntfType::iana_iftype_gr303idt {178, "iana-iftype-gr303idt"};
const Enum::YLeaf IetfIntfType::iana_iftype_isup {179, "iana-iftype-isup"};
const Enum::YLeaf IetfIntfType::iana_iftype_prop_docs_wireless_maclayer {180, "iana-iftype-prop-docs-wireless-maclayer"};
const Enum::YLeaf IetfIntfType::iana_iftype_prop_docs_wireless_downstream {181, "iana-iftype-prop-docs-wireless-downstream"};
const Enum::YLeaf IetfIntfType::iana_iftype_prop_docs_wireless_upstream {182, "iana-iftype-prop-docs-wireless-upstream"};
const Enum::YLeaf IetfIntfType::iana_iftype_hiperlan2 {183, "iana-iftype-hiperlan2"};
const Enum::YLeaf IetfIntfType::iana_iftype_prop_bwap2mp {184, "iana-iftype-prop-bwap2mp"};
const Enum::YLeaf IetfIntfType::iana_iftype_sonetoverheadchannel {185, "iana-iftype-sonetoverheadchannel"};
const Enum::YLeaf IetfIntfType::iana_iftype_digital_wrapperoverheadchannel {186, "iana-iftype-digital-wrapperoverheadchannel"};
const Enum::YLeaf IetfIntfType::iana_iftype_aal2 {187, "iana-iftype-aal2"};
const Enum::YLeaf IetfIntfType::iana_iftype_radiomac {188, "iana-iftype-radiomac"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmradio {189, "iana-iftype-atmradio"};
const Enum::YLeaf IetfIntfType::iana_iftype_imt {190, "iana-iftype-imt"};
const Enum::YLeaf IetfIntfType::iana_iftype_mvl {191, "iana-iftype-mvl"};
const Enum::YLeaf IetfIntfType::iana_iftype_reachhdsl {192, "iana-iftype-reachhdsl"};
const Enum::YLeaf IetfIntfType::iana_iftype_frdlciendpt {193, "iana-iftype-frdlciendpt"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmvciendpt {194, "iana-iftype-atmvciendpt"};
const Enum::YLeaf IetfIntfType::iana_iftype_opticalchannel {195, "iana-iftype-opticalchannel"};
const Enum::YLeaf IetfIntfType::iana_iftype_opticaltransport {196, "iana-iftype-opticaltransport"};
const Enum::YLeaf IetfIntfType::iana_iftype_propatm {197, "iana-iftype-propatm"};
const Enum::YLeaf IetfIntfType::iana_iftype_voiceovercable {198, "iana-iftype-voiceovercable"};
const Enum::YLeaf IetfIntfType::iana_iftype_infiniband {199, "iana-iftype-infiniband"};
const Enum::YLeaf IetfIntfType::iana_iftype_telink {200, "iana-iftype-telink"};
const Enum::YLeaf IetfIntfType::iana_iftype_q2931 {201, "iana-iftype-q2931"};
const Enum::YLeaf IetfIntfType::iana_iftype_virtualatg {202, "iana-iftype-virtualatg"};
const Enum::YLeaf IetfIntfType::iana_iftype_siptg {203, "iana-iftype-siptg"};
const Enum::YLeaf IetfIntfType::iana_iftype_sipsig {204, "iana-iftype-sipsig"};
const Enum::YLeaf IetfIntfType::iana_iftype_docs_cable_upstreamchannel {205, "iana-iftype-docs-cable-upstreamchannel"};
const Enum::YLeaf IetfIntfType::iana_iftype_econet {206, "iana-iftype-econet"};
const Enum::YLeaf IetfIntfType::iana_iftype_pon155 {207, "iana-iftype-pon155"};
const Enum::YLeaf IetfIntfType::iana_iftype_pon622 {208, "iana-iftype-pon622"};
const Enum::YLeaf IetfIntfType::iana_iftype_bridge_if {209, "iana-iftype-bridge-if"};
const Enum::YLeaf IetfIntfType::iana_iftype_linegroup {210, "iana-iftype-linegroup"};
const Enum::YLeaf IetfIntfType::iana_iftype_voiceemfgd {211, "iana-iftype-voiceemfgd"};
const Enum::YLeaf IetfIntfType::iana_iftype_voiceefgdeana {212, "iana-iftype-voiceefgdeana"};
const Enum::YLeaf IetfIntfType::iana_iftype_voicedid {213, "iana-iftype-voicedid"};
const Enum::YLeaf IetfIntfType::iana_iftype_mpegtransport {214, "iana-iftype-mpegtransport"};
const Enum::YLeaf IetfIntfType::iana_iftype_sixtofour {215, "iana-iftype-sixtofour"};
const Enum::YLeaf IetfIntfType::iana_iftype_gtp {216, "iana-iftype-gtp"};
const Enum::YLeaf IetfIntfType::iana_iftype_pdnetherloop1 {217, "iana-iftype-pdnetherloop1"};
const Enum::YLeaf IetfIntfType::iana_iftype_pdnetherloop2 {218, "iana-iftype-pdnetherloop2"};
const Enum::YLeaf IetfIntfType::iana_iftype_opticalchannel_group {219, "iana-iftype-opticalchannel-group"};
const Enum::YLeaf IetfIntfType::iana_iftype_homepna {220, "iana-iftype-homepna"};
const Enum::YLeaf IetfIntfType::iana_iftype_gfp {221, "iana-iftype-gfp"};
const Enum::YLeaf IetfIntfType::iana_iftype_ciscoislvlan {222, "iana-iftype-ciscoislvlan"};
const Enum::YLeaf IetfIntfType::iana_iftype_actelismetaloop {223, "iana-iftype-actelismetaloop"};
const Enum::YLeaf IetfIntfType::iana_iftype_fciplink {224, "iana-iftype-fciplink"};
const Enum::YLeaf IetfIntfType::iana_iftype_rpr {225, "iana-iftype-rpr"};
const Enum::YLeaf IetfIntfType::iana_iftype_qam {226, "iana-iftype-qam"};
const Enum::YLeaf IetfIntfType::iana_iftype_lmp {227, "iana-iftype-lmp"};
const Enum::YLeaf IetfIntfType::iana_iftype_cblvectastar {228, "iana-iftype-cblvectastar"};
const Enum::YLeaf IetfIntfType::iana_iftype_docs_cable_mcmts_downtream {229, "iana-iftype-docs-cable-mcmts-downtream"};
const Enum::YLeaf IetfIntfType::iana_iftype_adsl2 {230, "iana-iftype-adsl2"};
const Enum::YLeaf IetfIntfType::iana_iftype_macseccontrolledif {231, "iana-iftype-macseccontrolledif"};
const Enum::YLeaf IetfIntfType::iana_iftype_macsecuncontrolledif {232, "iana-iftype-macsecuncontrolledif"};
const Enum::YLeaf IetfIntfType::iana_iftype_aviciopticalether {233, "iana-iftype-aviciopticalether"};
const Enum::YLeaf IetfIntfType::iana_iftype_atmbond {234, "iana-iftype-atmbond"};
const Enum::YLeaf IetfIntfType::iana_iftype_voicefgdos {235, "iana-iftype-voicefgdos"};
const Enum::YLeaf IetfIntfType::iana_iftype_mocaversion1 {236, "iana-iftype-mocaversion1"};
const Enum::YLeaf IetfIntfType::iana_iftype_ieee80216_wman {237, "iana-iftype-ieee80216-wman"};
const Enum::YLeaf IetfIntfType::iana_iftype_adsl2plus {238, "iana-iftype-adsl2plus"};
const Enum::YLeaf IetfIntfType::iana_iftype_dvbrcsmaclayer {239, "iana-iftype-dvbrcsmaclayer"};
const Enum::YLeaf IetfIntfType::iana_iftype_dvbtdm {240, "iana-iftype-dvbtdm"};
const Enum::YLeaf IetfIntfType::iana_iftype_dvbrcstdma {241, "iana-iftype-dvbrcstdma"};
const Enum::YLeaf IetfIntfType::iana_iftype_x86laps {242, "iana-iftype-x86laps"};
const Enum::YLeaf IetfIntfType::iana_iftype_wwanpp {243, "iana-iftype-wwanpp"};
const Enum::YLeaf IetfIntfType::iana_iftype_wwanpp2 {244, "iana-iftype-wwanpp2"};
const Enum::YLeaf IetfIntfType::iana_iftype_voiceebs {245, "iana-iftype-voiceebs"};
const Enum::YLeaf IetfIntfType::iana_iftype_ifpwtype {246, "iana-iftype-ifpwtype"};
const Enum::YLeaf IetfIntfType::iana_iftype_ilan {247, "iana-iftype-ilan"};
const Enum::YLeaf IetfIntfType::iana_iftype_pip {248, "iana-iftype-pip"};
const Enum::YLeaf IetfIntfType::iana_iftype_aluelp {249, "iana-iftype-aluelp"};
const Enum::YLeaf IetfIntfType::iana_iftype_gpon {250, "iana-iftype-gpon"};
const Enum::YLeaf IetfIntfType::iana_iftype_vdsl2 {251, "iana-iftype-vdsl2"};
const Enum::YLeaf IetfIntfType::iana_iftype_capwapdot11_profile {252, "iana-iftype-capwapdot11-profile"};
const Enum::YLeaf IetfIntfType::iana_iftype_capwapdot11_bss {253, "iana-iftype-capwapdot11-bss"};
const Enum::YLeaf IetfIntfType::iana_iftype_capwapwtp_virtualradio {254, "iana-iftype-capwapwtp-virtualradio"};
const Enum::YLeaf IetfIntfType::iana_iftype_bits {255, "iana-iftype-bits"};
const Enum::YLeaf IetfIntfType::iana_iftype_docs_cable_upstreamrfport {256, "iana-iftype-docs-cable-upstreamrfport"};
const Enum::YLeaf IetfIntfType::iana_iftype_cable_downstreamrfport {257, "iana-iftype-cable-downstreamrfport"};
const Enum::YLeaf IetfIntfType::iana_iftype_vmware_virtualnic {258, "iana-iftype-vmware-virtualnic"};
const Enum::YLeaf IetfIntfType::iana_iftype_ieee802154 {259, "iana-iftype-ieee802154"};
const Enum::YLeaf IetfIntfType::iana_iftype_otnodu {260, "iana-iftype-otnodu"};
const Enum::YLeaf IetfIntfType::iana_iftype_otnotu {261, "iana-iftype-otnotu"};
const Enum::YLeaf IetfIntfType::iana_iftype_ifvfitype {262, "iana-iftype-ifvfitype"};
const Enum::YLeaf IetfIntfType::iana_iftype_g9981 {263, "iana-iftype-g9981"};
const Enum::YLeaf IetfIntfType::iana_iftype_g9982 {264, "iana-iftype-g9982"};
const Enum::YLeaf IetfIntfType::iana_iftype_g9983 {265, "iana-iftype-g9983"};
const Enum::YLeaf IetfIntfType::iana_iftype_aluepon {266, "iana-iftype-aluepon"};
const Enum::YLeaf IetfIntfType::iana_iftype_aluepon_onu {267, "iana-iftype-aluepon-onu"};
const Enum::YLeaf IetfIntfType::iana_iftype_aluepon_physicaluni {268, "iana-iftype-aluepon-physicaluni"};
const Enum::YLeaf IetfIntfType::iana_iftype_aluepon_logicalink {269, "iana-iftype-aluepon-logicalink"};
const Enum::YLeaf IetfIntfType::iana_iftype_alugpon_onu {270, "iana-iftype-alugpon-onu"};
const Enum::YLeaf IetfIntfType::iana_iftype_alugpon_physicaluni {271, "iana-iftype-alugpon-physicaluni"};
const Enum::YLeaf IetfIntfType::iana_iftype_vmwarenicteam {272, "iana-iftype-vmwarenicteam"};
const Enum::YLeaf IetfIntfType::iana_iftype_docs_ofdm_downstream {277, "iana-iftype-docs-ofdm-downstream"};
const Enum::YLeaf IetfIntfType::iana_iftype_docs_ofdma_upstream {278, "iana-iftype-docs-ofdma-upstream"};
const Enum::YLeaf IetfIntfType::iana_iftype_gfast {279, "iana-iftype-gfast"};
const Enum::YLeaf IetfIntfType::iana_iftype_sdci {280, "iana-iftype-sdci"};
const Enum::YLeaf IetfIntfType::iana_iftype_xbox_wireless {281, "iana-iftype-xbox-wireless"};
const Enum::YLeaf IetfIntfType::iana_iftype_fastdsl {282, "iana-iftype-fastdsl"};

const Enum::YLeaf QosDirection::qos_inbound {0, "qos-inbound"};
const Enum::YLeaf QosDirection::qos_outbound {1, "qos-outbound"};

const Enum::YLeaf EtherSpeed::speed_10mb {0, "speed-10mb"};
const Enum::YLeaf EtherSpeed::speed_100mb {1, "speed-100mb"};
const Enum::YLeaf EtherSpeed::speed_1gb {2, "speed-1gb"};
const Enum::YLeaf EtherSpeed::speed_10gb {3, "speed-10gb"};
const Enum::YLeaf EtherSpeed::speed_25gb {4, "speed-25gb"};
const Enum::YLeaf EtherSpeed::speed_40gb {5, "speed-40gb"};
const Enum::YLeaf EtherSpeed::speed_50gb {6, "speed-50gb"};
const Enum::YLeaf EtherSpeed::speed_100gb {7, "speed-100gb"};
const Enum::YLeaf EtherSpeed::speed_unknown {8, "speed-unknown"};
const Enum::YLeaf EtherSpeed::speed_auto {9, "speed-auto"};


}
}

