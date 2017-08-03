
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_interfaces.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ietf_interfaces {

InterfaceType::InterfaceType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-interfaces", "ietf-interfaces", "ietf-interfaces:interface-type")
{
}

InterfaceType::~InterfaceType()
{
}

Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ietf-interfaces";
}

Interfaces::~Interfaces()
{
}

bool Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces";

    return path_buffer.str();

}

const EntityPath Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Interfaces::clone_ptr() const
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
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    link_up_down_trap_enable{YType::enumeration, "link-up-down-trap-enable"},
    type{YType::identityref, "type"}
    	,
    ethernet(std::make_shared<Interfaces::Interface::Ethernet>())
	,ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
	,pw_neighbor(std::make_shared<Interfaces::Interface::PwNeighbor>())
{
    ethernet->parent = this;

    pw_neighbor->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Interfaces::Interface::~Interface()
{
}

bool Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<diffserv_target_entry.size(); index++)
    {
        if(diffserv_target_entry[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| enabled.is_set
	|| link_up_down_trap_enable.is_set
	|| type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (pw_neighbor !=  nullptr && pw_neighbor->has_data());
}

bool Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_entry.size(); index++)
    {
        if(diffserv_target_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(link_up_down_trap_enable.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (pw_neighbor !=  nullptr && pw_neighbor->has_operation());
}

std::string Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-interfaces:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (link_up_down_trap_enable.is_set || is_set(link_up_down_trap_enable.yfilter)) leaf_name_data.push_back(link_up_down_trap_enable.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-entry")
    {
        for(auto const & c : diffserv_target_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::DiffservTargetEntry>();
        c->parent = this;
        diffserv_target_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Interfaces::Interface::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Interfaces::Interface::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Interfaces::Interface::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "pw-neighbor")
    {
        if(pw_neighbor == nullptr)
        {
            pw_neighbor = std::make_shared<Interfaces::Interface::PwNeighbor>();
        }
        return pw_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffserv_target_entry)
    {
        children[c->get_segment_path()] = c;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(pw_neighbor != nullptr)
    {
        children["pw-neighbor"] = pw_neighbor;
    }

    return children;
}

void Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-up-down-trap-enable")
    {
        link_up_down_trap_enable = value;
        link_up_down_trap_enable.value_namespace = name_space;
        link_up_down_trap_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "link-up-down-trap-enable")
    {
        link_up_down_trap_enable.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-entry" || name == "ethernet" || name == "ipv4" || name == "ipv6" || name == "pw-neighbor" || name == "name" || name == "description" || name == "enabled" || name == "link-up-down-trap-enable" || name == "type")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::PwNeighbor()
    :
    control_word{YType::boolean, "control-word"},
    encapsulation{YType::identityref, "encapsulation"},
    mac_withdraw{YType::boolean, "mac-withdraw"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    source_ip{YType::str, "source-ip"},
    source_template{YType::str, "source-template"},
    switching_tlv{YType::boolean, "switching-tlv"},
    tag_rewrite_ingress_vlan{YType::uint16, "tag-rewrite-ingress-vlan"},
    vc_id{YType::uint32, "vc-id"},
    vc_type{YType::identityref, "vc-type"}
    	,
    load_balance(std::make_shared<Interfaces::Interface::PwNeighbor::LoadBalance>())
	,preferred_path(std::make_shared<Interfaces::Interface::PwNeighbor::PreferredPath>())
	,sequencing(std::make_shared<Interfaces::Interface::PwNeighbor::Sequencing>())
	,static_label(std::make_shared<Interfaces::Interface::PwNeighbor::StaticLabel>())
	,status(std::make_shared<Interfaces::Interface::PwNeighbor::Status>())
	,switchover_delay(std::make_shared<Interfaces::Interface::PwNeighbor::SwitchoverDelay>())
	,vccv(std::make_shared<Interfaces::Interface::PwNeighbor::Vccv>())
{
    load_balance->parent = this;

    preferred_path->parent = this;

    sequencing->parent = this;

    static_label->parent = this;

    status->parent = this;

    switchover_delay->parent = this;

    vccv->parent = this;

    yang_name = "pw-neighbor"; yang_parent_name = "interface";
}

Interfaces::Interface::PwNeighbor::~PwNeighbor()
{
}

bool Interfaces::Interface::PwNeighbor::has_data() const
{
    return control_word.is_set
	|| encapsulation.is_set
	|| mac_withdraw.is_set
	|| neighbor_ip_address.is_set
	|| signaling_protocol.is_set
	|| source_ip.is_set
	|| source_template.is_set
	|| switching_tlv.is_set
	|| tag_rewrite_ingress_vlan.is_set
	|| vc_id.is_set
	|| vc_type.is_set
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (sequencing !=  nullptr && sequencing->has_data())
	|| (static_label !=  nullptr && static_label->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (switchover_delay !=  nullptr && switchover_delay->has_data())
	|| (vccv !=  nullptr && vccv->has_data());
}

bool Interfaces::Interface::PwNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(mac_withdraw.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_template.yfilter)
	|| ydk::is_set(switching_tlv.yfilter)
	|| ydk::is_set(tag_rewrite_ingress_vlan.yfilter)
	|| ydk::is_set(vc_id.yfilter)
	|| ydk::is_set(vc_type.yfilter)
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (sequencing !=  nullptr && sequencing->has_operation())
	|| (static_label !=  nullptr && static_label->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (switchover_delay !=  nullptr && switchover_delay->has_operation())
	|| (vccv !=  nullptr && vccv->has_operation());
}

std::string Interfaces::Interface::PwNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pw-neighbor";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwNeighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (mac_withdraw.is_set || is_set(mac_withdraw.yfilter)) leaf_name_data.push_back(mac_withdraw.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_template.is_set || is_set(source_template.yfilter)) leaf_name_data.push_back(source_template.get_name_leafdata());
    if (switching_tlv.is_set || is_set(switching_tlv.yfilter)) leaf_name_data.push_back(switching_tlv.get_name_leafdata());
    if (tag_rewrite_ingress_vlan.is_set || is_set(tag_rewrite_ingress_vlan.yfilter)) leaf_name_data.push_back(tag_rewrite_ingress_vlan.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());
    if (vc_type.is_set || is_set(vc_type.yfilter)) leaf_name_data.push_back(vc_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Interfaces::Interface::PwNeighbor::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<Interfaces::Interface::PwNeighbor::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "sequencing")
    {
        if(sequencing == nullptr)
        {
            sequencing = std::make_shared<Interfaces::Interface::PwNeighbor::Sequencing>();
        }
        return sequencing;
    }

    if(child_yang_name == "static-label")
    {
        if(static_label == nullptr)
        {
            static_label = std::make_shared<Interfaces::Interface::PwNeighbor::StaticLabel>();
        }
        return static_label;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Interfaces::Interface::PwNeighbor::Status>();
        }
        return status;
    }

    if(child_yang_name == "switchover-delay")
    {
        if(switchover_delay == nullptr)
        {
            switchover_delay = std::make_shared<Interfaces::Interface::PwNeighbor::SwitchoverDelay>();
        }
        return switchover_delay;
    }

    if(child_yang_name == "vccv")
    {
        if(vccv == nullptr)
        {
            vccv = std::make_shared<Interfaces::Interface::PwNeighbor::Vccv>();
        }
        return vccv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(sequencing != nullptr)
    {
        children["sequencing"] = sequencing;
    }

    if(static_label != nullptr)
    {
        children["static-label"] = static_label;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(switchover_delay != nullptr)
    {
        children["switchover-delay"] = switchover_delay;
    }

    if(vccv != nullptr)
    {
        children["vccv"] = vccv;
    }

    return children;
}

void Interfaces::Interface::PwNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw = value;
        mac_withdraw.value_namespace = name_space;
        mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-template")
    {
        source_template = value;
        source_template.value_namespace = name_space;
        source_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-tlv")
    {
        switching_tlv = value;
        switching_tlv.value_namespace = name_space;
        switching_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-rewrite-ingress-vlan")
    {
        tag_rewrite_ingress_vlan = value;
        tag_rewrite_ingress_vlan.value_namespace = name_space;
        tag_rewrite_ingress_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-type")
    {
        vc_type = value;
        vc_type.value_namespace = name_space;
        vc_type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::PwNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-template")
    {
        source_template.yfilter = yfilter;
    }
    if(value_path == "switching-tlv")
    {
        switching_tlv.yfilter = yfilter;
    }
    if(value_path == "tag-rewrite-ingress-vlan")
    {
        tag_rewrite_ingress_vlan.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
    if(value_path == "vc-type")
    {
        vc_type.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance" || name == "preferred-path" || name == "sequencing" || name == "static-label" || name == "status" || name == "switchover-delay" || name == "vccv" || name == "control-word" || name == "encapsulation" || name == "mac-withdraw" || name == "neighbor-ip-address" || name == "signaling-protocol" || name == "source-ip" || name == "source-template" || name == "switching-tlv" || name == "tag-rewrite-ingress-vlan" || name == "vc-id" || name == "vc-type")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::StaticLabel::StaticLabel()
    :
    local_label{YType::uint32, "local-label"},
    remote_label{YType::uint32, "remote-label"}
{
    yang_name = "static-label"; yang_parent_name = "pw-neighbor";
}

Interfaces::Interface::PwNeighbor::StaticLabel::~StaticLabel()
{
}

bool Interfaces::Interface::PwNeighbor::StaticLabel::has_data() const
{
    return local_label.is_set
	|| remote_label.is_set;
}

bool Interfaces::Interface::PwNeighbor::StaticLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(remote_label.yfilter);
}

std::string Interfaces::Interface::PwNeighbor::StaticLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-label";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::StaticLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticLabel' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::StaticLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::StaticLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::PwNeighbor::StaticLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Interfaces::Interface::PwNeighbor::StaticLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::StaticLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label" || name == "remote-label")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::LoadBalance::LoadBalance()
    :
    ethernet{YType::identityref, "ethernet"},
    ip{YType::identityref, "ip"}
    	,
    flow_label(std::make_shared<Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel>())
{
    flow_label->parent = this;

    yang_name = "load-balance"; yang_parent_name = "pw-neighbor";
}

Interfaces::Interface::PwNeighbor::LoadBalance::~LoadBalance()
{
}

bool Interfaces::Interface::PwNeighbor::LoadBalance::has_data() const
{
    return ethernet.is_set
	|| ip.is_set
	|| (flow_label !=  nullptr && flow_label->has_data());
}

bool Interfaces::Interface::PwNeighbor::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (flow_label !=  nullptr && flow_label->has_operation());
}

std::string Interfaces::Interface::PwNeighbor::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::LoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalance' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label")
    {
        if(flow_label == nullptr)
        {
            flow_label = std::make_shared<Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel>();
        }
        return flow_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_label != nullptr)
    {
        children["flow-label"] = flow_label;
    }

    return children;
}

void Interfaces::Interface::PwNeighbor::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::PwNeighbor::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "ethernet" || name == "ip")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::FlowLabel()
    :
    direction{YType::enumeration, "direction"},
    static_{YType::boolean, "static"},
    tlv_code_17{YType::boolean, "tlv-code-17"}
{
    yang_name = "flow-label"; yang_parent_name = "load-balance";
}

Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::~FlowLabel()
{
}

bool Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::has_data() const
{
    return direction.is_set
	|| static_.is_set
	|| tlv_code_17.is_set;
}

bool Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(tlv_code_17.yfilter);
}

std::string Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabel' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (tlv_code_17.is_set || is_set(tlv_code_17.yfilter)) leaf_name_data.push_back(tlv_code_17.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-code-17")
    {
        tlv_code_17 = value;
        tlv_code_17.value_namespace = name_space;
        tlv_code_17.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "tlv-code-17")
    {
        tlv_code_17.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "static" || name == "tlv-code-17")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::PreferredPath::PreferredPath()
    :
    address{YType::str, "address"},
    disable_fallback{YType::boolean, "disable-fallback"},
    hostname{YType::str, "hostname"},
    interface{YType::str, "interface"}
{
    yang_name = "preferred-path"; yang_parent_name = "pw-neighbor";
}

Interfaces::Interface::PwNeighbor::PreferredPath::~PreferredPath()
{
}

bool Interfaces::Interface::PwNeighbor::PreferredPath::has_data() const
{
    return address.is_set
	|| disable_fallback.is_set
	|| hostname.is_set
	|| interface.is_set;
}

bool Interfaces::Interface::PwNeighbor::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(disable_fallback.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Interfaces::Interface::PwNeighbor::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::PreferredPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreferredPath' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (disable_fallback.is_set || is_set(disable_fallback.yfilter)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::PwNeighbor::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
        disable_fallback.value_namespace = name_space;
        disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::PwNeighbor::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "disable-fallback" || name == "hostname" || name == "interface")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::Sequencing::Sequencing()
    :
    direction{YType::identityref, "direction"},
    resync{YType::int32, "resync"}
{
    yang_name = "sequencing"; yang_parent_name = "pw-neighbor";
}

Interfaces::Interface::PwNeighbor::Sequencing::~Sequencing()
{
}

bool Interfaces::Interface::PwNeighbor::Sequencing::has_data() const
{
    return direction.is_set
	|| resync.is_set;
}

bool Interfaces::Interface::PwNeighbor::Sequencing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(resync.yfilter);
}

std::string Interfaces::Interface::PwNeighbor::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::Sequencing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sequencing' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (resync.is_set || is_set(resync.yfilter)) leaf_name_data.push_back(resync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::PwNeighbor::Sequencing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync")
    {
        resync = value;
        resync.value_namespace = name_space;
        resync.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::PwNeighbor::Sequencing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "resync")
    {
        resync.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::Sequencing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "resync")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::Vccv::Vccv()
    :
    control_word{YType::boolean, "control-word"}
{
    yang_name = "vccv"; yang_parent_name = "pw-neighbor";
}

Interfaces::Interface::PwNeighbor::Vccv::~Vccv()
{
}

bool Interfaces::Interface::PwNeighbor::Vccv::has_data() const
{
    return control_word.is_set;
}

bool Interfaces::Interface::PwNeighbor::Vccv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_word.yfilter);
}

std::string Interfaces::Interface::PwNeighbor::Vccv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vccv";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::Vccv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vccv' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::Vccv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::Vccv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::PwNeighbor::Vccv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::PwNeighbor::Vccv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::Vccv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-word")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::SwitchoverDelay::SwitchoverDelay()
    :
    never{YType::boolean, "never"},
    switchover_timer{YType::uint8, "switchover-timer"},
    timer{YType::uint8, "timer"}
{
    yang_name = "switchover-delay"; yang_parent_name = "pw-neighbor";
}

Interfaces::Interface::PwNeighbor::SwitchoverDelay::~SwitchoverDelay()
{
}

bool Interfaces::Interface::PwNeighbor::SwitchoverDelay::has_data() const
{
    return never.is_set
	|| switchover_timer.is_set
	|| timer.is_set;
}

bool Interfaces::Interface::PwNeighbor::SwitchoverDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(never.yfilter)
	|| ydk::is_set(switchover_timer.yfilter)
	|| ydk::is_set(timer.yfilter);
}

std::string Interfaces::Interface::PwNeighbor::SwitchoverDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover-delay";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::SwitchoverDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchoverDelay' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());
    if (switchover_timer.is_set || is_set(switchover_timer.yfilter)) leaf_name_data.push_back(switchover_timer.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::SwitchoverDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::SwitchoverDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::PwNeighbor::SwitchoverDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-timer")
    {
        switchover_timer = value;
        switchover_timer.value_namespace = name_space;
        switchover_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::PwNeighbor::SwitchoverDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
    if(value_path == "switchover-timer")
    {
        switchover_timer.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::SwitchoverDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "never" || name == "switchover-timer" || name == "timer")
        return true;
    return false;
}

Interfaces::Interface::PwNeighbor::Status::Status()
    :
    decoupled{YType::boolean, "decoupled"},
    disable{YType::boolean, "disable"},
    peer_topo_dual_homed{YType::boolean, "peer-topo-dual-homed"},
    redundancy_master{YType::boolean, "redundancy-master"},
    route_watch_disable{YType::boolean, "route-watch-disable"}
{
    yang_name = "status"; yang_parent_name = "pw-neighbor";
}

Interfaces::Interface::PwNeighbor::Status::~Status()
{
}

bool Interfaces::Interface::PwNeighbor::Status::has_data() const
{
    return decoupled.is_set
	|| disable.is_set
	|| peer_topo_dual_homed.is_set
	|| redundancy_master.is_set
	|| route_watch_disable.is_set;
}

bool Interfaces::Interface::PwNeighbor::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decoupled.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(peer_topo_dual_homed.yfilter)
	|| ydk::is_set(redundancy_master.yfilter)
	|| ydk::is_set(route_watch_disable.yfilter);
}

std::string Interfaces::Interface::PwNeighbor::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::PwNeighbor::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decoupled.is_set || is_set(decoupled.yfilter)) leaf_name_data.push_back(decoupled.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (peer_topo_dual_homed.is_set || is_set(peer_topo_dual_homed.yfilter)) leaf_name_data.push_back(peer_topo_dual_homed.get_name_leafdata());
    if (redundancy_master.is_set || is_set(redundancy_master.yfilter)) leaf_name_data.push_back(redundancy_master.get_name_leafdata());
    if (route_watch_disable.is_set || is_set(route_watch_disable.yfilter)) leaf_name_data.push_back(route_watch_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::PwNeighbor::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::PwNeighbor::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::PwNeighbor::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decoupled")
    {
        decoupled = value;
        decoupled.value_namespace = name_space;
        decoupled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-topo-dual-homed")
    {
        peer_topo_dual_homed = value;
        peer_topo_dual_homed.value_namespace = name_space;
        peer_topo_dual_homed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-master")
    {
        redundancy_master = value;
        redundancy_master.value_namespace = name_space;
        redundancy_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-watch-disable")
    {
        route_watch_disable = value;
        route_watch_disable.value_namespace = name_space;
        route_watch_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::PwNeighbor::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decoupled")
    {
        decoupled.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "peer-topo-dual-homed")
    {
        peer_topo_dual_homed.yfilter = yfilter;
    }
    if(value_path == "redundancy-master")
    {
        redundancy_master.yfilter = yfilter;
    }
    if(value_path == "route-watch-disable")
    {
        route_watch_disable.yfilter = yfilter;
    }
}

bool Interfaces::Interface::PwNeighbor::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decoupled" || name == "disable" || name == "peer-topo-dual-homed" || name == "redundancy-master" || name == "route-watch-disable")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::Ethernet()
    :
    mtu_size{YType::uint16, "mtu-size"}
    	,
    transmission_params(std::make_shared<Interfaces::Interface::Ethernet::TransmissionParams>())
{
    transmission_params->parent = this;

    yang_name = "ethernet"; yang_parent_name = "interface";
}

Interfaces::Interface::Ethernet::~Ethernet()
{
}

bool Interfaces::Interface::Ethernet::has_data() const
{
    return mtu_size.is_set
	|| (transmission_params !=  nullptr && transmission_params->has_data());
}

bool Interfaces::Interface::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu_size.yfilter)
	|| (transmission_params !=  nullptr && transmission_params->has_operation());
}

std::string Interfaces::Interface::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ethernet:ethernet";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu_size.is_set || is_set(mtu_size.yfilter)) leaf_name_data.push_back(mtu_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmission-params")
    {
        if(transmission_params == nullptr)
        {
            transmission_params = std::make_shared<Interfaces::Interface::Ethernet::TransmissionParams>();
        }
        return transmission_params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transmission_params != nullptr)
    {
        children["transmission-params"] = transmission_params;
    }

    return children;
}

void Interfaces::Interface::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu-size")
    {
        mtu_size = value;
        mtu_size.value_namespace = name_space;
        mtu_size.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu-size")
    {
        mtu_size.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission-params" || name == "mtu-size")
        return true;
    return false;
}

Interfaces::Interface::Ethernet::TransmissionParams::TransmissionParams()
    :
    auto_negotiate{YType::empty, "auto-negotiate"},
    duplex{YType::enumeration, "duplex"},
    speed{YType::identityref, "speed"}
{
    yang_name = "transmission-params"; yang_parent_name = "ethernet";
}

Interfaces::Interface::Ethernet::TransmissionParams::~TransmissionParams()
{
}

bool Interfaces::Interface::Ethernet::TransmissionParams::has_data() const
{
    return auto_negotiate.is_set
	|| duplex.is_set
	|| speed.is_set;
}

bool Interfaces::Interface::Ethernet::TransmissionParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_negotiate.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Interfaces::Interface::Ethernet::TransmissionParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmission-params";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ethernet::TransmissionParams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransmissionParams' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_negotiate.is_set || is_set(auto_negotiate.yfilter)) leaf_name_data.push_back(auto_negotiate.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::TransmissionParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ethernet::TransmissionParams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ethernet::TransmissionParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-negotiate")
    {
        auto_negotiate = value;
        auto_negotiate.value_namespace = name_space;
        auto_negotiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ethernet::TransmissionParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-negotiate")
    {
        auto_negotiate.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ethernet::TransmissionParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-negotiate" || name == "duplex" || name == "speed")
        return true;
    return false;
}

Interfaces::Interface::DiffservTargetEntry::DiffservTargetEntry()
    :
    direction{YType::identityref, "direction"},
    policy_name{YType::str, "policy-name"},
    service_policy_type{YType::identityref, "cisco-policy-target:service-policy-type"}
{
    yang_name = "diffserv-target-entry"; yang_parent_name = "interface";
}

Interfaces::Interface::DiffservTargetEntry::~DiffservTargetEntry()
{
}

bool Interfaces::Interface::DiffservTargetEntry::has_data() const
{
    return direction.is_set
	|| policy_name.is_set
	|| service_policy_type.is_set;
}

bool Interfaces::Interface::DiffservTargetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(service_policy_type.yfilter);
}

std::string Interfaces::Interface::DiffservTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-target:diffserv-target-entry" <<"[direction='" <<direction <<"']" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::DiffservTargetEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiffservTargetEntry' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (service_policy_type.is_set || is_set(service_policy_type.yfilter)) leaf_name_data.push_back(service_policy_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::DiffservTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::DiffservTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::DiffservTargetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "service-policy-type")
    {
        service_policy_type = value;
        service_policy_type.value_namespace = name_space;
        service_policy_type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::DiffservTargetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "service-policy-type")
    {
        service_policy_type.yfilter = yfilter;
    }
}

bool Interfaces::Interface::DiffservTargetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name" || name == "service-policy-type")
        return true;
    return false;
}

Interfaces::Interface::Ipv4::Ipv4()
    :
    enabled{YType::boolean, "enabled"},
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "ipv4"; yang_parent_name = "interface";
}

