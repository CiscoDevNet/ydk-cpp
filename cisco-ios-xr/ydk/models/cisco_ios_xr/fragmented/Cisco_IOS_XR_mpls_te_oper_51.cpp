
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_51.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_52.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flags' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.operation)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.operation)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.operation)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.operation)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.operation)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{
    yang_name = "srlg-rro-sub-object"; yang_parent_name = "path-rro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(srl_gs.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgRroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto srl_gs_name_datas = srl_gs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srl_gs_name_datas.begin(), srl_gs_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::ResvRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;

    label_rro_sub_object->parent = this;

    srlg_rro_sub_object->parent = this;

    unnumbered_rro_sub_object->parent = this;

    yang_name = "resv-rro"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::~ResvRro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::has_operation() const
{
    return is_set(operation)
	|| is_set(rro_type.operation)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-rro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResvRro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.operation)) leaf_name_data.push_back(rro_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4rro_sub_object != nullptr)
    {
        children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "resv-rro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(rro_address.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.operation)) leaf_name_data.push_back(rro_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flags' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.operation)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.operation)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.operation)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.operation)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.operation)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"},
    variable_length_label{YType::uint32, "variable-length-label"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "resv-rro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::has_data() const
{
    for (auto const & leaf : variable_length_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_label_variable_length.is_set
	|| label.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::has_operation() const
{
    for (auto const & leaf : variable_length_label.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(is_label_variable_length.operation)
	|| is_set(label.operation)
	|| is_set(variable_length_label.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelRroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_label_variable_length.is_set || is_set(is_label_variable_length.operation)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());

    auto variable_length_label_name_datas = variable_length_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), variable_length_label_name_datas.begin(), variable_length_label_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "variable-length-label")
    {
        variable_length_label.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{
    yang_name = "flags"; yang_parent_name = "label-rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_global_label.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flags' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.operation)) leaf_name_data.push_back(is_global_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "resv-rro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_id.operation)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedRroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{
    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protected.operation)
	|| is_set(is_node_id.operation)
	|| is_set(is_node_protection_available.operation)
	|| is_set(is_protection_available.operation)
	|| is_set(is_protection_in_use.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flags' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.operation)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.operation)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.operation)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.operation)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.operation)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{
    yang_name = "srlg-rro-sub-object"; yang_parent_name = "resv-rro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(srl_gs.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgRroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto srl_gs_name_datas = srl_gs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srl_gs_name_datas.begin(), srl_gs_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::PathAffinityArray()
    :
    hop_address{YType::str, "hop-address"},
    hop_affinity{YType::uint32, "hop-affinity"},
    hop_extended_affinity{YType::uint32, "hop-extended-affinity"}
{
    yang_name = "path-affinity-array"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::~PathAffinityArray()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::has_data() const
{
    for (auto const & leaf : hop_extended_affinity.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return hop_address.is_set
	|| hop_affinity.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::has_operation() const
{
    for (auto const & leaf : hop_extended_affinity.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(hop_address.operation)
	|| is_set(hop_affinity.operation)
	|| is_set(hop_extended_affinity.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-affinity-array";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathAffinityArray' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.operation)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_affinity.is_set || is_set(hop_affinity.operation)) leaf_name_data.push_back(hop_affinity.get_name_leafdata());

    auto hop_extended_affinity_name_datas = hop_extended_affinity.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), hop_extended_affinity_name_datas.begin(), hop_extended_affinity_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity = value;
    }
    if(value_path == "hop-extended-affinity")
    {
        hop_extended_affinity.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::ReverseEroIn()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;

    unnumbered_ero_sub_object->parent = this;

    yang_name = "reverse-ero-in"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::~ReverseEroIn()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-in";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseEroIn' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.operation)) leaf_name_data.push_back(ero_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "reverse-ero-in";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4EroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.operation)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "reverse-ero-in";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedEroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.operation)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.operation)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::S2LSegmentRoutingPath()
    :
    has_entropy_label{YType::boolean, "has-entropy-label"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    local_addr{YType::str, "local-addr"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{
    yang_name = "s2l-segment-routing-path"; yang_parent_name = "s2l";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::~S2LSegmentRoutingPath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::has_operation() const
{
    return is_set(operation)
	|| is_set(has_entropy_label.operation)
	|| is_set(has_ip_addresses.operation)
	|| is_set(has_mpls_label.operation)
	|| is_set(local_addr.operation)
	|| is_set(mpls_label_value.operation)
	|| is_set(remote_addr.operation)
	|| is_set(sid_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-segment-routing-path";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LSegmentRoutingPath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_entropy_label.is_set || is_set(has_entropy_label.operation)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.operation)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.operation)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.operation)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::P2PInfo()
    :
    is_bidirectional{YType::boolean, "is-bidirectional"}
    	,
    auto_bandwidth_config(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig>())
	,auto_bandwidth_oper(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper>())
	,auto_bandwidth_status(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus>())
{
    auto_bandwidth_config->parent = this;

    auto_bandwidth_oper->parent = this;

    auto_bandwidth_status->parent = this;

    yang_name = "p2p-info"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::~P2PInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::has_data() const
{
    return is_bidirectional.is_set
	|| (auto_bandwidth_config !=  nullptr && auto_bandwidth_config->has_data())
	|| (auto_bandwidth_oper !=  nullptr && auto_bandwidth_oper->has_data())
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bidirectional.operation)
	|| (auto_bandwidth_config !=  nullptr && auto_bandwidth_config->has_operation())
	|| (auto_bandwidth_oper !=  nullptr && auto_bandwidth_oper->has_operation())
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2PInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bidirectional.is_set || is_set(is_bidirectional.operation)) leaf_name_data.push_back(is_bidirectional.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bandwidth-config")
    {
        if(auto_bandwidth_config == nullptr)
        {
            auto_bandwidth_config = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig>();
        }
        return auto_bandwidth_config;
    }

    if(child_yang_name == "auto-bandwidth-oper")
    {
        if(auto_bandwidth_oper == nullptr)
        {
            auto_bandwidth_oper = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper>();
        }
        return auto_bandwidth_oper;
    }

    if(child_yang_name == "auto-bandwidth-status")
    {
        if(auto_bandwidth_status == nullptr)
        {
            auto_bandwidth_status = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus>();
        }
        return auto_bandwidth_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_bandwidth_config != nullptr)
    {
        children["auto-bandwidth-config"] = auto_bandwidth_config;
    }

    if(auto_bandwidth_oper != nullptr)
    {
        children["auto-bandwidth-oper"] = auto_bandwidth_oper;
    }

    if(auto_bandwidth_status != nullptr)
    {
        children["auto-bandwidth-status"] = auto_bandwidth_status;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bidirectional")
    {
        is_bidirectional = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::AutoBandwidthStatus()
    :
    is_auto_bandwidth_enabled{YType::boolean, "is-auto-bandwidth-enabled"},
    reactivation_time{YType::uint32, "reactivation-time"}
{
    yang_name = "auto-bandwidth-status"; yang_parent_name = "p2p-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::~AutoBandwidthStatus()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::has_data() const
{
    return is_auto_bandwidth_enabled.is_set
	|| reactivation_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_auto_bandwidth_enabled.operation)
	|| is_set(reactivation_time.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-status";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBandwidthStatus' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_auto_bandwidth_enabled.is_set || is_set(is_auto_bandwidth_enabled.operation)) leaf_name_data.push_back(is_auto_bandwidth_enabled.get_name_leafdata());
    if (reactivation_time.is_set || is_set(reactivation_time.operation)) leaf_name_data.push_back(reactivation_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled = value;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::AutoBandwidthConfig()
    :
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"},
    application_frequency{YType::uint32, "application-frequency"},
    collection_frequency{YType::uint32, "collection-frequency"},
    is_auto_bandwidth_collect_only{YType::boolean, "is-auto-bandwidth-collect-only"},
    maximum_bandwidth{YType::uint32, "maximum-bandwidth"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"},
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"},
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"},
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"}
{
    yang_name = "auto-bandwidth-config"; yang_parent_name = "p2p-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::~AutoBandwidthConfig()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::has_data() const
{
    return adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set
	|| application_frequency.is_set
	|| collection_frequency.is_set
	|| is_auto_bandwidth_collect_only.is_set
	|| maximum_bandwidth.is_set
	|| minimum_bandwidth.is_set
	|| overflow_threshold_limit.is_set
	|| overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set
	|| underflow_threshold_limit.is_set
	|| underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_threshold_percent.operation)
	|| is_set(adjustment_threshold_value.operation)
	|| is_set(application_frequency.operation)
	|| is_set(collection_frequency.operation)
	|| is_set(is_auto_bandwidth_collect_only.operation)
	|| is_set(maximum_bandwidth.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(overflow_threshold_limit.operation)
	|| is_set(overflow_threshold_percent.operation)
	|| is_set(overflow_threshold_value.operation)
	|| is_set(underflow_threshold_limit.operation)
	|| is_set(underflow_threshold_percent.operation)
	|| is_set(underflow_threshold_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-config";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBandwidthConfig' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.operation)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.operation)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());
    if (application_frequency.is_set || is_set(application_frequency.operation)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (collection_frequency.is_set || is_set(collection_frequency.operation)) leaf_name_data.push_back(collection_frequency.get_name_leafdata());
    if (is_auto_bandwidth_collect_only.is_set || is_set(is_auto_bandwidth_collect_only.operation)) leaf_name_data.push_back(is_auto_bandwidth_collect_only.get_name_leafdata());
    if (maximum_bandwidth.is_set || is_set(maximum_bandwidth.operation)) leaf_name_data.push_back(maximum_bandwidth.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.operation)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());
    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.operation)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.operation)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());
    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.operation)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());
    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.operation)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.operation)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
    }
    if(value_path == "application-frequency")
    {
        application_frequency = value;
    }
    if(value_path == "collection-frequency")
    {
        collection_frequency = value;
    }
    if(value_path == "is-auto-bandwidth-collect-only")
    {
        is_auto_bandwidth_collect_only = value;
    }
    if(value_path == "maximum-bandwidth")
    {
        maximum_bandwidth = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::AutoBandwidthOper()
    :
    application_jitter{YType::uint32, "application-jitter"},
    application_reject_reason{YType::enumeration, "application-reject-reason"},
    bandwidth_applications{YType::uint32, "bandwidth-applications"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    collect_only_requested_bandwidth{YType::uint32, "collect-only-requested-bandwidth"},
    highest_bandwidth{YType::uint32, "highest-bandwidth"},
    last_application_trigger{YType::enumeration, "last-application-trigger"},
    last_bandwidth_applied{YType::uint32, "last-bandwidth-applied"},
    overflow_early_bw_applications{YType::uint32, "overflow-early-bw-applications"},
    samples_collected{YType::uint32, "samples-collected"},
    threshold_overflows{YType::uint32, "threshold-overflows"},
    threshold_underflows{YType::uint32, "threshold-underflows"},
    time_left_application{YType::uint32, "time-left-application"},
    time_left_collection{YType::uint32, "time-left-collection"},
    underflow_early_bw_applications{YType::uint32, "underflow-early-bw-applications"},
    underflow_highest_bandwidth{YType::uint32, "underflow-highest-bandwidth"}
{
    yang_name = "auto-bandwidth-oper"; yang_parent_name = "p2p-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::~AutoBandwidthOper()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::has_data() const
{
    return application_jitter.is_set
	|| application_reject_reason.is_set
	|| bandwidth_applications.is_set
	|| bandwidth_pool_type.is_set
	|| collect_only_requested_bandwidth.is_set
	|| highest_bandwidth.is_set
	|| last_application_trigger.is_set
	|| last_bandwidth_applied.is_set
	|| overflow_early_bw_applications.is_set
	|| samples_collected.is_set
	|| threshold_overflows.is_set
	|| threshold_underflows.is_set
	|| time_left_application.is_set
	|| time_left_collection.is_set
	|| underflow_early_bw_applications.is_set
	|| underflow_highest_bandwidth.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::has_operation() const
{
    return is_set(operation)
	|| is_set(application_jitter.operation)
	|| is_set(application_reject_reason.operation)
	|| is_set(bandwidth_applications.operation)
	|| is_set(bandwidth_pool_type.operation)
	|| is_set(collect_only_requested_bandwidth.operation)
	|| is_set(highest_bandwidth.operation)
	|| is_set(last_application_trigger.operation)
	|| is_set(last_bandwidth_applied.operation)
	|| is_set(overflow_early_bw_applications.operation)
	|| is_set(samples_collected.operation)
	|| is_set(threshold_overflows.operation)
	|| is_set(threshold_underflows.operation)
	|| is_set(time_left_application.operation)
	|| is_set(time_left_collection.operation)
	|| is_set(underflow_early_bw_applications.operation)
	|| is_set(underflow_highest_bandwidth.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-oper";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBandwidthOper' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_jitter.is_set || is_set(application_jitter.operation)) leaf_name_data.push_back(application_jitter.get_name_leafdata());
    if (application_reject_reason.is_set || is_set(application_reject_reason.operation)) leaf_name_data.push_back(application_reject_reason.get_name_leafdata());
    if (bandwidth_applications.is_set || is_set(bandwidth_applications.operation)) leaf_name_data.push_back(bandwidth_applications.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.operation)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (collect_only_requested_bandwidth.is_set || is_set(collect_only_requested_bandwidth.operation)) leaf_name_data.push_back(collect_only_requested_bandwidth.get_name_leafdata());
    if (highest_bandwidth.is_set || is_set(highest_bandwidth.operation)) leaf_name_data.push_back(highest_bandwidth.get_name_leafdata());
    if (last_application_trigger.is_set || is_set(last_application_trigger.operation)) leaf_name_data.push_back(last_application_trigger.get_name_leafdata());
    if (last_bandwidth_applied.is_set || is_set(last_bandwidth_applied.operation)) leaf_name_data.push_back(last_bandwidth_applied.get_name_leafdata());
    if (overflow_early_bw_applications.is_set || is_set(overflow_early_bw_applications.operation)) leaf_name_data.push_back(overflow_early_bw_applications.get_name_leafdata());
    if (samples_collected.is_set || is_set(samples_collected.operation)) leaf_name_data.push_back(samples_collected.get_name_leafdata());
    if (threshold_overflows.is_set || is_set(threshold_overflows.operation)) leaf_name_data.push_back(threshold_overflows.get_name_leafdata());
    if (threshold_underflows.is_set || is_set(threshold_underflows.operation)) leaf_name_data.push_back(threshold_underflows.get_name_leafdata());
    if (time_left_application.is_set || is_set(time_left_application.operation)) leaf_name_data.push_back(time_left_application.get_name_leafdata());
    if (time_left_collection.is_set || is_set(time_left_collection.operation)) leaf_name_data.push_back(time_left_collection.get_name_leafdata());
    if (underflow_early_bw_applications.is_set || is_set(underflow_early_bw_applications.operation)) leaf_name_data.push_back(underflow_early_bw_applications.get_name_leafdata());
    if (underflow_highest_bandwidth.is_set || is_set(underflow_highest_bandwidth.operation)) leaf_name_data.push_back(underflow_highest_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-jitter")
    {
        application_jitter = value;
    }
    if(value_path == "application-reject-reason")
    {
        application_reject_reason = value;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications = value;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
    }
    if(value_path == "collect-only-requested-bandwidth")
    {
        collect_only_requested_bandwidth = value;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth = value;
    }
    if(value_path == "last-application-trigger")
    {
        last_application_trigger = value;
    }
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied = value;
    }
    if(value_path == "overflow-early-bw-applications")
    {
        overflow_early_bw_applications = value;
    }
    if(value_path == "samples-collected")
    {
        samples_collected = value;
    }
    if(value_path == "threshold-overflows")
    {
        threshold_overflows = value;
    }
    if(value_path == "threshold-underflows")
    {
        threshold_underflows = value;
    }
    if(value_path == "time-left-application")
    {
        time_left_application = value;
    }
    if(value_path == "time-left-collection")
    {
        time_left_collection = value;
    }
    if(value_path == "underflow-early-bw-applications")
    {
        underflow_early_bw_applications = value;
    }
    if(value_path == "underflow-highest-bandwidth")
    {
        underflow_highest_bandwidth = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::History()
    :
    current_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup>())
	,gmpls_other_protect_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup>())
	,gmpls_other_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup>())
	,gmpls_path_protect_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup>())
	,last_re_opt_fail(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail>())
	,last_stdby_re_opt_fail(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail>())
	,previous_gmpls_path_protect_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup>())
	,previous_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup>())
	,reopt_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup>())
	,standby_reopt_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup>())
	,standby_setup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup>())
{
    current_setup->parent = this;

    gmpls_other_protect_setup->parent = this;

    gmpls_other_setup->parent = this;

    gmpls_path_protect_setup->parent = this;

    last_re_opt_fail->parent = this;

    last_stdby_re_opt_fail->parent = this;

    previous_gmpls_path_protect_setup->parent = this;

    previous_setup->parent = this;

    reopt_setup->parent = this;

    standby_reopt_setup->parent = this;

    standby_setup->parent = this;

    yang_name = "history"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::~History()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::has_data() const
{
    return (current_setup !=  nullptr && current_setup->has_data())
	|| (gmpls_other_protect_setup !=  nullptr && gmpls_other_protect_setup->has_data())
	|| (gmpls_other_setup !=  nullptr && gmpls_other_setup->has_data())
	|| (gmpls_path_protect_setup !=  nullptr && gmpls_path_protect_setup->has_data())
	|| (last_re_opt_fail !=  nullptr && last_re_opt_fail->has_data())
	|| (last_stdby_re_opt_fail !=  nullptr && last_stdby_re_opt_fail->has_data())
	|| (previous_gmpls_path_protect_setup !=  nullptr && previous_gmpls_path_protect_setup->has_data())
	|| (previous_setup !=  nullptr && previous_setup->has_data())
	|| (reopt_setup !=  nullptr && reopt_setup->has_data())
	|| (standby_reopt_setup !=  nullptr && standby_reopt_setup->has_data())
	|| (standby_setup !=  nullptr && standby_setup->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::has_operation() const
{
    return is_set(operation)
	|| (current_setup !=  nullptr && current_setup->has_operation())
	|| (gmpls_other_protect_setup !=  nullptr && gmpls_other_protect_setup->has_operation())
	|| (gmpls_other_setup !=  nullptr && gmpls_other_setup->has_operation())
	|| (gmpls_path_protect_setup !=  nullptr && gmpls_path_protect_setup->has_operation())
	|| (last_re_opt_fail !=  nullptr && last_re_opt_fail->has_operation())
	|| (last_stdby_re_opt_fail !=  nullptr && last_stdby_re_opt_fail->has_operation())
	|| (previous_gmpls_path_protect_setup !=  nullptr && previous_gmpls_path_protect_setup->has_operation())
	|| (previous_setup !=  nullptr && previous_setup->has_operation())
	|| (reopt_setup !=  nullptr && reopt_setup->has_operation())
	|| (standby_reopt_setup !=  nullptr && standby_reopt_setup->has_operation())
	|| (standby_setup !=  nullptr && standby_setup->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-setup")
    {
        if(current_setup == nullptr)
        {
            current_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup>();
        }
        return current_setup;
    }

    if(child_yang_name == "gmpls-other-protect-setup")
    {
        if(gmpls_other_protect_setup == nullptr)
        {
            gmpls_other_protect_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup>();
        }
        return gmpls_other_protect_setup;
    }

    if(child_yang_name == "gmpls-other-setup")
    {
        if(gmpls_other_setup == nullptr)
        {
            gmpls_other_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup>();
        }
        return gmpls_other_setup;
    }

    if(child_yang_name == "gmpls-path-protect-setup")
    {
        if(gmpls_path_protect_setup == nullptr)
        {
            gmpls_path_protect_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup>();
        }
        return gmpls_path_protect_setup;
    }

    if(child_yang_name == "last-re-opt-fail")
    {
        if(last_re_opt_fail == nullptr)
        {
            last_re_opt_fail = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail>();
        }
        return last_re_opt_fail;
    }

    if(child_yang_name == "last-stdby-re-opt-fail")
    {
        if(last_stdby_re_opt_fail == nullptr)
        {
            last_stdby_re_opt_fail = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail>();
        }
        return last_stdby_re_opt_fail;
    }

    if(child_yang_name == "previous-gmpls-path-protect-setup")
    {
        if(previous_gmpls_path_protect_setup == nullptr)
        {
            previous_gmpls_path_protect_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup>();
        }
        return previous_gmpls_path_protect_setup;
    }

    if(child_yang_name == "previous-setup")
    {
        if(previous_setup == nullptr)
        {
            previous_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup>();
        }
        return previous_setup;
    }

    if(child_yang_name == "reopt-setup")
    {
        if(reopt_setup == nullptr)
        {
            reopt_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup>();
        }
        return reopt_setup;
    }

    if(child_yang_name == "standby-reopt-setup")
    {
        if(standby_reopt_setup == nullptr)
        {
            standby_reopt_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup>();
        }
        return standby_reopt_setup;
    }

    if(child_yang_name == "standby-setup")
    {
        if(standby_setup == nullptr)
        {
            standby_setup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup>();
        }
        return standby_setup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_setup != nullptr)
    {
        children["current-setup"] = current_setup;
    }

    if(gmpls_other_protect_setup != nullptr)
    {
        children["gmpls-other-protect-setup"] = gmpls_other_protect_setup;
    }

    if(gmpls_other_setup != nullptr)
    {
        children["gmpls-other-setup"] = gmpls_other_setup;
    }

    if(gmpls_path_protect_setup != nullptr)
    {
        children["gmpls-path-protect-setup"] = gmpls_path_protect_setup;
    }

    if(last_re_opt_fail != nullptr)
    {
        children["last-re-opt-fail"] = last_re_opt_fail;
    }

    if(last_stdby_re_opt_fail != nullptr)
    {
        children["last-stdby-re-opt-fail"] = last_stdby_re_opt_fail;
    }

    if(previous_gmpls_path_protect_setup != nullptr)
    {
        children["previous-gmpls-path-protect-setup"] = previous_gmpls_path_protect_setup;
    }

    if(previous_setup != nullptr)
    {
        children["previous-setup"] = previous_setup;
    }

    if(reopt_setup != nullptr)
    {
        children["reopt-setup"] = reopt_setup;
    }

    if(standby_reopt_setup != nullptr)
    {
        children["standby-reopt-setup"] = standby_reopt_setup;
    }

    if(standby_setup != nullptr)
    {
        children["standby-setup"] = standby_setup;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::CurrentSetup()
    :
    current_setup_last_error{YType::str, "current-setup-last-error"},
    current_setup_timer{YType::uint32, "current-setup-timer"},
    selection_reason{YType::str, "selection-reason"}
    	,
    connected_uptimes(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes>())
{
    connected_uptimes->parent = this;

    yang_name = "current-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::~CurrentSetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::has_data() const
{
    return current_setup_last_error.is_set
	|| current_setup_timer.is_set
	|| selection_reason.is_set
	|| (connected_uptimes !=  nullptr && connected_uptimes->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(current_setup_last_error.operation)
	|| is_set(current_setup_timer.operation)
	|| is_set(selection_reason.operation)
	|| (connected_uptimes !=  nullptr && connected_uptimes->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrentSetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_setup_last_error.is_set || is_set(current_setup_last_error.operation)) leaf_name_data.push_back(current_setup_last_error.get_name_leafdata());
    if (current_setup_timer.is_set || is_set(current_setup_timer.operation)) leaf_name_data.push_back(current_setup_timer.get_name_leafdata());
    if (selection_reason.is_set || is_set(selection_reason.operation)) leaf_name_data.push_back(selection_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-uptimes")
    {
        if(connected_uptimes == nullptr)
        {
            connected_uptimes = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes>();
        }
        return connected_uptimes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected_uptimes != nullptr)
    {
        children["connected-uptimes"] = connected_uptimes;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-setup-last-error")
    {
        current_setup_last_error = value;
    }
    if(value_path == "current-setup-timer")
    {
        current_setup_timer = value;
    }
    if(value_path == "selection-reason")
    {
        selection_reason = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::ConnectedUptimes()
    :
    current_lsp_uptime{YType::uint32, "current-lsp-uptime"},
    current_uptime{YType::uint32, "current-uptime"}
{
    yang_name = "connected-uptimes"; yang_parent_name = "current-setup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::~ConnectedUptimes()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::has_data() const
{
    return current_lsp_uptime.is_set
	|| current_uptime.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::has_operation() const
{
    return is_set(operation)
	|| is_set(current_lsp_uptime.operation)
	|| is_set(current_uptime.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-uptimes";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedUptimes' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_lsp_uptime.is_set || is_set(current_lsp_uptime.operation)) leaf_name_data.push_back(current_lsp_uptime.get_name_leafdata());
    if (current_uptime.is_set || is_set(current_uptime.operation)) leaf_name_data.push_back(current_uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-lsp-uptime")
    {
        current_lsp_uptime = value;
    }
    if(value_path == "current-uptime")
    {
        current_uptime = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::ReoptSetup()
    :
    reoptimized_setup_last_error{YType::str, "reoptimized-setup-last-error"},
    reoptimized_setup_timer{YType::uint32, "reoptimized-setup-timer"},
    reoptimized_setup_uptime{YType::uint32, "reoptimized-setup-uptime"}
{
    yang_name = "reopt-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::~ReoptSetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::has_data() const
{
    return reoptimized_setup_last_error.is_set
	|| reoptimized_setup_timer.is_set
	|| reoptimized_setup_uptime.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(reoptimized_setup_last_error.operation)
	|| is_set(reoptimized_setup_timer.operation)
	|| is_set(reoptimized_setup_uptime.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reopt-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReoptSetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reoptimized_setup_last_error.is_set || is_set(reoptimized_setup_last_error.operation)) leaf_name_data.push_back(reoptimized_setup_last_error.get_name_leafdata());
    if (reoptimized_setup_timer.is_set || is_set(reoptimized_setup_timer.operation)) leaf_name_data.push_back(reoptimized_setup_timer.get_name_leafdata());
    if (reoptimized_setup_uptime.is_set || is_set(reoptimized_setup_uptime.operation)) leaf_name_data.push_back(reoptimized_setup_uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error = value;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer = value;
    }
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::GmplsPathProtectSetup()
    :
    protecting_setup_last_error{YType::str, "protecting-setup-last-error"},
    protecting_setup_timer{YType::uint32, "protecting-setup-timer"},
    protecting_setup_uptime{YType::uint32, "protecting-setup-uptime"}
{
    yang_name = "gmpls-path-protect-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::~GmplsPathProtectSetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::has_data() const
{
    return protecting_setup_last_error.is_set
	|| protecting_setup_timer.is_set
	|| protecting_setup_uptime.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(protecting_setup_last_error.operation)
	|| is_set(protecting_setup_timer.operation)
	|| is_set(protecting_setup_uptime.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-path-protect-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GmplsPathProtectSetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protecting_setup_last_error.is_set || is_set(protecting_setup_last_error.operation)) leaf_name_data.push_back(protecting_setup_last_error.get_name_leafdata());
    if (protecting_setup_timer.is_set || is_set(protecting_setup_timer.operation)) leaf_name_data.push_back(protecting_setup_timer.get_name_leafdata());
    if (protecting_setup_uptime.is_set || is_set(protecting_setup_uptime.operation)) leaf_name_data.push_back(protecting_setup_uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protecting-setup-last-error")
    {
        protecting_setup_last_error = value;
    }
    if(value_path == "protecting-setup-timer")
    {
        protecting_setup_timer = value;
    }
    if(value_path == "protecting-setup-uptime")
    {
        protecting_setup_uptime = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::PreviousSetup()
    :
    previous_fail_reason{YType::str, "previous-fail-reason"},
    previous_path_option{YType::str, "previous-path-option"},
    previous_setup_last_error{YType::str, "previous-setup-last-error"},
    previous_tunnel_instance{YType::uint32, "previous-tunnel-instance"}
{
    yang_name = "previous-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::~PreviousSetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::has_data() const
{
    return previous_fail_reason.is_set
	|| previous_path_option.is_set
	|| previous_setup_last_error.is_set
	|| previous_tunnel_instance.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(previous_fail_reason.operation)
	|| is_set(previous_path_option.operation)
	|| is_set(previous_setup_last_error.operation)
	|| is_set(previous_tunnel_instance.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreviousSetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous_fail_reason.is_set || is_set(previous_fail_reason.operation)) leaf_name_data.push_back(previous_fail_reason.get_name_leafdata());
    if (previous_path_option.is_set || is_set(previous_path_option.operation)) leaf_name_data.push_back(previous_path_option.get_name_leafdata());
    if (previous_setup_last_error.is_set || is_set(previous_setup_last_error.operation)) leaf_name_data.push_back(previous_setup_last_error.get_name_leafdata());
    if (previous_tunnel_instance.is_set || is_set(previous_tunnel_instance.operation)) leaf_name_data.push_back(previous_tunnel_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "previous-fail-reason")
    {
        previous_fail_reason = value;
    }
    if(value_path == "previous-path-option")
    {
        previous_path_option = value;
    }
    if(value_path == "previous-setup-last-error")
    {
        previous_setup_last_error = value;
    }
    if(value_path == "previous-tunnel-instance")
    {
        previous_tunnel_instance = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::PreviousGmplsPathProtectSetup()
    :
    previous_protect_fail_reason{YType::str, "previous-protect-fail-reason"},
    previous_protect_path_option{YType::str, "previous-protect-path-option"},
    previous_protect_setup_last_error{YType::str, "previous-protect-setup-last-error"},
    previous_protect_tunnel_instance{YType::uint32, "previous-protect-tunnel-instance"}
{
    yang_name = "previous-gmpls-path-protect-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::~PreviousGmplsPathProtectSetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::has_data() const
{
    return previous_protect_fail_reason.is_set
	|| previous_protect_path_option.is_set
	|| previous_protect_setup_last_error.is_set
	|| previous_protect_tunnel_instance.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(previous_protect_fail_reason.operation)
	|| is_set(previous_protect_path_option.operation)
	|| is_set(previous_protect_setup_last_error.operation)
	|| is_set(previous_protect_tunnel_instance.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-gmpls-path-protect-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreviousGmplsPathProtectSetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous_protect_fail_reason.is_set || is_set(previous_protect_fail_reason.operation)) leaf_name_data.push_back(previous_protect_fail_reason.get_name_leafdata());
    if (previous_protect_path_option.is_set || is_set(previous_protect_path_option.operation)) leaf_name_data.push_back(previous_protect_path_option.get_name_leafdata());
    if (previous_protect_setup_last_error.is_set || is_set(previous_protect_setup_last_error.operation)) leaf_name_data.push_back(previous_protect_setup_last_error.get_name_leafdata());
    if (previous_protect_tunnel_instance.is_set || is_set(previous_protect_tunnel_instance.operation)) leaf_name_data.push_back(previous_protect_tunnel_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "previous-protect-fail-reason")
    {
        previous_protect_fail_reason = value;
    }
    if(value_path == "previous-protect-path-option")
    {
        previous_protect_path_option = value;
    }
    if(value_path == "previous-protect-setup-last-error")
    {
        previous_protect_setup_last_error = value;
    }
    if(value_path == "previous-protect-tunnel-instance")
    {
        previous_protect_tunnel_instance = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::GmplsOtherSetup()
    :
    other_setup_error{YType::str, "other-setup-error"},
    path_option_index{YType::uint32, "path-option-index"}
{
    yang_name = "gmpls-other-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::~GmplsOtherSetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::has_data() const
{
    return other_setup_error.is_set
	|| path_option_index.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(other_setup_error.operation)
	|| is_set(path_option_index.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-other-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GmplsOtherSetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (other_setup_error.is_set || is_set(other_setup_error.operation)) leaf_name_data.push_back(other_setup_error.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.operation)) leaf_name_data.push_back(path_option_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "other-setup-error")
    {
        other_setup_error = value;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::GmplsOtherProtectSetup()
    :
    other_setup_error{YType::str, "other-setup-error"},
    path_option_index{YType::uint32, "path-option-index"}
{
    yang_name = "gmpls-other-protect-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::~GmplsOtherProtectSetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::has_data() const
{
    return other_setup_error.is_set
	|| path_option_index.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(other_setup_error.operation)
	|| is_set(path_option_index.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-other-protect-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GmplsOtherProtectSetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (other_setup_error.is_set || is_set(other_setup_error.operation)) leaf_name_data.push_back(other_setup_error.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.operation)) leaf_name_data.push_back(path_option_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "other-setup-error")
    {
        other_setup_error = value;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::StandbySetup()
    :
    standby_lsp_uptime{YType::uint32, "standby-lsp-uptime"},
    standby_setup_timer{YType::uint32, "standby-setup-timer"}
{
    yang_name = "standby-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::~StandbySetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::has_data() const
{
    return standby_lsp_uptime.is_set
	|| standby_setup_timer.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::has_operation() const
{
    return is_set(operation)
	|| is_set(standby_lsp_uptime.operation)
	|| is_set(standby_setup_timer.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandbySetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standby_lsp_uptime.is_set || is_set(standby_lsp_uptime.operation)) leaf_name_data.push_back(standby_lsp_uptime.get_name_leafdata());
    if (standby_setup_timer.is_set || is_set(standby_setup_timer.operation)) leaf_name_data.push_back(standby_setup_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "standby-lsp-uptime")
    {
        standby_lsp_uptime = value;
    }
    if(value_path == "standby-setup-timer")
    {
        standby_setup_timer = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::StandbyReoptSetup()
    :
    reoptimized_setup_last_error{YType::str, "reoptimized-setup-last-error"},
    reoptimized_setup_timer{YType::uint32, "reoptimized-setup-timer"},
    reoptimized_setup_uptime{YType::uint32, "reoptimized-setup-uptime"}
{
    yang_name = "standby-reopt-setup"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::~StandbyReoptSetup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::has_data() const
{
    return reoptimized_setup_last_error.is_set
	|| reoptimized_setup_timer.is_set
	|| reoptimized_setup_uptime.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(reoptimized_setup_last_error.operation)
	|| is_set(reoptimized_setup_timer.operation)
	|| is_set(reoptimized_setup_uptime.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-reopt-setup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandbyReoptSetup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reoptimized_setup_last_error.is_set || is_set(reoptimized_setup_last_error.operation)) leaf_name_data.push_back(reoptimized_setup_last_error.get_name_leafdata());
    if (reoptimized_setup_timer.is_set || is_set(reoptimized_setup_timer.operation)) leaf_name_data.push_back(reoptimized_setup_timer.get_name_leafdata());
    if (reoptimized_setup_uptime.is_set || is_set(reoptimized_setup_uptime.operation)) leaf_name_data.push_back(reoptimized_setup_uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error = value;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer = value;
    }
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::LastReOptFail()
    :
    re_opt_failed_destination{YType::str, "re-opt-failed-destination"},
    re_opt_failed_timestamp{YType::uint32, "re-opt-failed-timestamp"},
    re_opt_last_fail_reason{YType::enumeration, "re-opt-last-fail-reason"}
{
    yang_name = "last-re-opt-fail"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::~LastReOptFail()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::has_data() const
{
    return re_opt_failed_destination.is_set
	|| re_opt_failed_timestamp.is_set
	|| re_opt_last_fail_reason.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::has_operation() const
{
    return is_set(operation)
	|| is_set(re_opt_failed_destination.operation)
	|| is_set(re_opt_failed_timestamp.operation)
	|| is_set(re_opt_last_fail_reason.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-re-opt-fail";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReOptFail' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (re_opt_failed_destination.is_set || is_set(re_opt_failed_destination.operation)) leaf_name_data.push_back(re_opt_failed_destination.get_name_leafdata());
    if (re_opt_failed_timestamp.is_set || is_set(re_opt_failed_timestamp.operation)) leaf_name_data.push_back(re_opt_failed_timestamp.get_name_leafdata());
    if (re_opt_last_fail_reason.is_set || is_set(re_opt_last_fail_reason.operation)) leaf_name_data.push_back(re_opt_last_fail_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination = value;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp = value;
    }
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::LastStdbyReOptFail()
    :
    re_opt_failed_destination{YType::str, "re-opt-failed-destination"},
    re_opt_failed_timestamp{YType::uint32, "re-opt-failed-timestamp"},
    re_opt_last_fail_reason{YType::enumeration, "re-opt-last-fail-reason"}
{
    yang_name = "last-stdby-re-opt-fail"; yang_parent_name = "history";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::~LastStdbyReOptFail()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::has_data() const
{
    return re_opt_failed_destination.is_set
	|| re_opt_failed_timestamp.is_set
	|| re_opt_last_fail_reason.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::has_operation() const
{
    return is_set(operation)
	|| is_set(re_opt_failed_destination.operation)
	|| is_set(re_opt_failed_timestamp.operation)
	|| is_set(re_opt_last_fail_reason.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-stdby-re-opt-fail";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastStdbyReOptFail' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (re_opt_failed_destination.is_set || is_set(re_opt_failed_destination.operation)) leaf_name_data.push_back(re_opt_failed_destination.get_name_leafdata());
    if (re_opt_failed_timestamp.is_set || is_set(re_opt_failed_timestamp.operation)) leaf_name_data.push_back(re_opt_failed_timestamp.get_name_leafdata());
    if (re_opt_last_fail_reason.is_set || is_set(re_opt_last_fail_reason.operation)) leaf_name_data.push_back(re_opt_last_fail_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination = value;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp = value;
    }
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::PathProtection()
    :
    diversity_type{YType::enumeration, "diversity-type"},
    is_path_protect_configured{YType::boolean, "is-path-protect-configured"},
    is_path_protect_switch_over_underway{YType::boolean, "is-path-protect-switch-over-underway"},
    path_protection_protected_by_id{YType::uint32, "path-protection-protected-by-id"},
    reoptimization_time_remaining{YType::uint32, "reoptimization-time-remaining"},
    standby_reoptimized_number{YType::uint16, "standby-reoptimized-number"},
    switchover_ready{YType::uint16, "switchover-ready"},
    switchover_reason{YType::uint16, "switchover-reason"},
    switchover_total{YType::uint16, "switchover-total"},
    time_of_switchover_sec{YType::uint32, "time-of-switchover-sec"},
    valid_path_protection_path_option_exists{YType::boolean, "valid-path-protection-path-option-exists"}
    	,
    switchover(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover>())
{
    switchover->parent = this;

    yang_name = "path-protection"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::~PathProtection()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::has_data() const
{
    return diversity_type.is_set
	|| is_path_protect_configured.is_set
	|| is_path_protect_switch_over_underway.is_set
	|| path_protection_protected_by_id.is_set
	|| reoptimization_time_remaining.is_set
	|| standby_reoptimized_number.is_set
	|| switchover_ready.is_set
	|| switchover_reason.is_set
	|| switchover_total.is_set
	|| time_of_switchover_sec.is_set
	|| valid_path_protection_path_option_exists.is_set
	|| (switchover !=  nullptr && switchover->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::has_operation() const
{
    return is_set(operation)
	|| is_set(diversity_type.operation)
	|| is_set(is_path_protect_configured.operation)
	|| is_set(is_path_protect_switch_over_underway.operation)
	|| is_set(path_protection_protected_by_id.operation)
	|| is_set(reoptimization_time_remaining.operation)
	|| is_set(standby_reoptimized_number.operation)
	|| is_set(switchover_ready.operation)
	|| is_set(switchover_reason.operation)
	|| is_set(switchover_total.operation)
	|| is_set(time_of_switchover_sec.operation)
	|| is_set(valid_path_protection_path_option_exists.operation)
	|| (switchover !=  nullptr && switchover->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathProtection' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diversity_type.is_set || is_set(diversity_type.operation)) leaf_name_data.push_back(diversity_type.get_name_leafdata());
    if (is_path_protect_configured.is_set || is_set(is_path_protect_configured.operation)) leaf_name_data.push_back(is_path_protect_configured.get_name_leafdata());
    if (is_path_protect_switch_over_underway.is_set || is_set(is_path_protect_switch_over_underway.operation)) leaf_name_data.push_back(is_path_protect_switch_over_underway.get_name_leafdata());
    if (path_protection_protected_by_id.is_set || is_set(path_protection_protected_by_id.operation)) leaf_name_data.push_back(path_protection_protected_by_id.get_name_leafdata());
    if (reoptimization_time_remaining.is_set || is_set(reoptimization_time_remaining.operation)) leaf_name_data.push_back(reoptimization_time_remaining.get_name_leafdata());
    if (standby_reoptimized_number.is_set || is_set(standby_reoptimized_number.operation)) leaf_name_data.push_back(standby_reoptimized_number.get_name_leafdata());
    if (switchover_ready.is_set || is_set(switchover_ready.operation)) leaf_name_data.push_back(switchover_ready.get_name_leafdata());
    if (switchover_reason.is_set || is_set(switchover_reason.operation)) leaf_name_data.push_back(switchover_reason.get_name_leafdata());
    if (switchover_total.is_set || is_set(switchover_total.operation)) leaf_name_data.push_back(switchover_total.get_name_leafdata());
    if (time_of_switchover_sec.is_set || is_set(time_of_switchover_sec.operation)) leaf_name_data.push_back(time_of_switchover_sec.get_name_leafdata());
    if (valid_path_protection_path_option_exists.is_set || is_set(valid_path_protection_path_option_exists.operation)) leaf_name_data.push_back(valid_path_protection_path_option_exists.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchover")
    {
        if(switchover == nullptr)
        {
            switchover = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover>();
        }
        return switchover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switchover != nullptr)
    {
        children["switchover"] = switchover;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diversity-type")
    {
        diversity_type = value;
    }
    if(value_path == "is-path-protect-configured")
    {
        is_path_protect_configured = value;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway = value;
    }
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id = value;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining = value;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number = value;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready = value;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason = value;
    }
    if(value_path == "switchover-total")
    {
        switchover_total = value;
    }
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec = value;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::Switchover()
    :
    date_of_error_detection{YType::uint32, "date-of-error-detection"},
    date_of_error_detection_millisec{YType::uint32, "date-of-error-detection-millisec"},
    from_lsp_id{YType::uint16, "from-lsp-id"},
    path_protection_switchover_event_index{YType::uint32, "path-protection-switchover-event-index"},
    path_protection_switchover_reason{YType::enumeration, "path-protection-switchover-reason"},
    path_protection_tunnel_id{YType::uint16, "path-protection-tunnel-id"},
    switchover_duration_millisec{YType::uint32, "switchover-duration-millisec"},
    to_lsp_id{YType::uint16, "to-lsp-id"}
{
    yang_name = "switchover"; yang_parent_name = "path-protection";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::~Switchover()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::has_data() const
{
    return date_of_error_detection.is_set
	|| date_of_error_detection_millisec.is_set
	|| from_lsp_id.is_set
	|| path_protection_switchover_event_index.is_set
	|| path_protection_switchover_reason.is_set
	|| path_protection_tunnel_id.is_set
	|| switchover_duration_millisec.is_set
	|| to_lsp_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::has_operation() const
{
    return is_set(operation)
	|| is_set(date_of_error_detection.operation)
	|| is_set(date_of_error_detection_millisec.operation)
	|| is_set(from_lsp_id.operation)
	|| is_set(path_protection_switchover_event_index.operation)
	|| is_set(path_protection_switchover_reason.operation)
	|| is_set(path_protection_tunnel_id.operation)
	|| is_set(switchover_duration_millisec.operation)
	|| is_set(to_lsp_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switchover' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date_of_error_detection.is_set || is_set(date_of_error_detection.operation)) leaf_name_data.push_back(date_of_error_detection.get_name_leafdata());
    if (date_of_error_detection_millisec.is_set || is_set(date_of_error_detection_millisec.operation)) leaf_name_data.push_back(date_of_error_detection_millisec.get_name_leafdata());
    if (from_lsp_id.is_set || is_set(from_lsp_id.operation)) leaf_name_data.push_back(from_lsp_id.get_name_leafdata());
    if (path_protection_switchover_event_index.is_set || is_set(path_protection_switchover_event_index.operation)) leaf_name_data.push_back(path_protection_switchover_event_index.get_name_leafdata());
    if (path_protection_switchover_reason.is_set || is_set(path_protection_switchover_reason.operation)) leaf_name_data.push_back(path_protection_switchover_reason.get_name_leafdata());
    if (path_protection_tunnel_id.is_set || is_set(path_protection_tunnel_id.operation)) leaf_name_data.push_back(path_protection_tunnel_id.get_name_leafdata());
    if (switchover_duration_millisec.is_set || is_set(switchover_duration_millisec.operation)) leaf_name_data.push_back(switchover_duration_millisec.get_name_leafdata());
    if (to_lsp_id.is_set || is_set(to_lsp_id.operation)) leaf_name_data.push_back(to_lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection = value;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec = value;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id = value;
    }
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index = value;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason = value;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id = value;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec = value;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::AutoBackup()
    :
    ab_protected_interface{YType::str, "ab-protected-interface"},
    ab_protection_type{YType::enumeration, "ab-protection-type"},
    is_unused_removal_timer_running{YType::boolean, "is-unused-removal-timer-running"},
    is_using_srlg{YType::boolean, "is-using-srlg"},
    protected_address{YType::str, "protected-address"},
    protected_ls_ps{YType::uint32, "protected-ls-ps"},
    protected_s2_ls{YType::uint32, "protected-s2-ls"},
    sharing_families{YType::uint32, "sharing-families"},
    srlg_prot_type{YType::enumeration, "srlg-prot-type"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    unused_removal_remaining_time{YType::uint32, "unused-removal-remaining-time"}
    	,
    weighted_srlg_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo>())
{
    weighted_srlg_info->parent = this;

    yang_name = "auto-backup"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::~AutoBackup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::has_data() const
{
    for (std::size_t index=0; index<iep.size(); index++)
    {
        if(iep[index]->has_data())
            return true;
    }
    return ab_protected_interface.is_set
	|| ab_protection_type.is_set
	|| is_unused_removal_timer_running.is_set
	|| is_using_srlg.is_set
	|| protected_address.is_set
	|| protected_ls_ps.is_set
	|| protected_s2_ls.is_set
	|| sharing_families.is_set
	|| srlg_prot_type.is_set
	|| tunnel_attribute_set_name.is_set
	|| unused_removal_remaining_time.is_set
	|| (weighted_srlg_info !=  nullptr && weighted_srlg_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::has_operation() const
{
    for (std::size_t index=0; index<iep.size(); index++)
    {
        if(iep[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ab_protected_interface.operation)
	|| is_set(ab_protection_type.operation)
	|| is_set(is_unused_removal_timer_running.operation)
	|| is_set(is_using_srlg.operation)
	|| is_set(protected_address.operation)
	|| is_set(protected_ls_ps.operation)
	|| is_set(protected_s2_ls.operation)
	|| is_set(sharing_families.operation)
	|| is_set(srlg_prot_type.operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(unused_removal_remaining_time.operation)
	|| (weighted_srlg_info !=  nullptr && weighted_srlg_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBackup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ab_protected_interface.is_set || is_set(ab_protected_interface.operation)) leaf_name_data.push_back(ab_protected_interface.get_name_leafdata());
    if (ab_protection_type.is_set || is_set(ab_protection_type.operation)) leaf_name_data.push_back(ab_protection_type.get_name_leafdata());
    if (is_unused_removal_timer_running.is_set || is_set(is_unused_removal_timer_running.operation)) leaf_name_data.push_back(is_unused_removal_timer_running.get_name_leafdata());
    if (is_using_srlg.is_set || is_set(is_using_srlg.operation)) leaf_name_data.push_back(is_using_srlg.get_name_leafdata());
    if (protected_address.is_set || is_set(protected_address.operation)) leaf_name_data.push_back(protected_address.get_name_leafdata());
    if (protected_ls_ps.is_set || is_set(protected_ls_ps.operation)) leaf_name_data.push_back(protected_ls_ps.get_name_leafdata());
    if (protected_s2_ls.is_set || is_set(protected_s2_ls.operation)) leaf_name_data.push_back(protected_s2_ls.get_name_leafdata());
    if (sharing_families.is_set || is_set(sharing_families.operation)) leaf_name_data.push_back(sharing_families.get_name_leafdata());
    if (srlg_prot_type.is_set || is_set(srlg_prot_type.operation)) leaf_name_data.push_back(srlg_prot_type.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.operation)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (unused_removal_remaining_time.is_set || is_set(unused_removal_remaining_time.operation)) leaf_name_data.push_back(unused_removal_remaining_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iep")
    {
        for(auto const & c : iep)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep>();
        c->parent = this;
        iep.push_back(c);
        return c;
    }

    if(child_yang_name == "weighted-srlg-info")
    {
        if(weighted_srlg_info == nullptr)
        {
            weighted_srlg_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo>();
        }
        return weighted_srlg_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iep)
    {
        children[c->get_segment_path()] = c;
    }

    if(weighted_srlg_info != nullptr)
    {
        children["weighted-srlg-info"] = weighted_srlg_info;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ab-protected-interface")
    {
        ab_protected_interface = value;
    }
    if(value_path == "ab-protection-type")
    {
        ab_protection_type = value;
    }
    if(value_path == "is-unused-removal-timer-running")
    {
        is_unused_removal_timer_running = value;
    }
    if(value_path == "is-using-srlg")
    {
        is_using_srlg = value;
    }
    if(value_path == "protected-address")
    {
        protected_address = value;
    }
    if(value_path == "protected-ls-ps")
    {
        protected_ls_ps = value;
    }
    if(value_path == "protected-s2-ls")
    {
        protected_s2_ls = value;
    }
    if(value_path == "sharing-families")
    {
        sharing_families = value;
    }
    if(value_path == "srlg-prot-type")
    {
        srlg_prot_type = value;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
    }
    if(value_path == "unused-removal-remaining-time")
    {
        unused_removal_remaining_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgInfo()
{
    yang_name = "weighted-srlg-info"; yang_parent_name = "auto-backup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::~WeightedSrlgInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::has_data() const
{
    for (std::size_t index=0; index<protected_interface_srlg.size(); index++)
    {
        if(protected_interface_srlg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<weighted_srlg_hop.size(); index++)
    {
        if(weighted_srlg_hop[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::has_operation() const
{
    for (std::size_t index=0; index<protected_interface_srlg.size(); index++)
    {
        if(protected_interface_srlg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<weighted_srlg_hop.size(); index++)
    {
        if(weighted_srlg_hop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighted-srlg-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WeightedSrlgInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-interface-srlg")
    {
        for(auto const & c : protected_interface_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg>();
        c->parent = this;
        protected_interface_srlg.push_back(c);
        return c;
    }

    if(child_yang_name == "weighted-srlg-hop")
    {
        for(auto const & c : weighted_srlg_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop>();
        c->parent = this;
        weighted_srlg_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protected_interface_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : weighted_srlg_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::ProtectedInterfaceSrlg()
    :
    admin_weight{YType::uint32, "admin-weight"},
    srlg{YType::uint32, "srlg"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "protected-interface-srlg"; yang_parent_name = "weighted-srlg-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::~ProtectedInterfaceSrlg()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_data() const
{
    return admin_weight.is_set
	|| srlg.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_weight.operation)
	|| is_set(srlg.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface-srlg";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectedInterfaceSrlg' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (srlg.is_set || is_set(srlg.operation)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "srlg")
    {
        srlg = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::WeightedSrlgHop()
    :
    aggregate_admin_weight{YType::uint64, "aggregate-admin-weight"},
    common_srlg{YType::uint32, "common-srlg"},
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{
    yang_name = "weighted-srlg-hop"; yang_parent_name = "weighted-srlg-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::~WeightedSrlgHop()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_data() const
{
    for (auto const & leaf : common_srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aggregate_admin_weight.is_set
	|| from_address.is_set
	|| to_address.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_operation() const
{
    for (auto const & leaf : common_srlg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(aggregate_admin_weight.operation)
	|| is_set(common_srlg.operation)
	|| is_set(from_address.operation)
	|| is_set(to_address.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighted-srlg-hop";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WeightedSrlgHop' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_admin_weight.is_set || is_set(aggregate_admin_weight.operation)) leaf_name_data.push_back(aggregate_admin_weight.get_name_leafdata());
    if (from_address.is_set || is_set(from_address.operation)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.operation)) leaf_name_data.push_back(to_address.get_name_leafdata());

    auto common_srlg_name_datas = common_srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), common_srlg_name_datas.begin(), common_srlg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregate-admin-weight")
    {
        aggregate_admin_weight = value;
    }
    if(value_path == "common-srlg")
    {
        common_srlg.append(value);
    }
    if(value_path == "from-address")
    {
        from_address = value;
    }
    if(value_path == "to-address")
    {
        to_address = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::Iep()
    :
    path_option_id{YType::uint32, "path-option-id"}
{
    yang_name = "iep"; yang_parent_name = "auto-backup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::~Iep()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::has_data() const
{
    for (std::size_t index=0; index<iep_hop.size(); index++)
    {
        if(iep_hop[index]->has_data())
            return true;
    }
    return path_option_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::has_operation() const
{
    for (std::size_t index=0; index<iep_hop.size(); index++)
    {
        if(iep_hop[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(path_option_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iep";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Iep' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_option_id.is_set || is_set(path_option_id.operation)) leaf_name_data.push_back(path_option_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iep-hop")
    {
        for(auto const & c : iep_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop>();
        c->parent = this;
        iep_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iep_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-option-id")
    {
        path_option_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::IepHop()
    :
    hop_index{YType::uint32, "hop-index"},
    iep_hop_address{YType::str, "iep-hop-address"},
    iep_hop_type{YType::enumeration, "iep-hop-type"}
{
    yang_name = "iep-hop"; yang_parent_name = "iep";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::~IepHop()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::has_data() const
{
    return hop_index.is_set
	|| iep_hop_address.is_set
	|| iep_hop_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::has_operation() const
{
    return is_set(operation)
	|| is_set(hop_index.operation)
	|| is_set(iep_hop_address.operation)
	|| is_set(iep_hop_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iep-hop";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IepHop' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.operation)) leaf_name_data.push_back(hop_index.get_name_leafdata());
    if (iep_hop_address.is_set || is_set(iep_hop_address.operation)) leaf_name_data.push_back(iep_hop_address.get_name_leafdata());
    if (iep_hop_type.is_set || is_set(iep_hop_type.operation)) leaf_name_data.push_back(iep_hop_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
    }
    if(value_path == "iep-hop-address")
    {
        iep_hop_address = value;
    }
    if(value_path == "iep-hop-type")
    {
        iep_hop_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::AutoMesh()
    :
    is_tunnel_unused_timer_running{YType::boolean, "is-tunnel-unused-timer-running"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    mesh_group_type{YType::enumeration, "mesh-group-type"},
    remaining_unused_time{YType::uint32, "remaining-unused-time"},
    tunnel_destination_list_name{YType::str, "tunnel-destination-list-name"}
{
    yang_name = "auto-mesh"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::~AutoMesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::has_data() const
{
    return is_tunnel_unused_timer_running.is_set
	|| mesh_group_id.is_set
	|| mesh_group_type.is_set
	|| remaining_unused_time.is_set
	|| tunnel_destination_list_name.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::has_operation() const
{
    return is_set(operation)
	|| is_set(is_tunnel_unused_timer_running.operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(mesh_group_type.operation)
	|| is_set(remaining_unused_time.operation)
	|| is_set(tunnel_destination_list_name.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoMesh' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_tunnel_unused_timer_running.is_set || is_set(is_tunnel_unused_timer_running.operation)) leaf_name_data.push_back(is_tunnel_unused_timer_running.get_name_leafdata());
    if (mesh_group_id.is_set || is_set(mesh_group_id.operation)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (mesh_group_type.is_set || is_set(mesh_group_type.operation)) leaf_name_data.push_back(mesh_group_type.get_name_leafdata());
    if (remaining_unused_time.is_set || is_set(remaining_unused_time.operation)) leaf_name_data.push_back(remaining_unused_time.get_name_leafdata());
    if (tunnel_destination_list_name.is_set || is_set(tunnel_destination_list_name.operation)) leaf_name_data.push_back(tunnel_destination_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-tunnel-unused-timer-running")
    {
        is_tunnel_unused_timer_running = value;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
    }
    if(value_path == "mesh-group-type")
    {
        mesh_group_type = value;
    }
    if(value_path == "remaining-unused-time")
    {
        remaining_unused_time = value;
    }
    if(value_path == "tunnel-destination-list-name")
    {
        tunnel_destination_list_name = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::AutoPcc()
    :
    creator_address{YType::str, "creator-address"},
    creator_id{YType::str, "creator-id"},
    has_creator_id{YType::boolean, "has-creator-id"},
    operationally_up{YType::boolean, "operationally-up"},
    owner_address{YType::str, "owner-address"},
    plspid{YType::uint32, "plspid"},
    symbolic_name{YType::str, "symbolic-name"}
{
    yang_name = "auto-pcc"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::~AutoPcc()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::has_data() const
{
    return creator_address.is_set
	|| creator_id.is_set
	|| has_creator_id.is_set
	|| operationally_up.is_set
	|| owner_address.is_set
	|| plspid.is_set
	|| symbolic_name.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::has_operation() const
{
    return is_set(operation)
	|| is_set(creator_address.operation)
	|| is_set(creator_id.operation)
	|| is_set(has_creator_id.operation)
	|| is_set(operationally_up.operation)
	|| is_set(owner_address.operation)
	|| is_set(plspid.operation)
	|| is_set(symbolic_name.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-pcc";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoPcc' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creator_address.is_set || is_set(creator_address.operation)) leaf_name_data.push_back(creator_address.get_name_leafdata());
    if (creator_id.is_set || is_set(creator_id.operation)) leaf_name_data.push_back(creator_id.get_name_leafdata());
    if (has_creator_id.is_set || is_set(has_creator_id.operation)) leaf_name_data.push_back(has_creator_id.get_name_leafdata());
    if (operationally_up.is_set || is_set(operationally_up.operation)) leaf_name_data.push_back(operationally_up.get_name_leafdata());
    if (owner_address.is_set || is_set(owner_address.operation)) leaf_name_data.push_back(owner_address.get_name_leafdata());
    if (plspid.is_set || is_set(plspid.operation)) leaf_name_data.push_back(plspid.get_name_leafdata());
    if (symbolic_name.is_set || is_set(symbolic_name.operation)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "creator-address")
    {
        creator_address = value;
    }
    if(value_path == "creator-id")
    {
        creator_id = value;
    }
    if(value_path == "has-creator-id")
    {
        has_creator_id = value;
    }
    if(value_path == "operationally-up")
    {
        operationally_up = value;
    }
    if(value_path == "owner-address")
    {
        owner_address = value;
    }
    if(value_path == "plspid")
    {
        plspid = value;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::PceDelegation()
    :
    operationally_up{YType::boolean, "operationally-up"},
    owner_address{YType::str, "owner-address"},
    plsp_id{YType::uint32, "plsp-id"},
    symbolic_name{YType::str, "symbolic-name"}
{
    yang_name = "pce-delegation"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::~PceDelegation()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::has_data() const
{
    return operationally_up.is_set
	|| owner_address.is_set
	|| plsp_id.is_set
	|| symbolic_name.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::has_operation() const
{
    return is_set(operation)
	|| is_set(operationally_up.operation)
	|| is_set(owner_address.operation)
	|| is_set(plsp_id.operation)
	|| is_set(symbolic_name.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-delegation";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PceDelegation' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operationally_up.is_set || is_set(operationally_up.operation)) leaf_name_data.push_back(operationally_up.get_name_leafdata());
    if (owner_address.is_set || is_set(owner_address.operation)) leaf_name_data.push_back(owner_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.operation)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (symbolic_name.is_set || is_set(symbolic_name.operation)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operationally-up")
    {
        operationally_up = value;
    }
    if(value_path == "owner-address")
    {
        owner_address = value;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemption()
    :
    preemption_pending_resolution{YType::enumeration, "preemption-pending-resolution"},
    status{YType::enumeration, "status"},
    time_in_preemption_pending{YType::uint16, "time-in-preemption-pending"}
    	,
    soft_preemption_counters(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters>())
{
    soft_preemption_counters->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::~SoftPreemption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::has_data() const
{
    for (std::size_t index=0; index<soft_preemption_path_error.size(); index++)
    {
        if(soft_preemption_path_error[index]->has_data())
            return true;
    }
    return preemption_pending_resolution.is_set
	|| status.is_set
	|| time_in_preemption_pending.is_set
	|| (soft_preemption_counters !=  nullptr && soft_preemption_counters->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption_path_error.size(); index++)
    {
        if(soft_preemption_path_error[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(preemption_pending_resolution.operation)
	|| is_set(status.operation)
	|| is_set(time_in_preemption_pending.operation)
	|| (soft_preemption_counters !=  nullptr && soft_preemption_counters->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftPreemption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preemption_pending_resolution.is_set || is_set(preemption_pending_resolution.operation)) leaf_name_data.push_back(preemption_pending_resolution.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (time_in_preemption_pending.is_set || is_set(time_in_preemption_pending.operation)) leaf_name_data.push_back(time_in_preemption_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "soft-preemption-counters")
    {
        if(soft_preemption_counters == nullptr)
        {
            soft_preemption_counters = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters>();
        }
        return soft_preemption_counters;
    }

    if(child_yang_name == "soft-preemption-path-error")
    {
        for(auto const & c : soft_preemption_path_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError>();
        c->parent = this;
        soft_preemption_path_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(soft_preemption_counters != nullptr)
    {
        children["soft-preemption-counters"] = soft_preemption_counters;
    }

    for (auto const & c : soft_preemption_path_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preemption-pending-resolution")
    {
        preemption_pending_resolution = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "time-in-preemption-pending")
    {
        time_in_preemption_pending = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::SoftPreemptionCounters()
    :
    frr_triggered_ls_ps{YType::uint32, "frr-triggered-ls-ps"},
    path_protection_switchover_ls_ps{YType::uint32, "path-protection-switchover-ls-ps"},
    reopt_completed_ls_ps{YType::uint32, "reopt-completed-ls-ps"},
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    time_in_preemption_pending_avg{YType::uint16, "time-in-preemption-pending-avg"},
    time_in_preemption_pending_max{YType::uint16, "time-in-preemption-pending-max"},
    time_in_preemption_pending_min{YType::uint16, "time-in-preemption-pending-min"},
    torn_down_ls_ps{YType::uint32, "torn-down-ls-ps"}
{
    yang_name = "soft-preemption-counters"; yang_parent_name = "soft-preemption";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::~SoftPreemptionCounters()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::has_data() const
{
    return frr_triggered_ls_ps.is_set
	|| path_protection_switchover_ls_ps.is_set
	|| reopt_completed_ls_ps.is_set
	|| soft_preemption_events.is_set
	|| time_in_preemption_pending_avg.is_set
	|| time_in_preemption_pending_max.is_set
	|| time_in_preemption_pending_min.is_set
	|| torn_down_ls_ps.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_triggered_ls_ps.operation)
	|| is_set(path_protection_switchover_ls_ps.operation)
	|| is_set(reopt_completed_ls_ps.operation)
	|| is_set(soft_preemption_events.operation)
	|| is_set(time_in_preemption_pending_avg.operation)
	|| is_set(time_in_preemption_pending_max.operation)
	|| is_set(time_in_preemption_pending_min.operation)
	|| is_set(torn_down_ls_ps.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-counters";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftPreemptionCounters' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_triggered_ls_ps.is_set || is_set(frr_triggered_ls_ps.operation)) leaf_name_data.push_back(frr_triggered_ls_ps.get_name_leafdata());
    if (path_protection_switchover_ls_ps.is_set || is_set(path_protection_switchover_ls_ps.operation)) leaf_name_data.push_back(path_protection_switchover_ls_ps.get_name_leafdata());
    if (reopt_completed_ls_ps.is_set || is_set(reopt_completed_ls_ps.operation)) leaf_name_data.push_back(reopt_completed_ls_ps.get_name_leafdata());
    if (soft_preemption_events.is_set || is_set(soft_preemption_events.operation)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (time_in_preemption_pending_avg.is_set || is_set(time_in_preemption_pending_avg.operation)) leaf_name_data.push_back(time_in_preemption_pending_avg.get_name_leafdata());
    if (time_in_preemption_pending_max.is_set || is_set(time_in_preemption_pending_max.operation)) leaf_name_data.push_back(time_in_preemption_pending_max.get_name_leafdata());
    if (time_in_preemption_pending_min.is_set || is_set(time_in_preemption_pending_min.operation)) leaf_name_data.push_back(time_in_preemption_pending_min.get_name_leafdata());
    if (torn_down_ls_ps.is_set || is_set(torn_down_ls_ps.operation)) leaf_name_data.push_back(torn_down_ls_ps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-triggered-ls-ps")
    {
        frr_triggered_ls_ps = value;
    }
    if(value_path == "path-protection-switchover-ls-ps")
    {
        path_protection_switchover_ls_ps = value;
    }
    if(value_path == "reopt-completed-ls-ps")
    {
        reopt_completed_ls_ps = value;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
    }
    if(value_path == "time-in-preemption-pending-avg")
    {
        time_in_preemption_pending_avg = value;
    }
    if(value_path == "time-in-preemption-pending-max")
    {
        time_in_preemption_pending_max = value;
    }
    if(value_path == "time-in-preemption-pending-min")
    {
        time_in_preemption_pending_min = value;
    }
    if(value_path == "torn-down-ls-ps")
    {
        torn_down_ls_ps = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::SoftPreemptionPathError()
    :
    preempting_link_address{YType::str, "preempting-link-address"},
    timestamp{YType::uint32, "timestamp"}
{
    yang_name = "soft-preemption-path-error"; yang_parent_name = "soft-preemption";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::~SoftPreemptionPathError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::has_data() const
{
    return preempting_link_address.is_set
	|| timestamp.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::has_operation() const
{
    return is_set(operation)
	|| is_set(preempting_link_address.operation)
	|| is_set(timestamp.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-path-error";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftPreemptionPathError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempting_link_address.is_set || is_set(preempting_link_address.operation)) leaf_name_data.push_back(preempting_link_address.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preempting-link-address")
    {
        preempting_link_address = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::WdmUnitunnel()
    :
    controlled_interface{YType::str, "controlled-interface"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    label_origin{YType::enumeration, "label-origin"},
    local_optical_router_id{YType::str, "local-optical-router-id"},
    lsp_id{YType::uint16, "lsp-id"},
    remote_optical_router_id{YType::str, "remote-optical-router-id"},
    source_address{YType::str, "source-address"},
    srlg_discovery{YType::boolean, "srlg-discovery"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_role{YType::enumeration, "tunnel-role"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "wdm-unitunnel"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::~WdmUnitunnel()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::has_data() const
{
    return controlled_interface.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| label_origin.is_set
	|| local_optical_router_id.is_set
	|| lsp_id.is_set
	|| remote_optical_router_id.is_set
	|| source_address.is_set
	|| srlg_discovery.is_set
	|| tunnel_id.is_set
	|| tunnel_role.is_set
	|| tunnel_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(controlled_interface.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(label_origin.operation)
	|| is_set(local_optical_router_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(remote_optical_router_id.operation)
	|| is_set(source_address.operation)
	|| is_set(srlg_discovery.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_role.operation)
	|| is_set(tunnel_state.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm-unitunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WdmUnitunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controlled_interface.is_set || is_set(controlled_interface.operation)) leaf_name_data.push_back(controlled_interface.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (label_origin.is_set || is_set(label_origin.operation)) leaf_name_data.push_back(label_origin.get_name_leafdata());
    if (local_optical_router_id.is_set || is_set(local_optical_router_id.operation)) leaf_name_data.push_back(local_optical_router_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (remote_optical_router_id.is_set || is_set(remote_optical_router_id.operation)) leaf_name_data.push_back(remote_optical_router_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (srlg_discovery.is_set || is_set(srlg_discovery.operation)) leaf_name_data.push_back(srlg_discovery.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_role.is_set || is_set(tunnel_role.operation)) leaf_name_data.push_back(tunnel_role.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controlled-interface")
    {
        controlled_interface = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "label-origin")
    {
        label_origin = value;
    }
    if(value_path == "local-optical-router-id")
    {
        local_optical_router_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "remote-optical-router-id")
    {
        remote_optical_router_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "srlg-discovery")
    {
        srlg_discovery = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-role")
    {
        tunnel_role = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::TransportTunnelInfo()
    :
    status_homepath_working{YType::boolean, "status-homepath-working"}
    	,
    egress_static_uni(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni>())
	,otn(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn>())
	,static_uni(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni>())
{
    egress_static_uni->parent = this;

    otn->parent = this;

    static_uni->parent = this;

    yang_name = "transport-tunnel-info"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::~TransportTunnelInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::has_data() const
{
    for (std::size_t index=0; index<diversity_info.size(); index++)
    {
        if(diversity_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<homepath_ero.size(); index++)
    {
        if(homepath_ero[index]->has_data())
            return true;
    }
    return status_homepath_working.is_set
	|| (egress_static_uni !=  nullptr && egress_static_uni->has_data())
	|| (otn !=  nullptr && otn->has_data())
	|| (static_uni !=  nullptr && static_uni->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::has_operation() const
{
    for (std::size_t index=0; index<diversity_info.size(); index++)
    {
        if(diversity_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<homepath_ero.size(); index++)
    {
        if(homepath_ero[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(status_homepath_working.operation)
	|| (egress_static_uni !=  nullptr && egress_static_uni->has_operation())
	|| (otn !=  nullptr && otn->has_operation())
	|| (static_uni !=  nullptr && static_uni->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-tunnel-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportTunnelInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status_homepath_working.is_set || is_set(status_homepath_working.operation)) leaf_name_data.push_back(status_homepath_working.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diversity-info")
    {
        for(auto const & c : diversity_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo>();
        c->parent = this;
        diversity_info.push_back(c);
        return c;
    }

    if(child_yang_name == "egress-static-uni")
    {
        if(egress_static_uni == nullptr)
        {
            egress_static_uni = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni>();
        }
        return egress_static_uni;
    }

    if(child_yang_name == "homepath-ero")
    {
        for(auto const & c : homepath_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro>();
        c->parent = this;
        homepath_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "static-uni")
    {
        if(static_uni == nullptr)
        {
            static_uni = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni>();
        }
        return static_uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diversity_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(egress_static_uni != nullptr)
    {
        children["egress-static-uni"] = egress_static_uni;
    }

    for (auto const & c : homepath_ero)
    {
        children[c->get_segment_path()] = c;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(static_uni != nullptr)
    {
        children["static-uni"] = static_uni;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status-homepath-working")
    {
        status_homepath_working = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::Otn()
    :
    bandwidth_cfg(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg>())
{
    bandwidth_cfg->parent = this;

    yang_name = "otn"; yang_parent_name = "transport-tunnel-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::~Otn()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::has_data() const
{
    return (bandwidth_cfg !=  nullptr && bandwidth_cfg->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::has_operation() const
{
    return is_set(operation)
	|| (bandwidth_cfg !=  nullptr && bandwidth_cfg->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-cfg")
    {
        if(bandwidth_cfg == nullptr)
        {
            bandwidth_cfg = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg>();
        }
        return bandwidth_cfg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_cfg != nullptr)
    {
        children["bandwidth-cfg"] = bandwidth_cfg;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::BandwidthCfg()
    :
    odu_level{YType::enumeration, "odu-level"}
    	,
    odu_flex_cbr(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr>())
	,odu_flex_gfp_f_non_res(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes>())
	,odu_flex_gfp_f_res(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes>())
{
    odu_flex_cbr->parent = this;

    odu_flex_gfp_f_non_res->parent = this;

    odu_flex_gfp_f_res->parent = this;

    yang_name = "bandwidth-cfg"; yang_parent_name = "otn";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::~BandwidthCfg()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::has_data() const
{
    return odu_level.is_set
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_data())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_data())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(odu_level.operation)
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_operation())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_operation())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-cfg";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthCfg' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odu_level.is_set || is_set(odu_level.operation)) leaf_name_data.push_back(odu_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-flex-cbr")
    {
        if(odu_flex_cbr == nullptr)
        {
            odu_flex_cbr = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr>();
        }
        return odu_flex_cbr;
    }

    if(child_yang_name == "odu-flex-gfp-f-non-res")
    {
        if(odu_flex_gfp_f_non_res == nullptr)
        {
            odu_flex_gfp_f_non_res = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes>();
        }
        return odu_flex_gfp_f_non_res;
    }

    if(child_yang_name == "odu-flex-gfp-f-res")
    {
        if(odu_flex_gfp_f_res == nullptr)
        {
            odu_flex_gfp_f_res = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes>();
        }
        return odu_flex_gfp_f_res;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_flex_cbr != nullptr)
    {
        children["odu-flex-cbr"] = odu_flex_cbr;
    }

    if(odu_flex_gfp_f_non_res != nullptr)
    {
        children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
    }

    if(odu_flex_gfp_f_res != nullptr)
    {
        children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "odu-level")
    {
        odu_level = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::OduFlexCbr()
    :
    bit_rate{YType::uint32, "bit-rate"},
    tolerance{YType::uint16, "tolerance"}
{
    yang_name = "odu-flex-cbr"; yang_parent_name = "bandwidth-cfg";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::~OduFlexCbr()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_data() const
{
    return bit_rate.is_set
	|| tolerance.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(tolerance.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-cbr";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduFlexCbr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (tolerance.is_set || is_set(tolerance.operation)) leaf_name_data.push_back(tolerance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "tolerance")
    {
        tolerance = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::OduFlexGfpFRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{
    yang_name = "odu-flex-gfp-f-res"; yang_parent_name = "bandwidth-cfg";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::~OduFlexGfpFRes()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_data() const
{
    return bit_rate.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-res";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduFlexGfpFRes' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::OduFlexGfpFNonRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{
    yang_name = "odu-flex-gfp-f-non-res"; yang_parent_name = "bandwidth-cfg";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::~OduFlexGfpFNonRes()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_data() const
{
    return bit_rate.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-non-res";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduFlexGfpFNonRes' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::StaticUni()
    :
    client_if_handle{YType::str, "client-if-handle"},
    client_odu_if_handle{YType::str, "client-odu-if-handle"},
    client_odu_name{YType::str, "client-odu-name"},
    client_port{YType::str, "client-port"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    is_connected{YType::boolean, "is-connected"},
    local_termination{YType::enumeration, "local-termination"},
    static_uni_type{YType::enumeration, "static-uni-type"},
    term_client_if_handle{YType::str, "term-client-if-handle"},
    term_client_port{YType::str, "term-client-port"},
    uptime{YType::uint32, "uptime"}
{
    yang_name = "static-uni"; yang_parent_name = "transport-tunnel-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::~StaticUni()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::has_data() const
{
    return client_if_handle.is_set
	|| client_odu_if_handle.is_set
	|| client_odu_name.is_set
	|| client_port.is_set
	|| cross_connect_id.is_set
	|| is_connected.is_set
	|| local_termination.is_set
	|| static_uni_type.is_set
	|| term_client_if_handle.is_set
	|| term_client_port.is_set
	|| uptime.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::has_operation() const
{
    return is_set(operation)
	|| is_set(client_if_handle.operation)
	|| is_set(client_odu_if_handle.operation)
	|| is_set(client_odu_name.operation)
	|| is_set(client_port.operation)
	|| is_set(cross_connect_id.operation)
	|| is_set(is_connected.operation)
	|| is_set(local_termination.operation)
	|| is_set(static_uni_type.operation)
	|| is_set(term_client_if_handle.operation)
	|| is_set(term_client_port.operation)
	|| is_set(uptime.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-uni";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticUni' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_if_handle.is_set || is_set(client_if_handle.operation)) leaf_name_data.push_back(client_if_handle.get_name_leafdata());
    if (client_odu_if_handle.is_set || is_set(client_odu_if_handle.operation)) leaf_name_data.push_back(client_odu_if_handle.get_name_leafdata());
    if (client_odu_name.is_set || is_set(client_odu_name.operation)) leaf_name_data.push_back(client_odu_name.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.operation)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.operation)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (local_termination.is_set || is_set(local_termination.operation)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (static_uni_type.is_set || is_set(static_uni_type.operation)) leaf_name_data.push_back(static_uni_type.get_name_leafdata());
    if (term_client_if_handle.is_set || is_set(term_client_if_handle.operation)) leaf_name_data.push_back(term_client_if_handle.get_name_leafdata());
    if (term_client_port.is_set || is_set(term_client_port.operation)) leaf_name_data.push_back(term_client_port.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-if-handle")
    {
        client_if_handle = value;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle = value;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name = value;
    }
    if(value_path == "client-port")
    {
        client_port = value;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "local-termination")
    {
        local_termination = value;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type = value;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle = value;
    }
    if(value_path == "term-client-port")
    {
        term_client_port = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressStaticUni()
    :
    local_termination{YType::enumeration, "local-termination"},
    remote_uni_type{YType::enumeration, "remote-uni-type"}
    	,
    egress_port(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort>())
	,term_egress_port(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort>())
{
    egress_port->parent = this;

    term_egress_port->parent = this;

    yang_name = "egress-static-uni"; yang_parent_name = "transport-tunnel-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::~EgressStaticUni()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::has_data() const
{
    return local_termination.is_set
	|| remote_uni_type.is_set
	|| (egress_port !=  nullptr && egress_port->has_data())
	|| (term_egress_port !=  nullptr && term_egress_port->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::has_operation() const
{
    return is_set(operation)
	|| is_set(local_termination.operation)
	|| is_set(remote_uni_type.operation)
	|| (egress_port !=  nullptr && egress_port->has_operation())
	|| (term_egress_port !=  nullptr && term_egress_port->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-static-uni";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EgressStaticUni' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_termination.is_set || is_set(local_termination.operation)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (remote_uni_type.is_set || is_set(remote_uni_type.operation)) leaf_name_data.push_back(remote_uni_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-port")
    {
        if(egress_port == nullptr)
        {
            egress_port = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort>();
        }
        return egress_port;
    }

    if(child_yang_name == "term-egress-port")
    {
        if(term_egress_port == nullptr)
        {
            term_egress_port = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort>();
        }
        return term_egress_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress_port != nullptr)
    {
        children["egress-port"] = egress_port;
    }

    if(term_egress_port != nullptr)
    {
        children["term-egress-port"] = term_egress_port;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-termination")
    {
        local_termination = value;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::EgressPort()
    :
    te_addr(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "egress-port"; yang_parent_name = "egress-static-uni";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::~EgressPort()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::has_operation() const
{
    return is_set(operation)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-port";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EgressPort' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::TeAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    type{YType::enumeration, "type"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "egress-port";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::~TeAddr()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_data() const
{
    return ipv4_address.is_set
	|| type.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(type.operation)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeAddr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    interface_index{YType::uint32, "interface-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return interface_index.is_set
	|| router_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_index.operation)
	|| is_set(router_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4UnnumberedAddress' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.operation)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TermEgressPort()
    :
    te_addr(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "term-egress-port"; yang_parent_name = "egress-static-uni";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::~TermEgressPort()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_operation() const
{
    return is_set(operation)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term-egress-port";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TermEgressPort' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::TeAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    type{YType::enumeration, "type"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "term-egress-port";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::~TeAddr()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_data() const
{
    return ipv4_address.is_set
	|| type.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(type.operation)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeAddr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    interface_index{YType::uint32, "interface-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return interface_index.is_set
	|| router_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_index.operation)
	|| is_set(router_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4UnnumberedAddress' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.operation)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::HomepathEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;

    unnumbered_ero_sub_object->parent = this;

    yang_name = "homepath-ero"; yang_parent_name = "transport-tunnel-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::~HomepathEro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "homepath-ero";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HomepathEro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.operation)) leaf_name_data.push_back(ero_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "homepath-ero";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4EroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.operation)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "homepath-ero";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedEroSubObject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.operation)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.operation)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::DiversityInfo()
    :
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "diversity-info"; yang_parent_name = "transport-tunnel-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::~DiversityInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::has_data() const
{
    return tunnel_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diversity-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiversityInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::BfdInfo()
    :
    bfd_session_up{YType::boolean, "bfd-session-up"},
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    maximum_session_up_interval{YType::uint32, "maximum-session-up-interval"},
    minimum_session_up_interval{YType::uint32, "minimum-session-up-interval"},
    session_up_time{YType::uint32, "session-up-time"}
    	,
    event_counters(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters>())
{
    event_counters->parent = this;

    yang_name = "bfd-info"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::~BfdInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::has_data() const
{
    for (std::size_t index=0; index<dampening_info.size(); index++)
    {
        if(dampening_info[index]->has_data())
            return true;
    }
    return bfd_session_up.is_set
	|| failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| maximum_session_up_interval.is_set
	|| minimum_session_up_interval.is_set
	|| session_up_time.is_set
	|| (event_counters !=  nullptr && event_counters->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::has_operation() const
{
    for (std::size_t index=0; index<dampening_info.size(); index++)
    {
        if(dampening_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bfd_session_up.operation)
	|| is_set(failure_diagnostic_code.operation)
	|| is_set(failure_reason.operation)
	|| is_set(maximum_session_up_interval.operation)
	|| is_set(minimum_session_up_interval.operation)
	|| is_set(session_up_time.operation)
	|| (event_counters !=  nullptr && event_counters->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_up.is_set || is_set(bfd_session_up.operation)) leaf_name_data.push_back(bfd_session_up.get_name_leafdata());
    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.operation)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.operation)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (maximum_session_up_interval.is_set || is_set(maximum_session_up_interval.operation)) leaf_name_data.push_back(maximum_session_up_interval.get_name_leafdata());
    if (minimum_session_up_interval.is_set || is_set(minimum_session_up_interval.operation)) leaf_name_data.push_back(minimum_session_up_interval.get_name_leafdata());
    if (session_up_time.is_set || is_set(session_up_time.operation)) leaf_name_data.push_back(session_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening-info")
    {
        for(auto const & c : dampening_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo>();
        c->parent = this;
        dampening_info.push_back(c);
        return c;
    }

    if(child_yang_name == "event-counters")
    {
        if(event_counters == nullptr)
        {
            event_counters = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters>();
        }
        return event_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dampening_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(event_counters != nullptr)
    {
        children["event-counters"] = event_counters;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up = value;
    }
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval = value;
    }
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval = value;
    }
    if(value_path == "session-up-time")
    {
        session_up_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::EventCounters()
    :
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_create_events{YType::uint32, "session-create-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"},
    session_up_events{YType::uint32, "session-up-events"}
{
    yang_name = "event-counters"; yang_parent_name = "bfd-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::~EventCounters()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::has_data() const
{
    return session_admin_down_events.is_set
	|| session_create_events.is_set
	|| session_create_timeout_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set
	|| session_up_events.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(session_admin_down_events.operation)
	|| is_set(session_create_events.operation)
	|| is_set(session_create_timeout_events.operation)
	|| is_set(session_creation_failed_events.operation)
	|| is_set(session_down_events.operation)
	|| is_set(session_gracefully_delete_events.operation)
	|| is_set(session_non_gracefully_delete_events.operation)
	|| is_set(session_replay_events.operation)
	|| is_set(session_up_events.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-counters";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventCounters' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.operation)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.operation)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.operation)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.operation)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.operation)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.operation)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.operation)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.operation)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.operation)) leaf_name_data.push_back(session_up_events.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::DampeningInfo()
    :
    backoff_count{YType::uint32, "backoff-count"},
    hold_down_time{YType::uint32, "hold-down-time"},
    option_index{YType::uint32, "option-index"},
    remained_time{YType::uint32, "remained-time"}
{
    yang_name = "dampening-info"; yang_parent_name = "bfd-info";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::~DampeningInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::has_data() const
{
    return backoff_count.is_set
	|| hold_down_time.is_set
	|| option_index.is_set
	|| remained_time.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(backoff_count.operation)
	|| is_set(hold_down_time.operation)
	|| is_set(option_index.operation)
	|| is_set(remained_time.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DampeningInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_count.is_set || is_set(backoff_count.operation)) leaf_name_data.push_back(backoff_count.get_name_leafdata());
    if (hold_down_time.is_set || is_set(hold_down_time.operation)) leaf_name_data.push_back(hold_down_time.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.operation)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (remained_time.is_set || is_set(remained_time.operation)) leaf_name_data.push_back(remained_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff-count")
    {
        backoff_count = value;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time = value;
    }
    if(value_path == "option-index")
    {
        option_index = value;
    }
    if(value_path == "remained-time")
    {
        remained_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::OtnBidir()
    :
    aps(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps>())
	,restoration(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration>())
{
    aps->parent = this;

    restoration->parent = this;

    yang_name = "otn-bidir"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::~OtnBidir()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::has_data() const
{
    return (aps !=  nullptr && aps->has_data())
	|| (restoration !=  nullptr && restoration->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::has_operation() const
{
    return is_set(operation)
	|| (aps !=  nullptr && aps->has_operation())
	|| (restoration !=  nullptr && restoration->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-bidir";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnBidir' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "restoration")
    {
        if(restoration == nullptr)
        {
            restoration = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration>();
        }
        return restoration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    if(restoration != nullptr)
    {
        children["restoration"] = restoration;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::Aps()
    :
    active_lsp{YType::enumeration, "active-lsp"},
    diversity_type{YType::enumeration, "diversity-type"}
    	,
    protection_profile(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile>())
{
    protection_profile->parent = this;

    yang_name = "aps"; yang_parent_name = "otn-bidir";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::~Aps()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::has_data() const
{
    return active_lsp.is_set
	|| diversity_type.is_set
	|| (protection_profile !=  nullptr && protection_profile->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::has_operation() const
{
    return is_set(operation)
	|| is_set(active_lsp.operation)
	|| is_set(diversity_type.operation)
	|| (protection_profile !=  nullptr && protection_profile->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aps' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp.is_set || is_set(active_lsp.operation)) leaf_name_data.push_back(active_lsp.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.operation)) leaf_name_data.push_back(diversity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-profile")
    {
        if(protection_profile == nullptr)
        {
            protection_profile = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile>();
        }
        return protection_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection_profile != nullptr)
    {
        children["protection-profile"] = protection_profile;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp")
    {
        active_lsp = value;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::ProtectionProfile()
    :
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    protection_type{YType::enumeration, "protection-type"},
    restoration_style{YType::enumeration, "restoration-style"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "protection-profile"; yang_parent_name = "aps";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::~ProtectionProfile()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::has_data() const
{
    return hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| protection_mode.is_set
	|| protection_type.is_set
	|| restoration_style.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wait_to_restore_time.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_off_time.operation)
	|| is_set(path_prot_profile_type.operation)
	|| is_set(protection_mode.operation)
	|| is_set(protection_type.operation)
	|| is_set(restoration_style.operation)
	|| is_set(snc_mode.operation)
	|| is_set(tcm_id.operation)
	|| is_set(wait_to_restore_time.operation)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-profile";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectionProfile' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.operation)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.operation)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.operation)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.operation)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.operation)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.operation)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.operation)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "protection-profile";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(max_tries.operation)
	|| is_set(schedule_date.operation)
	|| is_set(schedule_frequency.operation)
	|| is_set(schedulename.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertSchedule' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.operation)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.operation)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.operation)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.operation)) leaf_name_data.push_back(schedulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
    }
    if(value_path == "schedulename")
    {
        schedulename = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::Restoration()
    :
    diverse_lsp{YType::enumeration, "diverse-lsp"},
    diversity_type{YType::enumeration, "diversity-type"},
    revert_option{YType::enumeration, "revert-option"}
{
    yang_name = "restoration"; yang_parent_name = "otn-bidir";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::~Restoration()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::has_data() const
{
    return diverse_lsp.is_set
	|| diversity_type.is_set
	|| revert_option.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::has_operation() const
{
    return is_set(operation)
	|| is_set(diverse_lsp.operation)
	|| is_set(diversity_type.operation)
	|| is_set(revert_option.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restoration";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Restoration' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diverse_lsp.is_set || is_set(diverse_lsp.operation)) leaf_name_data.push_back(diverse_lsp.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.operation)) leaf_name_data.push_back(diversity_type.get_name_leafdata());
    if (revert_option.is_set || is_set(revert_option.operation)) leaf_name_data.push_back(revert_option.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diverse-lsp")
    {
        diverse_lsp = value;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
    }
    if(value_path == "revert-option")
    {
        revert_option = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::Bidir()
    :
    reverse_bandwidth{YType::uint32, "reverse-bandwidth"},
    reverse_bandwidth_standby{YType::uint32, "reverse-bandwidth-standby"}
    	,
    reverse_ero_error_current(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent>())
	,reverse_ero_error_reopt(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt>())
	,reverse_ero_error_standby(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby>())
	,reverse_ero_error_standby_reopt(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt>())
{
    reverse_ero_error_current->parent = this;

    reverse_ero_error_reopt->parent = this;

    reverse_ero_error_standby->parent = this;

    reverse_ero_error_standby_reopt->parent = this;

    yang_name = "bidir"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::~Bidir()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::has_data() const
{
    return reverse_bandwidth.is_set
	|| reverse_bandwidth_standby.is_set
	|| (reverse_ero_error_current !=  nullptr && reverse_ero_error_current->has_data())
	|| (reverse_ero_error_reopt !=  nullptr && reverse_ero_error_reopt->has_data())
	|| (reverse_ero_error_standby !=  nullptr && reverse_ero_error_standby->has_data())
	|| (reverse_ero_error_standby_reopt !=  nullptr && reverse_ero_error_standby_reopt->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::has_operation() const
{
    return is_set(operation)
	|| is_set(reverse_bandwidth.operation)
	|| is_set(reverse_bandwidth_standby.operation)
	|| (reverse_ero_error_current !=  nullptr && reverse_ero_error_current->has_operation())
	|| (reverse_ero_error_reopt !=  nullptr && reverse_ero_error_reopt->has_operation())
	|| (reverse_ero_error_standby !=  nullptr && reverse_ero_error_standby->has_operation())
	|| (reverse_ero_error_standby_reopt !=  nullptr && reverse_ero_error_standby_reopt->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bidir' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_bandwidth.is_set || is_set(reverse_bandwidth.operation)) leaf_name_data.push_back(reverse_bandwidth.get_name_leafdata());
    if (reverse_bandwidth_standby.is_set || is_set(reverse_bandwidth_standby.operation)) leaf_name_data.push_back(reverse_bandwidth_standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-ero-error-current")
    {
        if(reverse_ero_error_current == nullptr)
        {
            reverse_ero_error_current = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent>();
        }
        return reverse_ero_error_current;
    }

    if(child_yang_name == "reverse-ero-error-reopt")
    {
        if(reverse_ero_error_reopt == nullptr)
        {
            reverse_ero_error_reopt = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt>();
        }
        return reverse_ero_error_reopt;
    }

    if(child_yang_name == "reverse-ero-error-standby")
    {
        if(reverse_ero_error_standby == nullptr)
        {
            reverse_ero_error_standby = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby>();
        }
        return reverse_ero_error_standby;
    }

    if(child_yang_name == "reverse-ero-error-standby-reopt")
    {
        if(reverse_ero_error_standby_reopt == nullptr)
        {
            reverse_ero_error_standby_reopt = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt>();
        }
        return reverse_ero_error_standby_reopt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_ero_error_current != nullptr)
    {
        children["reverse-ero-error-current"] = reverse_ero_error_current;
    }

    if(reverse_ero_error_reopt != nullptr)
    {
        children["reverse-ero-error-reopt"] = reverse_ero_error_reopt;
    }

    if(reverse_ero_error_standby != nullptr)
    {
        children["reverse-ero-error-standby"] = reverse_ero_error_standby;
    }

    if(reverse_ero_error_standby_reopt != nullptr)
    {
        children["reverse-ero-error-standby-reopt"] = reverse_ero_error_standby_reopt;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth = value;
    }
    if(value_path == "reverse-bandwidth-standby")
    {
        reverse_bandwidth_standby = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::ReverseEroErrorCurrent()
    :
    ero_reject_reason{YType::enumeration, "ero-reject-reason"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"}
{
    yang_name = "reverse-ero-error-current"; yang_parent_name = "bidir";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::~ReverseEroErrorCurrent()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return ero_reject_reason.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_reverse_link.is_set
	|| reverse_lsp_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ero_reject_reason.operation)
	|| is_set(path_option_index.operation)
	|| is_set(path_option_type.operation)
	|| is_set(path_reject_reason_affinity.operation)
	|| is_set(path_reject_reason_bw.operation)
	|| is_set(path_reject_reason_exclude_link.operation)
	|| is_set(path_reject_reason_exclude_node.operation)
	|| is_set(path_reject_reason_exclude_srlg.operation)
	|| is_set(path_reject_reason_holddown.operation)
	|| is_set(path_reject_reason_hop_limit.operation)
	|| is_set(path_reject_reason_ip_addr.operation)
	|| is_set(path_reject_reason_ixcd.operation)
	|| is_set(path_reject_reason_node_ol_head.operation)
	|| is_set(path_reject_reason_node_ol_mid.operation)
	|| is_set(path_reject_reason_node_ol_tail.operation)
	|| is_set(path_reject_reason_node_ol_unknown.operation)
	|| is_set(path_reject_reason_node_unreachable.operation)
	|| is_set(path_reject_reason_reverse_bw.operation)
	|| is_set(path_reject_reason_reverse_link.operation)
	|| is_set(reverse_lsp_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-current";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseEroErrorCurrent' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_reject_reason.is_set || is_set(ero_reject_reason.operation)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.operation)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.operation)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.operation)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.operation)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.operation)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.operation)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.operation)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.operation)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.operation)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.operation)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.operation)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.operation)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.operation)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.operation)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.operation)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
    }
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-current";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_message.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCalculationError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::ReverseEroErrorReopt()
    :
    ero_reject_reason{YType::enumeration, "ero-reject-reason"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"}
{
    yang_name = "reverse-ero-error-reopt"; yang_parent_name = "bidir";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::~ReverseEroErrorReopt()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return ero_reject_reason.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_reverse_link.is_set
	|| reverse_lsp_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ero_reject_reason.operation)
	|| is_set(path_option_index.operation)
	|| is_set(path_option_type.operation)
	|| is_set(path_reject_reason_affinity.operation)
	|| is_set(path_reject_reason_bw.operation)
	|| is_set(path_reject_reason_exclude_link.operation)
	|| is_set(path_reject_reason_exclude_node.operation)
	|| is_set(path_reject_reason_exclude_srlg.operation)
	|| is_set(path_reject_reason_holddown.operation)
	|| is_set(path_reject_reason_hop_limit.operation)
	|| is_set(path_reject_reason_ip_addr.operation)
	|| is_set(path_reject_reason_ixcd.operation)
	|| is_set(path_reject_reason_node_ol_head.operation)
	|| is_set(path_reject_reason_node_ol_mid.operation)
	|| is_set(path_reject_reason_node_ol_tail.operation)
	|| is_set(path_reject_reason_node_ol_unknown.operation)
	|| is_set(path_reject_reason_node_unreachable.operation)
	|| is_set(path_reject_reason_reverse_bw.operation)
	|| is_set(path_reject_reason_reverse_link.operation)
	|| is_set(reverse_lsp_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-reopt";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseEroErrorReopt' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_reject_reason.is_set || is_set(ero_reject_reason.operation)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.operation)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.operation)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.operation)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.operation)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.operation)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.operation)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.operation)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.operation)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.operation)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.operation)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.operation)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.operation)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.operation)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.operation)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.operation)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
    }
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-reopt";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_message.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCalculationError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::ReverseEroErrorStandby()
    :
    ero_reject_reason{YType::enumeration, "ero-reject-reason"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"}
{
    yang_name = "reverse-ero-error-standby"; yang_parent_name = "bidir";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::~ReverseEroErrorStandby()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return ero_reject_reason.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_reverse_link.is_set
	|| reverse_lsp_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ero_reject_reason.operation)
	|| is_set(path_option_index.operation)
	|| is_set(path_option_type.operation)
	|| is_set(path_reject_reason_affinity.operation)
	|| is_set(path_reject_reason_bw.operation)
	|| is_set(path_reject_reason_exclude_link.operation)
	|| is_set(path_reject_reason_exclude_node.operation)
	|| is_set(path_reject_reason_exclude_srlg.operation)
	|| is_set(path_reject_reason_holddown.operation)
	|| is_set(path_reject_reason_hop_limit.operation)
	|| is_set(path_reject_reason_ip_addr.operation)
	|| is_set(path_reject_reason_ixcd.operation)
	|| is_set(path_reject_reason_node_ol_head.operation)
	|| is_set(path_reject_reason_node_ol_mid.operation)
	|| is_set(path_reject_reason_node_ol_tail.operation)
	|| is_set(path_reject_reason_node_ol_unknown.operation)
	|| is_set(path_reject_reason_node_unreachable.operation)
	|| is_set(path_reject_reason_reverse_bw.operation)
	|| is_set(path_reject_reason_reverse_link.operation)
	|| is_set(reverse_lsp_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-standby";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseEroErrorStandby' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_reject_reason.is_set || is_set(ero_reject_reason.operation)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.operation)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.operation)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.operation)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.operation)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.operation)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.operation)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.operation)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.operation)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.operation)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.operation)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.operation)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.operation)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.operation)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.operation)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.operation)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
    }
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-standby";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_message.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCalculationError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::ReverseEroErrorStandbyReopt()
    :
    ero_reject_reason{YType::enumeration, "ero-reject-reason"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"}
{
    yang_name = "reverse-ero-error-standby-reopt"; yang_parent_name = "bidir";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::~ReverseEroErrorStandbyReopt()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return ero_reject_reason.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_reverse_link.is_set
	|| reverse_lsp_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ero_reject_reason.operation)
	|| is_set(path_option_index.operation)
	|| is_set(path_option_type.operation)
	|| is_set(path_reject_reason_affinity.operation)
	|| is_set(path_reject_reason_bw.operation)
	|| is_set(path_reject_reason_exclude_link.operation)
	|| is_set(path_reject_reason_exclude_node.operation)
	|| is_set(path_reject_reason_exclude_srlg.operation)
	|| is_set(path_reject_reason_holddown.operation)
	|| is_set(path_reject_reason_hop_limit.operation)
	|| is_set(path_reject_reason_ip_addr.operation)
	|| is_set(path_reject_reason_ixcd.operation)
	|| is_set(path_reject_reason_node_ol_head.operation)
	|| is_set(path_reject_reason_node_ol_mid.operation)
	|| is_set(path_reject_reason_node_ol_tail.operation)
	|| is_set(path_reject_reason_node_ol_unknown.operation)
	|| is_set(path_reject_reason_node_unreachable.operation)
	|| is_set(path_reject_reason_reverse_bw.operation)
	|| is_set(path_reject_reason_reverse_link.operation)
	|| is_set(reverse_lsp_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-standby-reopt";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseEroErrorStandbyReopt' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_reject_reason.is_set || is_set(ero_reject_reason.operation)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.operation)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.operation)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.operation)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.operation)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.operation)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.operation)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.operation)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.operation)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.operation)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.operation)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.operation)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.operation)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.operation)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.operation)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.operation)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.operation)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
    }
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-standby-reopt";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::~PathCalculationError()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_message.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCalculationError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "xro-attribute-set"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_attribute_set_name_crc32.operation)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroAttributeSet' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.operation)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.operation)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;

    attribute_set_autobackup->parent = this;

    attribute_set_automesh->parent = this;

    attribute_set_p2mpte->parent = this;

    attribute_set_p2p_te->parent = this;

    attribute_set_path_option->parent = this;

    attribute_set_xro->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "xro-attribute-set";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_type.operation)
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetUnion' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.operation)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_aps_pp != nullptr)
    {
        children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_autobackup != nullptr)
    {
        children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    if(attribute_set_path_option != nullptr)
    {
        children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_xro != nullptr)
    {
        children["attribute-set-xro"] = attribute_set_xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    exclude_list_name{YType::str, "exclude-list-name"},
    generation{YType::uint32, "generation"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;

    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_type.is_set
	|| configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| exclude_list_name.is_set
	|| generation.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(cost_limit.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(exclude_list_name.operation)
	|| is_set(generation.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_bfd_reverse_pat_configured.operation)
	|| is_set(is_cost_limit_configured.operation)
	|| is_set(is_exclude_list_name_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetPathOption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.operation)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.operation)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.operation)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.operation)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.operation)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    for (auto const & c : version_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdReversePath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{
    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_type.operation)
	|| is_set(generation.operation)
	|| is_set(is_default.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.operation)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;

    logging->parent = this;

    signalled_name->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| is_signalled_name_configured.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signalled_name !=  nullptr && signalled_name->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(is_signalled_name_configured.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signalled_name !=  nullptr && signalled_name->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutobackup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.operation)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : protected_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(operation)
	|| is_set(is_mp_addresses.operation)
	|| is_set(name.operation)
	|| is_set(protected_interface_type.operation)
	|| is_set(source_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalledName' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mp_addresses.is_set || is_set(is_mp_addresses.operation)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.operation)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.operation)) leaf_name_data.push_back(source_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
    }
    if(value_path == "source-type")
    {
        source_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_interface.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectedInterface' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.operation)) leaf_name_data.push_back(protected_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    bandwidth{YType::uint32, "bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    forward_class{YType::uint32, "forward-class"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    load_share{YType::uint32, "load-share"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;

    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| bandwidth.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| forward_class.is_set
	|| frr_bandwidth_protection.is_set
	|| frr_node_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_interface_bw_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| load_share.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| soft_preemption_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(auto_bandwidth_collect.operation)
	|| is_set(auto_route_announce.operation)
	|| is_set(bandwidth.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(forward_class.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(frr_node_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_interface_bw_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(load_share.operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preemption_configured.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutomesh' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.operation)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.operation)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.operation)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.operation)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.operation)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());

    auto mesh_group_id_name_datas = mesh_group_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mesh_group_id_name_datas.begin(), mesh_group_id_name_datas.end());
    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.append(value);
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(operation)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.operation)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;

    ipv4_subobject->parent = this;

    ipv6_subobject->parent = this;

    lsp_subobject->parent = this;

    srlg_subobject->parent = this;

    unnumbered_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(exclusion_type.operation)
	|| is_set(srlg_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.operation)) leaf_name_data.push_back(srlg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_node_exception.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(ignore_lsp_id.operation)
	|| is_set(penultimate_node_exception.operation)
	|| is_set(processing_node_exception.operation)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.operation)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.operation)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.operation)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.operation)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_priority_configured.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2Mpte' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
        }
        return affinity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    protection_type{YType::enumeration, "protection-type"},
    restoration_style{YType::enumeration, "restoration-style"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    revert_schedule(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| protection_mode.is_set
	|| protection_type.is_set
	|| restoration_style.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wait_to_restore_time.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_off_time.operation)
	|| is_set(path_prot_profile_type.operation)
	|| is_set(protection_mode.operation)
	|| is_set(protection_type.operation)
	|| is_set(restoration_style.operation)
	|| is_set(snc_mode.operation)
	|| is_set(tcm_id.operation)
	|| is_set(wait_to_restore_time.operation)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetApsPp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.operation)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.operation)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.operation)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.operation)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.operation)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.operation)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.operation)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(max_tries.operation)
	|| is_set(schedule_date.operation)
	|| is_set(schedule_frequency.operation)
	|| is_set(schedulename.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertSchedule' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.operation)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.operation)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.operation)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.operation)) leaf_name_data.push_back(schedulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
    }
    if(value_path == "schedulename")
    {
        schedulename = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;

    logging->parent = this;

    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_affinity_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_select_configured.is_set
	|| is_path_selection_metric_configured.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| is_prepend_list_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| path_selection_segment_routing_margin.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_path_select_configured.operation)
	|| is_set(is_path_selection_metric_configured.operation)
	|| is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_relative.operation)
	|| is_set(is_path_selection_segment_routing_segment_limit_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(is_prepend_list_configured.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(path_selection_invalidation_action.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(path_selection_segment_routing_adjacency_protection.operation)
	|| is_set(path_selection_segment_routing_margin.operation)
	|| is_set(path_selection_segment_routing_segment_limit.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2PTe' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.operation)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.operation)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.operation)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.operation)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.operation)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.operation)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.operation)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
        }
        return prepend_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        children["prepend-list"] = prepend_list;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{
    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependList' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{
    yang_name = "prepend-entry"; yang_parent_name = "prepend-list";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(next_label.operation)
	|| is_set(type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.operation)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "next-label")
    {
        next_label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::TeTunnelConvergence()
    :
    binding_label_rewrite_time{YType::uint64, "binding-label-rewrite-time"},
    convergence_complete_time{YType::uint64, "convergence-complete-time"},
    frr_trigger_time{YType::uint64, "frr-trigger-time"},
    is_convergence_in_progress{YType::boolean, "is-convergence-in-progress"},
    pcalc_complete_time{YType::uint64, "pcalc-complete-time"},
    vif_creation_time{YType::uint64, "vif-creation-time"}
    	,
    convergence_lsp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp>())
{
    convergence_lsp->parent = this;

    yang_name = "te-tunnel-convergence"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::~TeTunnelConvergence()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::has_data() const
{
    return binding_label_rewrite_time.is_set
	|| convergence_complete_time.is_set
	|| frr_trigger_time.is_set
	|| is_convergence_in_progress.is_set
	|| pcalc_complete_time.is_set
	|| vif_creation_time.is_set
	|| (convergence_lsp !=  nullptr && convergence_lsp->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label_rewrite_time.operation)
	|| is_set(convergence_complete_time.operation)
	|| is_set(frr_trigger_time.operation)
	|| is_set(is_convergence_in_progress.operation)
	|| is_set(pcalc_complete_time.operation)
	|| is_set(vif_creation_time.operation)
	|| (convergence_lsp !=  nullptr && convergence_lsp->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel-convergence";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeTunnelConvergence' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label_rewrite_time.is_set || is_set(binding_label_rewrite_time.operation)) leaf_name_data.push_back(binding_label_rewrite_time.get_name_leafdata());
    if (convergence_complete_time.is_set || is_set(convergence_complete_time.operation)) leaf_name_data.push_back(convergence_complete_time.get_name_leafdata());
    if (frr_trigger_time.is_set || is_set(frr_trigger_time.operation)) leaf_name_data.push_back(frr_trigger_time.get_name_leafdata());
    if (is_convergence_in_progress.is_set || is_set(is_convergence_in_progress.operation)) leaf_name_data.push_back(is_convergence_in_progress.get_name_leafdata());
    if (pcalc_complete_time.is_set || is_set(pcalc_complete_time.operation)) leaf_name_data.push_back(pcalc_complete_time.get_name_leafdata());
    if (vif_creation_time.is_set || is_set(vif_creation_time.operation)) leaf_name_data.push_back(vif_creation_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-lsp")
    {
        if(convergence_lsp == nullptr)
        {
            convergence_lsp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp>();
        }
        return convergence_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(convergence_lsp != nullptr)
    {
        children["convergence-lsp"] = convergence_lsp;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "binding-label-rewrite-time")
    {
        binding_label_rewrite_time = value;
    }
    if(value_path == "convergence-complete-time")
    {
        convergence_complete_time = value;
    }
    if(value_path == "frr-trigger-time")
    {
        frr_trigger_time = value;
    }
    if(value_path == "is-convergence-in-progress")
    {
        is_convergence_in_progress = value;
    }
    if(value_path == "pcalc-complete-time")
    {
        pcalc_complete_time = value;
    }
    if(value_path == "vif-creation-time")
    {
        vif_creation_time = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::ConvergenceLsp()
    :
    creation_time{YType::uint64, "creation-time"},
    label_rewrite{YType::uint64, "label-rewrite"},
    path_in{YType::uint64, "path-in"},
    path_out{YType::uint64, "path-out"},
    resv_in{YType::uint64, "resv-in"},
    resv_out{YType::uint64, "resv-out"},
    tunnel_rewrite{YType::uint64, "tunnel-rewrite"}
{
    yang_name = "convergence-lsp"; yang_parent_name = "te-tunnel-convergence";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::~ConvergenceLsp()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::has_data() const
{
    return creation_time.is_set
	|| label_rewrite.is_set
	|| path_in.is_set
	|| path_out.is_set
	|| resv_in.is_set
	|| resv_out.is_set
	|| tunnel_rewrite.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(creation_time.operation)
	|| is_set(label_rewrite.operation)
	|| is_set(path_in.operation)
	|| is_set(path_out.operation)
	|| is_set(resv_in.operation)
	|| is_set(resv_out.operation)
	|| is_set(tunnel_rewrite.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-lsp";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConvergenceLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creation_time.is_set || is_set(creation_time.operation)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (label_rewrite.is_set || is_set(label_rewrite.operation)) leaf_name_data.push_back(label_rewrite.get_name_leafdata());
    if (path_in.is_set || is_set(path_in.operation)) leaf_name_data.push_back(path_in.get_name_leafdata());
    if (path_out.is_set || is_set(path_out.operation)) leaf_name_data.push_back(path_out.get_name_leafdata());
    if (resv_in.is_set || is_set(resv_in.operation)) leaf_name_data.push_back(resv_in.get_name_leafdata());
    if (resv_out.is_set || is_set(resv_out.operation)) leaf_name_data.push_back(resv_out.get_name_leafdata());
    if (tunnel_rewrite.is_set || is_set(tunnel_rewrite.operation)) leaf_name_data.push_back(tunnel_rewrite.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "creation-time")
    {
        creation_time = value;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite = value;
    }
    if(value_path == "path-in")
    {
        path_in = value;
    }
    if(value_path == "path-out")
    {
        path_out = value;
    }
    if(value_path == "resv-in")
    {
        resv_in = value;
    }
    if(value_path == "resv-out")
    {
        resv_out = value;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::FlexInfo()
    :
    fault_ais{YType::boolean, "fault-ais"},
    fault_in_label{YType::uint32, "fault-in-label"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_time{YType::uint32, "fault-time"},
    is_lockout{YType::boolean, "is-lockout"},
    lockout_lsp_id{YType::uint16, "lockout-lsp-id"},
    lockout_timestamp{YType::uint32, "lockout-timestamp"},
    origination{YType::enumeration, "origination"}
{
    yang_name = "flex-info"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::~FlexInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::has_data() const
{
    return fault_ais.is_set
	|| fault_in_label.is_set
	|| fault_ldi.is_set
	|| fault_ldi_lockout.is_set
	|| fault_lkr.is_set
	|| fault_time.is_set
	|| is_lockout.is_set
	|| lockout_lsp_id.is_set
	|| lockout_timestamp.is_set
	|| origination.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fault_ais.operation)
	|| is_set(fault_in_label.operation)
	|| is_set(fault_ldi.operation)
	|| is_set(fault_ldi_lockout.operation)
	|| is_set(fault_lkr.operation)
	|| is_set(fault_time.operation)
	|| is_set(is_lockout.operation)
	|| is_set(lockout_lsp_id.operation)
	|| is_set(lockout_timestamp.operation)
	|| is_set(origination.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fault_ais.is_set || is_set(fault_ais.operation)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_in_label.is_set || is_set(fault_in_label.operation)) leaf_name_data.push_back(fault_in_label.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.operation)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.operation)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.operation)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.operation)) leaf_name_data.push_back(fault_time.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.operation)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_lsp_id.is_set || is_set(lockout_lsp_id.operation)) leaf_name_data.push_back(lockout_lsp_id.get_name_leafdata());
    if (lockout_timestamp.is_set || is_set(lockout_timestamp.operation)) leaf_name_data.push_back(lockout_timestamp.get_name_leafdata());
    if (origination.is_set || is_set(origination.operation)) leaf_name_data.push_back(origination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fault-ais")
    {
        fault_ais = value;
    }
    if(value_path == "fault-in-label")
    {
        fault_in_label = value;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
    }
    if(value_path == "lockout-lsp-id")
    {
        lockout_lsp_id = value;
    }
    if(value_path == "lockout-timestamp")
    {
        lockout_timestamp = value;
    }
    if(value_path == "origination")
    {
        origination = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::Destination()
    :
    active_path_option_index{YType::uint32, "active-path-option-index"},
    destination_address{YType::str, "destination-address"},
    destination_deletion_cause{YType::enumeration, "destination-deletion-cause"},
    destination_deletion_sub_cause{YType::enumeration, "destination-deletion-sub-cause"},
    destination_deletion_timestamp{YType::uint32, "destination-deletion-timestamp"},
    destination_state{YType::enumeration, "destination-state"},
    is_inter_area{YType::boolean, "is-inter-area"},
    path_change_time{YType::uint32, "path-change-time"},
    path_option_exhausted{YType::boolean, "path-option-exhausted"},
    s2l_exist{YType::boolean, "s2l-exist"},
    total_uptime{YType::uint32, "total-uptime"},
    uptime{YType::uint32, "uptime"}
    	,
    inter_area_reoptimization(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization>())
{
    inter_area_reoptimization->parent = this;

    yang_name = "destination"; yang_parent_name = "tunnel-head";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::~Destination()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_option_entry.size(); index++)
    {
        if(path_option_entry[index]->has_data())
            return true;
    }
    return active_path_option_index.is_set
	|| destination_address.is_set
	|| destination_deletion_cause.is_set
	|| destination_deletion_sub_cause.is_set
	|| destination_deletion_timestamp.is_set
	|| destination_state.is_set
	|| is_inter_area.is_set
	|| path_change_time.is_set
	|| path_option_exhausted.is_set
	|| s2l_exist.is_set
	|| total_uptime.is_set
	|| uptime.is_set
	|| (inter_area_reoptimization !=  nullptr && inter_area_reoptimization->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_option_entry.size(); index++)
    {
        if(path_option_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_path_option_index.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_deletion_cause.operation)
	|| is_set(destination_deletion_sub_cause.operation)
	|| is_set(destination_deletion_timestamp.operation)
	|| is_set(destination_state.operation)
	|| is_set(is_inter_area.operation)
	|| is_set(path_change_time.operation)
	|| is_set(path_option_exhausted.operation)
	|| is_set(s2l_exist.operation)
	|| is_set(total_uptime.operation)
	|| is_set(uptime.operation)
	|| (inter_area_reoptimization !=  nullptr && inter_area_reoptimization->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_path_option_index.is_set || is_set(active_path_option_index.operation)) leaf_name_data.push_back(active_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_deletion_cause.is_set || is_set(destination_deletion_cause.operation)) leaf_name_data.push_back(destination_deletion_cause.get_name_leafdata());
    if (destination_deletion_sub_cause.is_set || is_set(destination_deletion_sub_cause.operation)) leaf_name_data.push_back(destination_deletion_sub_cause.get_name_leafdata());
    if (destination_deletion_timestamp.is_set || is_set(destination_deletion_timestamp.operation)) leaf_name_data.push_back(destination_deletion_timestamp.get_name_leafdata());
    if (destination_state.is_set || is_set(destination_state.operation)) leaf_name_data.push_back(destination_state.get_name_leafdata());
    if (is_inter_area.is_set || is_set(is_inter_area.operation)) leaf_name_data.push_back(is_inter_area.get_name_leafdata());
    if (path_change_time.is_set || is_set(path_change_time.operation)) leaf_name_data.push_back(path_change_time.get_name_leafdata());
    if (path_option_exhausted.is_set || is_set(path_option_exhausted.operation)) leaf_name_data.push_back(path_option_exhausted.get_name_leafdata());
    if (s2l_exist.is_set || is_set(s2l_exist.operation)) leaf_name_data.push_back(s2l_exist.get_name_leafdata());
    if (total_uptime.is_set || is_set(total_uptime.operation)) leaf_name_data.push_back(total_uptime.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inter-area-reoptimization")
    {
        if(inter_area_reoptimization == nullptr)
        {
            inter_area_reoptimization = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization>();
        }
        return inter_area_reoptimization;
    }

    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    if(child_yang_name == "path-option-entry")
    {
        for(auto const & c : path_option_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry>();
        c->parent = this;
        path_option_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inter_area_reoptimization != nullptr)
    {
        children["inter-area-reoptimization"] = inter_area_reoptimization;
    }

    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_option_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-path-option-index")
    {
        active_path_option_index = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-deletion-cause")
    {
        destination_deletion_cause = value;
    }
    if(value_path == "destination-deletion-sub-cause")
    {
        destination_deletion_sub_cause = value;
    }
    if(value_path == "destination-deletion-timestamp")
    {
        destination_deletion_timestamp = value;
    }
    if(value_path == "destination-state")
    {
        destination_state = value;
    }
    if(value_path == "is-inter-area")
    {
        is_inter_area = value;
    }
    if(value_path == "path-change-time")
    {
        path_change_time = value;
    }
    if(value_path == "path-option-exhausted")
    {
        path_option_exhausted = value;
    }
    if(value_path == "s2l-exist")
    {
        s2l_exist = value;
    }
    if(value_path == "total-uptime")
    {
        total_uptime = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::InterAreaReoptimization()
    :
    preferred_path_error_node{YType::str, "preferred-path-error-node"},
    preferred_tree_error_node{YType::str, "preferred-tree-error-node"},
    received_preferred_path_errors{YType::uint16, "received-preferred-path-errors"},
    received_preferred_tree_errors{YType::uint16, "received-preferred-tree-errors"},
    sent_path_queries{YType::uint16, "sent-path-queries"},
    time_since_last_preferred_path_error{YType::uint32, "time-since-last-preferred-path-error"},
    time_since_last_preferred_tree_error{YType::uint32, "time-since-last-preferred-tree-error"},
    time_since_last_query_sent{YType::uint32, "time-since-last-query-sent"}
{
    yang_name = "inter-area-reoptimization"; yang_parent_name = "destination";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::~InterAreaReoptimization()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::has_data() const
{
    return preferred_path_error_node.is_set
	|| preferred_tree_error_node.is_set
	|| received_preferred_path_errors.is_set
	|| received_preferred_tree_errors.is_set
	|| sent_path_queries.is_set
	|| time_since_last_preferred_path_error.is_set
	|| time_since_last_preferred_tree_error.is_set
	|| time_since_last_query_sent.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::has_operation() const
{
    return is_set(operation)
	|| is_set(preferred_path_error_node.operation)
	|| is_set(preferred_tree_error_node.operation)
	|| is_set(received_preferred_path_errors.operation)
	|| is_set(received_preferred_tree_errors.operation)
	|| is_set(sent_path_queries.operation)
	|| is_set(time_since_last_preferred_path_error.operation)
	|| is_set(time_since_last_preferred_tree_error.operation)
	|| is_set(time_since_last_query_sent.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-reoptimization";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaReoptimization' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preferred_path_error_node.is_set || is_set(preferred_path_error_node.operation)) leaf_name_data.push_back(preferred_path_error_node.get_name_leafdata());
    if (preferred_tree_error_node.is_set || is_set(preferred_tree_error_node.operation)) leaf_name_data.push_back(preferred_tree_error_node.get_name_leafdata());
    if (received_preferred_path_errors.is_set || is_set(received_preferred_path_errors.operation)) leaf_name_data.push_back(received_preferred_path_errors.get_name_leafdata());
    if (received_preferred_tree_errors.is_set || is_set(received_preferred_tree_errors.operation)) leaf_name_data.push_back(received_preferred_tree_errors.get_name_leafdata());
    if (sent_path_queries.is_set || is_set(sent_path_queries.operation)) leaf_name_data.push_back(sent_path_queries.get_name_leafdata());
    if (time_since_last_preferred_path_error.is_set || is_set(time_since_last_preferred_path_error.operation)) leaf_name_data.push_back(time_since_last_preferred_path_error.get_name_leafdata());
    if (time_since_last_preferred_tree_error.is_set || is_set(time_since_last_preferred_tree_error.operation)) leaf_name_data.push_back(time_since_last_preferred_tree_error.get_name_leafdata());
    if (time_since_last_query_sent.is_set || is_set(time_since_last_query_sent.operation)) leaf_name_data.push_back(time_since_last_query_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preferred-path-error-node")
    {
        preferred_path_error_node = value;
    }
    if(value_path == "preferred-tree-error-node")
    {
        preferred_tree_error_node = value;
    }
    if(value_path == "received-preferred-path-errors")
    {
        received_preferred_path_errors = value;
    }
    if(value_path == "received-preferred-tree-errors")
    {
        received_preferred_tree_errors = value;
    }
    if(value_path == "sent-path-queries")
    {
        sent_path_queries = value;
    }
    if(value_path == "time-since-last-preferred-path-error")
    {
        time_since_last_preferred_path_error = value;
    }
    if(value_path == "time-since-last-preferred-tree-error")
    {
        time_since_last_preferred_tree_error = value;
    }
    if(value_path == "time-since-last-query-sent")
    {
        time_since_last_query_sent = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::PathOptionEntry()
    :
    attribute_set_found{YType::boolean, "attribute-set-found"},
    explicit_path_id{YType::uint16, "explicit-path-id"},
    explicit_path_name{YType::str, "explicit-path-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    has_xro_attribute_set{YType::boolean, "has-xro-attribute-set"},
    holddown_duration{YType::uint16, "holddown-duration"},
    is_disabled{YType::boolean, "is-disabled"},
    is_helddown{YType::boolean, "is-helddown"},
    is_lockdown{YType::boolean, "is-lockdown"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    is_strict_explicit_path{YType::boolean, "is-strict-explicit-path"},
    is_verbatim{YType::boolean, "is-verbatim"},
    option_index{YType::uint32, "option-index"},
    option_index_is_valid{YType::boolean, "option-index-is-valid"},
    path_option_area_id{YType::str, "path-option-area-id"},
    path_option_name{YType::str, "path-option-name"},
    path_option_type{YType::enumeration, "path-option-type"},
    pce_address{YType::str, "pce-address"},
    protected_by_path_option_index{YType::uint32, "protected-by-path-option-index"},
    restored_from_path_option_index{YType::uint32, "restored-from-path-option-index"},
    xro_attribute_set_found{YType::boolean, "xro-attribute-set-found"}
    	,
    attribute_set(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet>())
	,xro_attribute_set(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::XroAttributeSet>())
{
    attribute_set->parent = this;

    xro_attribute_set->parent = this;

    yang_name = "path-option-entry"; yang_parent_name = "destination";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::~PathOptionEntry()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_data())
            return true;
    }
    return attribute_set_found.is_set
	|| explicit_path_id.is_set
	|| explicit_path_name.is_set
	|| has_attribute_set.is_set
	|| has_xro_attribute_set.is_set
	|| holddown_duration.is_set
	|| is_disabled.is_set
	|| is_helddown.is_set
	|| is_lockdown.is_set
	|| is_segment_routing.is_set
	|| is_strict_explicit_path.is_set
	|| is_verbatim.is_set
	|| option_index.is_set
	|| option_index_is_valid.is_set
	|| path_option_area_id.is_set
	|| path_option_name.is_set
	|| path_option_type.is_set
	|| pce_address.is_set
	|| protected_by_path_option_index.is_set
	|| restored_from_path_option_index.is_set
	|| xro_attribute_set_found.is_set
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(attribute_set_found.operation)
	|| is_set(explicit_path_id.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(has_attribute_set.operation)
	|| is_set(has_xro_attribute_set.operation)
	|| is_set(holddown_duration.operation)
	|| is_set(is_disabled.operation)
	|| is_set(is_helddown.operation)
	|| is_set(is_lockdown.operation)
	|| is_set(is_segment_routing.operation)
	|| is_set(is_strict_explicit_path.operation)
	|| is_set(is_verbatim.operation)
	|| is_set(option_index.operation)
	|| is_set(option_index_is_valid.operation)
	|| is_set(path_option_area_id.operation)
	|| is_set(path_option_name.operation)
	|| is_set(path_option_type.operation)
	|| is_set(pce_address.operation)
	|| is_set(protected_by_path_option_index.operation)
	|| is_set(restored_from_path_option_index.operation)
	|| is_set(xro_attribute_set_found.operation)
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-entry";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptionEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_found.is_set || is_set(attribute_set_found.operation)) leaf_name_data.push_back(attribute_set_found.get_name_leafdata());
    if (explicit_path_id.is_set || is_set(explicit_path_id.operation)) leaf_name_data.push_back(explicit_path_id.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.operation)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (has_xro_attribute_set.is_set || is_set(has_xro_attribute_set.operation)) leaf_name_data.push_back(has_xro_attribute_set.get_name_leafdata());
    if (holddown_duration.is_set || is_set(holddown_duration.operation)) leaf_name_data.push_back(holddown_duration.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.operation)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (is_helddown.is_set || is_set(is_helddown.operation)) leaf_name_data.push_back(is_helddown.get_name_leafdata());
    if (is_lockdown.is_set || is_set(is_lockdown.operation)) leaf_name_data.push_back(is_lockdown.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.operation)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (is_strict_explicit_path.is_set || is_set(is_strict_explicit_path.operation)) leaf_name_data.push_back(is_strict_explicit_path.get_name_leafdata());
    if (is_verbatim.is_set || is_set(is_verbatim.operation)) leaf_name_data.push_back(is_verbatim.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.operation)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (option_index_is_valid.is_set || is_set(option_index_is_valid.operation)) leaf_name_data.push_back(option_index_is_valid.get_name_leafdata());
    if (path_option_area_id.is_set || is_set(path_option_area_id.operation)) leaf_name_data.push_back(path_option_area_id.get_name_leafdata());
    if (path_option_name.is_set || is_set(path_option_name.operation)) leaf_name_data.push_back(path_option_name.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.operation)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.operation)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (protected_by_path_option_index.is_set || is_set(protected_by_path_option_index.operation)) leaf_name_data.push_back(protected_by_path_option_index.get_name_leafdata());
    if (restored_from_path_option_index.is_set || is_set(restored_from_path_option_index.operation)) leaf_name_data.push_back(restored_from_path_option_index.get_name_leafdata());
    if (xro_attribute_set_found.is_set || is_set(xro_attribute_set_found.operation)) leaf_name_data.push_back(xro_attribute_set_found.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    if(child_yang_name == "remerge-error")
    {
        for(auto const & c : remerge_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::RemergeError>();
        c->parent = this;
        remerge_error.push_back(c);
        return c;
    }

    if(child_yang_name == "signalling-error")
    {
        for(auto const & c : signalling_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::SignallingError>();
        c->parent = this;
        signalling_error.push_back(c);
        return c;
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set == nullptr)
        {
            xro_attribute_set = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::XroAttributeSet>();
        }
        return xro_attribute_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set != nullptr)
    {
        children["attribute-set"] = attribute_set;
    }

    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remerge_error)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : signalling_error)
    {
        children[c->get_segment_path()] = c;
    }

    if(xro_attribute_set != nullptr)
    {
        children["xro-attribute-set"] = xro_attribute_set;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-found")
    {
        attribute_set_found = value;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set = value;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration = value;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
    }
    if(value_path == "is-helddown")
    {
        is_helddown = value;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown = value;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path = value;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim = value;
    }
    if(value_path == "option-index")
    {
        option_index = value;
    }
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid = value;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id = value;
    }
    if(value_path == "path-option-name")
    {
        path_option_name = value;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index = value;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index = value;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "path-option-entry";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::~AttributeSet()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_attribute_set_name_crc32.operation)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSet' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.operation)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.operation)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;

    attribute_set_autobackup->parent = this;

    attribute_set_automesh->parent = this;

    attribute_set_p2mpte->parent = this;

    attribute_set_p2p_te->parent = this;

    attribute_set_path_option->parent = this;

    attribute_set_xro->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_type.operation)
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetUnion' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.operation)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_aps_pp != nullptr)
    {
        children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_autobackup != nullptr)
    {
        children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    if(attribute_set_path_option != nullptr)
    {
        children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_xro != nullptr)
    {
        children["attribute-set-xro"] = attribute_set_xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    exclude_list_name{YType::str, "exclude-list-name"},
    generation{YType::uint32, "generation"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;

    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_type.is_set
	|| configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| exclude_list_name.is_set
	|| generation.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(cost_limit.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(exclude_list_name.operation)
	|| is_set(generation.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_bfd_reverse_pat_configured.operation)
	|| is_set(is_cost_limit_configured.operation)
	|| is_set(is_exclude_list_name_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetPathOption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.operation)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.operation)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.operation)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.operation)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.operation)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    for (auto const & c : version_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdReversePath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{
    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_type.operation)
	|| is_set(generation.operation)
	|| is_set(is_default.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.operation)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;

    logging->parent = this;

    signalled_name->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| is_signalled_name_configured.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signalled_name !=  nullptr && signalled_name->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(is_signalled_name_configured.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signalled_name !=  nullptr && signalled_name->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutobackup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.operation)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : protected_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(operation)
	|| is_set(is_mp_addresses.operation)
	|| is_set(name.operation)
	|| is_set(protected_interface_type.operation)
	|| is_set(source_type.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalledName' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mp_addresses.is_set || is_set(is_mp_addresses.operation)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.operation)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.operation)) leaf_name_data.push_back(source_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
    }
    if(value_path == "source-type")
    {
        source_type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_interface.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectedInterface' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.operation)) leaf_name_data.push_back(protected_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    bandwidth{YType::uint32, "bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    forward_class{YType::uint32, "forward-class"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    load_share{YType::uint32, "load-share"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;

    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| bandwidth.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| forward_class.is_set
	|| frr_bandwidth_protection.is_set
	|| frr_node_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_interface_bw_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| load_share.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| soft_preemption_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(auto_bandwidth_collect.operation)
	|| is_set(auto_route_announce.operation)
	|| is_set(bandwidth.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(forward_class.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(frr_node_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_interface_bw_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(load_share.operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preemption_configured.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutomesh' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.operation)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.operation)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.operation)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.operation)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.operation)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());

    auto mesh_group_id_name_datas = mesh_group_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mesh_group_id_name_datas.begin(), mesh_group_id_name_datas.end());
    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.append(value);
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-automesh";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(operation)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.operation)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;

    ipv4_subobject->parent = this;

    ipv6_subobject->parent = this;

    lsp_subobject->parent = this;

    srlg_subobject->parent = this;

    unnumbered_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}


}
}