Interfaces::Interface::Ipv4::~Ipv4()
{
}

bool Interfaces::Interface::Ipv4::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| forwarding.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Interfaces::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv4";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Ipv4::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<Interfaces::Interface::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "neighbor" || name == "enabled" || name == "forwarding" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Ipv4::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Ipv4::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::Ipv4::Neighbor::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::Ipv4::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter);
}

std::string Interfaces::Interface::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv4::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv4::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv4::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address")
        return true;
    return false;
}

Interfaces::Interface::Ipv4::Address::Address()
    :
    ip{YType::str, "ip"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Ipv4::Address::~Address()
{
}

bool Interfaces::Interface::Ipv4::Address::has_data() const
{
    return ip.is_set
	|| netmask.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Ipv4::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv4::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv4::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv4::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv4::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv4::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "netmask" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Ipv6()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint32, "mtu"}
    	,
    autoconf(std::make_shared<Interfaces::Interface::Ipv6::Autoconf>())
	,ipv6_router_advertisements(std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements>())
{
    autoconf->parent = this;

    ipv6_router_advertisements->parent = this;

    yang_name = "ipv6"; yang_parent_name = "interface";
}

Interfaces::Interface::Ipv6::~Ipv6()
{
}

bool Interfaces::Interface::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| forwarding.is_set
	|| mtu.is_set
	|| (autoconf !=  nullptr && autoconf->has_data())
	|| (ipv6_router_advertisements !=  nullptr && ipv6_router_advertisements->has_data());
}

bool Interfaces::Interface::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dup_addr_detect_transmits.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (autoconf !=  nullptr && autoconf->has_operation())
	|| (ipv6_router_advertisements !=  nullptr && ipv6_router_advertisements->has_operation());
}

std::string Interfaces::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv6";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.yfilter)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "autoconf")
    {
        if(autoconf == nullptr)
        {
            autoconf = std::make_shared<Interfaces::Interface::Ipv6::Autoconf>();
        }
        return autoconf;
    }

    if(child_yang_name == "ipv6-router-advertisements")
    {
        if(ipv6_router_advertisements == nullptr)
        {
            ipv6_router_advertisements = std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements>();
        }
        return ipv6_router_advertisements;
    }

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
        auto c = std::make_shared<Interfaces::Interface::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    if(autoconf != nullptr)
    {
        children["autoconf"] = autoconf;
    }

    if(ipv6_router_advertisements != nullptr)
    {
        children["ipv6-router-advertisements"] = ipv6_router_advertisements;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
        dup_addr_detect_transmits.value_namespace = name_space;
        dup_addr_detect_transmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "autoconf" || name == "ipv6-router-advertisements" || name == "neighbor" || name == "dup-addr-detect-transmits" || name == "enabled" || name == "forwarding" || name == "mtu")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Autoconf::Autoconf()
    :
    create_global_addresses{YType::boolean, "create-global-addresses"},
    create_temporary_addresses{YType::boolean, "create-temporary-addresses"},
    temporary_preferred_lifetime{YType::uint32, "temporary-preferred-lifetime"},
    temporary_valid_lifetime{YType::uint32, "temporary-valid-lifetime"}
{
    yang_name = "autoconf"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Ipv6::Autoconf::~Autoconf()
{
}

bool Interfaces::Interface::Ipv6::Autoconf::has_data() const
{
    return create_global_addresses.is_set
	|| create_temporary_addresses.is_set
	|| temporary_preferred_lifetime.is_set
	|| temporary_valid_lifetime.is_set;
}

bool Interfaces::Interface::Ipv6::Autoconf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(create_global_addresses.yfilter)
	|| ydk::is_set(create_temporary_addresses.yfilter)
	|| ydk::is_set(temporary_preferred_lifetime.yfilter)
	|| ydk::is_set(temporary_valid_lifetime.yfilter);
}

std::string Interfaces::Interface::Ipv6::Autoconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconf";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Autoconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconf' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_global_addresses.is_set || is_set(create_global_addresses.yfilter)) leaf_name_data.push_back(create_global_addresses.get_name_leafdata());
    if (create_temporary_addresses.is_set || is_set(create_temporary_addresses.yfilter)) leaf_name_data.push_back(create_temporary_addresses.get_name_leafdata());
    if (temporary_preferred_lifetime.is_set || is_set(temporary_preferred_lifetime.yfilter)) leaf_name_data.push_back(temporary_preferred_lifetime.get_name_leafdata());
    if (temporary_valid_lifetime.is_set || is_set(temporary_valid_lifetime.yfilter)) leaf_name_data.push_back(temporary_valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Autoconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Autoconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv6::Autoconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses = value;
        create_global_addresses.value_namespace = name_space;
        create_global_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses = value;
        create_temporary_addresses.value_namespace = name_space;
        create_temporary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime = value;
        temporary_preferred_lifetime.value_namespace = name_space;
        temporary_preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime = value;
        temporary_valid_lifetime.value_namespace = name_space;
        temporary_valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Autoconf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses.yfilter = yfilter;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses.yfilter = yfilter;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime.yfilter = yfilter;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Autoconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "create-global-addresses" || name == "create-temporary-addresses" || name == "temporary-preferred-lifetime" || name == "temporary-valid-lifetime")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Ipv6::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::Ipv6::Neighbor::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::Ipv6::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter);
}

std::string Interfaces::Interface::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Address::Address()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Ipv6::Address::~Address()
{
}

bool Interfaces::Interface::Ipv6::Address::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Interfaces::Interface::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "prefix-length")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::Ipv6RouterAdvertisements()
    :
    cur_hop_limit{YType::uint8, "cur-hop-limit"},
    default_lifetime{YType::uint16, "default-lifetime"},
    link_mtu{YType::uint32, "link-mtu"},
    managed_flag{YType::boolean, "managed-flag"},
    max_rtr_adv_interval{YType::uint16, "max-rtr-adv-interval"},
    min_rtr_adv_interval{YType::uint16, "min-rtr-adv-interval"},
    other_config_flag{YType::boolean, "other-config-flag"},
    reachable_time{YType::uint32, "reachable-time"},
    retrans_timer{YType::uint32, "retrans-timer"},
    send_advertisements{YType::boolean, "send-advertisements"}
    	,
    prefix_list(std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList>())
{
    prefix_list->parent = this;

    yang_name = "ipv6-router-advertisements"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::~Ipv6RouterAdvertisements()
{
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::has_data() const
{
    return cur_hop_limit.is_set
	|| default_lifetime.is_set
	|| link_mtu.is_set
	|| managed_flag.is_set
	|| max_rtr_adv_interval.is_set
	|| min_rtr_adv_interval.is_set
	|| other_config_flag.is_set
	|| reachable_time.is_set
	|| retrans_timer.is_set
	|| send_advertisements.is_set
	|| (prefix_list !=  nullptr && prefix_list->has_data());
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cur_hop_limit.yfilter)
	|| ydk::is_set(default_lifetime.yfilter)
	|| ydk::is_set(link_mtu.yfilter)
	|| ydk::is_set(managed_flag.yfilter)
	|| ydk::is_set(max_rtr_adv_interval.yfilter)
	|| ydk::is_set(min_rtr_adv_interval.yfilter)
	|| ydk::is_set(other_config_flag.yfilter)
	|| ydk::is_set(reachable_time.yfilter)
	|| ydk::is_set(retrans_timer.yfilter)
	|| ydk::is_set(send_advertisements.yfilter)
	|| (prefix_list !=  nullptr && prefix_list->has_operation());
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ipv6-unicast-routing:ipv6-router-advertisements";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RouterAdvertisements' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cur_hop_limit.is_set || is_set(cur_hop_limit.yfilter)) leaf_name_data.push_back(cur_hop_limit.get_name_leafdata());
    if (default_lifetime.is_set || is_set(default_lifetime.yfilter)) leaf_name_data.push_back(default_lifetime.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (managed_flag.is_set || is_set(managed_flag.yfilter)) leaf_name_data.push_back(managed_flag.get_name_leafdata());
    if (max_rtr_adv_interval.is_set || is_set(max_rtr_adv_interval.yfilter)) leaf_name_data.push_back(max_rtr_adv_interval.get_name_leafdata());
    if (min_rtr_adv_interval.is_set || is_set(min_rtr_adv_interval.yfilter)) leaf_name_data.push_back(min_rtr_adv_interval.get_name_leafdata());
    if (other_config_flag.is_set || is_set(other_config_flag.yfilter)) leaf_name_data.push_back(other_config_flag.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.yfilter)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (retrans_timer.is_set || is_set(retrans_timer.yfilter)) leaf_name_data.push_back(retrans_timer.get_name_leafdata());
    if (send_advertisements.is_set || is_set(send_advertisements.yfilter)) leaf_name_data.push_back(send_advertisements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        if(prefix_list == nullptr)
        {
            prefix_list = std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList>();
        }
        return prefix_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_list != nullptr)
    {
        children["prefix-list"] = prefix_list;
    }

    return children;
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cur-hop-limit")
    {
        cur_hop_limit = value;
        cur_hop_limit.value_namespace = name_space;
        cur_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-lifetime")
    {
        default_lifetime = value;
        default_lifetime.value_namespace = name_space;
        default_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managed-flag")
    {
        managed_flag = value;
        managed_flag.value_namespace = name_space;
        managed_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-rtr-adv-interval")
    {
        max_rtr_adv_interval = value;
        max_rtr_adv_interval.value_namespace = name_space;
        max_rtr_adv_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rtr-adv-interval")
    {
        min_rtr_adv_interval = value;
        min_rtr_adv_interval.value_namespace = name_space;
        min_rtr_adv_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-config-flag")
    {
        other_config_flag = value;
        other_config_flag.value_namespace = name_space;
        other_config_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
        reachable_time.value_namespace = name_space;
        reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retrans-timer")
    {
        retrans_timer = value;
        retrans_timer.value_namespace = name_space;
        retrans_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-advertisements")
    {
        send_advertisements = value;
        send_advertisements.value_namespace = name_space;
        send_advertisements.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cur-hop-limit")
    {
        cur_hop_limit.yfilter = yfilter;
    }
    if(value_path == "default-lifetime")
    {
        default_lifetime.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
    if(value_path == "managed-flag")
    {
        managed_flag.yfilter = yfilter;
    }
    if(value_path == "max-rtr-adv-interval")
    {
        max_rtr_adv_interval.yfilter = yfilter;
    }
    if(value_path == "min-rtr-adv-interval")
    {
        min_rtr_adv_interval.yfilter = yfilter;
    }
    if(value_path == "other-config-flag")
    {
        other_config_flag.yfilter = yfilter;
    }
    if(value_path == "reachable-time")
    {
        reachable_time.yfilter = yfilter;
    }
    if(value_path == "retrans-timer")
    {
        retrans_timer.yfilter = yfilter;
    }
    if(value_path == "send-advertisements")
    {
        send_advertisements.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "cur-hop-limit" || name == "default-lifetime" || name == "link-mtu" || name == "managed-flag" || name == "max-rtr-adv-interval" || name == "min-rtr-adv-interval" || name == "other-config-flag" || name == "reachable-time" || name == "retrans-timer" || name == "send-advertisements")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::PrefixList()
{
    yang_name = "prefix-list"; yang_parent_name = "ipv6-router-advertisements";
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::~PrefixList()
{
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::Prefix()
    :
    prefix_spec{YType::str, "prefix-spec"},
    autonomous_flag{YType::boolean, "autonomous-flag"},
    no_advertise{YType::empty, "no-advertise"},
    on_link_flag{YType::boolean, "on-link-flag"},
    preferred_lifetime{YType::uint32, "preferred-lifetime"},
    valid_lifetime{YType::uint32, "valid-lifetime"}
{
    yang_name = "prefix"; yang_parent_name = "prefix-list";
}

Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::~Prefix()
{
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::has_data() const
{
    return prefix_spec.is_set
	|| autonomous_flag.is_set
	|| no_advertise.is_set
	|| on_link_flag.is_set
	|| preferred_lifetime.is_set
	|| valid_lifetime.is_set;
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_spec.yfilter)
	|| ydk::is_set(autonomous_flag.yfilter)
	|| ydk::is_set(no_advertise.yfilter)
	|| ydk::is_set(on_link_flag.yfilter)
	|| ydk::is_set(preferred_lifetime.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter);
}

std::string Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[prefix-spec='" <<prefix_spec <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_spec.is_set || is_set(prefix_spec.yfilter)) leaf_name_data.push_back(prefix_spec.get_name_leafdata());
    if (autonomous_flag.is_set || is_set(autonomous_flag.yfilter)) leaf_name_data.push_back(autonomous_flag.get_name_leafdata());
    if (no_advertise.is_set || is_set(no_advertise.yfilter)) leaf_name_data.push_back(no_advertise.get_name_leafdata());
    if (on_link_flag.is_set || is_set(on_link_flag.yfilter)) leaf_name_data.push_back(on_link_flag.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.yfilter)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-spec")
    {
        prefix_spec = value;
        prefix_spec.value_namespace = name_space;
        prefix_spec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-flag")
    {
        autonomous_flag = value;
        autonomous_flag.value_namespace = name_space;
        autonomous_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-advertise")
    {
        no_advertise = value;
        no_advertise.value_namespace = name_space;
        no_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-link-flag")
    {
        on_link_flag = value;
        on_link_flag.value_namespace = name_space;
        on_link_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
        preferred_lifetime.value_namespace = name_space;
        preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-spec")
    {
        prefix_spec.yfilter = yfilter;
    }
    if(value_path == "autonomous-flag")
    {
        autonomous_flag.yfilter = yfilter;
    }
    if(value_path == "no-advertise")
    {
        no_advertise.yfilter = yfilter;
    }
    if(value_path == "on-link-flag")
    {
        on_link_flag.yfilter = yfilter;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
}

bool Interfaces::Interface::Ipv6::Ipv6RouterAdvertisements::PrefixList::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-spec" || name == "autonomous-flag" || name == "no-advertise" || name == "on-link-flag" || name == "preferred-lifetime" || name == "valid-lifetime")
        return true;
    return false;
}

InterfacesState::InterfacesState()
{
    yang_name = "interfaces-state"; yang_parent_name = "ietf-interfaces";
}

InterfacesState::~InterfacesState()
{
}

bool InterfacesState::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfacesState::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfacesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces-state";

    return path_buffer.str();

}

const EntityPath InterfacesState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<InterfacesState::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfacesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfacesState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InterfacesState::clone_ptr() const
{
    return std::make_shared<InterfacesState>();
}

std::string InterfacesState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string InterfacesState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function InterfacesState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InterfacesState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool InterfacesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

InterfacesState::Interface::Interface()
    :
    name{YType::str, "name"},
    admin_status{YType::enumeration, "admin-status"},
    higher_layer_if{YType::str, "higher-layer-if"},
    if_index{YType::int32, "if-index"},
    last_change{YType::str, "last-change"},
    lower_layer_if{YType::str, "lower-layer-if"},
    oper_status{YType::enumeration, "oper-status"},
    phys_address{YType::str, "phys-address"},
    routing_instance{YType::str, "ietf-routing:routing-instance"},
    speed{YType::uint64, "speed"},
    type{YType::identityref, "type"}
    	,
    ethernet(std::make_shared<InterfacesState::Interface::Ethernet>())
	,ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
	,pseudowire(std::make_shared<InterfacesState::Interface::Pseudowire>())
	,statistics(std::make_shared<InterfacesState::Interface::Statistics>())
{
    ethernet->parent = this;

    pseudowire->parent = this;

    statistics->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces-state";
}

InterfacesState::Interface::~Interface()
{
}

bool InterfacesState::Interface::has_data() const
{
    for (std::size_t index=0; index<diffserv_target_entry.size(); index++)
    {
        if(diffserv_target_entry[index]->has_data())
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
    return name.is_set
	|| admin_status.is_set
	|| if_index.is_set
	|| last_change.is_set
	|| oper_status.is_set
	|| phys_address.is_set
	|| routing_instance.is_set
	|| speed.is_set
	|| type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (pseudowire !=  nullptr && pseudowire->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool InterfacesState::Interface::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_entry.size(); index++)
    {
        if(diffserv_target_entry[index]->has_operation())
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(higher_layer_if.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(last_change.yfilter)
	|| ydk::is_set(lower_layer_if.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(phys_address.yfilter)
	|| ydk::is_set(routing_instance.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (pseudowire !=  nullptr && pseudowire->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string InterfacesState::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-interfaces:interfaces-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.yfilter)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (phys_address.is_set || is_set(phys_address.yfilter)) leaf_name_data.push_back(phys_address.get_name_leafdata());
    if (routing_instance.is_set || is_set(routing_instance.yfilter)) leaf_name_data.push_back(routing_instance.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto higher_layer_if_name_datas = higher_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), higher_layer_if_name_datas.begin(), higher_layer_if_name_datas.end());
    auto lower_layer_if_name_datas = lower_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lower_layer_if_name_datas.begin(), lower_layer_if_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-entry")
    {
        for(auto const & c : diffserv_target_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::DiffservTargetEntry>();
        c->parent = this;
        diffserv_target_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<InterfacesState::Interface::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfacesState::Interface::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfacesState::Interface::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<InterfacesState::Interface::Pseudowire>();
        }
        return pseudowire;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<InterfacesState::Interface::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffserv_target_entry)
    {
        children[c->get_segment_path()] = c;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void InterfacesState::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-layer-if")
    {
        higher_layer_if.append(value);
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-change")
    {
        last_change = value;
        last_change.value_namespace = name_space;
        last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-layer-if")
    {
        lower_layer_if.append(value);
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-address")
    {
        phys_address = value;
        phys_address.value_namespace = name_space;
        phys_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-instance")
    {
        routing_instance = value;
        routing_instance.value_namespace = name_space;
        routing_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "higher-layer-if")
    {
        higher_layer_if.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "last-change")
    {
        last_change.yfilter = yfilter;
    }
    if(value_path == "lower-layer-if")
    {
        lower_layer_if.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "phys-address")
    {
        phys_address.yfilter = yfilter;
    }
    if(value_path == "routing-instance")
    {
        routing_instance.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-entry" || name == "ethernet" || name == "ipv4" || name == "ipv6" || name == "pseudowire" || name == "statistics" || name == "name" || name == "admin-status" || name == "higher-layer-if" || name == "if-index" || name == "last-change" || name == "lower-layer-if" || name == "oper-status" || name == "phys-address" || name == "routing-instance" || name == "speed" || name == "type")
        return true;
    return false;
}

InterfacesState::Interface::Ipv4::Ipv4()
    :
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "ipv4"; yang_parent_name = "interface";
}

InterfacesState::Interface::Ipv4::~Ipv4()
{
}

bool InterfacesState::Interface::Ipv4::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return forwarding.is_set
	|| mtu.is_set;
}

bool InterfacesState::Interface::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string InterfacesState::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv4";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::Ipv4::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<InterfacesState::Interface::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfacesState::Interface::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "neighbor" || name == "forwarding" || name == "mtu")
        return true;
    return false;
}

InterfacesState::Interface::Ipv4::Address::Address()
    :
    ip{YType::str, "ip"},
    netmask{YType::str, "netmask"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "ipv4";
}

InterfacesState::Interface::Ipv4::Address::~Address()
{
}

bool InterfacesState::Interface::Ipv4::Address::has_data() const
{
    return ip.is_set
	|| netmask.is_set
	|| origin.is_set
	|| prefix_length.is_set;
}

bool InterfacesState::Interface::Ipv4::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string InterfacesState::Interface::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv4::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv4::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ipv4::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv4::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv4::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "netmask" || name == "origin" || name == "prefix-length")
        return true;
    return false;
}

InterfacesState::Interface::Ipv4::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

InterfacesState::Interface::Ipv4::Neighbor::~Neighbor()
{
}

bool InterfacesState::Interface::Ipv4::Neighbor::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set
	|| origin.is_set;
}

bool InterfacesState::Interface::Ipv4::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(origin.yfilter);
}

std::string InterfacesState::Interface::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ipv4::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv4::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv4::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "link-layer-address" || name == "origin")
        return true;
    return false;
}

InterfacesState::Interface::Statistics::Statistics()
    :
    discontinuity_time{YType::str, "discontinuity-time"},
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_discards{YType::uint32, "in-discards"},
    in_errors{YType::uint32, "in-errors"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_pkts{YType::uint64, "ietf-interfaces-ext:in-pkts"},
    in_unicast_pkts{YType::uint64, "in-unicast-pkts"},
    in_unknown_protos{YType::uint32, "in-unknown-protos"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_discards{YType::uint32, "out-discards"},
    out_errors{YType::uint32, "out-errors"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_pkts{YType::uint64, "ietf-interfaces-ext:out-pkts"},
    out_unicast_pkts{YType::uint64, "out-unicast-pkts"}
{
    yang_name = "statistics"; yang_parent_name = "interface";
}

InterfacesState::Interface::Statistics::~Statistics()
{
}

bool InterfacesState::Interface::Statistics::has_data() const
{
    return discontinuity_time.is_set
	|| in_broadcast_pkts.is_set
	|| in_discards.is_set
	|| in_errors.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_pkts.is_set
	|| in_unicast_pkts.is_set
	|| in_unknown_protos.is_set
	|| out_broadcast_pkts.is_set
	|| out_discards.is_set
	|| out_errors.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_pkts.is_set
	|| out_unicast_pkts.is_set;
}

bool InterfacesState::Interface::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discontinuity_time.yfilter)
	|| ydk::is_set(in_broadcast_pkts.yfilter)
	|| ydk::is_set(in_discards.yfilter)
	|| ydk::is_set(in_errors.yfilter)
	|| ydk::is_set(in_multicast_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_unicast_pkts.yfilter)
	|| ydk::is_set(in_unknown_protos.yfilter)
	|| ydk::is_set(out_broadcast_pkts.yfilter)
	|| ydk::is_set(out_discards.yfilter)
	|| ydk::is_set(out_errors.yfilter)
	|| ydk::is_set(out_multicast_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_unicast_pkts.yfilter);
}

std::string InterfacesState::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discontinuity_time.is_set || is_set(discontinuity_time.yfilter)) leaf_name_data.push_back(discontinuity_time.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.yfilter)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.yfilter)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.yfilter)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.yfilter)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.yfilter)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.yfilter)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.yfilter)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.yfilter)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.yfilter)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.yfilter)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.yfilter)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time = value;
        discontinuity_time.value_namespace = name_space;
        discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
        in_broadcast_pkts.value_namespace = name_space;
        in_broadcast_pkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
        in_multicast_pkts.value_namespace = name_space;
        in_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
        in_unicast_pkts.value_namespace = name_space;
        in_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
        in_unknown_protos.value_namespace = name_space;
        in_unknown_protos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
        out_broadcast_pkts.value_namespace = name_space;
        out_broadcast_pkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
        out_multicast_pkts.value_namespace = name_space;
        out_multicast_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
        out_unicast_pkts.value_namespace = name_space;
        out_unicast_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-discards")
    {
        in_discards.yfilter = yfilter;
    }
    if(value_path == "in-errors")
    {
        in_errors.yfilter = yfilter;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts.yfilter = yfilter;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos.yfilter = yfilter;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-discards")
    {
        out_discards.yfilter = yfilter;
    }
    if(value_path == "out-errors")
    {
        out_errors.yfilter = yfilter;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discontinuity-time" || name == "in-broadcast-pkts" || name == "in-discards" || name == "in-errors" || name == "in-multicast-pkts" || name == "in-octets" || name == "in-pkts" || name == "in-unicast-pkts" || name == "in-unknown-protos" || name == "out-broadcast-pkts" || name == "out-discards" || name == "out-errors" || name == "out-multicast-pkts" || name == "out-octets" || name == "out-pkts" || name == "out-unicast-pkts")
        return true;
    return false;
}

InterfacesState::Interface::Pseudowire::Pseudowire()
    :
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    vc_id{YType::uint32, "vc-id"}
{
    yang_name = "pseudowire"; yang_parent_name = "interface";
}

InterfacesState::Interface::Pseudowire::~Pseudowire()
{
}

bool InterfacesState::Interface::Pseudowire::has_data() const
{
    return neighbor_ip_address.is_set
	|| vc_id.is_set;
}

bool InterfacesState::Interface::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(vc_id.yfilter);
}

std::string InterfacesState::Interface::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pseudowire' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-ip-address" || name == "vc-id")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetEntry()
    :
    direction{YType::identityref, "direction"},
    policy_name{YType::str, "policy-name"}
{
    yang_name = "diffserv-target-entry"; yang_parent_name = "interface";
}

InterfacesState::Interface::DiffservTargetEntry::~DiffservTargetEntry()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::has_data() const
{
    for (std::size_t index=0; index<diffserv_target_classifier_statistics.size(); index++)
    {
        if(diffserv_target_classifier_statistics[index]->has_data())
            return true;
    }
    return direction.is_set
	|| policy_name.is_set;
}

bool InterfacesState::Interface::DiffservTargetEntry::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_classifier_statistics.size(); index++)
    {
        if(diffserv_target_classifier_statistics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string InterfacesState::Interface::DiffservTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-target:diffserv-target-entry" <<"[direction='" <<direction <<"']" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiffservTargetEntry' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-classifier-statistics")
    {
        for(auto const & c : diffserv_target_classifier_statistics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics>();
        c->parent = this;
        diffserv_target_classifier_statistics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffserv_target_classifier_statistics)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfacesState::Interface::DiffservTargetEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfacesState::Interface::DiffservTargetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-classifier-statistics" || name == "direction" || name == "policy-name")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::DiffservTargetClassifierStatistics()
    :
    classifier_entry_name{YType::str, "classifier-entry-name"},
    parent_path{YType::str, "parent-path"}
    	,
    classifier_entry_statistics(std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics>())
	,queuing_statistics(std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics>())
{
    classifier_entry_statistics->parent = this;

    queuing_statistics->parent = this;

    yang_name = "diffserv-target-classifier-statistics"; yang_parent_name = "diffserv-target-entry";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::~DiffservTargetClassifierStatistics()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_data() const
{
    for (std::size_t index=0; index<meter_statistics.size(); index++)
    {
        if(meter_statistics[index]->has_data())
            return true;
    }
    return classifier_entry_name.is_set
	|| parent_path.is_set
	|| (classifier_entry_statistics !=  nullptr && classifier_entry_statistics->has_data())
	|| (queuing_statistics !=  nullptr && queuing_statistics->has_data());
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_operation() const
{
    for (std::size_t index=0; index<meter_statistics.size(); index++)
    {
        if(meter_statistics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter)
	|| ydk::is_set(parent_path.yfilter)
	|| (classifier_entry_statistics !=  nullptr && classifier_entry_statistics->has_operation())
	|| (queuing_statistics !=  nullptr && queuing_statistics->has_operation());
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-target-classifier-statistics" <<"[classifier-entry-name='" <<classifier_entry_name <<"']" <<"[parent-path='" <<parent_path <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiffservTargetClassifierStatistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (parent_path.is_set || is_set(parent_path.yfilter)) leaf_name_data.push_back(parent_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classifier-entry-statistics")
    {
        if(classifier_entry_statistics == nullptr)
        {
            classifier_entry_statistics = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics>();
        }
        return classifier_entry_statistics;
    }

    if(child_yang_name == "meter-statistics")
    {
        for(auto const & c : meter_statistics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics>();
        c->parent = this;
        meter_statistics.push_back(c);
        return c;
    }

    if(child_yang_name == "queuing-statistics")
    {
        if(queuing_statistics == nullptr)
        {
            queuing_statistics = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics>();
        }
        return queuing_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classifier_entry_statistics != nullptr)
    {
        children["classifier-entry-statistics"] = classifier_entry_statistics;
    }

    for (auto const & c : meter_statistics)
    {
        children[c->get_segment_path()] = c;
    }

    if(queuing_statistics != nullptr)
    {
        children["queuing-statistics"] = queuing_statistics;
    }

    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-entry-statistics" || name == "meter-statistics" || name == "queuing-statistics" || name == "classifier-entry-name" || name == "parent-path")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::ClassifierEntryStatistics()
    :
    classified_bytes{YType::uint64, "classified-bytes"},
    classified_pkts{YType::uint64, "classified-pkts"},
    classified_rate{YType::uint64, "classified-rate"}
{
    yang_name = "classifier-entry-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::~ClassifierEntryStatistics()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_data() const
{
    return classified_bytes.is_set
	|| classified_pkts.is_set
	|| classified_rate.is_set;
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classified_bytes.yfilter)
	|| ydk::is_set(classified_pkts.yfilter)
	|| ydk::is_set(classified_rate.yfilter);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry-statistics";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassifierEntryStatistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classified_bytes.is_set || is_set(classified_bytes.yfilter)) leaf_name_data.push_back(classified_bytes.get_name_leafdata());
    if (classified_pkts.is_set || is_set(classified_pkts.yfilter)) leaf_name_data.push_back(classified_pkts.get_name_leafdata());
    if (classified_rate.is_set || is_set(classified_rate.yfilter)) leaf_name_data.push_back(classified_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classified-bytes")
    {
        classified_bytes = value;
        classified_bytes.value_namespace = name_space;
        classified_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classified-pkts")
    {
        classified_pkts = value;
        classified_pkts.value_namespace = name_space;
        classified_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classified-rate")
    {
        classified_rate = value;
        classified_rate.value_namespace = name_space;
        classified_rate.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classified-bytes")
    {
        classified_bytes.yfilter = yfilter;
    }
    if(value_path == "classified-pkts")
    {
        classified_pkts.yfilter = yfilter;
    }
    if(value_path == "classified-rate")
    {
        classified_rate.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classified-bytes" || name == "classified-pkts" || name == "classified-rate")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::MeterStatistics()
    :
    meter_id{YType::uint16, "meter-id"},
    meter_failed_bytes{YType::uint64, "meter-failed-bytes"},
    meter_failed_pkts{YType::uint64, "meter-failed-pkts"},
    meter_succeed_bytes{YType::uint64, "meter-succeed-bytes"},
    meter_succeed_pkts{YType::uint64, "meter-succeed-pkts"}
{
    yang_name = "meter-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::~MeterStatistics()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_data() const
{
    return meter_id.is_set
	|| meter_failed_bytes.is_set
	|| meter_failed_pkts.is_set
	|| meter_succeed_bytes.is_set
	|| meter_succeed_pkts.is_set;
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(meter_id.yfilter)
	|| ydk::is_set(meter_failed_bytes.yfilter)
	|| ydk::is_set(meter_failed_pkts.yfilter)
	|| ydk::is_set(meter_succeed_bytes.yfilter)
	|| ydk::is_set(meter_succeed_pkts.yfilter);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meter-statistics" <<"[meter-id='" <<meter_id <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeterStatistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_id.is_set || is_set(meter_id.yfilter)) leaf_name_data.push_back(meter_id.get_name_leafdata());
    if (meter_failed_bytes.is_set || is_set(meter_failed_bytes.yfilter)) leaf_name_data.push_back(meter_failed_bytes.get_name_leafdata());
    if (meter_failed_pkts.is_set || is_set(meter_failed_pkts.yfilter)) leaf_name_data.push_back(meter_failed_pkts.get_name_leafdata());
    if (meter_succeed_bytes.is_set || is_set(meter_succeed_bytes.yfilter)) leaf_name_data.push_back(meter_succeed_bytes.get_name_leafdata());
    if (meter_succeed_pkts.is_set || is_set(meter_succeed_pkts.yfilter)) leaf_name_data.push_back(meter_succeed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "meter-id")
    {
        meter_id = value;
        meter_id.value_namespace = name_space;
        meter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes = value;
        meter_failed_bytes.value_namespace = name_space;
        meter_failed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts = value;
        meter_failed_pkts.value_namespace = name_space;
        meter_failed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes = value;
        meter_succeed_bytes.value_namespace = name_space;
        meter_succeed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts = value;
        meter_succeed_pkts.value_namespace = name_space;
        meter_succeed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "meter-id")
    {
        meter_id.yfilter = yfilter;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes.yfilter = yfilter;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts.yfilter = yfilter;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes.yfilter = yfilter;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meter-id" || name == "meter-failed-bytes" || name == "meter-failed-pkts" || name == "meter-succeed-bytes" || name == "meter-succeed-pkts")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::QueuingStatistics()
    :
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_pkts{YType::uint64, "drop-pkts"},
    output_bytes{YType::uint64, "output-bytes"},
    output_pkts{YType::uint64, "output-pkts"},
    queue_size_bytes{YType::uint64, "queue-size-bytes"},
    queue_size_pkts{YType::uint64, "queue-size-pkts"}
    	,
    wred_stats(std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats>())
{
    wred_stats->parent = this;

    yang_name = "queuing-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::~QueuingStatistics()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_data() const
{
    return drop_bytes.is_set
	|| drop_pkts.is_set
	|| output_bytes.is_set
	|| output_pkts.is_set
	|| queue_size_bytes.is_set
	|| queue_size_pkts.is_set
	|| (wred_stats !=  nullptr && wred_stats->has_data());
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| ydk::is_set(drop_pkts.yfilter)
	|| ydk::is_set(output_bytes.yfilter)
	|| ydk::is_set(output_pkts.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(queue_size_pkts.yfilter)
	|| (wred_stats !=  nullptr && wred_stats->has_operation());
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-statistics";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueuingStatistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_pkts.is_set || is_set(drop_pkts.yfilter)) leaf_name_data.push_back(drop_pkts.get_name_leafdata());
    if (output_bytes.is_set || is_set(output_bytes.yfilter)) leaf_name_data.push_back(output_bytes.get_name_leafdata());
    if (output_pkts.is_set || is_set(output_pkts.yfilter)) leaf_name_data.push_back(output_pkts.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_pkts.is_set || is_set(queue_size_pkts.yfilter)) leaf_name_data.push_back(queue_size_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-stats")
    {
        if(wred_stats == nullptr)
        {
            wred_stats = std::make_shared<InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats>();
        }
        return wred_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wred_stats != nullptr)
    {
        children["wred-stats"] = wred_stats;
    }

    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts = value;
        drop_pkts.value_namespace = name_space;
        drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bytes")
    {
        output_bytes = value;
        output_bytes.value_namespace = name_space;
        output_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-pkts")
    {
        output_pkts = value;
        output_pkts.value_namespace = name_space;
        output_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts = value;
        queue_size_pkts.value_namespace = name_space;
        queue_size_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts.yfilter = yfilter;
    }
    if(value_path == "output-bytes")
    {
        output_bytes.yfilter = yfilter;
    }
    if(value_path == "output-pkts")
    {
        output_pkts.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-stats" || name == "drop-bytes" || name == "drop-pkts" || name == "output-bytes" || name == "output-pkts" || name == "queue-size-bytes" || name == "queue-size-pkts")
        return true;
    return false;
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::WredStats()
    :
    early_drop_bytes{YType::uint64, "early-drop-bytes"},
    early_drop_pkts{YType::uint64, "early-drop-pkts"}
{
    yang_name = "wred-stats"; yang_parent_name = "queuing-statistics";
}

InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::~WredStats()
{
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_data() const
{
    return early_drop_bytes.is_set
	|| early_drop_pkts.is_set;
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(early_drop_bytes.yfilter)
	|| ydk::is_set(early_drop_pkts.yfilter);
}

std::string InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStats' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (early_drop_bytes.is_set || is_set(early_drop_bytes.yfilter)) leaf_name_data.push_back(early_drop_bytes.get_name_leafdata());
    if (early_drop_pkts.is_set || is_set(early_drop_pkts.yfilter)) leaf_name_data.push_back(early_drop_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes = value;
        early_drop_bytes.value_namespace = name_space;
        early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts = value;
        early_drop_pkts.value_namespace = name_space;
        early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes.yfilter = yfilter;
    }
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "early-drop-bytes" || name == "early-drop-pkts")
        return true;
    return false;
}

InterfacesState::Interface::Ipv6::Ipv6()
    :
    forwarding{YType::boolean, "forwarding"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "ipv6"; yang_parent_name = "interface";
}

InterfacesState::Interface::Ipv6::~Ipv6()
{
}

bool InterfacesState::Interface::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return forwarding.is_set
	|| mtu.is_set;
}

bool InterfacesState::Interface::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string InterfacesState::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ip:ipv6";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfacesState::Interface::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<InterfacesState::Interface::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfacesState::Interface::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "neighbor" || name == "forwarding" || name == "mtu")
        return true;
    return false;
}

InterfacesState::Interface::Ipv6::Address::Address()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"},
    status{YType::enumeration, "status"}
{
    yang_name = "address"; yang_parent_name = "ipv6";
}

InterfacesState::Interface::Ipv6::Address::~Address()
{
}

bool InterfacesState::Interface::Ipv6::Address::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set
	|| status.is_set;
}

bool InterfacesState::Interface::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string InterfacesState::Interface::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "origin" || name == "prefix-length" || name == "status")
        return true;
    return false;
}

InterfacesState::Interface::Ipv6::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    is_router{YType::empty, "is-router"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"},
    state{YType::enumeration, "state"}
{
    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

InterfacesState::Interface::Ipv6::Neighbor::~Neighbor()
{
}

bool InterfacesState::Interface::Ipv6::Neighbor::has_data() const
{
    return ip.is_set
	|| is_router.is_set
	|| link_layer_address.is_set
	|| origin.is_set
	|| state.is_set;
}

bool InterfacesState::Interface::Ipv6::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(is_router.yfilter)
	|| ydk::is_set(link_layer_address.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string InterfacesState::Interface::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.yfilter)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.yfilter)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router")
    {
        is_router = value;
        is_router.value_namespace = name_space;
        is_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
        link_layer_address.value_namespace = name_space;
        link_layer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "is-router")
    {
        is_router.yfilter = yfilter;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "is-router" || name == "link-layer-address" || name == "origin" || name == "state")
        return true;
    return false;
}

InterfacesState::Interface::Ethernet::Ethernet()
    :
    duplex{YType::enumeration, "duplex"}
    	,
    supported_mtu_range(std::make_shared<InterfacesState::Interface::Ethernet::SupportedMtuRange>())
{
    supported_mtu_range->parent = this;

    yang_name = "ethernet"; yang_parent_name = "interface";
}

InterfacesState::Interface::Ethernet::~Ethernet()
{
}

bool InterfacesState::Interface::Ethernet::has_data() const
{
    return duplex.is_set
	|| (supported_mtu_range !=  nullptr && supported_mtu_range->has_data());
}

bool InterfacesState::Interface::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| (supported_mtu_range !=  nullptr && supported_mtu_range->has_operation());
}

std::string InterfacesState::Interface::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ethernet:ethernet";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supported-mtu-range")
    {
        if(supported_mtu_range == nullptr)
        {
            supported_mtu_range = std::make_shared<InterfacesState::Interface::Ethernet::SupportedMtuRange>();
        }
        return supported_mtu_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supported_mtu_range != nullptr)
    {
        children["supported-mtu-range"] = supported_mtu_range;
    }

    return children;
}

void InterfacesState::Interface::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported-mtu-range" || name == "duplex")
        return true;
    return false;
}

InterfacesState::Interface::Ethernet::SupportedMtuRange::SupportedMtuRange()
    :
    max_mtu_size{YType::uint16, "max-mtu-size"},
    min_mtu_size{YType::uint16, "min-mtu-size"}
{
    yang_name = "supported-mtu-range"; yang_parent_name = "ethernet";
}

InterfacesState::Interface::Ethernet::SupportedMtuRange::~SupportedMtuRange()
{
}

bool InterfacesState::Interface::Ethernet::SupportedMtuRange::has_data() const
{
    return max_mtu_size.is_set
	|| min_mtu_size.is_set;
}

bool InterfacesState::Interface::Ethernet::SupportedMtuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_mtu_size.yfilter)
	|| ydk::is_set(min_mtu_size.yfilter);
}

std::string InterfacesState::Interface::Ethernet::SupportedMtuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supported-mtu-range";

    return path_buffer.str();

}

const EntityPath InterfacesState::Interface::Ethernet::SupportedMtuRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SupportedMtuRange' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_mtu_size.is_set || is_set(max_mtu_size.yfilter)) leaf_name_data.push_back(max_mtu_size.get_name_leafdata());
    if (min_mtu_size.is_set || is_set(min_mtu_size.yfilter)) leaf_name_data.push_back(min_mtu_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Ethernet::SupportedMtuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfacesState::Interface::Ethernet::SupportedMtuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfacesState::Interface::Ethernet::SupportedMtuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-mtu-size")
    {
        max_mtu_size = value;
        max_mtu_size.value_namespace = name_space;
        max_mtu_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-mtu-size")
    {
        min_mtu_size = value;
        min_mtu_size.value_namespace = name_space;
        min_mtu_size.value_namespace_prefix = name_space_prefix;
    }
}

void InterfacesState::Interface::Ethernet::SupportedMtuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-mtu-size")
    {
        max_mtu_size.yfilter = yfilter;
    }
    if(value_path == "min-mtu-size")
    {
        min_mtu_size.yfilter = yfilter;
    }
}

bool InterfacesState::Interface::Ethernet::SupportedMtuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-mtu-size" || name == "min-mtu-size")
        return true;
    return false;
}

const Enum::YLeaf Interfaces::Interface::LinkUpDownTrapEnable::enabled {1, "enabled"};
const Enum::YLeaf Interfaces::Interface::LinkUpDownTrapEnable::disabled {2, "disabled"};

const Enum::YLeaf Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::Direction::transmit {1, "transmit"};
const Enum::YLeaf Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::Direction::receive {2, "receive"};
const Enum::YLeaf Interfaces::Interface::PwNeighbor::LoadBalance::FlowLabel::Direction::both {3, "both"};

const Enum::YLeaf Interfaces::Interface::Ethernet::TransmissionParams::Duplex::half {0, "half"};
const Enum::YLeaf Interfaces::Interface::Ethernet::TransmissionParams::Duplex::full {1, "full"};

const Enum::YLeaf InterfacesState::Interface::OperStatus::up {1, "up"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::down {2, "down"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::testing {3, "testing"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::unknown {4, "unknown"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::dormant {5, "dormant"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::not_present {6, "not-present"};
const Enum::YLeaf InterfacesState::Interface::OperStatus::lower_layer_down {7, "lower-layer-down"};

const Enum::YLeaf InterfacesState::Interface::AdminStatus::up {1, "up"};
const Enum::YLeaf InterfacesState::Interface::AdminStatus::down {2, "down"};
const Enum::YLeaf InterfacesState::Interface::AdminStatus::testing {3, "testing"};

const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::preferred {0, "preferred"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::deprecated {1, "deprecated"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::invalid {2, "invalid"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::inaccessible {3, "inaccessible"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::unknown {4, "unknown"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::tentative {5, "tentative"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::duplicate {6, "duplicate"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Address::Status::optimistic {7, "optimistic"};

const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::incomplete {0, "incomplete"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::reachable {1, "reachable"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::stale {2, "stale"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::delay {3, "delay"};
const Enum::YLeaf InterfacesState::Interface::Ipv6::Neighbor::State::probe {4, "probe"};

const Enum::YLeaf InterfacesState::Interface::Ethernet::Duplex::half {0, "half"};
const Enum::YLeaf InterfacesState::Interface::Ethernet::Duplex::full {1, "full"};
const Enum::YLeaf InterfacesState::Interface::Ethernet::Duplex::disagree {2, "disagree"};


}
}

